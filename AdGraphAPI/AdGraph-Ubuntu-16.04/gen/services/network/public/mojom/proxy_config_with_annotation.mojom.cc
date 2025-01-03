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

#include "services/network/public/mojom/proxy_config_with_annotation.mojom.h"

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

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared-message-ids.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace network {
namespace mojom {
ProxyConfigWithAnnotation::ProxyConfigWithAnnotation()
    : value(),
      traffic_annotation() {}

ProxyConfigWithAnnotation::ProxyConfigWithAnnotation(
    const net::ProxyConfig& value_in,
    const net::MutableNetworkTrafficAnnotationTag& traffic_annotation_in)
    : value(std::move(value_in)),
      traffic_annotation(std::move(traffic_annotation_in)) {}

ProxyConfigWithAnnotation::~ProxyConfigWithAnnotation() = default;

bool ProxyConfigWithAnnotation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProxyConfigClient::Name_[] = "network.mojom.ProxyConfigClient";

ProxyConfigClientProxy::ProxyConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class ProxyConfigClientProxy_OnProxyConfigUpdated_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProxyConfigClientProxy_OnProxyConfigUpdated_Message(
      uint32_t message_flags
      , const net::ProxyConfigWithAnnotation& param_proxy_config
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProxyConfigClient_OnProxyConfigUpdated_Name,
          message_flags)
      , param_proxy_config_(std::move(param_proxy_config)){}
  ~ProxyConfigClientProxy_OnProxyConfigUpdated_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const net::ProxyConfigWithAnnotation& param_proxy_config) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProxyConfigClientProxy_OnProxyConfigUpdated_Message>(
          kFlags
          , std::move(param_proxy_config)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProxyConfigClient_OnProxyConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->proxy_config)::BaseType::BufferWriter
      proxy_config_writer;
  mojo::internal::Serialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
      param_proxy_config, buffer, &proxy_config_writer, &serialization_context);
  params->proxy_config.Set(
      proxy_config_writer.is_null() ? nullptr : proxy_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_config in ProxyConfigClient.OnProxyConfigUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(ProxyConfigClient* impl) {
    impl->OnProxyConfigUpdated(
        std::move(param_proxy_config_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->proxy_config)::BaseType::BufferWriter
      proxy_config_writer;
  mojo::internal::Serialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
      param_proxy_config_, buffer, &proxy_config_writer, serialization_context);
  params->proxy_config.Set(
      proxy_config_writer.is_null() ? nullptr : proxy_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_config in ProxyConfigClient.OnProxyConfigUpdated request");
  }
  net::ProxyConfigWithAnnotation param_proxy_config_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigClientProxy_OnProxyConfigUpdated_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProxyConfigClientProxy_OnProxyConfigUpdated_Message::kMessageTag = {};

void ProxyConfigClientProxy::OnProxyConfigUpdated(
    const net::ProxyConfigWithAnnotation& in_proxy_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::ProxyConfigClient::OnProxyConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProxyConfigClientProxy_OnProxyConfigUpdated_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_proxy_config));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyConfigClientStubDispatch::Accept(
    ProxyConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::ProxyConfigClient::OnProxyConfigUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProxyConfigClientProxy_OnProxyConfigUpdated_Message>();
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
      internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::ProxyConfigWithAnnotation p_proxy_config{};
      ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProxyConfig(&p_proxy_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyConfigClient::OnProxyConfigUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnProxyConfigUpdated(
std::move(p_proxy_config));
      return true;
    }
  }
  return false;
}

// static
bool ProxyConfigClientStubDispatch::AcceptWithResponder(
    ProxyConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::ProxyConfigClient::OnProxyConfigUpdated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data>(
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

void ProxyConfigClientInterceptorForTesting::OnProxyConfigUpdated(const net::ProxyConfigWithAnnotation& proxy_config) {
  GetForwardingInterface()->OnProxyConfigUpdated(std::move(proxy_config));
}
ProxyConfigClientAsyncWaiter::ProxyConfigClientAsyncWaiter(
    ProxyConfigClient* proxy) : proxy_(proxy) {}

ProxyConfigClientAsyncWaiter::~ProxyConfigClientAsyncWaiter() = default;


const char ProxyConfigPollerClient::Name_[] = "network.mojom.ProxyConfigPollerClient";

ProxyConfigPollerClientProxy::ProxyConfigPollerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name,
          message_flags){}
  ~ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(ProxyConfigPollerClient* impl) {
    impl->OnLazyProxyConfigPoll();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message::kMessageTag = {};

void ProxyConfigPollerClientProxy::OnLazyProxyConfigPoll(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::ProxyConfigPollerClient::OnLazyProxyConfigPoll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyConfigPollerClientStubDispatch::Accept(
    ProxyConfigPollerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::ProxyConfigPollerClient::OnLazyProxyConfigPoll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProxyConfigPollerClientProxy_OnLazyProxyConfigPoll_Message>();
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
      internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* params =
          reinterpret_cast<internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProxyConfigPollerClient_OnLazyProxyConfigPoll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyConfigPollerClient::OnLazyProxyConfigPoll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnLazyProxyConfigPoll();
      return true;
    }
  }
  return false;
}

// static
bool ProxyConfigPollerClientStubDispatch::AcceptWithResponder(
    ProxyConfigPollerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::ProxyConfigPollerClient::OnLazyProxyConfigPoll",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyConfigPollerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyConfigPollerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data>(
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

void ProxyConfigPollerClientInterceptorForTesting::OnLazyProxyConfigPoll() {
  GetForwardingInterface()->OnLazyProxyConfigPoll();
}
ProxyConfigPollerClientAsyncWaiter::ProxyConfigPollerClientAsyncWaiter(
    ProxyConfigPollerClient* proxy) : proxy_(proxy) {}

ProxyConfigPollerClientAsyncWaiter::~ProxyConfigPollerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::ProxyConfigWithAnnotation::DataView, ::network::mojom::ProxyConfigWithAnnotationPtr>::Read(
    ::network::mojom::ProxyConfigWithAnnotation::DataView input,
    ::network::mojom::ProxyConfigWithAnnotationPtr* output) {
  bool success = true;
  ::network::mojom::ProxyConfigWithAnnotationPtr result(::network::mojom::ProxyConfigWithAnnotation::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadTrafficAnnotation(&result->traffic_annotation))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
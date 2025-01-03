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

#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"

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

#include "services/network/public/mojom/url_loader_factory.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace network {
namespace mojom {
namespace blink {
const char URLLoaderFactory::Name_[] = "network.mojom.URLLoaderFactory";

URLLoaderFactoryProxy::URLLoaderFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class URLLoaderFactoryProxy_CreateLoaderAndStart_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderFactoryProxy_CreateLoaderAndStart_Message(
      uint32_t message_flags
      , ::network::mojom::blink::URLLoaderRequest param_loader
      , int32_t param_routing_id
      , int32_t param_request_id
      , uint32_t param_options
      , ::network::mojom::blink::URLRequestPtr param_request
      , ::network::mojom::blink::URLLoaderClientPtr param_client
      , ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderFactory_CreateLoaderAndStart_Name,
          message_flags)
      , param_loader_(std::move(param_loader))
      , param_routing_id_(std::move(param_routing_id))
      , param_request_id_(std::move(param_request_id))
      , param_options_(std::move(param_options))
      , param_request_(std::move(param_request))
      , param_client_(param_client.PassInterface())
      , param_traffic_annotation_(std::move(param_traffic_annotation)){}
  ~URLLoaderFactoryProxy_CreateLoaderAndStart_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::blink::URLLoaderRequest param_loader, int32_t param_routing_id, int32_t param_request_id, uint32_t param_options, ::network::mojom::blink::URLRequestPtr param_request, ::network::mojom::blink::URLLoaderClientPtr param_client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderFactoryProxy_CreateLoaderAndStart_Message>(
          kFlags
          , std::move(param_loader)
          , std::move(param_routing_id)
          , std::move(param_request_id)
          , std::move(param_options)
          , std::move(param_request)
          , std::move(param_client)
          , std::move(param_traffic_annotation)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderFactory_CreateLoaderAndStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderRequestDataView>(
      param_loader, &params->loader, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->loader),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid loader in URLLoaderFactory.CreateLoaderAndStart request");
  params->routing_id = param_routing_id;
  params->request_id = param_request_id;
  params->options = param_options;
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestDataView>(
      param_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in URLLoaderFactory.CreateLoaderAndStart request");
  mojo::internal::Serialize<::network::mojom::URLLoaderClientPtrDataView>(
      param_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in URLLoaderFactory.CreateLoaderAndStart request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in URLLoaderFactory.CreateLoaderAndStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderFactory* impl) {
    impl->CreateLoaderAndStart(
        std::move(param_loader_),
        std::move(param_routing_id_),
        std::move(param_request_id_),
        std::move(param_options_),
        std::move(param_request_),
        ::network::mojom::blink::URLLoaderClientPtr(std::move(param_client_)),
        std::move(param_traffic_annotation_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderRequestDataView>(
      param_loader_, &params->loader, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->loader),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid loader in URLLoaderFactory.CreateLoaderAndStart request");
  params->routing_id = param_routing_id_;
  params->request_id = param_request_id_;
  params->options = param_options_;
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestDataView>(
      param_request_, buffer, &request_writer, serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in URLLoaderFactory.CreateLoaderAndStart request");
  mojo::internal::Serialize<::network::mojom::URLLoaderClientPtrDataView>(
      param_client_, &params->client, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in URLLoaderFactory.CreateLoaderAndStart request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation_, buffer, &traffic_annotation_writer, serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in URLLoaderFactory.CreateLoaderAndStart request");
  }
  ::network::mojom::blink::URLLoaderRequest param_loader_;
  int32_t param_routing_id_;
  int32_t param_request_id_;
  uint32_t param_options_;
  ::network::mojom::blink::URLRequestPtr param_request_;
  ::network::mojom::blink::URLLoaderClientPtrInfo param_client_;
  ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryProxy_CreateLoaderAndStart_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderFactoryProxy_CreateLoaderAndStart_Message::kMessageTag = {};

void URLLoaderFactoryProxy::CreateLoaderAndStart(
    ::network::mojom::blink::URLLoaderRequest in_loader, int32_t in_routing_id, int32_t in_request_id, uint32_t in_options, ::network::mojom::blink::URLRequestPtr in_request, ::network::mojom::blink::URLLoaderClientPtr in_client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderFactory::CreateLoaderAndStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderFactoryProxy_CreateLoaderAndStart_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_loader), std::move(in_routing_id), std::move(in_request_id), std::move(in_options), std::move(in_request), std::move(in_client), std::move(in_traffic_annotation));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderFactoryProxy_Clone_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderFactoryProxy_Clone_Message(
      uint32_t message_flags
      , URLLoaderFactoryRequest param_factory
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderFactory_Clone_Name,
          message_flags)
      , param_factory_(std::move(param_factory)){}
  ~URLLoaderFactoryProxy_Clone_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      URLLoaderFactoryRequest param_factory) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderFactoryProxy_Clone_Message>(
          kFlags
          , std::move(param_factory)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderFactory_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderFactory_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      param_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in URLLoaderFactory.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderFactory* impl) {
    impl->Clone(
        std::move(param_factory_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderFactory_Clone_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      param_factory_, &params->factory, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in URLLoaderFactory.Clone request");
  }
  URLLoaderFactoryRequest param_factory_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryProxy_Clone_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderFactoryProxy_Clone_Message::kMessageTag = {};

void URLLoaderFactoryProxy::Clone(
    URLLoaderFactoryRequest in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderFactory::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderFactoryProxy_Clone_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_factory));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool URLLoaderFactoryStubDispatch::Accept(
    URLLoaderFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderFactory::CreateLoaderAndStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderFactoryProxy_CreateLoaderAndStart_Message>();
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
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* params =
          reinterpret_cast<internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::URLLoaderRequest p_loader{};
      int32_t p_routing_id{};
      int32_t p_request_id{};
      uint32_t p_options{};
      ::network::mojom::blink::URLRequestPtr p_request{};
      ::network::mojom::blink::URLLoaderClientPtr p_client{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      URLLoaderFactory_CreateLoaderAndStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_loader =
          input_data_view.TakeLoader<decltype(p_loader)>();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      p_options = input_data_view.options();
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderFactory::CreateLoaderAndStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateLoaderAndStart(
std::move(p_loader), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_options), 
std::move(p_request), 
std::move(p_client), 
std::move(p_traffic_annotation));
      return true;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderFactory::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderFactoryProxy_Clone_Message>();
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
      internal::URLLoaderFactory_Clone_Params_Data* params =
          reinterpret_cast<internal::URLLoaderFactory_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoaderFactoryRequest p_factory{};
      URLLoaderFactory_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderFactory::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_factory));
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderFactoryStubDispatch::AcceptWithResponder(
    URLLoaderFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderFactory::CreateLoaderAndStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderFactory::Clone",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool URLLoaderFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderFactory_Clone_Params_Data>(
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

void URLLoaderFactoryInterceptorForTesting::CreateLoaderAndStart(::network::mojom::blink::URLLoaderRequest loader, int32_t routing_id, int32_t request_id, uint32_t options, ::network::mojom::blink::URLRequestPtr request, ::network::mojom::blink::URLLoaderClientPtr client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation) {
  GetForwardingInterface()->CreateLoaderAndStart(std::move(loader), std::move(routing_id), std::move(request_id), std::move(options), std::move(request), std::move(client), std::move(traffic_annotation));
}
void URLLoaderFactoryInterceptorForTesting::Clone(URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->Clone(std::move(factory));
}
URLLoaderFactoryAsyncWaiter::URLLoaderFactoryAsyncWaiter(
    URLLoaderFactory* proxy) : proxy_(proxy) {}

URLLoaderFactoryAsyncWaiter::~URLLoaderFactoryAsyncWaiter() = default;


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
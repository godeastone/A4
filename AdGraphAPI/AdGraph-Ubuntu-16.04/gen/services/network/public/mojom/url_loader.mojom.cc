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

#include "services/network/public/mojom/url_loader.mojom.h"

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

#include "services/network/public/mojom/url_loader.mojom-shared-message-ids.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
namespace network {
namespace mojom {
URLLoaderClientEndpoints::URLLoaderClientEndpoints()
    : url_loader(),
      url_loader_client() {}

URLLoaderClientEndpoints::URLLoaderClientEndpoints(
    URLLoaderPtrInfo url_loader_in,
    URLLoaderClientRequest url_loader_client_in)
    : url_loader(std::move(url_loader_in)),
      url_loader_client(std::move(url_loader_client_in)) {}

URLLoaderClientEndpoints::~URLLoaderClientEndpoints() = default;

bool URLLoaderClientEndpoints::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char URLLoader::Name_[] = "network.mojom.URLLoader";
constexpr uint32_t URLLoader::kClientDisconnectReason;

URLLoaderProxy::URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class URLLoaderProxy_FollowRedirect_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderProxy_FollowRedirect_Message(
      uint32_t message_flags
      , const base::Optional<net::HttpRequestHeaders>& param_modified_request_headers
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoader_FollowRedirect_Name,
          message_flags)
      , param_modified_request_headers_(std::move(param_modified_request_headers)){}
  ~URLLoaderProxy_FollowRedirect_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::Optional<net::HttpRequestHeaders>& param_modified_request_headers) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderProxy_FollowRedirect_Message>(
          kFlags
          , std::move(param_modified_request_headers)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoader_FollowRedirect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_FollowRedirect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->modified_request_headers)::BaseType::BufferWriter
      modified_request_headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      param_modified_request_headers, buffer, &modified_request_headers_writer, &serialization_context);
  params->modified_request_headers.Set(
      modified_request_headers_writer.is_null() ? nullptr : modified_request_headers_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoader* impl) {
    impl->FollowRedirect(
        std::move(param_modified_request_headers_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoader_FollowRedirect_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->modified_request_headers)::BaseType::BufferWriter
      modified_request_headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      param_modified_request_headers_, buffer, &modified_request_headers_writer, serialization_context);
  params->modified_request_headers.Set(
      modified_request_headers_writer.is_null() ? nullptr : modified_request_headers_writer.data());
  }
  base::Optional<net::HttpRequestHeaders> param_modified_request_headers_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderProxy_FollowRedirect_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderProxy_FollowRedirect_Message::kMessageTag = {};

void URLLoaderProxy::FollowRedirect(
    const base::Optional<net::HttpRequestHeaders>& in_modified_request_headers) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoader::FollowRedirect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderProxy_FollowRedirect_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_modified_request_headers));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderProxy_ProceedWithResponse_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderProxy_ProceedWithResponse_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoader_ProceedWithResponse_Name,
          message_flags){}
  ~URLLoaderProxy_ProceedWithResponse_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderProxy_ProceedWithResponse_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoader_ProceedWithResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_ProceedWithResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoader* impl) {
    impl->ProceedWithResponse();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoader_ProceedWithResponse_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(URLLoaderProxy_ProceedWithResponse_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderProxy_ProceedWithResponse_Message::kMessageTag = {};

void URLLoaderProxy::ProceedWithResponse(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoader::ProceedWithResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderProxy_ProceedWithResponse_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderProxy_SetPriority_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderProxy_SetPriority_Message(
      uint32_t message_flags
      , net::RequestPriority param_priority
      , int32_t param_intra_priority_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoader_SetPriority_Name,
          message_flags)
      , param_priority_(std::move(param_priority))
      , param_intra_priority_value_(std::move(param_intra_priority_value)){}
  ~URLLoaderProxy_SetPriority_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      net::RequestPriority param_priority, int32_t param_intra_priority_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderProxy_SetPriority_Message>(
          kFlags
          , std::move(param_priority)
          , std::move(param_intra_priority_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoader_SetPriority_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_SetPriority_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RequestPriority>(
      param_priority, &params->priority);
  params->intra_priority_value = param_intra_priority_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoader* impl) {
    impl->SetPriority(
        std::move(param_priority_),
        std::move(param_intra_priority_value_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoader_SetPriority_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RequestPriority>(
      param_priority_, &params->priority);
  params->intra_priority_value = param_intra_priority_value_;
  }
  net::RequestPriority param_priority_;
  int32_t param_intra_priority_value_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderProxy_SetPriority_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderProxy_SetPriority_Message::kMessageTag = {};

void URLLoaderProxy::SetPriority(
    net::RequestPriority in_priority, int32_t in_intra_priority_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoader::SetPriority");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderProxy_SetPriority_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_priority), std::move(in_intra_priority_value));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderProxy_PauseReadingBodyFromNet_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderProxy_PauseReadingBodyFromNet_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoader_PauseReadingBodyFromNet_Name,
          message_flags){}
  ~URLLoaderProxy_PauseReadingBodyFromNet_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderProxy_PauseReadingBodyFromNet_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoader_PauseReadingBodyFromNet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_PauseReadingBodyFromNet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoader* impl) {
    impl->PauseReadingBodyFromNet();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoader_PauseReadingBodyFromNet_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(URLLoaderProxy_PauseReadingBodyFromNet_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderProxy_PauseReadingBodyFromNet_Message::kMessageTag = {};

void URLLoaderProxy::PauseReadingBodyFromNet(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoader::PauseReadingBodyFromNet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderProxy_PauseReadingBodyFromNet_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderProxy_ResumeReadingBodyFromNet_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderProxy_ResumeReadingBodyFromNet_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoader_ResumeReadingBodyFromNet_Name,
          message_flags){}
  ~URLLoaderProxy_ResumeReadingBodyFromNet_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderProxy_ResumeReadingBodyFromNet_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoader_ResumeReadingBodyFromNet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_ResumeReadingBodyFromNet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoader* impl) {
    impl->ResumeReadingBodyFromNet();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoader_ResumeReadingBodyFromNet_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(URLLoaderProxy_ResumeReadingBodyFromNet_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderProxy_ResumeReadingBodyFromNet_Message::kMessageTag = {};

void URLLoaderProxy::ResumeReadingBodyFromNet(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoader::ResumeReadingBodyFromNet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderProxy_ResumeReadingBodyFromNet_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool URLLoaderStubDispatch::Accept(
    URLLoader* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::FollowRedirect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderProxy_FollowRedirect_Message>();
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
      internal::URLLoader_FollowRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoader_FollowRedirect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<net::HttpRequestHeaders> p_modified_request_headers{};
      URLLoader_FollowRedirect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadModifiedRequestHeaders(&p_modified_request_headers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::FollowRedirect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FollowRedirect(
std::move(p_modified_request_headers));
      return true;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::ProceedWithResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderProxy_ProceedWithResponse_Message>();
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
      internal::URLLoader_ProceedWithResponse_Params_Data* params =
          reinterpret_cast<internal::URLLoader_ProceedWithResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_ProceedWithResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::ProceedWithResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProceedWithResponse();
      return true;
    }
    case internal::kURLLoader_SetPriority_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::SetPriority",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderProxy_SetPriority_Message>();
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
      internal::URLLoader_SetPriority_Params_Data* params =
          reinterpret_cast<internal::URLLoader_SetPriority_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::RequestPriority p_priority{};
      int32_t p_intra_priority_value{};
      URLLoader_SetPriority_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPriority(&p_priority))
        success = false;
      p_intra_priority_value = input_data_view.intra_priority_value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::SetPriority deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPriority(
std::move(p_priority), 
std::move(p_intra_priority_value));
      return true;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::PauseReadingBodyFromNet",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderProxy_PauseReadingBodyFromNet_Message>();
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
      internal::URLLoader_PauseReadingBodyFromNet_Params_Data* params =
          reinterpret_cast<internal::URLLoader_PauseReadingBodyFromNet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_PauseReadingBodyFromNet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::PauseReadingBodyFromNet deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PauseReadingBodyFromNet();
      return true;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::ResumeReadingBodyFromNet",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderProxy_ResumeReadingBodyFromNet_Message>();
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
      internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* params =
          reinterpret_cast<internal::URLLoader_ResumeReadingBodyFromNet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_ResumeReadingBodyFromNet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::ResumeReadingBodyFromNet deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResumeReadingBodyFromNet();
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderStubDispatch::AcceptWithResponder(
    URLLoader* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::FollowRedirect",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::ProceedWithResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoader_SetPriority_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::SetPriority",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::PauseReadingBodyFromNet",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoader::ResumeReadingBodyFromNet",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool URLLoaderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoader RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_FollowRedirect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_ProceedWithResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_SetPriority_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_SetPriority_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_PauseReadingBodyFromNet_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_ResumeReadingBodyFromNet_Params_Data>(
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

void URLLoaderInterceptorForTesting::FollowRedirect(const base::Optional<net::HttpRequestHeaders>& modified_request_headers) {
  GetForwardingInterface()->FollowRedirect(std::move(modified_request_headers));
}
void URLLoaderInterceptorForTesting::ProceedWithResponse() {
  GetForwardingInterface()->ProceedWithResponse();
}
void URLLoaderInterceptorForTesting::SetPriority(net::RequestPriority priority, int32_t intra_priority_value) {
  GetForwardingInterface()->SetPriority(std::move(priority), std::move(intra_priority_value));
}
void URLLoaderInterceptorForTesting::PauseReadingBodyFromNet() {
  GetForwardingInterface()->PauseReadingBodyFromNet();
}
void URLLoaderInterceptorForTesting::ResumeReadingBodyFromNet() {
  GetForwardingInterface()->ResumeReadingBodyFromNet();
}
URLLoaderAsyncWaiter::URLLoaderAsyncWaiter(
    URLLoader* proxy) : proxy_(proxy) {}

URLLoaderAsyncWaiter::~URLLoaderAsyncWaiter() = default;


const char DownloadedTempFile::Name_[] = "network.mojom.DownloadedTempFile";

DownloadedTempFileProxy::DownloadedTempFileProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool DownloadedTempFileStubDispatch::Accept(
    DownloadedTempFile* impl,
    mojo::Message* message) {
  return false;
}

// static
bool DownloadedTempFileStubDispatch::AcceptWithResponder(
    DownloadedTempFile* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool DownloadedTempFileRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DownloadedTempFile RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

DownloadedTempFileAsyncWaiter::DownloadedTempFileAsyncWaiter(
    DownloadedTempFile* proxy) : proxy_(proxy) {}

DownloadedTempFileAsyncWaiter::~DownloadedTempFileAsyncWaiter() = default;


const char URLLoaderClient::Name_[] = "network.mojom.URLLoaderClient";

class URLLoaderClient_OnUploadProgress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  URLLoaderClient_OnUploadProgress_ForwardToCallback(
      URLLoaderClient::OnUploadProgressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  URLLoaderClient::OnUploadProgressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(URLLoaderClient_OnUploadProgress_ForwardToCallback);
};

URLLoaderClientProxy::URLLoaderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class URLLoaderClientProxy_OnReceiveResponse_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnReceiveResponse_Message(
      uint32_t message_flags
      , const network::ResourceResponseHead& param_head
      , DownloadedTempFilePtr param_downloaded_file
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnReceiveResponse_Name,
          message_flags)
      , param_head_(std::move(param_head))
      , param_downloaded_file_(param_downloaded_file.PassInterface()){}
  ~URLLoaderClientProxy_OnReceiveResponse_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const network::ResourceResponseHead& param_head, DownloadedTempFilePtr param_downloaded_file) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnReceiveResponse_Message>(
          kFlags
          , std::move(param_head)
          , std::move(param_downloaded_file)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      param_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveResponse request");
  mojo::internal::Serialize<::network::mojom::DownloadedTempFilePtrDataView>(
      param_downloaded_file, &params->downloaded_file, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnReceiveResponse(
        std::move(param_head_),
        DownloadedTempFilePtr(std::move(param_downloaded_file_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnReceiveResponse_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      param_head_, buffer, &head_writer, serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveResponse request");
  mojo::internal::Serialize<::network::mojom::DownloadedTempFilePtrDataView>(
      param_downloaded_file_, &params->downloaded_file, serialization_context);
  }
  network::ResourceResponseHead param_head_;
  DownloadedTempFilePtrInfo param_downloaded_file_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnReceiveResponse_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnReceiveResponse_Message::kMessageTag = {};

void URLLoaderClientProxy::OnReceiveResponse(
    const network::ResourceResponseHead& in_head, DownloadedTempFilePtr in_downloaded_file) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnReceiveResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnReceiveResponse_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_head), std::move(in_downloaded_file));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnReceiveRedirect_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnReceiveRedirect_Message(
      uint32_t message_flags
      , const net::RedirectInfo& param_redirect_info
      , const network::ResourceResponseHead& param_head
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnReceiveRedirect_Name,
          message_flags)
      , param_redirect_info_(std::move(param_redirect_info))
      , param_head_(std::move(param_head)){}
  ~URLLoaderClientProxy_OnReceiveRedirect_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const net::RedirectInfo& param_redirect_info, const network::ResourceResponseHead& param_head) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnReceiveRedirect_Message>(
          kFlags
          , std::move(param_redirect_info)
          , std::move(param_head)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveRedirect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveRedirect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->redirect_info)::BaseType::BufferWriter
      redirect_info_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestRedirectInfoDataView>(
      param_redirect_info, buffer, &redirect_info_writer, &serialization_context);
  params->redirect_info.Set(
      redirect_info_writer.is_null() ? nullptr : redirect_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->redirect_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null redirect_info in URLLoaderClient.OnReceiveRedirect request");
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      param_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveRedirect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnReceiveRedirect(
        std::move(param_redirect_info_),
        std::move(param_head_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnReceiveRedirect_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->redirect_info)::BaseType::BufferWriter
      redirect_info_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestRedirectInfoDataView>(
      param_redirect_info_, buffer, &redirect_info_writer, serialization_context);
  params->redirect_info.Set(
      redirect_info_writer.is_null() ? nullptr : redirect_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->redirect_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null redirect_info in URLLoaderClient.OnReceiveRedirect request");
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      param_head_, buffer, &head_writer, serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveRedirect request");
  }
  net::RedirectInfo param_redirect_info_;
  network::ResourceResponseHead param_head_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnReceiveRedirect_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnReceiveRedirect_Message::kMessageTag = {};

void URLLoaderClientProxy::OnReceiveRedirect(
    const net::RedirectInfo& in_redirect_info, const network::ResourceResponseHead& in_head) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnReceiveRedirect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnReceiveRedirect_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_redirect_info), std::move(in_head));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnDataDownloaded_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnDataDownloaded_Message(
      uint32_t message_flags
      , int64_t param_data_length
      , int64_t param_encoded_length
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnDataDownloaded_Name,
          message_flags)
      , param_data_length_(std::move(param_data_length))
      , param_encoded_length_(std::move(param_encoded_length)){}
  ~URLLoaderClientProxy_OnDataDownloaded_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int64_t param_data_length, int64_t param_encoded_length) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnDataDownloaded_Message>(
          kFlags
          , std::move(param_data_length)
          , std::move(param_encoded_length)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnDataDownloaded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnDataDownloaded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->data_length = param_data_length;
  params->encoded_length = param_encoded_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnDataDownloaded(
        std::move(param_data_length_),
        std::move(param_encoded_length_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnDataDownloaded_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->data_length = param_data_length_;
  params->encoded_length = param_encoded_length_;
  }
  int64_t param_data_length_;
  int64_t param_encoded_length_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnDataDownloaded_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnDataDownloaded_Message::kMessageTag = {};

void URLLoaderClientProxy::OnDataDownloaded(
    int64_t in_data_length, int64_t in_encoded_length) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnDataDownloaded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnDataDownloaded_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_data_length), std::move(in_encoded_length));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnUploadProgress_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnUploadProgress_Message(
      uint32_t message_flags
      , int64_t param_current_position
      , int64_t param_total_size
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnUploadProgress_Name,
          message_flags)
      , param_current_position_(std::move(param_current_position))
      , param_total_size_(std::move(param_total_size)){}
  ~URLLoaderClientProxy_OnUploadProgress_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int64_t param_current_position, int64_t param_total_size) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnUploadProgress_Message>(
          kFlags
          , std::move(param_current_position)
          , std::move(param_total_size)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnUploadProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnUploadProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->current_position = param_current_position;
  params->total_size = param_total_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl, URLLoaderClient::OnUploadProgressCallback callback) {
    impl->OnUploadProgress(
        std::move(param_current_position_),
        std::move(param_total_size_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnUploadProgress_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->current_position = param_current_position_;
  params->total_size = param_total_size_;
  }
  int64_t param_current_position_;
  int64_t param_total_size_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnUploadProgress_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnUploadProgress_Message::kMessageTag = {};

void URLLoaderClientProxy::OnUploadProgress(
    int64_t in_current_position, int64_t in_total_size, OnUploadProgressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnUploadProgress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnUploadProgress_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_current_position), std::move(in_total_size));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new URLLoaderClient_OnUploadProgress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class URLLoaderClientProxy_OnReceiveCachedMetadata_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnReceiveCachedMetadata_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_data
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnReceiveCachedMetadata_Name,
          message_flags)
      , param_data_(std::move(param_data)){}
  ~URLLoaderClientProxy_OnReceiveCachedMetadata_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_data) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnReceiveCachedMetadata_Message>(
          kFlags
          , std::move(param_data)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in URLLoaderClient.OnReceiveCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnReceiveCachedMetadata(
        std::move(param_data_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_data_, buffer, &data_writer, &data_validate_params,
      serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in URLLoaderClient.OnReceiveCachedMetadata request");
  }
  std::vector<uint8_t> param_data_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnReceiveCachedMetadata_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnReceiveCachedMetadata_Message::kMessageTag = {};

void URLLoaderClientProxy::OnReceiveCachedMetadata(
    const std::vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnReceiveCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnReceiveCachedMetadata_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_data));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnTransferSizeUpdated_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnTransferSizeUpdated_Message(
      uint32_t message_flags
      , int32_t param_transfer_size_diff
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnTransferSizeUpdated_Name,
          message_flags)
      , param_transfer_size_diff_(std::move(param_transfer_size_diff)){}
  ~URLLoaderClientProxy_OnTransferSizeUpdated_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_transfer_size_diff) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnTransferSizeUpdated_Message>(
          kFlags
          , std::move(param_transfer_size_diff)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnTransferSizeUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transfer_size_diff = param_transfer_size_diff;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnTransferSizeUpdated(
        std::move(param_transfer_size_diff_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->transfer_size_diff = param_transfer_size_diff_;
  }
  int32_t param_transfer_size_diff_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnTransferSizeUpdated_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnTransferSizeUpdated_Message::kMessageTag = {};

void URLLoaderClientProxy::OnTransferSizeUpdated(
    int32_t in_transfer_size_diff) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnTransferSizeUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnTransferSizeUpdated_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_transfer_size_diff));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnStartLoadingResponseBody_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnStartLoadingResponseBody_Message(
      uint32_t message_flags
      , mojo::ScopedDataPipeConsumerHandle param_body
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnStartLoadingResponseBody_Name,
          message_flags)
      , param_body_(std::move(param_body)){}
  ~URLLoaderClientProxy_OnStartLoadingResponseBody_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      mojo::ScopedDataPipeConsumerHandle param_body) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnStartLoadingResponseBody_Message>(
          kFlags
          , std::move(param_body)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnStartLoadingResponseBody_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_body, &params->body, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->body),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid body in URLLoaderClient.OnStartLoadingResponseBody request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnStartLoadingResponseBody(
        std::move(param_body_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_body_, &params->body, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->body),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid body in URLLoaderClient.OnStartLoadingResponseBody request");
  }
  mojo::ScopedDataPipeConsumerHandle param_body_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnStartLoadingResponseBody_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnStartLoadingResponseBody_Message::kMessageTag = {};

void URLLoaderClientProxy::OnStartLoadingResponseBody(
    mojo::ScopedDataPipeConsumerHandle in_body) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnStartLoadingResponseBody");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnStartLoadingResponseBody_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_body));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClientProxy_OnComplete_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClientProxy_OnComplete_Message(
      uint32_t message_flags
      , const network::URLLoaderCompletionStatus& param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnComplete_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~URLLoaderClientProxy_OnComplete_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const network::URLLoaderCompletionStatus& param_status) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClientProxy_OnComplete_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderCompletionStatusDataView>(
      param_status, buffer, &status_writer, &serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in URLLoaderClient.OnComplete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient* impl) {
    impl->OnComplete(
        std::move(param_status_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnComplete_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderCompletionStatusDataView>(
      param_status_, buffer, &status_writer, serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in URLLoaderClient.OnComplete request");
  }
  network::URLLoaderCompletionStatus param_status_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientProxy_OnComplete_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClientProxy_OnComplete_Message::kMessageTag = {};

void URLLoaderClientProxy::OnComplete(
    const network::URLLoaderCompletionStatus& in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::URLLoaderClient::OnComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = URLLoaderClientProxy_OnComplete_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_status));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClient_OnUploadProgress_ProxyToResponder {
 public:
  static URLLoaderClient::OnUploadProgressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<URLLoaderClient_OnUploadProgress_ProxyToResponder> proxy(
        new URLLoaderClient_OnUploadProgress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&URLLoaderClient_OnUploadProgress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~URLLoaderClient_OnUploadProgress_ProxyToResponder() {
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
  URLLoaderClient_OnUploadProgress_ProxyToResponder(
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
        << "URLLoaderClient::OnUploadProgressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClient_OnUploadProgress_ProxyToResponder);
};
class URLLoaderClient_OnUploadProgress_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit URLLoaderClient_OnUploadProgress_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kURLLoaderClient_OnUploadProgress_Name,
          message_flags){}
  ~URLLoaderClient_OnUploadProgress_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<URLLoaderClient_OnUploadProgress_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kURLLoaderClient_OnUploadProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(URLLoaderClient::OnUploadProgressCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClient_OnUploadProgress_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
URLLoaderClient_OnUploadProgress_Response_Message::kMessageTag = {};

bool URLLoaderClient_OnUploadProgress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::URLLoaderClient::OnUploadProgressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<URLLoaderClient_OnUploadProgress_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  URLLoaderClient_OnUploadProgress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "URLLoaderClient::OnUploadProgress response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void URLLoaderClient_OnUploadProgress_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = URLLoaderClient_OnUploadProgress_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnUploadProgressCallback",
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
bool URLLoaderClientStubDispatch::Accept(
    URLLoaderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnReceiveResponse_Message>();
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
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      network::ResourceResponseHead p_head{};
      DownloadedTempFilePtr p_downloaded_file{};
      URLLoaderClient_OnReceiveResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      p_downloaded_file =
          input_data_view.TakeDownloadedFile<decltype(p_downloaded_file)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnReceiveResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReceiveResponse(
std::move(p_head), 
std::move(p_downloaded_file));
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveRedirect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnReceiveRedirect_Message>();
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
      internal::URLLoaderClient_OnReceiveRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveRedirect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::RedirectInfo p_redirect_info{};
      network::ResourceResponseHead p_head{};
      URLLoaderClient_OnReceiveRedirect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRedirectInfo(&p_redirect_info))
        success = false;
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnReceiveRedirect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReceiveRedirect(
std::move(p_redirect_info), 
std::move(p_head));
      return true;
    }
    case internal::kURLLoaderClient_OnDataDownloaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnDataDownloaded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnDataDownloaded_Message>();
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
      internal::URLLoaderClient_OnDataDownloaded_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnDataDownloaded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_data_length{};
      int64_t p_encoded_length{};
      URLLoaderClient_OnDataDownloaded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_data_length = input_data_view.data_length();
      p_encoded_length = input_data_view.encoded_length();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnDataDownloaded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDataDownloaded(
std::move(p_data_length), 
std::move(p_encoded_length));
      return true;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnUploadProgress",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveCachedMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnReceiveCachedMetadata_Message>();
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
      internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_data{};
      URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnReceiveCachedMetadata deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReceiveCachedMetadata(
std::move(p_data));
      return true;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnTransferSizeUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnTransferSizeUpdated_Message>();
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
      internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_transfer_size_diff{};
      URLLoaderClient_OnTransferSizeUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transfer_size_diff = input_data_view.transfer_size_diff();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnTransferSizeUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTransferSizeUpdated(
std::move(p_transfer_size_diff));
      return true;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnStartLoadingResponseBody",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnStartLoadingResponseBody_Message>();
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
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_body{};
      URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView input_data_view(params, &serialization_context);
      
      p_body = input_data_view.TakeBody();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnStartLoadingResponseBody deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStartLoadingResponseBody(
std::move(p_body));
      return true;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnComplete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnComplete_Message>();
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
      internal::URLLoaderClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      network::URLLoaderCompletionStatus p_status{};
      URLLoaderClient_OnComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnComplete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnComplete(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderClientStubDispatch::AcceptWithResponder(
    URLLoaderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveRedirect",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnDataDownloaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnDataDownloaded",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnUploadProgress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            URLLoaderClientProxy_OnUploadProgress_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          URLLoaderClient::OnUploadProgressCallback callback =
              URLLoaderClient_OnUploadProgress_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::URLLoaderClient_OnUploadProgress_Params_Data* params =
          reinterpret_cast<
              internal::URLLoaderClient_OnUploadProgress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_current_position{};
      int64_t p_total_size{};
      URLLoaderClient_OnUploadProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_current_position = input_data_view.current_position();
      p_total_size = input_data_view.total_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnUploadProgress deserializer");
        return false;
      }
      URLLoaderClient::OnUploadProgressCallback callback =
          URLLoaderClient_OnUploadProgress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnUploadProgress(
std::move(p_current_position), 
std::move(p_total_size), std::move(callback));
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnReceiveCachedMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnTransferSizeUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnStartLoadingResponseBody",
               "message", message->name());
#endif
      break;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::URLLoaderClient::OnComplete",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool URLLoaderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveRedirect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnDataDownloaded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnDataDownloaded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnUploadProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnComplete_Params_Data>(
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

bool URLLoaderClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data>(
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
void URLLoaderClientInterceptorForTesting::OnReceiveResponse(const network::ResourceResponseHead& head, DownloadedTempFilePtr downloaded_file) {
  GetForwardingInterface()->OnReceiveResponse(std::move(head), std::move(downloaded_file));
}
void URLLoaderClientInterceptorForTesting::OnReceiveRedirect(const net::RedirectInfo& redirect_info, const network::ResourceResponseHead& head) {
  GetForwardingInterface()->OnReceiveRedirect(std::move(redirect_info), std::move(head));
}
void URLLoaderClientInterceptorForTesting::OnDataDownloaded(int64_t data_length, int64_t encoded_length) {
  GetForwardingInterface()->OnDataDownloaded(std::move(data_length), std::move(encoded_length));
}
void URLLoaderClientInterceptorForTesting::OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) {
  GetForwardingInterface()->OnUploadProgress(std::move(current_position), std::move(total_size), std::move(callback));
}
void URLLoaderClientInterceptorForTesting::OnReceiveCachedMetadata(const std::vector<uint8_t>& data) {
  GetForwardingInterface()->OnReceiveCachedMetadata(std::move(data));
}
void URLLoaderClientInterceptorForTesting::OnTransferSizeUpdated(int32_t transfer_size_diff) {
  GetForwardingInterface()->OnTransferSizeUpdated(std::move(transfer_size_diff));
}
void URLLoaderClientInterceptorForTesting::OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) {
  GetForwardingInterface()->OnStartLoadingResponseBody(std::move(body));
}
void URLLoaderClientInterceptorForTesting::OnComplete(const network::URLLoaderCompletionStatus& status) {
  GetForwardingInterface()->OnComplete(std::move(status));
}
URLLoaderClientAsyncWaiter::URLLoaderClientAsyncWaiter(
    URLLoaderClient* proxy) : proxy_(proxy) {}

URLLoaderClientAsyncWaiter::~URLLoaderClientAsyncWaiter() = default;

void URLLoaderClientAsyncWaiter::OnUploadProgress(
    int64_t current_position, int64_t total_size) {
  base::RunLoop loop;
  proxy_->OnUploadProgress(std::move(current_position),std::move(total_size),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::URLLoaderClientEndpoints::DataView, ::network::mojom::URLLoaderClientEndpointsPtr>::Read(
    ::network::mojom::URLLoaderClientEndpoints::DataView input,
    ::network::mojom::URLLoaderClientEndpointsPtr* output) {
  bool success = true;
  ::network::mojom::URLLoaderClientEndpointsPtr result(::network::mojom::URLLoaderClientEndpoints::New());
  
      result->url_loader =
          input.TakeUrlLoader<decltype(result->url_loader)>();
      result->url_loader_client =
          input.TakeUrlLoaderClient<decltype(result->url_loader_client)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
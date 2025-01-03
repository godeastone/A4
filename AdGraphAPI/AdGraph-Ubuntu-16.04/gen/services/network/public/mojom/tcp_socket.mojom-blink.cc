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

#include "services/network/public/mojom/tcp_socket.mojom-blink.h"

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

#include "services/network/public/mojom/tcp_socket.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace network {
namespace mojom {
namespace blink {
const char TCPConnectedSocket::Name_[] = "network.mojom.TCPConnectedSocket";

class TCPConnectedSocket_GetLocalAddress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_GetLocalAddress_ForwardToCallback(
      TCPConnectedSocket::GetLocalAddressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::GetLocalAddressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_GetLocalAddress_ForwardToCallback);
};

class TCPConnectedSocket_UpgradeToTLS_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_UpgradeToTLS_ForwardToCallback(
      TCPConnectedSocket::UpgradeToTLSCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::UpgradeToTLSCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_UpgradeToTLS_ForwardToCallback);
};

TCPConnectedSocketProxy::TCPConnectedSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class TCPConnectedSocketProxy_GetLocalAddress_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPConnectedSocketProxy_GetLocalAddress_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPConnectedSocket_GetLocalAddress_Name,
          message_flags){}
  ~TCPConnectedSocketProxy_GetLocalAddress_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPConnectedSocketProxy_GetLocalAddress_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPConnectedSocket_GetLocalAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_GetLocalAddress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPConnectedSocket* impl, TCPConnectedSocket::GetLocalAddressCallback callback) {
    impl->GetLocalAddress(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPConnectedSocket_GetLocalAddress_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocketProxy_GetLocalAddress_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPConnectedSocketProxy_GetLocalAddress_Message::kMessageTag = {};

void TCPConnectedSocketProxy::GetLocalAddress(
    GetLocalAddressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::TCPConnectedSocket::GetLocalAddress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TCPConnectedSocketProxy_GetLocalAddress_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_GetLocalAddress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPConnectedSocketProxy_UpgradeToTLS_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPConnectedSocketProxy_UpgradeToTLS_Message(
      uint32_t message_flags
      , ::network::mojom::blink::HostPortPairPtr param_host_port_pair
      , ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation
      , ::network::mojom::blink::TLSClientSocketRequest param_request
      , SocketObserverPtr param_observer
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPConnectedSocket_UpgradeToTLS_Name,
          message_flags)
      , param_host_port_pair_(std::move(param_host_port_pair))
      , param_traffic_annotation_(std::move(param_traffic_annotation))
      , param_request_(std::move(param_request))
      , param_observer_(param_observer.PassInterface()){}
  ~TCPConnectedSocketProxy_UpgradeToTLS_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::blink::HostPortPairPtr param_host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest param_request, SocketObserverPtr param_observer) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPConnectedSocketProxy_UpgradeToTLS_Message>(
          kFlags
          , std::move(param_host_port_pair)
          , std::move(param_traffic_annotation)
          , std::move(param_request)
          , std::move(param_observer)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPConnectedSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_port_pair)::BaseType::BufferWriter
      host_port_pair_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      param_host_port_pair, buffer, &host_port_pair_writer, &serialization_context);
  params->host_port_pair.Set(
      host_port_pair_writer.is_null() ? nullptr : host_port_pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_port_pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_port_pair in TCPConnectedSocket.UpgradeToTLS request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::TLSClientSocketRequestDataView>(
      param_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPConnectedSocket* impl, TCPConnectedSocket::UpgradeToTLSCallback callback) {
    impl->UpgradeToTLS(
        std::move(param_host_port_pair_),
        std::move(param_traffic_annotation_),
        std::move(param_request_),
        SocketObserverPtr(std::move(param_observer_)), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->host_port_pair)::BaseType::BufferWriter
      host_port_pair_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      param_host_port_pair_, buffer, &host_port_pair_writer, serialization_context);
  params->host_port_pair.Set(
      host_port_pair_writer.is_null() ? nullptr : host_port_pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_port_pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_port_pair in TCPConnectedSocket.UpgradeToTLS request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      param_traffic_annotation_, buffer, &traffic_annotation_writer, serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::TLSClientSocketRequestDataView>(
      param_request_, &params->request, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer_, &params->observer, serialization_context);
  }
  ::network::mojom::blink::HostPortPairPtr param_host_port_pair_;
  ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr param_traffic_annotation_;
  ::network::mojom::blink::TLSClientSocketRequest param_request_;
  SocketObserverPtrInfo param_observer_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocketProxy_UpgradeToTLS_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPConnectedSocketProxy_UpgradeToTLS_Message::kMessageTag = {};

void TCPConnectedSocketProxy::UpgradeToTLS(
    ::network::mojom::blink::HostPortPairPtr in_host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest in_request, SocketObserverPtr in_observer, UpgradeToTLSCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::TCPConnectedSocket::UpgradeToTLS");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TCPConnectedSocketProxy_UpgradeToTLS_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_host_port_pair), std::move(in_traffic_annotation), std::move(in_request), std::move(in_observer));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_UpgradeToTLS_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPConnectedSocket_GetLocalAddress_ProxyToResponder {
 public:
  static TCPConnectedSocket::GetLocalAddressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_GetLocalAddress_ProxyToResponder> proxy(
        new TCPConnectedSocket_GetLocalAddress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_GetLocalAddress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_GetLocalAddress_ProxyToResponder() {
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
  TCPConnectedSocket_GetLocalAddress_ProxyToResponder(
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
        << "TCPConnectedSocket::GetLocalAddressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_local_addr);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_GetLocalAddress_ProxyToResponder);
};
class TCPConnectedSocket_GetLocalAddress_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPConnectedSocket_GetLocalAddress_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
      , ::net::interfaces::blink::IPEndPointPtr param_local_addr
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPConnectedSocket_GetLocalAddress_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error))
      , param_local_addr_(std::move(param_local_addr)){}
  ~TCPConnectedSocket_GetLocalAddress_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error, ::net::interfaces::blink::IPEndPointPtr param_local_addr) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPConnectedSocket_GetLocalAddress_Response_Message>(
          kFlags
          , std::move(param_net_error)
          , std::move(param_local_addr)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPConnectedSocket_GetLocalAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPConnectedSocket::GetLocalAddressCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_), 
        std::move(param_local_addr_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_, buffer, &local_addr_writer, serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  }
  int32_t param_net_error_;
  ::net::interfaces::blink::IPEndPointPtr param_local_addr_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_GetLocalAddress_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPConnectedSocket_GetLocalAddress_Response_Message::kMessageTag = {};

bool TCPConnectedSocket_GetLocalAddress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::TCPConnectedSocket::GetLocalAddressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TCPConnectedSocket_GetLocalAddress_Response_Message>();
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
  internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  ::net::interfaces::blink::IPEndPointPtr p_local_addr{};
  TCPConnectedSocket_GetLocalAddress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadLocalAddr(&p_local_addr))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "TCPConnectedSocket::GetLocalAddress response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_local_addr));
  return true;
}

void TCPConnectedSocket_GetLocalAddress_ProxyToResponder::Run(
    int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_local_addr) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TCPConnectedSocket_GetLocalAddress_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error), std::move(in_local_addr));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::GetLocalAddressCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPConnectedSocket_UpgradeToTLS_ProxyToResponder {
 public:
  static TCPConnectedSocket::UpgradeToTLSCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_UpgradeToTLS_ProxyToResponder> proxy(
        new TCPConnectedSocket_UpgradeToTLS_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_UpgradeToTLS_ProxyToResponder() {
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
  TCPConnectedSocket_UpgradeToTLS_ProxyToResponder(
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
        << "TCPConnectedSocket::UpgradeToTLSCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_UpgradeToTLS_ProxyToResponder);
};
class TCPConnectedSocket_UpgradeToTLS_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPConnectedSocket_UpgradeToTLS_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
      , mojo::ScopedDataPipeConsumerHandle param_receive_stream
      , mojo::ScopedDataPipeProducerHandle param_send_stream
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPConnectedSocket_UpgradeToTLS_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error))
      , param_receive_stream_(std::move(param_receive_stream))
      , param_send_stream_(std::move(param_send_stream)){}
  ~TCPConnectedSocket_UpgradeToTLS_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error, mojo::ScopedDataPipeConsumerHandle param_receive_stream, mojo::ScopedDataPipeProducerHandle param_send_stream) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPConnectedSocket_UpgradeToTLS_Response_Message>(
          kFlags
          , std::move(param_net_error)
          , std::move(param_receive_stream)
          , std::move(param_send_stream)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPConnectedSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_send_stream, &params->send_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPConnectedSocket::UpgradeToTLSCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_), 
        std::move(param_receive_stream_), 
        std::move(param_send_stream_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_receive_stream_, &params->receive_stream, serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_send_stream_, &params->send_stream, serialization_context);
  }
  int32_t param_net_error_;
  mojo::ScopedDataPipeConsumerHandle param_receive_stream_;
  mojo::ScopedDataPipeProducerHandle param_send_stream_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_UpgradeToTLS_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPConnectedSocket_UpgradeToTLS_Response_Message::kMessageTag = {};

bool TCPConnectedSocket_UpgradeToTLS_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::TCPConnectedSocket::UpgradeToTLSCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TCPConnectedSocket_UpgradeToTLS_Response_Message>();
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
  internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "TCPConnectedSocket::UpgradeToTLS response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::Run(
    int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TCPConnectedSocket_UpgradeToTLS_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error), std::move(in_receive_stream), std::move(in_send_stream));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::UpgradeToTLSCallback",
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
bool TCPConnectedSocketStubDispatch::Accept(
    TCPConnectedSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_GetLocalAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::GetLocalAddress",
               "message", message->name());
#endif
      break;
    }
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::UpgradeToTLS",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool TCPConnectedSocketStubDispatch::AcceptWithResponder(
    TCPConnectedSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_GetLocalAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::GetLocalAddress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TCPConnectedSocketProxy_GetLocalAddress_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TCPConnectedSocket::GetLocalAddressCallback callback =
              TCPConnectedSocket_GetLocalAddress_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TCPConnectedSocket_GetLocalAddress_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_GetLocalAddress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TCPConnectedSocket_GetLocalAddress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TCPConnectedSocket::GetLocalAddress deserializer");
        return false;
      }
      TCPConnectedSocket::GetLocalAddressCallback callback =
          TCPConnectedSocket_GetLocalAddress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetLocalAddress(std::move(callback));
      return true;
    }
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPConnectedSocket::UpgradeToTLS",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TCPConnectedSocketProxy_UpgradeToTLS_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TCPConnectedSocket::UpgradeToTLSCallback callback =
              TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_UpgradeToTLS_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::HostPortPairPtr p_host_port_pair{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      ::network::mojom::blink::TLSClientSocketRequest p_request{};
      SocketObserverPtr p_observer{};
      TCPConnectedSocket_UpgradeToTLS_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostPortPair(&p_host_port_pair))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TCPConnectedSocket::UpgradeToTLS deserializer");
        return false;
      }
      TCPConnectedSocket::UpgradeToTLSCallback callback =
          TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpgradeToTLS(
std::move(p_host_port_pair), 
std::move(p_traffic_annotation), 
std::move(p_request), 
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TCPConnectedSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPConnectedSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_GetLocalAddress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_GetLocalAddress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_UpgradeToTLS_Params_Data>(
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

bool TCPConnectedSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPConnectedSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_GetLocalAddress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data>(
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
void TCPConnectedSocketInterceptorForTesting::GetLocalAddress(GetLocalAddressCallback callback) {
  GetForwardingInterface()->GetLocalAddress(std::move(callback));
}
void TCPConnectedSocketInterceptorForTesting::UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) {
  GetForwardingInterface()->UpgradeToTLS(std::move(host_port_pair), std::move(traffic_annotation), std::move(request), std::move(observer), std::move(callback));
}
TCPConnectedSocketAsyncWaiter::TCPConnectedSocketAsyncWaiter(
    TCPConnectedSocket* proxy) : proxy_(proxy) {}

TCPConnectedSocketAsyncWaiter::~TCPConnectedSocketAsyncWaiter() = default;

void TCPConnectedSocketAsyncWaiter::GetLocalAddress(
    int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_local_addr) {
  base::RunLoop loop;
  proxy_->GetLocalAddress(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             ::net::interfaces::blink::IPEndPointPtr* out_local_addr
,
             int32_t net_error,
             ::net::interfaces::blink::IPEndPointPtr local_addr) {*out_net_error = std::move(net_error);*out_local_addr = std::move(local_addr);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_local_addr));
  loop.Run();
}
void TCPConnectedSocketAsyncWaiter::UpgradeToTLS(
    ::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->UpgradeToTLS(std::move(host_port_pair),std::move(traffic_annotation),std::move(request),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t net_error,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_net_error = std::move(net_error);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}

const char SocketObserver::Name_[] = "network.mojom.SocketObserver";

SocketObserverProxy::SocketObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class SocketObserverProxy_OnReadError_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SocketObserverProxy_OnReadError_Message(
      uint32_t message_flags
      , int32_t param_net_error
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSocketObserver_OnReadError_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error)){}
  ~SocketObserverProxy_OnReadError_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_net_error) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SocketObserverProxy_OnReadError_Message>(
          kFlags
          , std::move(param_net_error)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSocketObserver_OnReadError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SocketObserver_OnReadError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SocketObserver* impl) {
    impl->OnReadError(
        std::move(param_net_error_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::SocketObserver_OnReadError_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  }
  int32_t param_net_error_;

  DISALLOW_COPY_AND_ASSIGN(SocketObserverProxy_OnReadError_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SocketObserverProxy_OnReadError_Message::kMessageTag = {};

void SocketObserverProxy::OnReadError(
    int32_t in_net_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::SocketObserver::OnReadError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = SocketObserverProxy_OnReadError_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_net_error));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SocketObserverProxy_OnWriteError_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SocketObserverProxy_OnWriteError_Message(
      uint32_t message_flags
      , int32_t param_net_error
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSocketObserver_OnWriteError_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error)){}
  ~SocketObserverProxy_OnWriteError_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_net_error) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SocketObserverProxy_OnWriteError_Message>(
          kFlags
          , std::move(param_net_error)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSocketObserver_OnWriteError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SocketObserver_OnWriteError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SocketObserver* impl) {
    impl->OnWriteError(
        std::move(param_net_error_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::SocketObserver_OnWriteError_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  }
  int32_t param_net_error_;

  DISALLOW_COPY_AND_ASSIGN(SocketObserverProxy_OnWriteError_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SocketObserverProxy_OnWriteError_Message::kMessageTag = {};

void SocketObserverProxy::OnWriteError(
    int32_t in_net_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::SocketObserver::OnWriteError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = SocketObserverProxy_OnWriteError_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_net_error));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SocketObserverStubDispatch::Accept(
    SocketObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SocketObserver::OnReadError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            SocketObserverProxy_OnReadError_Message>();
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
      internal::SocketObserver_OnReadError_Params_Data* params =
          reinterpret_cast<internal::SocketObserver_OnReadError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      SocketObserver_OnReadError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SocketObserver::OnReadError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReadError(
std::move(p_net_error));
      return true;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SocketObserver::OnWriteError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            SocketObserverProxy_OnWriteError_Message>();
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
      internal::SocketObserver_OnWriteError_Params_Data* params =
          reinterpret_cast<internal::SocketObserver_OnWriteError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      SocketObserver_OnWriteError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SocketObserver::OnWriteError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWriteError(
std::move(p_net_error));
      return true;
    }
  }
  return false;
}

// static
bool SocketObserverStubDispatch::AcceptWithResponder(
    SocketObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SocketObserver::OnReadError",
               "message", message->name());
#endif
      break;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SocketObserver::OnWriteError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SocketObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SocketObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SocketObserver_OnReadError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SocketObserver_OnWriteError_Params_Data>(
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

void SocketObserverInterceptorForTesting::OnReadError(int32_t net_error) {
  GetForwardingInterface()->OnReadError(std::move(net_error));
}
void SocketObserverInterceptorForTesting::OnWriteError(int32_t net_error) {
  GetForwardingInterface()->OnWriteError(std::move(net_error));
}
SocketObserverAsyncWaiter::SocketObserverAsyncWaiter(
    SocketObserver* proxy) : proxy_(proxy) {}

SocketObserverAsyncWaiter::~SocketObserverAsyncWaiter() = default;


const char TCPServerSocket::Name_[] = "network.mojom.TCPServerSocket";

class TCPServerSocket_Accept_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPServerSocket_Accept_ForwardToCallback(
      TCPServerSocket::AcceptCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPServerSocket::AcceptCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ForwardToCallback);
};

class TCPServerSocket_GetLocalAddress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPServerSocket_GetLocalAddress_ForwardToCallback(
      TCPServerSocket::GetLocalAddressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPServerSocket::GetLocalAddressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_GetLocalAddress_ForwardToCallback);
};

TCPServerSocketProxy::TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class TCPServerSocketProxy_Accept_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPServerSocketProxy_Accept_Message(
      uint32_t message_flags
      , SocketObserverPtr param_observer
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPServerSocket_Accept_Name,
          message_flags)
      , param_observer_(param_observer.PassInterface()){}
  ~TCPServerSocketProxy_Accept_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      SocketObserverPtr param_observer) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPServerSocketProxy_Accept_Message>(
          kFlags
          , std::move(param_observer)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPServerSocket_Accept_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_Accept_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPServerSocket* impl, TCPServerSocket::AcceptCallback callback) {
    impl->Accept(
        SocketObserverPtr(std::move(param_observer_)), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPServerSocket_Accept_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      param_observer_, &params->observer, serialization_context);
  }
  SocketObserverPtrInfo param_observer_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocketProxy_Accept_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPServerSocketProxy_Accept_Message::kMessageTag = {};

void TCPServerSocketProxy::Accept(
    SocketObserverPtr in_observer, AcceptCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::TCPServerSocket::Accept");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TCPServerSocketProxy_Accept_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_observer));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPServerSocket_Accept_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPServerSocketProxy_GetLocalAddress_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPServerSocketProxy_GetLocalAddress_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPServerSocket_GetLocalAddress_Name,
          message_flags){}
  ~TCPServerSocketProxy_GetLocalAddress_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPServerSocketProxy_GetLocalAddress_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPServerSocket_GetLocalAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_GetLocalAddress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPServerSocket* impl, TCPServerSocket::GetLocalAddressCallback callback) {
    impl->GetLocalAddress(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPServerSocket_GetLocalAddress_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocketProxy_GetLocalAddress_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPServerSocketProxy_GetLocalAddress_Message::kMessageTag = {};

void TCPServerSocketProxy::GetLocalAddress(
    GetLocalAddressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::TCPServerSocket::GetLocalAddress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TCPServerSocketProxy_GetLocalAddress_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPServerSocket_GetLocalAddress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPServerSocket_Accept_ProxyToResponder {
 public:
  static TCPServerSocket::AcceptCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPServerSocket_Accept_ProxyToResponder> proxy(
        new TCPServerSocket_Accept_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPServerSocket_Accept_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPServerSocket_Accept_ProxyToResponder() {
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
  TCPServerSocket_Accept_ProxyToResponder(
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
        << "TCPServerSocket::AcceptCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_remote_addr, TCPConnectedSocketPtr in_connected_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ProxyToResponder);
};
class TCPServerSocket_Accept_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPServerSocket_Accept_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
      , ::net::interfaces::blink::IPEndPointPtr param_remote_addr
      , TCPConnectedSocketPtr param_connected_socket
      , mojo::ScopedDataPipeConsumerHandle param_send_stream
      , mojo::ScopedDataPipeProducerHandle param_receive_stream
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPServerSocket_Accept_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error))
      , param_remote_addr_(std::move(param_remote_addr))
      , param_connected_socket_(param_connected_socket.PassInterface())
      , param_send_stream_(std::move(param_send_stream))
      , param_receive_stream_(std::move(param_receive_stream)){}
  ~TCPServerSocket_Accept_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error, ::net::interfaces::blink::IPEndPointPtr param_remote_addr, TCPConnectedSocketPtr param_connected_socket, mojo::ScopedDataPipeConsumerHandle param_send_stream, mojo::ScopedDataPipeProducerHandle param_receive_stream) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPServerSocket_Accept_Response_Message>(
          kFlags
          , std::move(param_net_error)
          , std::move(param_remote_addr)
          , std::move(param_connected_socket)
          , std::move(param_send_stream)
          , std::move(param_receive_stream)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPServerSocket_Accept_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_Accept_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  typename decltype(params->remote_addr)::BaseType::BufferWriter
      remote_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_remote_addr, buffer, &remote_addr_writer, &serialization_context);
  params->remote_addr.Set(
      remote_addr_writer.is_null() ? nullptr : remote_addr_writer.data());
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketPtrDataView>(
      param_connected_socket, &params->connected_socket, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_send_stream, &params->send_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_receive_stream, &params->receive_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPServerSocket::AcceptCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_), 
        std::move(param_remote_addr_), 
        TCPConnectedSocketPtr(std::move(param_connected_socket_)), 
        std::move(param_send_stream_), 
        std::move(param_receive_stream_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPServerSocket_Accept_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  typename decltype(params->remote_addr)::BaseType::BufferWriter
      remote_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_remote_addr_, buffer, &remote_addr_writer, serialization_context);
  params->remote_addr.Set(
      remote_addr_writer.is_null() ? nullptr : remote_addr_writer.data());
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketPtrDataView>(
      param_connected_socket_, &params->connected_socket, serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      param_send_stream_, &params->send_stream, serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      param_receive_stream_, &params->receive_stream, serialization_context);
  }
  int32_t param_net_error_;
  ::net::interfaces::blink::IPEndPointPtr param_remote_addr_;
  TCPConnectedSocketPtrInfo param_connected_socket_;
  mojo::ScopedDataPipeConsumerHandle param_send_stream_;
  mojo::ScopedDataPipeProducerHandle param_receive_stream_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPServerSocket_Accept_Response_Message::kMessageTag = {};

bool TCPServerSocket_Accept_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::TCPServerSocket::AcceptCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TCPServerSocket_Accept_Response_Message>();
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
  internal::TCPServerSocket_Accept_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPServerSocket_Accept_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  ::net::interfaces::blink::IPEndPointPtr p_remote_addr{};
  TCPConnectedSocketPtr p_connected_socket{};
  mojo::ScopedDataPipeConsumerHandle p_send_stream{};
  mojo::ScopedDataPipeProducerHandle p_receive_stream{};
  TCPServerSocket_Accept_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadRemoteAddr(&p_remote_addr))
    success = false;
  p_connected_socket =
      input_data_view.TakeConnectedSocket<decltype(p_connected_socket)>();
  p_send_stream = input_data_view.TakeSendStream();
  p_receive_stream = input_data_view.TakeReceiveStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "TCPServerSocket::Accept response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_remote_addr), 
std::move(p_connected_socket), 
std::move(p_send_stream), 
std::move(p_receive_stream));
  return true;
}

void TCPServerSocket_Accept_ProxyToResponder::Run(
    int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_remote_addr, TCPConnectedSocketPtr in_connected_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TCPServerSocket_Accept_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error), std::move(in_remote_addr), std::move(in_connected_socket), std::move(in_send_stream), std::move(in_receive_stream));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::AcceptCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPServerSocket_GetLocalAddress_ProxyToResponder {
 public:
  static TCPServerSocket::GetLocalAddressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPServerSocket_GetLocalAddress_ProxyToResponder> proxy(
        new TCPServerSocket_GetLocalAddress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPServerSocket_GetLocalAddress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPServerSocket_GetLocalAddress_ProxyToResponder() {
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
  TCPServerSocket_GetLocalAddress_ProxyToResponder(
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
        << "TCPServerSocket::GetLocalAddressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_local_addr);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_GetLocalAddress_ProxyToResponder);
};
class TCPServerSocket_GetLocalAddress_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TCPServerSocket_GetLocalAddress_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
      , ::net::interfaces::blink::IPEndPointPtr param_local_addr
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTCPServerSocket_GetLocalAddress_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error))
      , param_local_addr_(std::move(param_local_addr)){}
  ~TCPServerSocket_GetLocalAddress_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error, ::net::interfaces::blink::IPEndPointPtr param_local_addr) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TCPServerSocket_GetLocalAddress_Response_Message>(
          kFlags
          , std::move(param_net_error)
          , std::move(param_local_addr)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTCPServerSocket_GetLocalAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TCPServerSocket::GetLocalAddressCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_), 
        std::move(param_local_addr_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
      param_local_addr_, buffer, &local_addr_writer, serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  }
  int32_t param_net_error_;
  ::net::interfaces::blink::IPEndPointPtr param_local_addr_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_GetLocalAddress_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TCPServerSocket_GetLocalAddress_Response_Message::kMessageTag = {};

bool TCPServerSocket_GetLocalAddress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::TCPServerSocket::GetLocalAddressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TCPServerSocket_GetLocalAddress_Response_Message>();
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
  internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  ::net::interfaces::blink::IPEndPointPtr p_local_addr{};
  TCPServerSocket_GetLocalAddress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadLocalAddr(&p_local_addr))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "TCPServerSocket::GetLocalAddress response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_local_addr));
  return true;
}

void TCPServerSocket_GetLocalAddress_ProxyToResponder::Run(
    int32_t in_net_error, ::net::interfaces::blink::IPEndPointPtr in_local_addr) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TCPServerSocket_GetLocalAddress_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error), std::move(in_local_addr));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::GetLocalAddressCallback",
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
bool TCPServerSocketStubDispatch::Accept(
    TCPServerSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::Accept",
               "message", message->name());
#endif
      break;
    }
    case internal::kTCPServerSocket_GetLocalAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::GetLocalAddress",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool TCPServerSocketStubDispatch::AcceptWithResponder(
    TCPServerSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::Accept",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TCPServerSocketProxy_Accept_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TCPServerSocket::AcceptCallback callback =
              TCPServerSocket_Accept_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TCPServerSocket_Accept_Params_Data* params =
          reinterpret_cast<
              internal::TCPServerSocket_Accept_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SocketObserverPtr p_observer{};
      TCPServerSocket_Accept_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TCPServerSocket::Accept deserializer");
        return false;
      }
      TCPServerSocket::AcceptCallback callback =
          TCPServerSocket_Accept_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Accept(
std::move(p_observer), std::move(callback));
      return true;
    }
    case internal::kTCPServerSocket_GetLocalAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::TCPServerSocket::GetLocalAddress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TCPServerSocketProxy_GetLocalAddress_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TCPServerSocket::GetLocalAddressCallback callback =
              TCPServerSocket_GetLocalAddress_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TCPServerSocket_GetLocalAddress_Params_Data* params =
          reinterpret_cast<
              internal::TCPServerSocket_GetLocalAddress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TCPServerSocket_GetLocalAddress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TCPServerSocket::GetLocalAddress deserializer");
        return false;
      }
      TCPServerSocket::GetLocalAddressCallback callback =
          TCPServerSocket_GetLocalAddress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetLocalAddress(std::move(callback));
      return true;
    }
  }
  return false;
}

bool TCPServerSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPServerSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPServerSocket_GetLocalAddress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_GetLocalAddress_Params_Data>(
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

bool TCPServerSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPServerSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPServerSocket_GetLocalAddress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data>(
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
void TCPServerSocketInterceptorForTesting::Accept(SocketObserverPtr observer, AcceptCallback callback) {
  GetForwardingInterface()->Accept(std::move(observer), std::move(callback));
}
void TCPServerSocketInterceptorForTesting::GetLocalAddress(GetLocalAddressCallback callback) {
  GetForwardingInterface()->GetLocalAddress(std::move(callback));
}
TCPServerSocketAsyncWaiter::TCPServerSocketAsyncWaiter(
    TCPServerSocket* proxy) : proxy_(proxy) {}

TCPServerSocketAsyncWaiter::~TCPServerSocketAsyncWaiter() = default;

void TCPServerSocketAsyncWaiter::Accept(
    SocketObserverPtr observer, int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_remote_addr, TCPConnectedSocketPtr* out_connected_socket, mojo::ScopedDataPipeConsumerHandle* out_send_stream, mojo::ScopedDataPipeProducerHandle* out_receive_stream) {
  base::RunLoop loop;
  proxy_->Accept(std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             ::net::interfaces::blink::IPEndPointPtr* out_remote_addr
,
             TCPConnectedSocketPtr* out_connected_socket
,
             mojo::ScopedDataPipeConsumerHandle* out_send_stream
,
             mojo::ScopedDataPipeProducerHandle* out_receive_stream
,
             int32_t net_error,
             ::net::interfaces::blink::IPEndPointPtr remote_addr,
             TCPConnectedSocketPtr connected_socket,
             mojo::ScopedDataPipeConsumerHandle send_stream,
             mojo::ScopedDataPipeProducerHandle receive_stream) {*out_net_error = std::move(net_error);*out_remote_addr = std::move(remote_addr);*out_connected_socket = std::move(connected_socket);*out_send_stream = std::move(send_stream);*out_receive_stream = std::move(receive_stream);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_remote_addr,
          out_connected_socket,
          out_send_stream,
          out_receive_stream));
  loop.Run();
}
void TCPServerSocketAsyncWaiter::GetLocalAddress(
    int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_local_addr) {
  base::RunLoop loop;
  proxy_->GetLocalAddress(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             ::net::interfaces::blink::IPEndPointPtr* out_local_addr
,
             int32_t net_error,
             ::net::interfaces::blink::IPEndPointPtr local_addr) {*out_net_error = std::move(net_error);*out_local_addr = std::move(local_addr);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_local_addr));
  loop.Run();
}

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
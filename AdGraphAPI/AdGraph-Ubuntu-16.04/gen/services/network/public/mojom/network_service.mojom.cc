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

#include "services/network/public/mojom/network_service.mojom.h"

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

#include "services/network/public/mojom/network_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/digitally_signed_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#include "services/network/public/cpp/signed_tree_head_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace network {
namespace mojom {
const char SSLPrivateKey::Name_[] = "network.mojom.SSLPrivateKey";

class SSLPrivateKey_Sign_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SSLPrivateKey_Sign_ForwardToCallback(
      SSLPrivateKey::SignCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SSLPrivateKey::SignCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKey_Sign_ForwardToCallback);
};

SSLPrivateKeyProxy::SSLPrivateKeyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class SSLPrivateKeyProxy_Sign_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SSLPrivateKeyProxy_Sign_Message(
      uint32_t message_flags
      , uint16_t param_algorithm
      , const std::vector<uint8_t>& param_input
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSSLPrivateKey_Sign_Name,
          message_flags)
      , param_algorithm_(std::move(param_algorithm))
      , param_input_(std::move(param_input)){}
  ~SSLPrivateKeyProxy_Sign_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      uint16_t param_algorithm, const std::vector<uint8_t>& param_input) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SSLPrivateKeyProxy_Sign_Message>(
          kFlags
          , std::move(param_algorithm)
          , std::move(param_input)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSSLPrivateKey_Sign_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLPrivateKey_Sign_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->algorithm = param_algorithm;
  typename decltype(params->input)::BaseType::BufferWriter
      input_writer;
  const mojo::internal::ContainerValidateParams input_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_input, buffer, &input_writer, &input_validate_params,
      &serialization_context);
  params->input.Set(
      input_writer.is_null() ? nullptr : input_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input in SSLPrivateKey.Sign request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SSLPrivateKey* impl, SSLPrivateKey::SignCallback callback) {
    impl->Sign(
        std::move(param_algorithm_),
        std::move(param_input_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::SSLPrivateKey_Sign_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->algorithm = param_algorithm_;
  typename decltype(params->input)::BaseType::BufferWriter
      input_writer;
  const mojo::internal::ContainerValidateParams input_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_input_, buffer, &input_writer, &input_validate_params,
      serialization_context);
  params->input.Set(
      input_writer.is_null() ? nullptr : input_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input in SSLPrivateKey.Sign request");
  }
  uint16_t param_algorithm_;
  std::vector<uint8_t> param_input_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKeyProxy_Sign_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SSLPrivateKeyProxy_Sign_Message::kMessageTag = {};

void SSLPrivateKeyProxy::Sign(
    uint16_t in_algorithm, const std::vector<uint8_t>& in_input, SignCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::SSLPrivateKey::Sign");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = SSLPrivateKeyProxy_Sign_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_algorithm), std::move(in_input));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SSLPrivateKey_Sign_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SSLPrivateKey_Sign_ProxyToResponder {
 public:
  static SSLPrivateKey::SignCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SSLPrivateKey_Sign_ProxyToResponder> proxy(
        new SSLPrivateKey_Sign_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SSLPrivateKey_Sign_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SSLPrivateKey_Sign_ProxyToResponder() {
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
  SSLPrivateKey_Sign_ProxyToResponder(
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
        << "SSLPrivateKey::SignCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, const std::vector<uint8_t>& in_signature);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKey_Sign_ProxyToResponder);
};
class SSLPrivateKey_Sign_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SSLPrivateKey_Sign_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
      , const std::vector<uint8_t>& param_signature
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSSLPrivateKey_Sign_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error))
      , param_signature_(std::move(param_signature)){}
  ~SSLPrivateKey_Sign_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error, const std::vector<uint8_t>& param_signature) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SSLPrivateKey_Sign_Response_Message>(
          kFlags
          , std::move(param_net_error)
          , std::move(param_signature)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSSLPrivateKey_Sign_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLPrivateKey_Sign_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  typename decltype(params->signature)::BaseType::BufferWriter
      signature_writer;
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_signature, buffer, &signature_writer, &signature_validate_params,
      &serialization_context);
  params->signature.Set(
      signature_writer.is_null() ? nullptr : signature_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signature.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signature in SSLPrivateKey.Sign response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SSLPrivateKey::SignCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_), 
        std::move(param_signature_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::SSLPrivateKey_Sign_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  typename decltype(params->signature)::BaseType::BufferWriter
      signature_writer;
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_signature_, buffer, &signature_writer, &signature_validate_params,
      serialization_context);
  params->signature.Set(
      signature_writer.is_null() ? nullptr : signature_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signature.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signature in SSLPrivateKey.Sign response");
  }
  int32_t param_net_error_;
  std::vector<uint8_t> param_signature_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKey_Sign_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SSLPrivateKey_Sign_Response_Message::kMessageTag = {};

bool SSLPrivateKey_Sign_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::SSLPrivateKey::SignCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<SSLPrivateKey_Sign_Response_Message>();
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
  internal::SSLPrivateKey_Sign_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SSLPrivateKey_Sign_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  std::vector<uint8_t> p_signature{};
  SSLPrivateKey_Sign_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadSignature(&p_signature))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SSLPrivateKey::Sign response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_signature));
  return true;
}

void SSLPrivateKey_Sign_ProxyToResponder::Run(
    int32_t in_net_error, const std::vector<uint8_t>& in_signature) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = SSLPrivateKey_Sign_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error), std::move(in_signature));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SSLPrivateKey::SignCallback",
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
bool SSLPrivateKeyStubDispatch::Accept(
    SSLPrivateKey* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SSLPrivateKey::Sign",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SSLPrivateKeyStubDispatch::AcceptWithResponder(
    SSLPrivateKey* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SSLPrivateKey::Sign",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            SSLPrivateKeyProxy_Sign_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          SSLPrivateKey::SignCallback callback =
              SSLPrivateKey_Sign_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::SSLPrivateKey_Sign_Params_Data* params =
          reinterpret_cast<
              internal::SSLPrivateKey_Sign_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint16_t p_algorithm{};
      std::vector<uint8_t> p_input{};
      SSLPrivateKey_Sign_ParamsDataView input_data_view(params, &serialization_context);
      
      p_algorithm = input_data_view.algorithm();
      if (!input_data_view.ReadInput(&p_input))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SSLPrivateKey::Sign deserializer");
        return false;
      }
      SSLPrivateKey::SignCallback callback =
          SSLPrivateKey_Sign_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Sign(
std::move(p_algorithm), 
std::move(p_input), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SSLPrivateKeyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLPrivateKey RequestValidator");

  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLPrivateKey_Sign_Params_Data>(
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

bool SSLPrivateKeyResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLPrivateKey ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLPrivateKey_Sign_ResponseParams_Data>(
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
void SSLPrivateKeyInterceptorForTesting::Sign(uint16_t algorithm, const std::vector<uint8_t>& input, SignCallback callback) {
  GetForwardingInterface()->Sign(std::move(algorithm), std::move(input), std::move(callback));
}
SSLPrivateKeyAsyncWaiter::SSLPrivateKeyAsyncWaiter(
    SSLPrivateKey* proxy) : proxy_(proxy) {}

SSLPrivateKeyAsyncWaiter::~SSLPrivateKeyAsyncWaiter() = default;

void SSLPrivateKeyAsyncWaiter::Sign(
    uint16_t algorithm, const std::vector<uint8_t>& input, int32_t* out_net_error, std::vector<uint8_t>* out_signature) {
  base::RunLoop loop;
  proxy_->Sign(std::move(algorithm),std::move(input),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             std::vector<uint8_t>* out_signature
,
             int32_t net_error,
             const std::vector<uint8_t>& signature) {*out_net_error = std::move(net_error);*out_signature = std::move(signature);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_signature));
  loop.Run();
}

const char AuthChallengeResponder::Name_[] = "network.mojom.AuthChallengeResponder";

AuthChallengeResponderProxy::AuthChallengeResponderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class AuthChallengeResponderProxy_OnAuthCredentials_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit AuthChallengeResponderProxy_OnAuthCredentials_Message(
      uint32_t message_flags
      , const base::Optional<net::AuthCredentials>& param_credentials
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kAuthChallengeResponder_OnAuthCredentials_Name,
          message_flags)
      , param_credentials_(std::move(param_credentials)){}
  ~AuthChallengeResponderProxy_OnAuthCredentials_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::Optional<net::AuthCredentials>& param_credentials) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<AuthChallengeResponderProxy_OnAuthCredentials_Message>(
          kFlags
          , std::move(param_credentials)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kAuthChallengeResponder_OnAuthCredentials_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::AuthChallengeResponder_OnAuthCredentials_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->credentials)::BaseType::BufferWriter
      credentials_writer;
  mojo::internal::Serialize<::network::mojom::AuthCredentialsDataView>(
      param_credentials, buffer, &credentials_writer, &serialization_context);
  params->credentials.Set(
      credentials_writer.is_null() ? nullptr : credentials_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(AuthChallengeResponder* impl) {
    impl->OnAuthCredentials(
        std::move(param_credentials_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::AuthChallengeResponder_OnAuthCredentials_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->credentials)::BaseType::BufferWriter
      credentials_writer;
  mojo::internal::Serialize<::network::mojom::AuthCredentialsDataView>(
      param_credentials_, buffer, &credentials_writer, serialization_context);
  params->credentials.Set(
      credentials_writer.is_null() ? nullptr : credentials_writer.data());
  }
  base::Optional<net::AuthCredentials> param_credentials_;

  DISALLOW_COPY_AND_ASSIGN(AuthChallengeResponderProxy_OnAuthCredentials_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
AuthChallengeResponderProxy_OnAuthCredentials_Message::kMessageTag = {};

void AuthChallengeResponderProxy::OnAuthCredentials(
    const base::Optional<net::AuthCredentials>& in_credentials) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::AuthChallengeResponder::OnAuthCredentials");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = AuthChallengeResponderProxy_OnAuthCredentials_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_credentials));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AuthChallengeResponderStubDispatch::Accept(
    AuthChallengeResponder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::AuthChallengeResponder::OnAuthCredentials",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            AuthChallengeResponderProxy_OnAuthCredentials_Message>();
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
      internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* params =
          reinterpret_cast<internal::AuthChallengeResponder_OnAuthCredentials_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<net::AuthCredentials> p_credentials{};
      AuthChallengeResponder_OnAuthCredentials_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCredentials(&p_credentials))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AuthChallengeResponder::OnAuthCredentials deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAuthCredentials(
std::move(p_credentials));
      return true;
    }
  }
  return false;
}

// static
bool AuthChallengeResponderStubDispatch::AcceptWithResponder(
    AuthChallengeResponder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::AuthChallengeResponder::OnAuthCredentials",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AuthChallengeResponderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AuthChallengeResponder RequestValidator");

  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AuthChallengeResponder_OnAuthCredentials_Params_Data>(
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

void AuthChallengeResponderInterceptorForTesting::OnAuthCredentials(const base::Optional<net::AuthCredentials>& credentials) {
  GetForwardingInterface()->OnAuthCredentials(std::move(credentials));
}
AuthChallengeResponderAsyncWaiter::AuthChallengeResponderAsyncWaiter(
    AuthChallengeResponder* proxy) : proxy_(proxy) {}

AuthChallengeResponderAsyncWaiter::~AuthChallengeResponderAsyncWaiter() = default;


const char NetworkServiceClient::Name_[] = "network.mojom.NetworkServiceClient";

class NetworkServiceClient_OnCertificateRequested_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnCertificateRequested_ForwardToCallback(
      NetworkServiceClient::OnCertificateRequestedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnCertificateRequestedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnCertificateRequested_ForwardToCallback);
};

class NetworkServiceClient_OnSSLCertificateError_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnSSLCertificateError_ForwardToCallback(
      NetworkServiceClient::OnSSLCertificateErrorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnSSLCertificateErrorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnSSLCertificateError_ForwardToCallback);
};

NetworkServiceClientProxy::NetworkServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkServiceClientProxy_OnAuthRequired_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceClientProxy_OnAuthRequired_Message(
      uint32_t message_flags
      , uint32_t param_process_id
      , uint32_t param_routing_id
      , uint32_t param_request_id
      , const GURL& param_url
      , const GURL& param_site_for_cookies
      , bool param_first_auth_attempt
      , const scoped_refptr<net::AuthChallengeInfo>& param_auth_info
      , int32_t param_resource_type
      , AuthChallengeResponderPtr param_auth_challenge_responder
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceClient_OnAuthRequired_Name,
          message_flags)
      , param_process_id_(std::move(param_process_id))
      , param_routing_id_(std::move(param_routing_id))
      , param_request_id_(std::move(param_request_id))
      , param_url_(std::move(param_url))
      , param_site_for_cookies_(std::move(param_site_for_cookies))
      , param_first_auth_attempt_(std::move(param_first_auth_attempt))
      , param_auth_info_(std::move(param_auth_info))
      , param_resource_type_(std::move(param_resource_type))
      , param_auth_challenge_responder_(param_auth_challenge_responder.PassInterface()){}
  ~NetworkServiceClientProxy_OnAuthRequired_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      uint32_t param_process_id, uint32_t param_routing_id, uint32_t param_request_id, const GURL& param_url, const GURL& param_site_for_cookies, bool param_first_auth_attempt, const scoped_refptr<net::AuthChallengeInfo>& param_auth_info, int32_t param_resource_type, AuthChallengeResponderPtr param_auth_challenge_responder) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceClientProxy_OnAuthRequired_Message>(
          kFlags
          , std::move(param_process_id)
          , std::move(param_routing_id)
          , std::move(param_request_id)
          , std::move(param_url)
          , std::move(param_site_for_cookies)
          , std::move(param_first_auth_attempt)
          , std::move(param_auth_info)
          , std::move(param_resource_type)
          , std::move(param_auth_challenge_responder)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceClient_OnAuthRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnAuthRequired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = param_process_id;
  params->routing_id = param_routing_id;
  params->request_id = param_request_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnAuthRequired request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in NetworkServiceClient.OnAuthRequired request");
  params->first_auth_attempt = param_first_auth_attempt;
  typename decltype(params->auth_info)::BaseType::BufferWriter
      auth_info_writer;
  mojo::internal::Serialize<::network::mojom::AuthChallengeInfoDataView>(
      param_auth_info, buffer, &auth_info_writer, &serialization_context);
  params->auth_info.Set(
      auth_info_writer.is_null() ? nullptr : auth_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->auth_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null auth_info in NetworkServiceClient.OnAuthRequired request");
  params->resource_type = param_resource_type;
  mojo::internal::Serialize<::network::mojom::AuthChallengeResponderPtrDataView>(
      param_auth_challenge_responder, &params->auth_challenge_responder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->auth_challenge_responder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid auth_challenge_responder in NetworkServiceClient.OnAuthRequired request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceClient* impl) {
    impl->OnAuthRequired(
        std::move(param_process_id_),
        std::move(param_routing_id_),
        std::move(param_request_id_),
        std::move(param_url_),
        std::move(param_site_for_cookies_),
        std::move(param_first_auth_attempt_),
        std::move(param_auth_info_),
        std::move(param_resource_type_),
        AuthChallengeResponderPtr(std::move(param_auth_challenge_responder_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceClient_OnAuthRequired_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->process_id = param_process_id_;
  params->routing_id = param_routing_id_;
  params->request_id = param_request_id_;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url_, buffer, &url_writer, serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnAuthRequired request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies_, buffer, &site_for_cookies_writer, serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in NetworkServiceClient.OnAuthRequired request");
  params->first_auth_attempt = param_first_auth_attempt_;
  typename decltype(params->auth_info)::BaseType::BufferWriter
      auth_info_writer;
  mojo::internal::Serialize<::network::mojom::AuthChallengeInfoDataView>(
      param_auth_info_, buffer, &auth_info_writer, serialization_context);
  params->auth_info.Set(
      auth_info_writer.is_null() ? nullptr : auth_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->auth_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null auth_info in NetworkServiceClient.OnAuthRequired request");
  params->resource_type = param_resource_type_;
  mojo::internal::Serialize<::network::mojom::AuthChallengeResponderPtrDataView>(
      param_auth_challenge_responder_, &params->auth_challenge_responder, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->auth_challenge_responder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid auth_challenge_responder in NetworkServiceClient.OnAuthRequired request");
  }
  uint32_t param_process_id_;
  uint32_t param_routing_id_;
  uint32_t param_request_id_;
  GURL param_url_;
  GURL param_site_for_cookies_;
  bool param_first_auth_attempt_;
  scoped_refptr<net::AuthChallengeInfo> param_auth_info_;
  int32_t param_resource_type_;
  AuthChallengeResponderPtrInfo param_auth_challenge_responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientProxy_OnAuthRequired_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceClientProxy_OnAuthRequired_Message::kMessageTag = {};

void NetworkServiceClientProxy::OnAuthRequired(
    uint32_t in_process_id, uint32_t in_routing_id, uint32_t in_request_id, const GURL& in_url, const GURL& in_site_for_cookies, bool in_first_auth_attempt, const scoped_refptr<net::AuthChallengeInfo>& in_auth_info, int32_t in_resource_type, AuthChallengeResponderPtr in_auth_challenge_responder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceClient::OnAuthRequired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceClientProxy_OnAuthRequired_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_process_id), std::move(in_routing_id), std::move(in_request_id), std::move(in_url), std::move(in_site_for_cookies), std::move(in_first_auth_attempt), std::move(in_auth_info), std::move(in_resource_type), std::move(in_auth_challenge_responder));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceClientProxy_OnCertificateRequested_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceClientProxy_OnCertificateRequested_Message(
      uint32_t message_flags
      , uint32_t param_process_id
      , uint32_t param_routing_id
      , uint32_t param_request_id
      , const scoped_refptr<net::SSLCertRequestInfo>& param_cert_info
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceClient_OnCertificateRequested_Name,
          message_flags)
      , param_process_id_(std::move(param_process_id))
      , param_routing_id_(std::move(param_routing_id))
      , param_request_id_(std::move(param_request_id))
      , param_cert_info_(std::move(param_cert_info)){}
  ~NetworkServiceClientProxy_OnCertificateRequested_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      uint32_t param_process_id, uint32_t param_routing_id, uint32_t param_request_id, const scoped_refptr<net::SSLCertRequestInfo>& param_cert_info) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceClientProxy_OnCertificateRequested_Message>(
          kFlags
          , std::move(param_process_id)
          , std::move(param_routing_id)
          , std::move(param_request_id)
          , std::move(param_cert_info)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceClient_OnCertificateRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = param_process_id;
  params->routing_id = param_routing_id;
  params->request_id = param_request_id;
  typename decltype(params->cert_info)::BaseType::BufferWriter
      cert_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLCertRequestInfoDataView>(
      param_cert_info, buffer, &cert_info_writer, &serialization_context);
  params->cert_info.Set(
      cert_info_writer.is_null() ? nullptr : cert_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert_info in NetworkServiceClient.OnCertificateRequested request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceClient* impl, NetworkServiceClient::OnCertificateRequestedCallback callback) {
    impl->OnCertificateRequested(
        std::move(param_process_id_),
        std::move(param_routing_id_),
        std::move(param_request_id_),
        std::move(param_cert_info_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->process_id = param_process_id_;
  params->routing_id = param_routing_id_;
  params->request_id = param_request_id_;
  typename decltype(params->cert_info)::BaseType::BufferWriter
      cert_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLCertRequestInfoDataView>(
      param_cert_info_, buffer, &cert_info_writer, serialization_context);
  params->cert_info.Set(
      cert_info_writer.is_null() ? nullptr : cert_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert_info in NetworkServiceClient.OnCertificateRequested request");
  }
  uint32_t param_process_id_;
  uint32_t param_routing_id_;
  uint32_t param_request_id_;
  scoped_refptr<net::SSLCertRequestInfo> param_cert_info_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientProxy_OnCertificateRequested_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceClientProxy_OnCertificateRequested_Message::kMessageTag = {};

void NetworkServiceClientProxy::OnCertificateRequested(
    uint32_t in_process_id, uint32_t in_routing_id, uint32_t in_request_id, const scoped_refptr<net::SSLCertRequestInfo>& in_cert_info, OnCertificateRequestedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceClient::OnCertificateRequested");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceClientProxy_OnCertificateRequested_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_process_id), std::move(in_routing_id), std::move(in_request_id), std::move(in_cert_info));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnCertificateRequested_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceClientProxy_OnSSLCertificateError_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceClientProxy_OnSSLCertificateError_Message(
      uint32_t message_flags
      , uint32_t param_process_id
      , uint32_t param_routing_id
      , uint32_t param_request_id
      , int32_t param_resource_type
      , const GURL& param_url
      , const net::SSLInfo& param_ssl_info
      , bool param_fatal
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceClient_OnSSLCertificateError_Name,
          message_flags)
      , param_process_id_(std::move(param_process_id))
      , param_routing_id_(std::move(param_routing_id))
      , param_request_id_(std::move(param_request_id))
      , param_resource_type_(std::move(param_resource_type))
      , param_url_(std::move(param_url))
      , param_ssl_info_(std::move(param_ssl_info))
      , param_fatal_(std::move(param_fatal)){}
  ~NetworkServiceClientProxy_OnSSLCertificateError_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      uint32_t param_process_id, uint32_t param_routing_id, uint32_t param_request_id, int32_t param_resource_type, const GURL& param_url, const net::SSLInfo& param_ssl_info, bool param_fatal) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceClientProxy_OnSSLCertificateError_Message>(
          kFlags
          , std::move(param_process_id)
          , std::move(param_routing_id)
          , std::move(param_request_id)
          , std::move(param_resource_type)
          , std::move(param_url)
          , std::move(param_ssl_info)
          , std::move(param_fatal)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceClient_OnSSLCertificateError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = param_process_id;
  params->routing_id = param_routing_id;
  params->request_id = param_request_id;
  params->resource_type = param_resource_type;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnSSLCertificateError request");
  typename decltype(params->ssl_info)::BaseType::BufferWriter
      ssl_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLInfoDataView>(
      param_ssl_info, buffer, &ssl_info_writer, &serialization_context);
  params->ssl_info.Set(
      ssl_info_writer.is_null() ? nullptr : ssl_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_info in NetworkServiceClient.OnSSLCertificateError request");
  params->fatal = param_fatal;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceClient* impl, NetworkServiceClient::OnSSLCertificateErrorCallback callback) {
    impl->OnSSLCertificateError(
        std::move(param_process_id_),
        std::move(param_routing_id_),
        std::move(param_request_id_),
        std::move(param_resource_type_),
        std::move(param_url_),
        std::move(param_ssl_info_),
        std::move(param_fatal_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->process_id = param_process_id_;
  params->routing_id = param_routing_id_;
  params->request_id = param_request_id_;
  params->resource_type = param_resource_type_;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url_, buffer, &url_writer, serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnSSLCertificateError request");
  typename decltype(params->ssl_info)::BaseType::BufferWriter
      ssl_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLInfoDataView>(
      param_ssl_info_, buffer, &ssl_info_writer, serialization_context);
  params->ssl_info.Set(
      ssl_info_writer.is_null() ? nullptr : ssl_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_info in NetworkServiceClient.OnSSLCertificateError request");
  params->fatal = param_fatal_;
  }
  uint32_t param_process_id_;
  uint32_t param_routing_id_;
  uint32_t param_request_id_;
  int32_t param_resource_type_;
  GURL param_url_;
  net::SSLInfo param_ssl_info_;
  bool param_fatal_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientProxy_OnSSLCertificateError_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceClientProxy_OnSSLCertificateError_Message::kMessageTag = {};

void NetworkServiceClientProxy::OnSSLCertificateError(
    uint32_t in_process_id, uint32_t in_routing_id, uint32_t in_request_id, int32_t in_resource_type, const GURL& in_url, const net::SSLInfo& in_ssl_info, bool in_fatal, OnSSLCertificateErrorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceClient::OnSSLCertificateError");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceClientProxy_OnSSLCertificateError_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_process_id), std::move(in_routing_id), std::move(in_request_id), std::move(in_resource_type), std::move(in_url), std::move(in_ssl_info), std::move(in_fatal));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnSSLCertificateError_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceClient_OnCertificateRequested_ProxyToResponder {
 public:
  static NetworkServiceClient::OnCertificateRequestedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnCertificateRequested_ProxyToResponder> proxy(
        new NetworkServiceClient_OnCertificateRequested_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnCertificateRequested_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnCertificateRequested_ProxyToResponder() {
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
  NetworkServiceClient_OnCertificateRequested_ProxyToResponder(
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
        << "NetworkServiceClient::OnCertificateRequestedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const scoped_refptr<net::X509Certificate>& in_x509_certificate, const std::vector<uint16_t>& in_algorithm_preferences, SSLPrivateKeyPtr in_ssl_private_key, bool in_cancel_certificate_selection);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnCertificateRequested_ProxyToResponder);
};
class NetworkServiceClient_OnCertificateRequested_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceClient_OnCertificateRequested_Response_Message(
      uint32_t message_flags
      , const scoped_refptr<net::X509Certificate>& param_x509_certificate
      , const std::vector<uint16_t>& param_algorithm_preferences
      , SSLPrivateKeyPtr param_ssl_private_key
      , bool param_cancel_certificate_selection
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceClient_OnCertificateRequested_Name,
          message_flags)
      , param_x509_certificate_(std::move(param_x509_certificate))
      , param_algorithm_preferences_(std::move(param_algorithm_preferences))
      , param_ssl_private_key_(param_ssl_private_key.PassInterface())
      , param_cancel_certificate_selection_(std::move(param_cancel_certificate_selection)){}
  ~NetworkServiceClient_OnCertificateRequested_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const scoped_refptr<net::X509Certificate>& param_x509_certificate, const std::vector<uint16_t>& param_algorithm_preferences, SSLPrivateKeyPtr param_ssl_private_key, bool param_cancel_certificate_selection) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceClient_OnCertificateRequested_Response_Message>(
          kFlags
          , std::move(param_x509_certificate)
          , std::move(param_algorithm_preferences)
          , std::move(param_ssl_private_key)
          , std::move(param_cancel_certificate_selection)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceClient_OnCertificateRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->x509_certificate)::BaseType::BufferWriter
      x509_certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_x509_certificate, buffer, &x509_certificate_writer, &serialization_context);
  params->x509_certificate.Set(
      x509_certificate_writer.is_null() ? nullptr : x509_certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->x509_certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null x509_certificate in NetworkServiceClient.OnCertificateRequested response");
  typename decltype(params->algorithm_preferences)::BaseType::BufferWriter
      algorithm_preferences_writer;
  const mojo::internal::ContainerValidateParams algorithm_preferences_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
      param_algorithm_preferences, buffer, &algorithm_preferences_writer, &algorithm_preferences_validate_params,
      &serialization_context);
  params->algorithm_preferences.Set(
      algorithm_preferences_writer.is_null() ? nullptr : algorithm_preferences_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->algorithm_preferences.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null algorithm_preferences in NetworkServiceClient.OnCertificateRequested response");
  mojo::internal::Serialize<::network::mojom::SSLPrivateKeyPtrDataView>(
      param_ssl_private_key, &params->ssl_private_key, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->ssl_private_key),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid ssl_private_key in NetworkServiceClient.OnCertificateRequested response");
  params->cancel_certificate_selection = param_cancel_certificate_selection;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceClient::OnCertificateRequestedCallback* callback) {
    std::move(*callback).Run(
        std::move(param_x509_certificate_), 
        std::move(param_algorithm_preferences_), 
        SSLPrivateKeyPtr(std::move(param_ssl_private_key_)), 
        std::move(param_cancel_certificate_selection_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->x509_certificate)::BaseType::BufferWriter
      x509_certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_x509_certificate_, buffer, &x509_certificate_writer, serialization_context);
  params->x509_certificate.Set(
      x509_certificate_writer.is_null() ? nullptr : x509_certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->x509_certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null x509_certificate in NetworkServiceClient.OnCertificateRequested response");
  typename decltype(params->algorithm_preferences)::BaseType::BufferWriter
      algorithm_preferences_writer;
  const mojo::internal::ContainerValidateParams algorithm_preferences_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
      param_algorithm_preferences_, buffer, &algorithm_preferences_writer, &algorithm_preferences_validate_params,
      serialization_context);
  params->algorithm_preferences.Set(
      algorithm_preferences_writer.is_null() ? nullptr : algorithm_preferences_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->algorithm_preferences.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null algorithm_preferences in NetworkServiceClient.OnCertificateRequested response");
  mojo::internal::Serialize<::network::mojom::SSLPrivateKeyPtrDataView>(
      param_ssl_private_key_, &params->ssl_private_key, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->ssl_private_key),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid ssl_private_key in NetworkServiceClient.OnCertificateRequested response");
  params->cancel_certificate_selection = param_cancel_certificate_selection_;
  }
  scoped_refptr<net::X509Certificate> param_x509_certificate_;
  std::vector<uint16_t> param_algorithm_preferences_;
  SSLPrivateKeyPtrInfo param_ssl_private_key_;
  bool param_cancel_certificate_selection_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnCertificateRequested_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceClient_OnCertificateRequested_Response_Message::kMessageTag = {};

bool NetworkServiceClient_OnCertificateRequested_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceClient::OnCertificateRequestedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceClient_OnCertificateRequested_Response_Message>();
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
  internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  scoped_refptr<net::X509Certificate> p_x509_certificate{};
  std::vector<uint16_t> p_algorithm_preferences{};
  SSLPrivateKeyPtr p_ssl_private_key{};
  bool p_cancel_certificate_selection{};
  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadX509Certificate(&p_x509_certificate))
    success = false;
  if (!input_data_view.ReadAlgorithmPreferences(&p_algorithm_preferences))
    success = false;
  p_ssl_private_key =
      input_data_view.TakeSslPrivateKey<decltype(p_ssl_private_key)>();
  p_cancel_certificate_selection = input_data_view.cancel_certificate_selection();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceClient::OnCertificateRequested response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_x509_certificate), 
std::move(p_algorithm_preferences), 
std::move(p_ssl_private_key), 
std::move(p_cancel_certificate_selection));
  return true;
}

void NetworkServiceClient_OnCertificateRequested_ProxyToResponder::Run(
    const scoped_refptr<net::X509Certificate>& in_x509_certificate, const std::vector<uint16_t>& in_algorithm_preferences, SSLPrivateKeyPtr in_ssl_private_key, bool in_cancel_certificate_selection) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceClient_OnCertificateRequested_Response_Message::Build(kSerialize, is_sync_, std::move(in_x509_certificate), std::move(in_algorithm_preferences), std::move(in_ssl_private_key), std::move(in_cancel_certificate_selection));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnCertificateRequestedCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceClient_OnSSLCertificateError_ProxyToResponder {
 public:
  static NetworkServiceClient::OnSSLCertificateErrorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnSSLCertificateError_ProxyToResponder> proxy(
        new NetworkServiceClient_OnSSLCertificateError_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnSSLCertificateError_ProxyToResponder() {
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
  NetworkServiceClient_OnSSLCertificateError_ProxyToResponder(
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
        << "NetworkServiceClient::OnSSLCertificateErrorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnSSLCertificateError_ProxyToResponder);
};
class NetworkServiceClient_OnSSLCertificateError_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceClient_OnSSLCertificateError_Response_Message(
      uint32_t message_flags
      , int32_t param_net_error
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceClient_OnSSLCertificateError_Name,
          message_flags)
      , param_net_error_(std::move(param_net_error)){}
  ~NetworkServiceClient_OnSSLCertificateError_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_net_error) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceClient_OnSSLCertificateError_Response_Message>(
          kFlags
          , std::move(param_net_error)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceClient_OnSSLCertificateError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = param_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceClient::OnSSLCertificateErrorCallback* callback) {
    std::move(*callback).Run(
        std::move(param_net_error_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->net_error = param_net_error_;
  }
  int32_t param_net_error_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnSSLCertificateError_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceClient_OnSSLCertificateError_Response_Message::kMessageTag = {};

bool NetworkServiceClient_OnSSLCertificateError_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceClient::OnSSLCertificateErrorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceClient_OnSSLCertificateError_Response_Message>();
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
  internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceClient::OnSSLCertificateError response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::Run(
    int32_t in_net_error) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceClient_OnSSLCertificateError_Response_Message::Build(kSerialize, is_sync_, std::move(in_net_error));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnSSLCertificateErrorCallback",
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
bool NetworkServiceClientStubDispatch::Accept(
    NetworkServiceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnAuthRequired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceClientProxy_OnAuthRequired_Message>();
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
      internal::NetworkServiceClient_OnAuthRequired_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceClient_OnAuthRequired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      uint32_t p_request_id{};
      GURL p_url{};
      GURL p_site_for_cookies{};
      bool p_first_auth_attempt{};
      scoped_refptr<net::AuthChallengeInfo> p_auth_info{};
      int32_t p_resource_type{};
      AuthChallengeResponderPtr p_auth_challenge_responder{};
      NetworkServiceClient_OnAuthRequired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      p_first_auth_attempt = input_data_view.first_auth_attempt();
      if (!input_data_view.ReadAuthInfo(&p_auth_info))
        success = false;
      p_resource_type = input_data_view.resource_type();
      p_auth_challenge_responder =
          input_data_view.TakeAuthChallengeResponder<decltype(p_auth_challenge_responder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceClient::OnAuthRequired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAuthRequired(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_url), 
std::move(p_site_for_cookies), 
std::move(p_first_auth_attempt), 
std::move(p_auth_info), 
std::move(p_resource_type), 
std::move(p_auth_challenge_responder));
      return true;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnCertificateRequested",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnSSLCertificateError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool NetworkServiceClientStubDispatch::AcceptWithResponder(
    NetworkServiceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnAuthRequired",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnCertificateRequested",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceClientProxy_OnCertificateRequested_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceClient::OnCertificateRequestedCallback callback =
              NetworkServiceClient_OnCertificateRequested_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceClient_OnCertificateRequested_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnCertificateRequested_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      uint32_t p_request_id{};
      scoped_refptr<net::SSLCertRequestInfo> p_cert_info{};
      NetworkServiceClient_OnCertificateRequested_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadCertInfo(&p_cert_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceClient::OnCertificateRequested deserializer");
        return false;
      }
      NetworkServiceClient::OnCertificateRequestedCallback callback =
          NetworkServiceClient_OnCertificateRequested_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCertificateRequested(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_cert_info), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceClient::OnSSLCertificateError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceClientProxy_OnSSLCertificateError_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceClient::OnSSLCertificateErrorCallback callback =
              NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnSSLCertificateError_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      uint32_t p_request_id{};
      int32_t p_resource_type{};
      GURL p_url{};
      net::SSLInfo p_ssl_info{};
      bool p_fatal{};
      NetworkServiceClient_OnSSLCertificateError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      p_resource_type = input_data_view.resource_type();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSslInfo(&p_ssl_info))
        success = false;
      p_fatal = input_data_view.fatal();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceClient::OnSSLCertificateError deserializer");
        return false;
      }
      NetworkServiceClient::OnSSLCertificateErrorCallback callback =
          NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSSLCertificateError(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_resource_type), 
std::move(p_url), 
std::move(p_ssl_info), 
std::move(p_fatal), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetworkServiceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnAuthRequired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCertificateRequested_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnSSLCertificateError_Params_Data>(
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

bool NetworkServiceClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data>(
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
void NetworkServiceClientInterceptorForTesting::OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const GURL& url, const GURL& site_for_cookies, bool first_auth_attempt, const scoped_refptr<net::AuthChallengeInfo>& auth_info, int32_t resource_type, AuthChallengeResponderPtr auth_challenge_responder) {
  GetForwardingInterface()->OnAuthRequired(std::move(process_id), std::move(routing_id), std::move(request_id), std::move(url), std::move(site_for_cookies), std::move(first_auth_attempt), std::move(auth_info), std::move(resource_type), std::move(auth_challenge_responder));
}
void NetworkServiceClientInterceptorForTesting::OnCertificateRequested(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, OnCertificateRequestedCallback callback) {
  GetForwardingInterface()->OnCertificateRequested(std::move(process_id), std::move(routing_id), std::move(request_id), std::move(cert_info), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const GURL& url, const net::SSLInfo& ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) {
  GetForwardingInterface()->OnSSLCertificateError(std::move(process_id), std::move(routing_id), std::move(request_id), std::move(resource_type), std::move(url), std::move(ssl_info), std::move(fatal), std::move(callback));
}
NetworkServiceClientAsyncWaiter::NetworkServiceClientAsyncWaiter(
    NetworkServiceClient* proxy) : proxy_(proxy) {}

NetworkServiceClientAsyncWaiter::~NetworkServiceClientAsyncWaiter() = default;

void NetworkServiceClientAsyncWaiter::OnCertificateRequested(
    uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, scoped_refptr<net::X509Certificate>* out_x509_certificate, std::vector<uint16_t>* out_algorithm_preferences, SSLPrivateKeyPtr* out_ssl_private_key, bool* out_cancel_certificate_selection) {
  base::RunLoop loop;
  proxy_->OnCertificateRequested(std::move(process_id),std::move(routing_id),std::move(request_id),std::move(cert_info),
      base::BindOnce(
          [](base::RunLoop* loop,
             scoped_refptr<net::X509Certificate>* out_x509_certificate
,
             std::vector<uint16_t>* out_algorithm_preferences
,
             SSLPrivateKeyPtr* out_ssl_private_key
,
             bool* out_cancel_certificate_selection
,
             const scoped_refptr<net::X509Certificate>& x509_certificate,
             const std::vector<uint16_t>& algorithm_preferences,
             SSLPrivateKeyPtr ssl_private_key,
             bool cancel_certificate_selection) {*out_x509_certificate = std::move(x509_certificate);*out_algorithm_preferences = std::move(algorithm_preferences);*out_ssl_private_key = std::move(ssl_private_key);*out_cancel_certificate_selection = std::move(cancel_certificate_selection);
            loop->Quit();
          },
          &loop,
          out_x509_certificate,
          out_algorithm_preferences,
          out_ssl_private_key,
          out_cancel_certificate_selection));
  loop.Run();
}
void NetworkServiceClientAsyncWaiter::OnSSLCertificateError(
    uint32_t process_id, uint32_t routing_id, uint32_t request_id, int32_t resource_type, const GURL& url, const net::SSLInfo& ssl_info, bool fatal, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->OnSSLCertificateError(std::move(process_id),std::move(routing_id),std::move(request_id),std::move(resource_type),std::move(url),std::move(ssl_info),std::move(fatal),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}

const char NetworkService::Name_[] = "network.mojom.NetworkService";

class NetworkService_GetTotalNetworkUsages_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_GetTotalNetworkUsages_ForwardToCallback(
      NetworkService::GetTotalNetworkUsagesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::GetTotalNetworkUsagesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetTotalNetworkUsages_ForwardToCallback);
};

NetworkServiceProxy::NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkServiceProxy_SetClient_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_SetClient_Message(
      uint32_t message_flags
      , NetworkServiceClientPtr param_client
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_SetClient_Name,
          message_flags)
      , param_client_(param_client.PassInterface()){}
  ~NetworkServiceProxy_SetClient_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      NetworkServiceClientPtr param_client) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_SetClient_Message>(
          kFlags
          , std::move(param_client)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceClientPtrDataView>(
      param_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NetworkService.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->SetClient(
        NetworkServiceClientPtr(std::move(param_client_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_SetClient_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceClientPtrDataView>(
      param_client_, &params->client, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NetworkService.SetClient request");
  }
  NetworkServiceClientPtrInfo param_client_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_SetClient_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_SetClient_Message::kMessageTag = {};

void NetworkServiceProxy::SetClient(
    NetworkServiceClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_SetClient_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_client));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceProxy_CreateNetworkContext_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_CreateNetworkContext_Message(
      uint32_t message_flags
      , ::network::mojom::NetworkContextRequest param_context
      , ::network::mojom::NetworkContextParamsPtr param_params
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_CreateNetworkContext_Name,
          message_flags)
      , param_context_(std::move(param_context))
      , param_params_(std::move(param_params)){}
  ~NetworkServiceProxy_CreateNetworkContext_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::NetworkContextRequest param_context, ::network::mojom::NetworkContextParamsPtr param_params) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_CreateNetworkContext_Message>(
          kFlags
          , std::move(param_context)
          , std::move(param_params)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_CreateNetworkContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_CreateNetworkContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkContextRequestDataView>(
      param_context, &params->context, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->context),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid context in NetworkService.CreateNetworkContext request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::NetworkContextParamsDataView>(
      param_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkService.CreateNetworkContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->CreateNetworkContext(
        std::move(param_context_),
        std::move(param_params_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_CreateNetworkContext_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkContextRequestDataView>(
      param_context_, &params->context, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->context),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid context in NetworkService.CreateNetworkContext request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::NetworkContextParamsDataView>(
      param_params_, buffer, &params_writer, serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkService.CreateNetworkContext request");
  }
  ::network::mojom::NetworkContextRequest param_context_;
  ::network::mojom::NetworkContextParamsPtr param_params_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_CreateNetworkContext_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_CreateNetworkContext_Message::kMessageTag = {};

void NetworkServiceProxy::CreateNetworkContext(
    ::network::mojom::NetworkContextRequest in_context, ::network::mojom::NetworkContextParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::CreateNetworkContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_CreateNetworkContext_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_context), std::move(in_params));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceProxy_DisableQuic_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_DisableQuic_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_DisableQuic_Name,
          message_flags){}
  ~NetworkServiceProxy_DisableQuic_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_DisableQuic_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_DisableQuic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_DisableQuic_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->DisableQuic();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_DisableQuic_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_DisableQuic_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_DisableQuic_Message::kMessageTag = {};

void NetworkServiceProxy::DisableQuic(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::DisableQuic");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_DisableQuic_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceProxy_SetRawHeadersAccess_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_SetRawHeadersAccess_Message(
      uint32_t message_flags
      , uint32_t param_process_id
      , bool param_allow
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_SetRawHeadersAccess_Name,
          message_flags)
      , param_process_id_(std::move(param_process_id))
      , param_allow_(std::move(param_allow)){}
  ~NetworkServiceProxy_SetRawHeadersAccess_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      uint32_t param_process_id, bool param_allow) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_SetRawHeadersAccess_Message>(
          kFlags
          , std::move(param_process_id)
          , std::move(param_allow)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_SetRawHeadersAccess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetRawHeadersAccess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = param_process_id;
  params->allow = param_allow;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->SetRawHeadersAccess(
        std::move(param_process_id_),
        std::move(param_allow_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_SetRawHeadersAccess_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->process_id = param_process_id_;
  params->allow = param_allow_;
  }
  uint32_t param_process_id_;
  bool param_allow_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_SetRawHeadersAccess_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_SetRawHeadersAccess_Message::kMessageTag = {};

void NetworkServiceProxy::SetRawHeadersAccess(
    uint32_t in_process_id, bool in_allow) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::SetRawHeadersAccess");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_SetRawHeadersAccess_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_process_id), std::move(in_allow));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceProxy_GetNetworkChangeManager_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_GetNetworkChangeManager_Message(
      uint32_t message_flags
      , ::network::mojom::NetworkChangeManagerRequest param_network_change_manager
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_GetNetworkChangeManager_Name,
          message_flags)
      , param_network_change_manager_(std::move(param_network_change_manager)){}
  ~NetworkServiceProxy_GetNetworkChangeManager_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::NetworkChangeManagerRequest param_network_change_manager) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_GetNetworkChangeManager_Message>(
          kFlags
          , std::move(param_network_change_manager)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_GetNetworkChangeManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetNetworkChangeManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkChangeManagerRequestDataView>(
      param_network_change_manager, &params->network_change_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->network_change_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid network_change_manager in NetworkService.GetNetworkChangeManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->GetNetworkChangeManager(
        std::move(param_network_change_manager_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_GetNetworkChangeManager_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkChangeManagerRequestDataView>(
      param_network_change_manager_, &params->network_change_manager, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->network_change_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid network_change_manager in NetworkService.GetNetworkChangeManager request");
  }
  ::network::mojom::NetworkChangeManagerRequest param_network_change_manager_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_GetNetworkChangeManager_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_GetNetworkChangeManager_Message::kMessageTag = {};

void NetworkServiceProxy::GetNetworkChangeManager(
    ::network::mojom::NetworkChangeManagerRequest in_network_change_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::GetNetworkChangeManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_GetNetworkChangeManager_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_network_change_manager));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceProxy_GetTotalNetworkUsages_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_GetTotalNetworkUsages_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_GetTotalNetworkUsages_Name,
          message_flags){}
  ~NetworkServiceProxy_GetTotalNetworkUsages_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_GetTotalNetworkUsages_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_GetTotalNetworkUsages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl, NetworkService::GetTotalNetworkUsagesCallback callback) {
    impl->GetTotalNetworkUsages(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_GetTotalNetworkUsages_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_GetTotalNetworkUsages_Message::kMessageTag = {};

void NetworkServiceProxy::GetTotalNetworkUsages(
    GetTotalNetworkUsagesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::GetTotalNetworkUsages");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_GetTotalNetworkUsages_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkService_GetTotalNetworkUsages_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceProxy_UpdateSignedTreeHead_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceProxy_UpdateSignedTreeHead_Message(
      uint32_t message_flags
      , const net::ct::SignedTreeHead& param_signed_tree_head
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_UpdateSignedTreeHead_Name,
          message_flags)
      , param_signed_tree_head_(std::move(param_signed_tree_head)){}
  ~NetworkServiceProxy_UpdateSignedTreeHead_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const net::ct::SignedTreeHead& param_signed_tree_head) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceProxy_UpdateSignedTreeHead_Message>(
          kFlags
          , std::move(param_signed_tree_head)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_UpdateSignedTreeHead_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_UpdateSignedTreeHead_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signed_tree_head)::BaseType::BufferWriter
      signed_tree_head_writer;
  mojo::internal::Serialize<::network::mojom::SignedTreeHeadDataView>(
      param_signed_tree_head, buffer, &signed_tree_head_writer, &serialization_context);
  params->signed_tree_head.Set(
      signed_tree_head_writer.is_null() ? nullptr : signed_tree_head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signed_tree_head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signed_tree_head in NetworkService.UpdateSignedTreeHead request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService* impl) {
    impl->UpdateSignedTreeHead(
        std::move(param_signed_tree_head_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_UpdateSignedTreeHead_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->signed_tree_head)::BaseType::BufferWriter
      signed_tree_head_writer;
  mojo::internal::Serialize<::network::mojom::SignedTreeHeadDataView>(
      param_signed_tree_head_, buffer, &signed_tree_head_writer, serialization_context);
  params->signed_tree_head.Set(
      signed_tree_head_writer.is_null() ? nullptr : signed_tree_head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signed_tree_head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signed_tree_head in NetworkService.UpdateSignedTreeHead request");
  }
  net::ct::SignedTreeHead param_signed_tree_head_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceProxy_UpdateSignedTreeHead_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceProxy_UpdateSignedTreeHead_Message::kMessageTag = {};

void NetworkServiceProxy::UpdateSignedTreeHead(
    const net::ct::SignedTreeHead& in_signed_tree_head) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkService::UpdateSignedTreeHead");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceProxy_UpdateSignedTreeHead_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_signed_tree_head));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkService_GetTotalNetworkUsages_ProxyToResponder {
 public:
  static NetworkService::GetTotalNetworkUsagesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkService_GetTotalNetworkUsages_ProxyToResponder> proxy(
        new NetworkService_GetTotalNetworkUsages_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkService_GetTotalNetworkUsages_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkService_GetTotalNetworkUsages_ProxyToResponder() {
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
  NetworkService_GetTotalNetworkUsages_ProxyToResponder(
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
        << "NetworkService::GetTotalNetworkUsagesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::network::mojom::NetworkUsagePtr> in_total_network_usages);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetTotalNetworkUsages_ProxyToResponder);
};
class NetworkService_GetTotalNetworkUsages_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkService_GetTotalNetworkUsages_Response_Message(
      uint32_t message_flags
      , std::vector<::network::mojom::NetworkUsagePtr> param_total_network_usages
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkService_GetTotalNetworkUsages_Name,
          message_flags)
      , param_total_network_usages_(std::move(param_total_network_usages)){}
  ~NetworkService_GetTotalNetworkUsages_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      std::vector<::network::mojom::NetworkUsagePtr> param_total_network_usages) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkService_GetTotalNetworkUsages_Response_Message>(
          kFlags
          , std::move(param_total_network_usages)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkService_GetTotalNetworkUsages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->total_network_usages)::BaseType::BufferWriter
      total_network_usages_writer;
  const mojo::internal::ContainerValidateParams total_network_usages_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>>(
      param_total_network_usages, buffer, &total_network_usages_writer, &total_network_usages_validate_params,
      &serialization_context);
  params->total_network_usages.Set(
      total_network_usages_writer.is_null() ? nullptr : total_network_usages_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->total_network_usages.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null total_network_usages in NetworkService.GetTotalNetworkUsages response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkService::GetTotalNetworkUsagesCallback* callback) {
    std::move(*callback).Run(
        std::move(param_total_network_usages_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->total_network_usages)::BaseType::BufferWriter
      total_network_usages_writer;
  const mojo::internal::ContainerValidateParams total_network_usages_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>>(
      param_total_network_usages_, buffer, &total_network_usages_writer, &total_network_usages_validate_params,
      serialization_context);
  params->total_network_usages.Set(
      total_network_usages_writer.is_null() ? nullptr : total_network_usages_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->total_network_usages.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null total_network_usages in NetworkService.GetTotalNetworkUsages response");
  }
  std::vector<::network::mojom::NetworkUsagePtr> param_total_network_usages_;

  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetTotalNetworkUsages_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkService_GetTotalNetworkUsages_Response_Message::kMessageTag = {};

bool NetworkService_GetTotalNetworkUsages_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkService::GetTotalNetworkUsagesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkService_GetTotalNetworkUsages_Response_Message>();
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
  internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::network::mojom::NetworkUsagePtr> p_total_network_usages{};
  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTotalNetworkUsages(&p_total_network_usages))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkService::GetTotalNetworkUsages response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_total_network_usages));
  return true;
}

void NetworkService_GetTotalNetworkUsages_ProxyToResponder::Run(
    std::vector<::network::mojom::NetworkUsagePtr> in_total_network_usages) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkService_GetTotalNetworkUsages_Response_Message::Build(kSerialize, is_sync_, std::move(in_total_network_usages));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::GetTotalNetworkUsagesCallback",
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
bool NetworkServiceStubDispatch::Accept(
    NetworkService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::SetClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_SetClient_Message>();
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
      internal::NetworkService_SetClient_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceClientPtr p_client{};
      NetworkService_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::SetClient deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::CreateNetworkContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_CreateNetworkContext_Message>();
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
      internal::NetworkService_CreateNetworkContext_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateNetworkContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::NetworkContextRequest p_context{};
      ::network::mojom::NetworkContextParamsPtr p_params{};
      NetworkService_CreateNetworkContext_ParamsDataView input_data_view(params, &serialization_context);
      
      p_context =
          input_data_view.TakeContext<decltype(p_context)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::CreateNetworkContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateNetworkContext(
std::move(p_context), 
std::move(p_params));
      return true;
    }
    case internal::kNetworkService_DisableQuic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::DisableQuic",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_DisableQuic_Message>();
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
      internal::NetworkService_DisableQuic_Params_Data* params =
          reinterpret_cast<internal::NetworkService_DisableQuic_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkService_DisableQuic_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::DisableQuic deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DisableQuic();
      return true;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::SetRawHeadersAccess",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_SetRawHeadersAccess_Message>();
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
      internal::NetworkService_SetRawHeadersAccess_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetRawHeadersAccess_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      bool p_allow{};
      NetworkService_SetRawHeadersAccess_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_allow = input_data_view.allow();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::SetRawHeadersAccess deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetRawHeadersAccess(
std::move(p_process_id), 
std::move(p_allow));
      return true;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::GetNetworkChangeManager",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_GetNetworkChangeManager_Message>();
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
      internal::NetworkService_GetNetworkChangeManager_Params_Data* params =
          reinterpret_cast<internal::NetworkService_GetNetworkChangeManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::NetworkChangeManagerRequest p_network_change_manager{};
      NetworkService_GetNetworkChangeManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_network_change_manager =
          input_data_view.TakeNetworkChangeManager<decltype(p_network_change_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::GetNetworkChangeManager deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetNetworkChangeManager(
std::move(p_network_change_manager));
      return true;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::GetTotalNetworkUsages",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::UpdateSignedTreeHead",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_UpdateSignedTreeHead_Message>();
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
      internal::NetworkService_UpdateSignedTreeHead_Params_Data* params =
          reinterpret_cast<internal::NetworkService_UpdateSignedTreeHead_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::ct::SignedTreeHead p_signed_tree_head{};
      NetworkService_UpdateSignedTreeHead_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSignedTreeHead(&p_signed_tree_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::UpdateSignedTreeHead deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateSignedTreeHead(
std::move(p_signed_tree_head));
      return true;
    }
  }
  return false;
}

// static
bool NetworkServiceStubDispatch::AcceptWithResponder(
    NetworkService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::SetClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::CreateNetworkContext",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_DisableQuic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::DisableQuic",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::SetRawHeadersAccess",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::GetNetworkChangeManager",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::GetTotalNetworkUsages",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceProxy_GetTotalNetworkUsages_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkService::GetTotalNetworkUsagesCallback callback =
              NetworkService_GetTotalNetworkUsages_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkService_GetTotalNetworkUsages_Params_Data* params =
          reinterpret_cast<
              internal::NetworkService_GetTotalNetworkUsages_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkService_GetTotalNetworkUsages_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkService::GetTotalNetworkUsages deserializer");
        return false;
      }
      NetworkService::GetTotalNetworkUsagesCallback callback =
          NetworkService_GetTotalNetworkUsages_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetTotalNetworkUsages(std::move(callback));
      return true;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkService::UpdateSignedTreeHead",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NetworkServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkService RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateNetworkContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_DisableQuic_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_DisableQuic_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetRawHeadersAccess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetNetworkChangeManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetTotalNetworkUsages_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_UpdateSignedTreeHead_Params_Data>(
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

bool NetworkServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data>(
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
void NetworkServiceInterceptorForTesting::SetClient(NetworkServiceClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void NetworkServiceInterceptorForTesting::CreateNetworkContext(::network::mojom::NetworkContextRequest context, ::network::mojom::NetworkContextParamsPtr params) {
  GetForwardingInterface()->CreateNetworkContext(std::move(context), std::move(params));
}
void NetworkServiceInterceptorForTesting::DisableQuic() {
  GetForwardingInterface()->DisableQuic();
}
void NetworkServiceInterceptorForTesting::SetRawHeadersAccess(uint32_t process_id, bool allow) {
  GetForwardingInterface()->SetRawHeadersAccess(std::move(process_id), std::move(allow));
}
void NetworkServiceInterceptorForTesting::GetNetworkChangeManager(::network::mojom::NetworkChangeManagerRequest network_change_manager) {
  GetForwardingInterface()->GetNetworkChangeManager(std::move(network_change_manager));
}
void NetworkServiceInterceptorForTesting::GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) {
  GetForwardingInterface()->GetTotalNetworkUsages(std::move(callback));
}
void NetworkServiceInterceptorForTesting::UpdateSignedTreeHead(const net::ct::SignedTreeHead& signed_tree_head) {
  GetForwardingInterface()->UpdateSignedTreeHead(std::move(signed_tree_head));
}
NetworkServiceAsyncWaiter::NetworkServiceAsyncWaiter(
    NetworkService* proxy) : proxy_(proxy) {}

NetworkServiceAsyncWaiter::~NetworkServiceAsyncWaiter() = default;

void NetworkServiceAsyncWaiter::GetTotalNetworkUsages(
    std::vector<::network::mojom::NetworkUsagePtr>* out_total_network_usages) {
  base::RunLoop loop;
  proxy_->GetTotalNetworkUsages(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::network::mojom::NetworkUsagePtr>* out_total_network_usages
,
             std::vector<::network::mojom::NetworkUsagePtr> total_network_usages) {*out_total_network_usages = std::move(total_network_usages);
            loop->Quit();
          },
          &loop,
          out_total_network_usages));
  loop.Run();
}

}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
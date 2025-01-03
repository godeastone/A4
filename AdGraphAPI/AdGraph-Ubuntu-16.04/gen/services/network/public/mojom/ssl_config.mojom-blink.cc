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

#include "services/network/public/mojom/ssl_config.mojom-blink.h"

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

#include "services/network/public/mojom/ssl_config.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace network {
namespace mojom {
namespace blink {
SSLConfig::SSLConfig()
    : rev_checking_enabled(false),
      rev_checking_required_local_anchors(false),
      sha1_local_anchors_enabled(false),
      symantec_enforcement_disabled(false),
      version_min(SSLVersion::kTLS1),
      version_max(SSLVersion::kTLS12),
      tls13_variant(TLS13Variant::kDraft23),
      disabled_cipher_suites() {}

SSLConfig::SSLConfig(
    bool rev_checking_enabled_in,
    bool rev_checking_required_local_anchors_in,
    bool sha1_local_anchors_enabled_in,
    bool symantec_enforcement_disabled_in,
    SSLVersion version_min_in,
    SSLVersion version_max_in,
    TLS13Variant tls13_variant_in,
    const WTF::Vector<uint16_t>& disabled_cipher_suites_in)
    : rev_checking_enabled(std::move(rev_checking_enabled_in)),
      rev_checking_required_local_anchors(std::move(rev_checking_required_local_anchors_in)),
      sha1_local_anchors_enabled(std::move(sha1_local_anchors_enabled_in)),
      symantec_enforcement_disabled(std::move(symantec_enforcement_disabled_in)),
      version_min(std::move(version_min_in)),
      version_max(std::move(version_max_in)),
      tls13_variant(std::move(tls13_variant_in)),
      disabled_cipher_suites(std::move(disabled_cipher_suites_in)) {}

SSLConfig::~SSLConfig() = default;

bool SSLConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SSLConfigClient::Name_[] = "network.mojom.SSLConfigClient";

SSLConfigClientProxy::SSLConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class SSLConfigClientProxy_OnSSLConfigUpdated_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SSLConfigClientProxy_OnSSLConfigUpdated_Message(
      uint32_t message_flags
      , SSLConfigPtr param_ssl_config
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSSLConfigClient_OnSSLConfigUpdated_Name,
          message_flags)
      , param_ssl_config_(std::move(param_ssl_config)){}
  ~SSLConfigClientProxy_OnSSLConfigUpdated_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      SSLConfigPtr param_ssl_config) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SSLConfigClientProxy_OnSSLConfigUpdated_Message>(
          kFlags
          , std::move(param_ssl_config)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSSLConfigClient_OnSSLConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ssl_config)::BaseType::BufferWriter
      ssl_config_writer;
  mojo::internal::Serialize<::network::mojom::SSLConfigDataView>(
      param_ssl_config, buffer, &ssl_config_writer, &serialization_context);
  params->ssl_config.Set(
      ssl_config_writer.is_null() ? nullptr : ssl_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_config in SSLConfigClient.OnSSLConfigUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SSLConfigClient* impl) {
    impl->OnSSLConfigUpdated(
        std::move(param_ssl_config_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->ssl_config)::BaseType::BufferWriter
      ssl_config_writer;
  mojo::internal::Serialize<::network::mojom::SSLConfigDataView>(
      param_ssl_config_, buffer, &ssl_config_writer, serialization_context);
  params->ssl_config.Set(
      ssl_config_writer.is_null() ? nullptr : ssl_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_config in SSLConfigClient.OnSSLConfigUpdated request");
  }
  SSLConfigPtr param_ssl_config_;

  DISALLOW_COPY_AND_ASSIGN(SSLConfigClientProxy_OnSSLConfigUpdated_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SSLConfigClientProxy_OnSSLConfigUpdated_Message::kMessageTag = {};

void SSLConfigClientProxy::OnSSLConfigUpdated(
    SSLConfigPtr in_ssl_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::SSLConfigClient::OnSSLConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = SSLConfigClientProxy_OnSSLConfigUpdated_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_ssl_config));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SSLConfigClientStubDispatch::Accept(
    SSLConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SSLConfigClient::OnSSLConfigUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            SSLConfigClientProxy_OnSSLConfigUpdated_Message>();
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
      internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SSLConfigPtr p_ssl_config{};
      SSLConfigClient_OnSSLConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSslConfig(&p_ssl_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SSLConfigClient::OnSSLConfigUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSSLConfigUpdated(
std::move(p_ssl_config));
      return true;
    }
  }
  return false;
}

// static
bool SSLConfigClientStubDispatch::AcceptWithResponder(
    SSLConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::SSLConfigClient::OnSSLConfigUpdated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SSLConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data>(
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

void SSLConfigClientInterceptorForTesting::OnSSLConfigUpdated(SSLConfigPtr ssl_config) {
  GetForwardingInterface()->OnSSLConfigUpdated(std::move(ssl_config));
}
SSLConfigClientAsyncWaiter::SSLConfigClientAsyncWaiter(
    SSLConfigClient* proxy) : proxy_(proxy) {}

SSLConfigClientAsyncWaiter::~SSLConfigClientAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::SSLConfig::DataView, ::network::mojom::blink::SSLConfigPtr>::Read(
    ::network::mojom::blink::SSLConfig::DataView input,
    ::network::mojom::blink::SSLConfigPtr* output) {
  bool success = true;
  ::network::mojom::blink::SSLConfigPtr result(::network::mojom::blink::SSLConfig::New());
  
      result->rev_checking_enabled = input.rev_checking_enabled();
      result->rev_checking_required_local_anchors = input.rev_checking_required_local_anchors();
      result->sha1_local_anchors_enabled = input.sha1_local_anchors_enabled();
      result->symantec_enforcement_disabled = input.symantec_enforcement_disabled();
      if (!input.ReadVersionMin(&result->version_min))
        success = false;
      if (!input.ReadVersionMax(&result->version_max))
        success = false;
      if (!input.ReadTls13Variant(&result->tls13_variant))
        success = false;
      if (!input.ReadDisabledCipherSuites(&result->disabled_cipher_suites))
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
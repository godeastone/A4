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

#include "services/network/public/mojom/network_service_test.mojom.h"

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

#include "services/network/public/mojom/network_service_test.mojom-shared-message-ids.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
namespace network {
namespace mojom {
Rule::Rule()
    : host_pattern(),
      replacement() {}

Rule::Rule(
    const std::string& host_pattern_in,
    const std::string& replacement_in)
    : host_pattern(std::move(host_pattern_in)),
      replacement(std::move(replacement_in)) {}

Rule::~Rule() = default;
size_t Rule::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->host_pattern);
  seed = mojo::internal::Hash(seed, this->replacement);
  return seed;
}

bool Rule::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NetworkServiceTest::Name_[] = "network.mojom.NetworkServiceTest";
bool NetworkServiceTest::AddRules(std::vector<RulePtr> rules) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::MockCertVerifierSetDefaultResult(int32_t default_result) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::MockCertVerifierAddResultForCertAndHost(const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required) {
  NOTREACHED();
  return false;
}
class NetworkServiceTest_AddRules_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_AddRules_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_HandleSyncResponse);
};

class NetworkServiceTest_AddRules_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_AddRules_ForwardToCallback(
      NetworkServiceTest::AddRulesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::AddRulesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_ForwardToCallback);
};

class NetworkServiceTest_SimulateNetworkChange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SimulateNetworkChange_ForwardToCallback(
      NetworkServiceTest::SimulateNetworkChangeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SimulateNetworkChangeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkChange_ForwardToCallback);
};
class NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse);
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback(
      NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback);
};
class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse);
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback(
      NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback);
};
class NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse);
};

class NetworkServiceTest_SetShouldRequireCT_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetShouldRequireCT_ForwardToCallback(
      NetworkServiceTest::SetShouldRequireCTCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SetShouldRequireCTCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_ForwardToCallback);
};

NetworkServiceTestProxy::NetworkServiceTestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkServiceTestProxy_AddRules_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_AddRules_Message(
      uint32_t message_flags
      , std::vector<RulePtr> param_rules
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_AddRules_Name,
          message_flags)
      , param_rules_(std::move(param_rules)){}
  ~NetworkServiceTestProxy_AddRules_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      std::vector<RulePtr> param_rules) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_AddRules_Message>(
          kFlags
          , std::move(param_rules)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_AddRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_AddRules_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rules)::BaseType::BufferWriter
      rules_writer;
  const mojo::internal::ContainerValidateParams rules_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
      param_rules, buffer, &rules_writer, &rules_validate_params,
      &serialization_context);
  params->rules.Set(
      rules_writer.is_null() ? nullptr : rules_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rules.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rules in NetworkServiceTest.AddRules request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl, NetworkServiceTest::AddRulesCallback callback) {
    impl->AddRules(
        std::move(param_rules_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_AddRules_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->rules)::BaseType::BufferWriter
      rules_writer;
  const mojo::internal::ContainerValidateParams rules_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
      param_rules_, buffer, &rules_writer, &rules_validate_params,
      serialization_context);
  params->rules.Set(
      rules_writer.is_null() ? nullptr : rules_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rules.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rules in NetworkServiceTest.AddRules request");
  }
  std::vector<RulePtr> param_rules_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_AddRules_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_AddRules_Message::kMessageTag = {};
bool NetworkServiceTestProxy::AddRules(
    std::vector<RulePtr> param_rules) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::AddRules");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_AddRules_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_rules));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_AddRules_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::AddRules(
    std::vector<RulePtr> in_rules, AddRulesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::AddRules");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_AddRules_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_rules));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_AddRules_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTestProxy_SimulateNetworkChange_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_SimulateNetworkChange_Message(
      uint32_t message_flags
      , ::network::mojom::ConnectionType param_type
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_SimulateNetworkChange_Name,
          message_flags)
      , param_type_(std::move(param_type)){}
  ~NetworkServiceTestProxy_SimulateNetworkChange_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::network::mojom::ConnectionType param_type) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_SimulateNetworkChange_Message>(
          kFlags
          , std::move(param_type)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl, NetworkServiceTest::SimulateNetworkChangeCallback callback) {
    impl->SimulateNetworkChange(
        std::move(param_type_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type_, &params->type);
  }
  ::network::mojom::ConnectionType param_type_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_SimulateNetworkChange_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_SimulateNetworkChange_Message::kMessageTag = {};

void NetworkServiceTestProxy::SimulateNetworkChange(
    ::network::mojom::ConnectionType in_type, SimulateNetworkChangeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::SimulateNetworkChange");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_SimulateNetworkChange_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_type));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SimulateNetworkChange_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTestProxy_SimulateCrash_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_SimulateCrash_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_SimulateCrash_Name,
          message_flags){}
  ~NetworkServiceTestProxy_SimulateCrash_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_SimulateCrash_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateCrash_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateCrash_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl) {
    impl->SimulateCrash();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_SimulateCrash_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_SimulateCrash_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_SimulateCrash_Message::kMessageTag = {};

void NetworkServiceTestProxy::SimulateCrash(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::SimulateCrash");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_SimulateCrash_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message(
      uint32_t message_flags
      , int32_t param_default_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name,
          message_flags)
      , param_default_result_(std::move(param_default_result)){}
  ~NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_default_result) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message>(
          kFlags
          , std::move(param_default_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->default_result = param_default_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl, NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback) {
    impl->MockCertVerifierSetDefaultResult(
        std::move(param_default_result_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->default_result = param_default_result_;
  }
  int32_t param_default_result_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message::kMessageTag = {};
bool NetworkServiceTestProxy::MockCertVerifierSetDefaultResult(
    int32_t param_default_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_default_result));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::MockCertVerifierSetDefaultResult(
    int32_t in_default_result, MockCertVerifierSetDefaultResultCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_default_result));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message(
      uint32_t message_flags
      , const scoped_refptr<net::X509Certificate>& param_cert
      , const std::string& param_host_pattern
      , const net::CertVerifyResult& param_verify_result
      , int32_t param_rv
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name,
          message_flags)
      , param_cert_(std::move(param_cert))
      , param_host_pattern_(std::move(param_host_pattern))
      , param_verify_result_(std::move(param_verify_result))
      , param_rv_(std::move(param_rv)){}
  ~NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const scoped_refptr<net::X509Certificate>& param_cert, const std::string& param_host_pattern, const net::CertVerifyResult& param_verify_result, int32_t param_rv) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message>(
          kFlags
          , std::move(param_cert)
          , std::move(param_host_pattern)
          , std::move(param_verify_result)
          , std::move(param_rv)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cert)::BaseType::BufferWriter
      cert_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_cert, buffer, &cert_writer, &serialization_context);
  params->cert.Set(
      cert_writer.is_null() ? nullptr : cert_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->host_pattern)::BaseType::BufferWriter
      host_pattern_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_host_pattern, buffer, &host_pattern_writer, &serialization_context);
  params->host_pattern.Set(
      host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_pattern.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_pattern in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->verify_result)::BaseType::BufferWriter
      verify_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      param_verify_result, buffer, &verify_result_writer, &serialization_context);
  params->verify_result.Set(
      verify_result_writer.is_null() ? nullptr : verify_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->verify_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null verify_result in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  params->rv = param_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl, NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback) {
    impl->MockCertVerifierAddResultForCertAndHost(
        std::move(param_cert_),
        std::move(param_host_pattern_),
        std::move(param_verify_result_),
        std::move(param_rv_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->cert)::BaseType::BufferWriter
      cert_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_cert_, buffer, &cert_writer, serialization_context);
  params->cert.Set(
      cert_writer.is_null() ? nullptr : cert_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->host_pattern)::BaseType::BufferWriter
      host_pattern_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_host_pattern_, buffer, &host_pattern_writer, serialization_context);
  params->host_pattern.Set(
      host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_pattern.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_pattern in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->verify_result)::BaseType::BufferWriter
      verify_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      param_verify_result_, buffer, &verify_result_writer, serialization_context);
  params->verify_result.Set(
      verify_result_writer.is_null() ? nullptr : verify_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->verify_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null verify_result in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  params->rv = param_rv_;
  }
  scoped_refptr<net::X509Certificate> param_cert_;
  std::string param_host_pattern_;
  net::CertVerifyResult param_verify_result_;
  int32_t param_rv_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message::kMessageTag = {};
bool NetworkServiceTestProxy::MockCertVerifierAddResultForCertAndHost(
    const scoped_refptr<net::X509Certificate>& param_cert, const std::string& param_host_pattern, const net::CertVerifyResult& param_verify_result, int32_t param_rv) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_cert), std::move(param_host_pattern), std::move(param_verify_result), std::move(param_rv));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::MockCertVerifierAddResultForCertAndHost(
    const scoped_refptr<net::X509Certificate>& in_cert, const std::string& in_host_pattern, const net::CertVerifyResult& in_verify_result, int32_t in_rv, MockCertVerifierAddResultForCertAndHostCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_cert), std::move(in_host_pattern), std::move(in_verify_result), std::move(in_rv));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTestProxy_SetShouldRequireCT_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTestProxy_SetShouldRequireCT_Message(
      uint32_t message_flags
      , NetworkServiceTest::ShouldRequireCT param_required
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_SetShouldRequireCT_Name,
          message_flags)
      , param_required_(std::move(param_required)){}
  ~NetworkServiceTestProxy_SetShouldRequireCT_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      NetworkServiceTest::ShouldRequireCT param_required) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTestProxy_SetShouldRequireCT_Message>(
          kFlags
          , std::move(param_required)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_SetShouldRequireCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
      param_required, &params->required);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest* impl, NetworkServiceTest::SetShouldRequireCTCallback callback) {
    impl->SetShouldRequireCT(
        std::move(param_required_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
      param_required_, &params->required);
  }
  NetworkServiceTest::ShouldRequireCT param_required_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestProxy_SetShouldRequireCT_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTestProxy_SetShouldRequireCT_Message::kMessageTag = {};
bool NetworkServiceTestProxy::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT param_required) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::SetShouldRequireCT");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_SetShouldRequireCT_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_required));

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT in_required, SetShouldRequireCTCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkServiceTest::SetShouldRequireCT");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkServiceTestProxy_SetShouldRequireCT_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_required));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetShouldRequireCT_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTest_AddRules_ProxyToResponder {
 public:
  static NetworkServiceTest::AddRulesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_AddRules_ProxyToResponder> proxy(
        new NetworkServiceTest_AddRules_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_AddRules_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_AddRules_ProxyToResponder() {
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
  NetworkServiceTest_AddRules_ProxyToResponder(
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
        << "NetworkServiceTest::AddRulesCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_ProxyToResponder);
};
class NetworkServiceTest_AddRules_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTest_AddRules_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_AddRules_Name,
          message_flags){}
  ~NetworkServiceTest_AddRules_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTest_AddRules_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_AddRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_AddRules_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest::AddRulesCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_AddRules_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTest_AddRules_Response_Message::kMessageTag = {};

bool NetworkServiceTest_AddRules_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceTest::AddRulesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_AddRules_Response_Message>();
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
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_AddRules_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_AddRules_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::AddRules response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_AddRules_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceTest_AddRules_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::AddRulesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_AddRules_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_AddRules_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_AddRules_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_AddRules_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::AddRules response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_SimulateNetworkChange_ProxyToResponder {
 public:
  static NetworkServiceTest::SimulateNetworkChangeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SimulateNetworkChange_ProxyToResponder> proxy(
        new NetworkServiceTest_SimulateNetworkChange_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SimulateNetworkChange_ProxyToResponder() {
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
  NetworkServiceTest_SimulateNetworkChange_ProxyToResponder(
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
        << "NetworkServiceTest::SimulateNetworkChangeCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkChange_ProxyToResponder);
};
class NetworkServiceTest_SimulateNetworkChange_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTest_SimulateNetworkChange_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_SimulateNetworkChange_Name,
          message_flags){}
  ~NetworkServiceTest_SimulateNetworkChange_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTest_SimulateNetworkChange_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest::SimulateNetworkChangeCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkChange_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTest_SimulateNetworkChange_Response_Message::kMessageTag = {};

bool NetworkServiceTest_SimulateNetworkChange_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceTest::SimulateNetworkChangeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_SimulateNetworkChange_Response_Message>();
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
  internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::SimulateNetworkChange response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceTest_SimulateNetworkChange_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SimulateNetworkChangeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder {
 public:
  static NetworkServiceTest::MockCertVerifierSetDefaultResultCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder> proxy(
        new NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder() {
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
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder(
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
        << "NetworkServiceTest::MockCertVerifierSetDefaultResultCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder);
};
class NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name,
          message_flags){}
  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest::MockCertVerifierSetDefaultResultCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message::kMessageTag = {};

bool NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResultCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message>();
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
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::MockCertVerifierSetDefaultResult response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResultCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_MockCertVerifierSetDefaultResult_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::MockCertVerifierSetDefaultResult response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder {
 public:
  static NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder> proxy(
        new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder() {
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
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder(
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
        << "NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder);
};
class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name,
          message_flags){}
  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message::kMessageTag = {};

bool NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message>();
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
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::MockCertVerifierAddResultForCertAndHost response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::MockCertVerifierAddResultForCertAndHost response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_SetShouldRequireCT_ProxyToResponder {
 public:
  static NetworkServiceTest::SetShouldRequireCTCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SetShouldRequireCT_ProxyToResponder> proxy(
        new NetworkServiceTest_SetShouldRequireCT_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SetShouldRequireCT_ProxyToResponder() {
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
  NetworkServiceTest_SetShouldRequireCT_ProxyToResponder(
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
        << "NetworkServiceTest::SetShouldRequireCTCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_ProxyToResponder);
};
class NetworkServiceTest_SetShouldRequireCT_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkServiceTest_SetShouldRequireCT_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkServiceTest_SetShouldRequireCT_Name,
          message_flags){}
  ~NetworkServiceTest_SetShouldRequireCT_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkServiceTest_SetShouldRequireCT_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkServiceTest_SetShouldRequireCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkServiceTest::SetShouldRequireCTCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkServiceTest_SetShouldRequireCT_Response_Message::kMessageTag = {};

bool NetworkServiceTest_SetShouldRequireCT_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::NetworkServiceTest::SetShouldRequireCTCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_SetShouldRequireCT_Response_Message>();
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
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::SetShouldRequireCT response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = NetworkServiceTest_SetShouldRequireCT_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SetShouldRequireCTCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<NetworkServiceTest_SetShouldRequireCT_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetworkServiceTest::SetShouldRequireCT response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NetworkServiceTestStubDispatch::Accept(
    NetworkServiceTest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::AddRules",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SimulateNetworkChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SimulateCrash",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_SimulateCrash_Message>();
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
      internal::NetworkServiceTest_SimulateCrash_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceTest_SimulateCrash_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest_SimulateCrash_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::SimulateCrash deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SimulateCrash();
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResult",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SetShouldRequireCT",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool NetworkServiceTestStubDispatch::AcceptWithResponder(
    NetworkServiceTest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::AddRules",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_AddRules_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceTest::AddRulesCallback callback =
              NetworkServiceTest_AddRules_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceTest_AddRules_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_AddRules_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<RulePtr> p_rules{};
      NetworkServiceTest_AddRules_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRules(&p_rules))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::AddRules deserializer");
        return false;
      }
      NetworkServiceTest::AddRulesCallback callback =
          NetworkServiceTest_AddRules_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddRules(
std::move(p_rules), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SimulateNetworkChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_SimulateNetworkChange_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceTest::SimulateNetworkChangeCallback callback =
              NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SimulateNetworkChange_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::ConnectionType p_type{};
      NetworkServiceTest_SimulateNetworkChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::SimulateNetworkChange deserializer");
        return false;
      }
      NetworkServiceTest::SimulateNetworkChangeCallback callback =
          NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SimulateNetworkChange(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SimulateCrash",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierSetDefaultResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_MockCertVerifierSetDefaultResult_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback =
              NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_default_result{};
      NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_default_result = input_data_view.default_result();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::MockCertVerifierSetDefaultResult deserializer");
        return false;
      }
      NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback =
          NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MockCertVerifierSetDefaultResult(
std::move(p_default_result), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_MockCertVerifierAddResultForCertAndHost_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback =
              NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<net::X509Certificate> p_cert{};
      std::string p_host_pattern{};
      net::CertVerifyResult p_verify_result{};
      int32_t p_rv{};
      NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCert(&p_cert))
        success = false;
      if (!input_data_view.ReadHostPattern(&p_host_pattern))
        success = false;
      if (!input_data_view.ReadVerifyResult(&p_verify_result))
        success = false;
      p_rv = input_data_view.rv();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::MockCertVerifierAddResultForCertAndHost deserializer");
        return false;
      }
      NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback =
          NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MockCertVerifierAddResultForCertAndHost(
std::move(p_cert), 
std::move(p_host_pattern), 
std::move(p_verify_result), 
std::move(p_rv), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkServiceTest::SetShouldRequireCT",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkServiceTestProxy_SetShouldRequireCT_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          NetworkServiceTest::SetShouldRequireCTCallback callback =
              NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SetShouldRequireCT_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest::ShouldRequireCT p_required{};
      NetworkServiceTest_SetShouldRequireCT_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequired(&p_required))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkServiceTest::SetShouldRequireCT deserializer");
        return false;
      }
      NetworkServiceTest::SetShouldRequireCTCallback callback =
          NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetShouldRequireCT(
std::move(p_required), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetworkServiceTestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceTest RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_AddRules_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateCrash_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetShouldRequireCT_Params_Data>(
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

bool NetworkServiceTestResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceTest ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_AddRules_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data>(
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
void NetworkServiceTestInterceptorForTesting::AddRules(std::vector<RulePtr> rules, AddRulesCallback callback) {
  GetForwardingInterface()->AddRules(std::move(rules), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SimulateNetworkChange(::network::mojom::ConnectionType type, SimulateNetworkChangeCallback callback) {
  GetForwardingInterface()->SimulateNetworkChange(std::move(type), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SimulateCrash() {
  GetForwardingInterface()->SimulateCrash();
}
void NetworkServiceTestInterceptorForTesting::MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) {
  GetForwardingInterface()->MockCertVerifierSetDefaultResult(std::move(default_result), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::MockCertVerifierAddResultForCertAndHost(const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) {
  GetForwardingInterface()->MockCertVerifierAddResultForCertAndHost(std::move(cert), std::move(host_pattern), std::move(verify_result), std::move(rv), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) {
  GetForwardingInterface()->SetShouldRequireCT(std::move(required), std::move(callback));
}
NetworkServiceTestAsyncWaiter::NetworkServiceTestAsyncWaiter(
    NetworkServiceTest* proxy) : proxy_(proxy) {}

NetworkServiceTestAsyncWaiter::~NetworkServiceTestAsyncWaiter() = default;

void NetworkServiceTestAsyncWaiter::AddRules(
    std::vector<RulePtr> rules) {
  base::RunLoop loop;
  proxy_->AddRules(std::move(rules),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SimulateNetworkChange(
    ::network::mojom::ConnectionType type) {
  base::RunLoop loop;
  proxy_->SimulateNetworkChange(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::MockCertVerifierSetDefaultResult(
    int32_t default_result) {
  base::RunLoop loop;
  proxy_->MockCertVerifierSetDefaultResult(std::move(default_result),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::MockCertVerifierAddResultForCertAndHost(
    const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv) {
  base::RunLoop loop;
  proxy_->MockCertVerifierAddResultForCertAndHost(std::move(cert),std::move(host_pattern),std::move(verify_result),std::move(rv),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT required) {
  base::RunLoop loop;
  proxy_->SetShouldRequireCT(std::move(required),
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
bool StructTraits<::network::mojom::Rule::DataView, ::network::mojom::RulePtr>::Read(
    ::network::mojom::Rule::DataView input,
    ::network::mojom::RulePtr* output) {
  bool success = true;
  ::network::mojom::RulePtr result(::network::mojom::Rule::New());
  
      if (!input.ReadHostPattern(&result->host_pattern))
        success = false;
      if (!input.ReadReplacement(&result->replacement))
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
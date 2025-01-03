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

#include "services/identity/public/mojom/identity_manager.mojom.h"

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

#include "services/identity/public/mojom/identity_manager.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/identity/public/cpp/account_info_mojom_traits.h"
#include "services/identity/public/cpp/account_state_mojom_traits.h"
#include "services/identity/public/cpp/google_service_auth_error_mojom_traits.h"
#include "services/identity/public/cpp/scope_set_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace identity {
namespace mojom {
const char IdentityManager::Name_[] = "identity.mojom.IdentityManager";

class IdentityManager_GetPrimaryAccountInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IdentityManager_GetPrimaryAccountInfo_ForwardToCallback(
      IdentityManager::GetPrimaryAccountInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IdentityManager::GetPrimaryAccountInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetPrimaryAccountInfo_ForwardToCallback);
};

class IdentityManager_GetPrimaryAccountWhenAvailable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IdentityManager_GetPrimaryAccountWhenAvailable_ForwardToCallback(
      IdentityManager::GetPrimaryAccountWhenAvailableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IdentityManager::GetPrimaryAccountWhenAvailableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetPrimaryAccountWhenAvailable_ForwardToCallback);
};

class IdentityManager_GetAccountInfoFromGaiaId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IdentityManager_GetAccountInfoFromGaiaId_ForwardToCallback(
      IdentityManager::GetAccountInfoFromGaiaIdCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IdentityManager::GetAccountInfoFromGaiaIdCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccountInfoFromGaiaId_ForwardToCallback);
};

class IdentityManager_GetAccounts_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IdentityManager_GetAccounts_ForwardToCallback(
      IdentityManager::GetAccountsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IdentityManager::GetAccountsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccounts_ForwardToCallback);
};

class IdentityManager_GetAccessToken_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IdentityManager_GetAccessToken_ForwardToCallback(
      IdentityManager::GetAccessTokenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IdentityManager::GetAccessTokenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccessToken_ForwardToCallback);
};

IdentityManagerProxy::IdentityManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IdentityManagerProxy::GetPrimaryAccountInfo(
    GetPrimaryAccountInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "identity::mojom::IdentityManager::GetPrimaryAccountInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetPrimaryAccountInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetPrimaryAccountInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IdentityManager_GetPrimaryAccountInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IdentityManagerProxy::GetPrimaryAccountWhenAvailable(
    GetPrimaryAccountWhenAvailableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "identity::mojom::IdentityManager::GetPrimaryAccountWhenAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IdentityManager_GetPrimaryAccountWhenAvailable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IdentityManagerProxy::GetAccountInfoFromGaiaId(
    const std::string& in_gaia_id, GetAccountInfoFromGaiaIdCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "identity::mojom::IdentityManager::GetAccountInfoFromGaiaId");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccountInfoFromGaiaId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->gaia_id)::BaseType::BufferWriter
      gaia_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_gaia_id, buffer, &gaia_id_writer, &serialization_context);
  params->gaia_id.Set(
      gaia_id_writer.is_null() ? nullptr : gaia_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gaia_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gaia_id in IdentityManager.GetAccountInfoFromGaiaId request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IdentityManager_GetAccountInfoFromGaiaId_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IdentityManagerProxy::GetAccounts(
    GetAccountsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "identity::mojom::IdentityManager::GetAccounts");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccounts_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccounts_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IdentityManager_GetAccounts_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IdentityManagerProxy::GetAccessToken(
    const std::string& in_account_id, const ::identity::ScopeSet& in_scopes, const std::string& in_consumer_id, GetAccessTokenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "identity::mojom::IdentityManager::GetAccessToken");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccessToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccessToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->account_id)::BaseType::BufferWriter
      account_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_account_id, buffer, &account_id_writer, &serialization_context);
  params->account_id.Set(
      account_id_writer.is_null() ? nullptr : account_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->account_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null account_id in IdentityManager.GetAccessToken request");
  typename decltype(params->scopes)::BaseType::BufferWriter
      scopes_writer;
  mojo::internal::Serialize<::identity::mojom::ScopeSetDataView>(
      in_scopes, buffer, &scopes_writer, &serialization_context);
  params->scopes.Set(
      scopes_writer.is_null() ? nullptr : scopes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->scopes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null scopes in IdentityManager.GetAccessToken request");
  typename decltype(params->consumer_id)::BaseType::BufferWriter
      consumer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_consumer_id, buffer, &consumer_id_writer, &serialization_context);
  params->consumer_id.Set(
      consumer_id_writer.is_null() ? nullptr : consumer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->consumer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null consumer_id in IdentityManager.GetAccessToken request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IdentityManager_GetAccessToken_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class IdentityManager_GetPrimaryAccountInfo_ProxyToResponder {
 public:
  static IdentityManager::GetPrimaryAccountInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IdentityManager_GetPrimaryAccountInfo_ProxyToResponder> proxy(
        new IdentityManager_GetPrimaryAccountInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IdentityManager_GetPrimaryAccountInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IdentityManager_GetPrimaryAccountInfo_ProxyToResponder() {
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
  IdentityManager_GetPrimaryAccountInfo_ProxyToResponder(
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
        << "IdentityManager::GetPrimaryAccountInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<::AccountInfo>& in_account_info, const identity::AccountState& in_account_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetPrimaryAccountInfo_ProxyToResponder);
};

bool IdentityManager_GetPrimaryAccountInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "identity::mojom::IdentityManager::GetPrimaryAccountInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<::AccountInfo> p_account_info{};
  identity::AccountState p_account_state{};
  IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAccountInfo(&p_account_info))
    success = false;
  if (!input_data_view.ReadAccountState(&p_account_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "IdentityManager::GetPrimaryAccountInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_account_info), 
std::move(p_account_state));
  return true;
}

void IdentityManager_GetPrimaryAccountInfo_ProxyToResponder::Run(
    const base::Optional<::AccountInfo>& in_account_info, const identity::AccountState& in_account_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetPrimaryAccountInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->account_info)::BaseType::BufferWriter
      account_info_writer;
  mojo::internal::Serialize<::identity::mojom::AccountInfoDataView>(
      in_account_info, buffer, &account_info_writer, &serialization_context);
  params->account_info.Set(
      account_info_writer.is_null() ? nullptr : account_info_writer.data());
  typename decltype(params->account_state)::BaseType::BufferWriter
      account_state_writer;
  mojo::internal::Serialize<::identity::mojom::AccountStateDataView>(
      in_account_state, buffer, &account_state_writer, &serialization_context);
  params->account_state.Set(
      account_state_writer.is_null() ? nullptr : account_state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->account_state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null account_state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder {
 public:
  static IdentityManager::GetPrimaryAccountWhenAvailableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder> proxy(
        new IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder() {
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
  IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder(
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
        << "IdentityManager::GetPrimaryAccountWhenAvailableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::AccountInfo& in_account_info, const identity::AccountState& in_account_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder);
};

bool IdentityManager_GetPrimaryAccountWhenAvailable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "identity::mojom::IdentityManager::GetPrimaryAccountWhenAvailableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::AccountInfo p_account_info{};
  identity::AccountState p_account_state{};
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAccountInfo(&p_account_info))
    success = false;
  if (!input_data_view.ReadAccountState(&p_account_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "IdentityManager::GetPrimaryAccountWhenAvailable response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_account_info), 
std::move(p_account_state));
  return true;
}

void IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder::Run(
    const ::AccountInfo& in_account_info, const identity::AccountState& in_account_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->account_info)::BaseType::BufferWriter
      account_info_writer;
  mojo::internal::Serialize<::identity::mojom::AccountInfoDataView>(
      in_account_info, buffer, &account_info_writer, &serialization_context);
  params->account_info.Set(
      account_info_writer.is_null() ? nullptr : account_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->account_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null account_info in ");
  typename decltype(params->account_state)::BaseType::BufferWriter
      account_state_writer;
  mojo::internal::Serialize<::identity::mojom::AccountStateDataView>(
      in_account_state, buffer, &account_state_writer, &serialization_context);
  params->account_state.Set(
      account_state_writer.is_null() ? nullptr : account_state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->account_state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null account_state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountWhenAvailableCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder {
 public:
  static IdentityManager::GetAccountInfoFromGaiaIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder> proxy(
        new IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder() {
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
  IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder(
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
        << "IdentityManager::GetAccountInfoFromGaiaIdCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<::AccountInfo>& in_account_info, const identity::AccountState& in_account_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder);
};

bool IdentityManager_GetAccountInfoFromGaiaId_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "identity::mojom::IdentityManager::GetAccountInfoFromGaiaIdCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<::AccountInfo> p_account_info{};
  identity::AccountState p_account_state{};
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAccountInfo(&p_account_info))
    success = false;
  if (!input_data_view.ReadAccountState(&p_account_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "IdentityManager::GetAccountInfoFromGaiaId response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_account_info), 
std::move(p_account_state));
  return true;
}

void IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder::Run(
    const base::Optional<::AccountInfo>& in_account_info, const identity::AccountState& in_account_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccountInfoFromGaiaId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->account_info)::BaseType::BufferWriter
      account_info_writer;
  mojo::internal::Serialize<::identity::mojom::AccountInfoDataView>(
      in_account_info, buffer, &account_info_writer, &serialization_context);
  params->account_info.Set(
      account_info_writer.is_null() ? nullptr : account_info_writer.data());
  typename decltype(params->account_state)::BaseType::BufferWriter
      account_state_writer;
  mojo::internal::Serialize<::identity::mojom::AccountStateDataView>(
      in_account_state, buffer, &account_state_writer, &serialization_context);
  params->account_state.Set(
      account_state_writer.is_null() ? nullptr : account_state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->account_state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null account_state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccountInfoFromGaiaIdCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IdentityManager_GetAccounts_ProxyToResponder {
 public:
  static IdentityManager::GetAccountsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IdentityManager_GetAccounts_ProxyToResponder> proxy(
        new IdentityManager_GetAccounts_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IdentityManager_GetAccounts_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IdentityManager_GetAccounts_ProxyToResponder() {
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
  IdentityManager_GetAccounts_ProxyToResponder(
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
        << "IdentityManager::GetAccountsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::identity::mojom::AccountPtr> in_accounts);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccounts_ProxyToResponder);
};

bool IdentityManager_GetAccounts_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "identity::mojom::IdentityManager::GetAccountsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IdentityManager_GetAccounts_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IdentityManager_GetAccounts_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::identity::mojom::AccountPtr> p_accounts{};
  IdentityManager_GetAccounts_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAccounts(&p_accounts))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "IdentityManager::GetAccounts response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_accounts));
  return true;
}

void IdentityManager_GetAccounts_ProxyToResponder::Run(
    std::vector<::identity::mojom::AccountPtr> in_accounts) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccounts_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccounts_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->accounts)::BaseType::BufferWriter
      accounts_writer;
  const mojo::internal::ContainerValidateParams accounts_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::identity::mojom::AccountDataView>>(
      in_accounts, buffer, &accounts_writer, &accounts_validate_params,
      &serialization_context);
  params->accounts.Set(
      accounts_writer.is_null() ? nullptr : accounts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->accounts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null accounts in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccountsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IdentityManager_GetAccessToken_ProxyToResponder {
 public:
  static IdentityManager::GetAccessTokenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IdentityManager_GetAccessToken_ProxyToResponder> proxy(
        new IdentityManager_GetAccessToken_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IdentityManager_GetAccessToken_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IdentityManager_GetAccessToken_ProxyToResponder() {
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
  IdentityManager_GetAccessToken_ProxyToResponder(
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
        << "IdentityManager::GetAccessTokenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<std::string>& in_token, base::Time in_expiration_time, const ::GoogleServiceAuthError& in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManager_GetAccessToken_ProxyToResponder);
};

bool IdentityManager_GetAccessToken_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "identity::mojom::IdentityManager::GetAccessTokenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IdentityManager_GetAccessToken_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IdentityManager_GetAccessToken_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::string> p_token{};
  base::Time p_expiration_time{};
  ::GoogleServiceAuthError p_error{};
  IdentityManager_GetAccessToken_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!input_data_view.ReadExpirationTime(&p_expiration_time))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "IdentityManager::GetAccessToken response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token), 
std::move(p_expiration_time), 
std::move(p_error));
  return true;
}

void IdentityManager_GetAccessToken_ProxyToResponder::Run(
    const base::Optional<std::string>& in_token, base::Time in_expiration_time, const ::GoogleServiceAuthError& in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIdentityManager_GetAccessToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::identity::mojom::internal::IdentityManager_GetAccessToken_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  typename decltype(params->expiration_time)::BaseType::BufferWriter
      expiration_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expiration_time, buffer, &expiration_time_writer, &serialization_context);
  params->expiration_time.Set(
      expiration_time_writer.is_null() ? nullptr : expiration_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiration_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiration_time in ");
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::identity::mojom::GoogleServiceAuthErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccessTokenCallback",
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
bool IdentityManagerStubDispatch::Accept(
    IdentityManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIdentityManager_GetPrimaryAccountInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountWhenAvailable",
               "message", message->name());
#endif
      break;
    }
    case internal::kIdentityManager_GetAccountInfoFromGaiaId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccountInfoFromGaiaId",
               "message", message->name());
#endif
      break;
    }
    case internal::kIdentityManager_GetAccounts_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccounts",
               "message", message->name());
#endif
      break;
    }
    case internal::kIdentityManager_GetAccessToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccessToken",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool IdentityManagerStubDispatch::AcceptWithResponder(
    IdentityManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIdentityManager_GetPrimaryAccountInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::IdentityManager_GetPrimaryAccountInfo_Params_Data* params =
          reinterpret_cast<
              internal::IdentityManager_GetPrimaryAccountInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityManager_GetPrimaryAccountInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IdentityManager::GetPrimaryAccountInfo deserializer");
        return false;
      }
      IdentityManager::GetPrimaryAccountInfoCallback callback =
          IdentityManager_GetPrimaryAccountInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPrimaryAccountInfo(std::move(callback));
      return true;
    }
    case internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetPrimaryAccountWhenAvailable",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* params =
          reinterpret_cast<
              internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityManager_GetPrimaryAccountWhenAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IdentityManager::GetPrimaryAccountWhenAvailable deserializer");
        return false;
      }
      IdentityManager::GetPrimaryAccountWhenAvailableCallback callback =
          IdentityManager_GetPrimaryAccountWhenAvailable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPrimaryAccountWhenAvailable(std::move(callback));
      return true;
    }
    case internal::kIdentityManager_GetAccountInfoFromGaiaId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccountInfoFromGaiaId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data* params =
          reinterpret_cast<
              internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_gaia_id{};
      IdentityManager_GetAccountInfoFromGaiaId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGaiaId(&p_gaia_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IdentityManager::GetAccountInfoFromGaiaId deserializer");
        return false;
      }
      IdentityManager::GetAccountInfoFromGaiaIdCallback callback =
          IdentityManager_GetAccountInfoFromGaiaId_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAccountInfoFromGaiaId(
std::move(p_gaia_id), std::move(callback));
      return true;
    }
    case internal::kIdentityManager_GetAccounts_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccounts",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::IdentityManager_GetAccounts_Params_Data* params =
          reinterpret_cast<
              internal::IdentityManager_GetAccounts_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityManager_GetAccounts_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IdentityManager::GetAccounts deserializer");
        return false;
      }
      IdentityManager::GetAccountsCallback callback =
          IdentityManager_GetAccounts_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAccounts(std::move(callback));
      return true;
    }
    case internal::kIdentityManager_GetAccessToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)identity::mojom::IdentityManager::GetAccessToken",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::IdentityManager_GetAccessToken_Params_Data* params =
          reinterpret_cast<
              internal::IdentityManager_GetAccessToken_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_account_id{};
      ::identity::ScopeSet p_scopes{};
      std::string p_consumer_id{};
      IdentityManager_GetAccessToken_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAccountId(&p_account_id))
        success = false;
      if (!input_data_view.ReadScopes(&p_scopes))
        success = false;
      if (!input_data_view.ReadConsumerId(&p_consumer_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IdentityManager::GetAccessToken deserializer");
        return false;
      }
      IdentityManager::GetAccessTokenCallback callback =
          IdentityManager_GetAccessToken_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAccessToken(
std::move(p_account_id), 
std::move(p_scopes), 
std::move(p_consumer_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool IdentityManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IdentityManager RequestValidator");

  switch (message->header()->name) {
    case internal::kIdentityManager_GetPrimaryAccountInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetPrimaryAccountInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccountInfoFromGaiaId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccounts_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccounts_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccessToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccessToken_Params_Data>(
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

bool IdentityManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IdentityManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kIdentityManager_GetPrimaryAccountInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetPrimaryAccountWhenAvailable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccountInfoFromGaiaId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccounts_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccounts_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIdentityManager_GetAccessToken_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IdentityManager_GetAccessToken_ResponseParams_Data>(
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
void IdentityManagerInterceptorForTesting::GetPrimaryAccountInfo(GetPrimaryAccountInfoCallback callback) {
  GetForwardingInterface()->GetPrimaryAccountInfo(std::move(callback));
}
void IdentityManagerInterceptorForTesting::GetPrimaryAccountWhenAvailable(GetPrimaryAccountWhenAvailableCallback callback) {
  GetForwardingInterface()->GetPrimaryAccountWhenAvailable(std::move(callback));
}
void IdentityManagerInterceptorForTesting::GetAccountInfoFromGaiaId(const std::string& gaia_id, GetAccountInfoFromGaiaIdCallback callback) {
  GetForwardingInterface()->GetAccountInfoFromGaiaId(std::move(gaia_id), std::move(callback));
}
void IdentityManagerInterceptorForTesting::GetAccounts(GetAccountsCallback callback) {
  GetForwardingInterface()->GetAccounts(std::move(callback));
}
void IdentityManagerInterceptorForTesting::GetAccessToken(const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, GetAccessTokenCallback callback) {
  GetForwardingInterface()->GetAccessToken(std::move(account_id), std::move(scopes), std::move(consumer_id), std::move(callback));
}
IdentityManagerAsyncWaiter::IdentityManagerAsyncWaiter(
    IdentityManager* proxy) : proxy_(proxy) {}

IdentityManagerAsyncWaiter::~IdentityManagerAsyncWaiter() = default;

void IdentityManagerAsyncWaiter::GetPrimaryAccountInfo(
    base::Optional<::AccountInfo>* out_account_info, identity::AccountState* out_account_state) {
  base::RunLoop loop;
  proxy_->GetPrimaryAccountInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<::AccountInfo>* out_account_info
,
             identity::AccountState* out_account_state
,
             const base::Optional<::AccountInfo>& account_info,
             const identity::AccountState& account_state) {*out_account_info = std::move(account_info);*out_account_state = std::move(account_state);
            loop->Quit();
          },
          &loop,
          out_account_info,
          out_account_state));
  loop.Run();
}
void IdentityManagerAsyncWaiter::GetPrimaryAccountWhenAvailable(
    ::AccountInfo* out_account_info, identity::AccountState* out_account_state) {
  base::RunLoop loop;
  proxy_->GetPrimaryAccountWhenAvailable(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::AccountInfo* out_account_info
,
             identity::AccountState* out_account_state
,
             const ::AccountInfo& account_info,
             const identity::AccountState& account_state) {*out_account_info = std::move(account_info);*out_account_state = std::move(account_state);
            loop->Quit();
          },
          &loop,
          out_account_info,
          out_account_state));
  loop.Run();
}
void IdentityManagerAsyncWaiter::GetAccountInfoFromGaiaId(
    const std::string& gaia_id, base::Optional<::AccountInfo>* out_account_info, identity::AccountState* out_account_state) {
  base::RunLoop loop;
  proxy_->GetAccountInfoFromGaiaId(std::move(gaia_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<::AccountInfo>* out_account_info
,
             identity::AccountState* out_account_state
,
             const base::Optional<::AccountInfo>& account_info,
             const identity::AccountState& account_state) {*out_account_info = std::move(account_info);*out_account_state = std::move(account_state);
            loop->Quit();
          },
          &loop,
          out_account_info,
          out_account_state));
  loop.Run();
}
void IdentityManagerAsyncWaiter::GetAccounts(
    std::vector<::identity::mojom::AccountPtr>* out_accounts) {
  base::RunLoop loop;
  proxy_->GetAccounts(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::identity::mojom::AccountPtr>* out_accounts
,
             std::vector<::identity::mojom::AccountPtr> accounts) {*out_accounts = std::move(accounts);
            loop->Quit();
          },
          &loop,
          out_accounts));
  loop.Run();
}
void IdentityManagerAsyncWaiter::GetAccessToken(
    const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, base::Optional<std::string>* out_token, base::Time* out_expiration_time, ::GoogleServiceAuthError* out_error) {
  base::RunLoop loop;
  proxy_->GetAccessToken(std::move(account_id),std::move(scopes),std::move(consumer_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::string>* out_token
,
             base::Time* out_expiration_time
,
             ::GoogleServiceAuthError* out_error
,
             const base::Optional<std::string>& token,
             base::Time expiration_time,
             const ::GoogleServiceAuthError& error) {*out_token = std::move(token);*out_expiration_time = std::move(expiration_time);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_token,
          out_expiration_time,
          out_error));
  loop.Run();
}

}  // namespace mojom
}  // namespace identity

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
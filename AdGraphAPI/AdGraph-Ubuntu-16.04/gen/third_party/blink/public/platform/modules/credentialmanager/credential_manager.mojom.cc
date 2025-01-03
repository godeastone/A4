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

#include "third_party/blink/public/platform/modules/credentialmanager/credential_manager.mojom.h"

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

#include "third_party/blink/public/platform/modules/credentialmanager/credential_manager.mojom-shared-message-ids.h"
#include "components/password_manager/content/common/credential_manager_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace password_manager {
namespace mojom {
CredentialInfo::CredentialInfo()
    : type(),
      id(),
      name(),
      icon(),
      password(),
      federation() {}

CredentialInfo::CredentialInfo(
    password_manager::CredentialType type_in,
    const base::Optional<base::string16>& id_in,
    const base::Optional<base::string16>& name_in,
    const GURL& icon_in,
    const base::Optional<base::string16>& password_in,
    const url::Origin& federation_in)
    : type(std::move(type_in)),
      id(std::move(id_in)),
      name(std::move(name_in)),
      icon(std::move(icon_in)),
      password(std::move(password_in)),
      federation(std::move(federation_in)) {}

CredentialInfo::~CredentialInfo() = default;

bool CredentialInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CredentialManager::Name_[] = "password_manager.mojom.CredentialManager";

class CredentialManager_Store_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Store_ForwardToCallback(
      CredentialManager::StoreCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::StoreCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Store_ForwardToCallback);
};

class CredentialManager_PreventSilentAccess_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_PreventSilentAccess_ForwardToCallback(
      CredentialManager::PreventSilentAccessCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::PreventSilentAccessCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_PreventSilentAccess_ForwardToCallback);
};

class CredentialManager_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Get_ForwardToCallback(
      CredentialManager::GetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::GetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Get_ForwardToCallback);
};

CredentialManagerProxy::CredentialManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CredentialManagerProxy::Store(
    const password_manager::CredentialInfo& in_credential, StoreCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "password_manager::mojom::CredentialManager::Store");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_Store_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_Store_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->credential)::BaseType::BufferWriter
      credential_writer;
  mojo::internal::Serialize<::password_manager::mojom::CredentialInfoDataView>(
      in_credential, buffer, &credential_writer, &serialization_context);
  params->credential.Set(
      credential_writer.is_null() ? nullptr : credential_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->credential.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null credential in CredentialManager.Store request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_Store_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CredentialManagerProxy::PreventSilentAccess(
    PreventSilentAccessCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "password_manager::mojom::CredentialManager::PreventSilentAccess");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_PreventSilentAccess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_PreventSilentAccess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_PreventSilentAccess_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CredentialManagerProxy::Get(
    password_manager::CredentialMediationRequirement in_mediation, bool in_include_passwords, const std::vector<GURL>& in_federations, GetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "password_manager::mojom::CredentialManager::Get");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::password_manager::mojom::CredentialMediationRequirement>(
      in_mediation, &params->mediation);
  params->include_passwords = in_include_passwords;
  typename decltype(params->federations)::BaseType::BufferWriter
      federations_writer;
  const mojo::internal::ContainerValidateParams federations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_federations, buffer, &federations_writer, &federations_validate_params,
      &serialization_context);
  params->federations.Set(
      federations_writer.is_null() ? nullptr : federations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->federations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null federations in CredentialManager.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_Get_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CredentialManager_Store_ProxyToResponder {
 public:
  static CredentialManager::StoreCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_Store_ProxyToResponder> proxy(
        new CredentialManager_Store_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CredentialManager_Store_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_Store_ProxyToResponder() {
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
  CredentialManager_Store_ProxyToResponder(
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
        << "CredentialManager::StoreCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Store_ProxyToResponder);
};

bool CredentialManager_Store_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "password_manager::mojom::CredentialManager::StoreCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CredentialManager_Store_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_Store_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CredentialManager_Store_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::Store response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CredentialManager_Store_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_Store_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_Store_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::StoreCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CredentialManager_PreventSilentAccess_ProxyToResponder {
 public:
  static CredentialManager::PreventSilentAccessCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_PreventSilentAccess_ProxyToResponder> proxy(
        new CredentialManager_PreventSilentAccess_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CredentialManager_PreventSilentAccess_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_PreventSilentAccess_ProxyToResponder() {
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
  CredentialManager_PreventSilentAccess_ProxyToResponder(
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
        << "CredentialManager::PreventSilentAccessCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_PreventSilentAccess_ProxyToResponder);
};

bool CredentialManager_PreventSilentAccess_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "password_manager::mojom::CredentialManager::PreventSilentAccessCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_PreventSilentAccess_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CredentialManager_PreventSilentAccess_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::PreventSilentAccess response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CredentialManager_PreventSilentAccess_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_PreventSilentAccess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_PreventSilentAccess_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::PreventSilentAccessCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CredentialManager_Get_ProxyToResponder {
 public:
  static CredentialManager::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_Get_ProxyToResponder> proxy(
        new CredentialManager_Get_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CredentialManager_Get_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_Get_ProxyToResponder() {
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
  CredentialManager_Get_ProxyToResponder(
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
        << "CredentialManager::GetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      password_manager::CredentialManagerError in_error, const base::Optional<password_manager::CredentialInfo>& in_credential);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Get_ProxyToResponder);
};

bool CredentialManager_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "password_manager::mojom::CredentialManager::GetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CredentialManager_Get_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_Get_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  password_manager::CredentialManagerError p_error{};
  base::Optional<password_manager::CredentialInfo> p_credential{};
  CredentialManager_Get_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadCredential(&p_credential))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::Get response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_credential));
  return true;
}

void CredentialManager_Get_ProxyToResponder::Run(
    password_manager::CredentialManagerError in_error, const base::Optional<password_manager::CredentialInfo>& in_credential) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCredentialManager_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::password_manager::mojom::internal::CredentialManager_Get_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::password_manager::mojom::CredentialManagerError>(
      in_error, &params->error);
  typename decltype(params->credential)::BaseType::BufferWriter
      credential_writer;
  mojo::internal::Serialize<::password_manager::mojom::CredentialInfoDataView>(
      in_credential, buffer, &credential_writer, &serialization_context);
  params->credential.Set(
      credential_writer.is_null() ? nullptr : credential_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::GetCallback",
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
bool CredentialManagerStubDispatch::Accept(
    CredentialManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::Store",
               "message", message->name());
#endif
      break;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::PreventSilentAccess",
               "message", message->name());
#endif
      break;
    }
    case internal::kCredentialManager_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::Get",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CredentialManagerStubDispatch::AcceptWithResponder(
    CredentialManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::Store",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CredentialManager_Store_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_Store_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      password_manager::CredentialInfo p_credential{};
      CredentialManager_Store_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCredential(&p_credential))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::Store deserializer");
        return false;
      }
      CredentialManager::StoreCallback callback =
          CredentialManager_Store_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Store(
std::move(p_credential), std::move(callback));
      return true;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::PreventSilentAccess",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CredentialManager_PreventSilentAccess_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_PreventSilentAccess_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CredentialManager_PreventSilentAccess_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::PreventSilentAccess deserializer");
        return false;
      }
      CredentialManager::PreventSilentAccessCallback callback =
          CredentialManager_PreventSilentAccess_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PreventSilentAccess(std::move(callback));
      return true;
    }
    case internal::kCredentialManager_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)password_manager::mojom::CredentialManager::Get",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CredentialManager_Get_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_Get_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      password_manager::CredentialMediationRequirement p_mediation{};
      bool p_include_passwords{};
      std::vector<GURL> p_federations{};
      CredentialManager_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediation(&p_mediation))
        success = false;
      p_include_passwords = input_data_view.include_passwords();
      if (!input_data_view.ReadFederations(&p_federations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::Get deserializer");
        return false;
      }
      CredentialManager::GetCallback callback =
          CredentialManager_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Get(
std::move(p_mediation), 
std::move(p_include_passwords), 
std::move(p_federations), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CredentialManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CredentialManager RequestValidator");

  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Store_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_PreventSilentAccess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCredentialManager_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Get_Params_Data>(
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

bool CredentialManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CredentialManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Store_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_PreventSilentAccess_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCredentialManager_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Get_ResponseParams_Data>(
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
void CredentialManagerInterceptorForTesting::Store(const password_manager::CredentialInfo& credential, StoreCallback callback) {
  GetForwardingInterface()->Store(std::move(credential), std::move(callback));
}
void CredentialManagerInterceptorForTesting::PreventSilentAccess(PreventSilentAccessCallback callback) {
  GetForwardingInterface()->PreventSilentAccess(std::move(callback));
}
void CredentialManagerInterceptorForTesting::Get(password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, GetCallback callback) {
  GetForwardingInterface()->Get(std::move(mediation), std::move(include_passwords), std::move(federations), std::move(callback));
}
CredentialManagerAsyncWaiter::CredentialManagerAsyncWaiter(
    CredentialManager* proxy) : proxy_(proxy) {}

CredentialManagerAsyncWaiter::~CredentialManagerAsyncWaiter() = default;

void CredentialManagerAsyncWaiter::Store(
    const password_manager::CredentialInfo& credential) {
  base::RunLoop loop;
  proxy_->Store(std::move(credential),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::PreventSilentAccess(
    ) {
  base::RunLoop loop;
  proxy_->PreventSilentAccess(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::Get(
    password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, password_manager::CredentialManagerError* out_error, base::Optional<password_manager::CredentialInfo>* out_credential) {
  base::RunLoop loop;
  proxy_->Get(std::move(mediation),std::move(include_passwords),std::move(federations),
      base::BindOnce(
          [](base::RunLoop* loop,
             password_manager::CredentialManagerError* out_error
,
             base::Optional<password_manager::CredentialInfo>* out_credential
,
             password_manager::CredentialManagerError error,
             const base::Optional<password_manager::CredentialInfo>& credential) {*out_error = std::move(error);*out_credential = std::move(credential);
            loop->Quit();
          },
          &loop,
          out_error,
          out_credential));
  loop.Run();
}

}  // namespace mojom
}  // namespace password_manager

namespace mojo {


// static
bool StructTraits<::password_manager::mojom::CredentialInfo::DataView, ::password_manager::mojom::CredentialInfoPtr>::Read(
    ::password_manager::mojom::CredentialInfo::DataView input,
    ::password_manager::mojom::CredentialInfoPtr* output) {
  bool success = true;
  ::password_manager::mojom::CredentialInfoPtr result(::password_manager::mojom::CredentialInfo::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadPassword(&result->password))
        success = false;
      if (!input.ReadFederation(&result->federation))
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
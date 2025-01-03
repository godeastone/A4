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

#include "third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom-blink.h"

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

#include "third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace webauth {
namespace test {
namespace mojom {
namespace blink {
VirtualAuthenticatorOptions::VirtualAuthenticatorOptions()
    : protocol(),
      transport(),
      attachment(),
      has_resident_key(),
      has_user_verification() {}

VirtualAuthenticatorOptions::VirtualAuthenticatorOptions(
    ClientToAuthenticatorProtocol protocol_in,
    ::webauth::mojom::blink::AuthenticatorTransport transport_in,
    ::webauth::mojom::blink::AuthenticatorAttachment attachment_in,
    bool has_resident_key_in,
    bool has_user_verification_in)
    : protocol(std::move(protocol_in)),
      transport(std::move(transport_in)),
      attachment(std::move(attachment_in)),
      has_resident_key(std::move(has_resident_key_in)),
      has_user_verification(std::move(has_user_verification_in)) {}

VirtualAuthenticatorOptions::~VirtualAuthenticatorOptions() = default;
size_t VirtualAuthenticatorOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->protocol);
  seed = mojo::internal::WTFHash(seed, this->transport);
  seed = mojo::internal::WTFHash(seed, this->attachment);
  seed = mojo::internal::WTFHash(seed, this->has_resident_key);
  seed = mojo::internal::WTFHash(seed, this->has_user_verification);
  return seed;
}

bool VirtualAuthenticatorOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RegisteredKey::RegisteredKey()
    : key_handle(),
      application_parameter(),
      private_key(),
      counter() {}

RegisteredKey::RegisteredKey(
    const WTF::Vector<uint8_t>& key_handle_in,
    const WTF::Vector<uint8_t>& application_parameter_in,
    const WTF::Vector<uint8_t>& private_key_in,
    int32_t counter_in)
    : key_handle(std::move(key_handle_in)),
      application_parameter(std::move(application_parameter_in)),
      private_key(std::move(private_key_in)),
      counter(std::move(counter_in)) {}

RegisteredKey::~RegisteredKey() = default;

bool RegisteredKey::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VirtualAuthenticator::Name_[] = "webauth.test.mojom.VirtualAuthenticator";

class VirtualAuthenticator_GetUniqueId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_GetUniqueId_ForwardToCallback(
      VirtualAuthenticator::GetUniqueIdCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::GetUniqueIdCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetUniqueId_ForwardToCallback);
};

class VirtualAuthenticator_AddRegistration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_AddRegistration_ForwardToCallback(
      VirtualAuthenticator::AddRegistrationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::AddRegistrationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_AddRegistration_ForwardToCallback);
};

class VirtualAuthenticator_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_GetRegistrations_ForwardToCallback(
      VirtualAuthenticator::GetRegistrationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::GetRegistrationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetRegistrations_ForwardToCallback);
};

class VirtualAuthenticator_ClearRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_ClearRegistrations_ForwardToCallback(
      VirtualAuthenticator::ClearRegistrationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::ClearRegistrationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_ClearRegistrations_ForwardToCallback);
};

class VirtualAuthenticator_SetUserPresence_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_SetUserPresence_ForwardToCallback(
      VirtualAuthenticator::SetUserPresenceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::SetUserPresenceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_SetUserPresence_ForwardToCallback);
};

class VirtualAuthenticator_GetUserPresence_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticator_GetUserPresence_ForwardToCallback(
      VirtualAuthenticator::GetUserPresenceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticator::GetUserPresenceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetUserPresence_ForwardToCallback);
};

VirtualAuthenticatorProxy::VirtualAuthenticatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VirtualAuthenticatorProxy::GetUniqueId(
    GetUniqueIdCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::GetUniqueId");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetUniqueId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetUniqueId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_GetUniqueId_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorProxy::AddRegistration(
    RegisteredKeyPtr in_key, AddRegistrationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::AddRegistration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_AddRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_AddRegistration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::webauth::test::mojom::RegisteredKeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in VirtualAuthenticator.AddRegistration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_AddRegistration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorProxy::GetRegistrations(
    GetRegistrationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::GetRegistrations");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetRegistrations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_GetRegistrations_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorProxy::ClearRegistrations(
    ClearRegistrationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::ClearRegistrations");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_ClearRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_ClearRegistrations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_ClearRegistrations_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorProxy::SetUserPresence(
    bool in_present, SetUserPresenceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::SetUserPresence");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_SetUserPresence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_SetUserPresence_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->present = in_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_SetUserPresence_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorProxy::GetUserPresence(
    GetUserPresenceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticator::GetUserPresence");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetUserPresence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetUserPresence_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticator_GetUserPresence_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VirtualAuthenticator_GetUniqueId_ProxyToResponder {
 public:
  static VirtualAuthenticator::GetUniqueIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_GetUniqueId_ProxyToResponder> proxy(
        new VirtualAuthenticator_GetUniqueId_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_GetUniqueId_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_GetUniqueId_ProxyToResponder() {
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
  VirtualAuthenticator_GetUniqueId_ProxyToResponder(
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
        << "VirtualAuthenticator::GetUniqueIdCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetUniqueId_ProxyToResponder);
};

bool VirtualAuthenticator_GetUniqueId_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::GetUniqueIdCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_id{};
  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::GetUniqueId response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void VirtualAuthenticator_GetUniqueId_ProxyToResponder::Run(
    const WTF::String& in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetUniqueId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUniqueIdCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticator_AddRegistration_ProxyToResponder {
 public:
  static VirtualAuthenticator::AddRegistrationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_AddRegistration_ProxyToResponder> proxy(
        new VirtualAuthenticator_AddRegistration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_AddRegistration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_AddRegistration_ProxyToResponder() {
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
  VirtualAuthenticator_AddRegistration_ProxyToResponder(
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
        << "VirtualAuthenticator::AddRegistrationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_added);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_AddRegistration_ProxyToResponder);
};

bool VirtualAuthenticator_AddRegistration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::AddRegistrationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_added{};
  VirtualAuthenticator_AddRegistration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_added = input_data_view.added();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::AddRegistration response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_added));
  return true;
}

void VirtualAuthenticator_AddRegistration_ProxyToResponder::Run(
    bool in_added) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_AddRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->added = in_added;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::AddRegistrationCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticator_GetRegistrations_ProxyToResponder {
 public:
  static VirtualAuthenticator::GetRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_GetRegistrations_ProxyToResponder> proxy(
        new VirtualAuthenticator_GetRegistrations_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_GetRegistrations_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_GetRegistrations_ProxyToResponder() {
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
  VirtualAuthenticator_GetRegistrations_ProxyToResponder(
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
        << "VirtualAuthenticator::GetRegistrationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<RegisteredKeyPtr> in_keys);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetRegistrations_ProxyToResponder);
};

bool VirtualAuthenticator_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::GetRegistrationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<RegisteredKeyPtr> p_keys{};
  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadKeys(&p_keys))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::GetRegistrations response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_keys));
  return true;
}

void VirtualAuthenticator_GetRegistrations_ProxyToResponder::Run(
    WTF::Vector<RegisteredKeyPtr> in_keys) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keys)::BaseType::BufferWriter
      keys_writer;
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::webauth::test::mojom::RegisteredKeyDataView>>(
      in_keys, buffer, &keys_writer, &keys_validate_params,
      &serialization_context);
  params->keys.Set(
      keys_writer.is_null() ? nullptr : keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetRegistrationsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticator_ClearRegistrations_ProxyToResponder {
 public:
  static VirtualAuthenticator::ClearRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_ClearRegistrations_ProxyToResponder> proxy(
        new VirtualAuthenticator_ClearRegistrations_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_ClearRegistrations_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_ClearRegistrations_ProxyToResponder() {
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
  VirtualAuthenticator_ClearRegistrations_ProxyToResponder(
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
        << "VirtualAuthenticator::ClearRegistrationsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_ClearRegistrations_ProxyToResponder);
};

bool VirtualAuthenticator_ClearRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::ClearRegistrationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::ClearRegistrations response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VirtualAuthenticator_ClearRegistrations_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_ClearRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::ClearRegistrationsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticator_SetUserPresence_ProxyToResponder {
 public:
  static VirtualAuthenticator::SetUserPresenceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_SetUserPresence_ProxyToResponder> proxy(
        new VirtualAuthenticator_SetUserPresence_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_SetUserPresence_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_SetUserPresence_ProxyToResponder() {
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
  VirtualAuthenticator_SetUserPresence_ProxyToResponder(
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
        << "VirtualAuthenticator::SetUserPresenceCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_SetUserPresence_ProxyToResponder);
};

bool VirtualAuthenticator_SetUserPresence_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::SetUserPresenceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VirtualAuthenticator_SetUserPresence_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::SetUserPresence response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VirtualAuthenticator_SetUserPresence_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_SetUserPresence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::SetUserPresenceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticator_GetUserPresence_ProxyToResponder {
 public:
  static VirtualAuthenticator::GetUserPresenceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticator_GetUserPresence_ProxyToResponder> proxy(
        new VirtualAuthenticator_GetUserPresence_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticator_GetUserPresence_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticator_GetUserPresence_ProxyToResponder() {
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
  VirtualAuthenticator_GetUserPresence_ProxyToResponder(
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
        << "VirtualAuthenticator::GetUserPresenceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_present);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticator_GetUserPresence_ProxyToResponder);
};

bool VirtualAuthenticator_GetUserPresence_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticator::GetUserPresenceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_present{};
  VirtualAuthenticator_GetUserPresence_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_present = input_data_view.present();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticator::GetUserPresence response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_present));
  return true;
}

void VirtualAuthenticator_GetUserPresence_ProxyToResponder::Run(
    bool in_present) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticator_GetUserPresence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->present = in_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUserPresenceCallback",
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
bool VirtualAuthenticatorStubDispatch::Accept(
    VirtualAuthenticator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVirtualAuthenticator_GetUniqueId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUniqueId",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticator_AddRegistration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::AddRegistration",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticator_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetRegistrations",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticator_ClearRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::ClearRegistrations",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticator_SetUserPresence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::SetUserPresence",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticator_GetUserPresence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUserPresence",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VirtualAuthenticatorStubDispatch::AcceptWithResponder(
    VirtualAuthenticator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVirtualAuthenticator_GetUniqueId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUniqueId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_GetUniqueId_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_GetUniqueId_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticator_GetUniqueId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::GetUniqueId deserializer");
        return false;
      }
      VirtualAuthenticator::GetUniqueIdCallback callback =
          VirtualAuthenticator_GetUniqueId_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetUniqueId(std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticator_AddRegistration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::AddRegistration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_AddRegistration_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_AddRegistration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RegisteredKeyPtr p_key{};
      VirtualAuthenticator_AddRegistration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::AddRegistration deserializer");
        return false;
      }
      VirtualAuthenticator::AddRegistrationCallback callback =
          VirtualAuthenticator_AddRegistration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddRegistration(
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticator_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetRegistrations",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_GetRegistrations_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_GetRegistrations_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticator_GetRegistrations_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::GetRegistrations deserializer");
        return false;
      }
      VirtualAuthenticator::GetRegistrationsCallback callback =
          VirtualAuthenticator_GetRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetRegistrations(std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticator_ClearRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::ClearRegistrations",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_ClearRegistrations_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_ClearRegistrations_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticator_ClearRegistrations_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::ClearRegistrations deserializer");
        return false;
      }
      VirtualAuthenticator::ClearRegistrationsCallback callback =
          VirtualAuthenticator_ClearRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearRegistrations(std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticator_SetUserPresence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::SetUserPresence",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_SetUserPresence_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_SetUserPresence_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_present{};
      VirtualAuthenticator_SetUserPresence_ParamsDataView input_data_view(params, &serialization_context);
      
      p_present = input_data_view.present();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::SetUserPresence deserializer");
        return false;
      }
      VirtualAuthenticator::SetUserPresenceCallback callback =
          VirtualAuthenticator_SetUserPresence_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUserPresence(
std::move(p_present), std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticator_GetUserPresence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticator::GetUserPresence",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticator_GetUserPresence_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticator_GetUserPresence_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticator_GetUserPresence_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticator::GetUserPresence deserializer");
        return false;
      }
      VirtualAuthenticator::GetUserPresenceCallback callback =
          VirtualAuthenticator_GetUserPresence_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetUserPresence(std::move(callback));
      return true;
    }
  }
  return false;
}

bool VirtualAuthenticatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VirtualAuthenticator RequestValidator");

  switch (message->header()->name) {
    case internal::kVirtualAuthenticator_GetUniqueId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetUniqueId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_AddRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_AddRegistration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetRegistrations_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_ClearRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_ClearRegistrations_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_SetUserPresence_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_SetUserPresence_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_GetUserPresence_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetUserPresence_Params_Data>(
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

bool VirtualAuthenticatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VirtualAuthenticator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVirtualAuthenticator_GetUniqueId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_AddRegistration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_ClearRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_SetUserPresence_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticator_GetUserPresence_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data>(
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
void VirtualAuthenticatorInterceptorForTesting::GetUniqueId(GetUniqueIdCallback callback) {
  GetForwardingInterface()->GetUniqueId(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) {
  GetForwardingInterface()->AddRegistration(std::move(key), std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::GetRegistrations(GetRegistrationsCallback callback) {
  GetForwardingInterface()->GetRegistrations(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::ClearRegistrations(ClearRegistrationsCallback callback) {
  GetForwardingInterface()->ClearRegistrations(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::SetUserPresence(bool present, SetUserPresenceCallback callback) {
  GetForwardingInterface()->SetUserPresence(std::move(present), std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::GetUserPresence(GetUserPresenceCallback callback) {
  GetForwardingInterface()->GetUserPresence(std::move(callback));
}
VirtualAuthenticatorAsyncWaiter::VirtualAuthenticatorAsyncWaiter(
    VirtualAuthenticator* proxy) : proxy_(proxy) {}

VirtualAuthenticatorAsyncWaiter::~VirtualAuthenticatorAsyncWaiter() = default;

void VirtualAuthenticatorAsyncWaiter::GetUniqueId(
    WTF::String* out_id) {
  base::RunLoop loop;
  proxy_->GetUniqueId(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_id
,
             const WTF::String& id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::AddRegistration(
    RegisteredKeyPtr key, bool* out_added) {
  base::RunLoop loop;
  proxy_->AddRegistration(std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_added
,
             bool added) {*out_added = std::move(added);
            loop->Quit();
          },
          &loop,
          out_added));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::GetRegistrations(
    WTF::Vector<RegisteredKeyPtr>* out_keys) {
  base::RunLoop loop;
  proxy_->GetRegistrations(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<RegisteredKeyPtr>* out_keys
,
             WTF::Vector<RegisteredKeyPtr> keys) {*out_keys = std::move(keys);
            loop->Quit();
          },
          &loop,
          out_keys));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::ClearRegistrations(
    ) {
  base::RunLoop loop;
  proxy_->ClearRegistrations(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::SetUserPresence(
    bool present) {
  base::RunLoop loop;
  proxy_->SetUserPresence(std::move(present),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::GetUserPresence(
    bool* out_present) {
  base::RunLoop loop;
  proxy_->GetUserPresence(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_present
,
             bool present) {*out_present = std::move(present);
            loop->Quit();
          },
          &loop,
          out_present));
  loop.Run();
}

const char VirtualAuthenticatorManager::Name_[] = "webauth.test.mojom.VirtualAuthenticatorManager";

class VirtualAuthenticatorManager_CreateAuthenticator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ForwardToCallback(
      VirtualAuthenticatorManager::CreateAuthenticatorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticatorManager::CreateAuthenticatorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_CreateAuthenticator_ForwardToCallback);
};

class VirtualAuthenticatorManager_GetAuthenticators_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ForwardToCallback(
      VirtualAuthenticatorManager::GetAuthenticatorsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticatorManager::GetAuthenticatorsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_GetAuthenticators_ForwardToCallback);
};

class VirtualAuthenticatorManager_RemoveAuthenticator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ForwardToCallback(
      VirtualAuthenticatorManager::RemoveAuthenticatorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticatorManager::RemoveAuthenticatorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_RemoveAuthenticator_ForwardToCallback);
};

class VirtualAuthenticatorManager_ClearAuthenticators_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ForwardToCallback(
      VirtualAuthenticatorManager::ClearAuthenticatorsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VirtualAuthenticatorManager::ClearAuthenticatorsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_ClearAuthenticators_ForwardToCallback);
};

VirtualAuthenticatorManagerProxy::VirtualAuthenticatorManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VirtualAuthenticatorManagerProxy::CreateAuthenticator(
    VirtualAuthenticatorOptionsPtr in_options, CreateAuthenticatorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::CreateAuthenticator");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::webauth::test::mojom::VirtualAuthenticatorOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in VirtualAuthenticatorManager.CreateAuthenticator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticatorManager_CreateAuthenticator_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorManagerProxy::GetAuthenticators(
    GetAuthenticatorsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::GetAuthenticators");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_GetAuthenticators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticatorManager_GetAuthenticators_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorManagerProxy::RemoveAuthenticator(
    const WTF::String& in_id, RemoveAuthenticatorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::RemoveAuthenticator");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in VirtualAuthenticatorManager.RemoveAuthenticator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticatorManager_RemoveAuthenticator_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VirtualAuthenticatorManagerProxy::ClearAuthenticators(
    ClearAuthenticatorsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::ClearAuthenticators");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VirtualAuthenticatorManager_ClearAuthenticators_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder {
 public:
  static VirtualAuthenticatorManager::CreateAuthenticatorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder> proxy(
        new VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder() {
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
  VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder(
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
        << "VirtualAuthenticatorManager::CreateAuthenticatorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VirtualAuthenticatorPtr in_authenticator);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder);
};

bool VirtualAuthenticatorManager_CreateAuthenticator_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::CreateAuthenticatorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VirtualAuthenticatorPtr p_authenticator{};
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_authenticator =
      input_data_view.TakeAuthenticator<decltype(p_authenticator)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticatorManager::CreateAuthenticator response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_authenticator));
  return true;
}

void VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder::Run(
    VirtualAuthenticatorPtr in_authenticator) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::webauth::test::mojom::VirtualAuthenticatorPtrDataView>(
      in_authenticator, &params->authenticator, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->authenticator),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid authenticator in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::CreateAuthenticatorCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder {
 public:
  static VirtualAuthenticatorManager::GetAuthenticatorsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder> proxy(
        new VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder() {
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
  VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder(
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
        << "VirtualAuthenticatorManager::GetAuthenticatorsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<VirtualAuthenticatorPtrInfo> in_authenticators);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder);
};

bool VirtualAuthenticatorManager_GetAuthenticators_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::GetAuthenticatorsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<VirtualAuthenticatorPtrInfo> p_authenticators{};
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAuthenticators(&p_authenticators))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticatorManager::GetAuthenticators response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_authenticators));
  return true;
}

void VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder::Run(
    WTF::Vector<VirtualAuthenticatorPtrInfo> in_authenticators) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_GetAuthenticators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->authenticators)::BaseType::BufferWriter
      authenticators_writer;
  const mojo::internal::ContainerValidateParams authenticators_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::webauth::test::mojom::VirtualAuthenticatorPtrDataView>>(
      in_authenticators, buffer, &authenticators_writer, &authenticators_validate_params,
      &serialization_context);
  params->authenticators.Set(
      authenticators_writer.is_null() ? nullptr : authenticators_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->authenticators.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null authenticators in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::GetAuthenticatorsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder {
 public:
  static VirtualAuthenticatorManager::RemoveAuthenticatorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder> proxy(
        new VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder() {
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
  VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder(
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
        << "VirtualAuthenticatorManager::RemoveAuthenticatorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_removed);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder);
};

bool VirtualAuthenticatorManager_RemoveAuthenticator_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::RemoveAuthenticatorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_removed{};
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_removed = input_data_view.removed();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticatorManager::RemoveAuthenticator response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_removed));
  return true;
}

void VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder::Run(
    bool in_removed) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->removed = in_removed;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::RemoveAuthenticatorCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder {
 public:
  static VirtualAuthenticatorManager::ClearAuthenticatorsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder> proxy(
        new VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder() {
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
  VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder(
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
        << "VirtualAuthenticatorManager::ClearAuthenticatorsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder);
};

bool VirtualAuthenticatorManager_ClearAuthenticators_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "webauth::test::mojom::VirtualAuthenticatorManager::ClearAuthenticatorsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VirtualAuthenticatorManager::ClearAuthenticators response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::webauth::test::mojom::internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::ClearAuthenticatorsCallback",
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
bool VirtualAuthenticatorManagerStubDispatch::Accept(
    VirtualAuthenticatorManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::CreateAuthenticator",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticatorManager_GetAuthenticators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::GetAuthenticators",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::RemoveAuthenticator",
               "message", message->name());
#endif
      break;
    }
    case internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::ClearAuthenticators",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VirtualAuthenticatorManagerStubDispatch::AcceptWithResponder(
    VirtualAuthenticatorManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::CreateAuthenticator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticatorOptionsPtr p_options{};
      VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticatorManager::CreateAuthenticator deserializer");
        return false;
      }
      VirtualAuthenticatorManager::CreateAuthenticatorCallback callback =
          VirtualAuthenticatorManager_CreateAuthenticator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateAuthenticator(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticatorManager_GetAuthenticators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::GetAuthenticators",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticatorManager::GetAuthenticators deserializer");
        return false;
      }
      VirtualAuthenticatorManager::GetAuthenticatorsCallback callback =
          VirtualAuthenticatorManager_GetAuthenticators_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAuthenticators(std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::RemoveAuthenticator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_id{};
      VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticatorManager::RemoveAuthenticator deserializer");
        return false;
      }
      VirtualAuthenticatorManager::RemoveAuthenticatorCallback callback =
          VirtualAuthenticatorManager_RemoveAuthenticator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveAuthenticator(
std::move(p_id), std::move(callback));
      return true;
    }
    case internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)webauth::test::mojom::VirtualAuthenticatorManager::ClearAuthenticators",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* params =
          reinterpret_cast<
              internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VirtualAuthenticatorManager::ClearAuthenticators deserializer");
        return false;
      }
      VirtualAuthenticatorManager::ClearAuthenticatorsCallback callback =
          VirtualAuthenticatorManager_ClearAuthenticators_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearAuthenticators(std::move(callback));
      return true;
    }
  }
  return false;
}

bool VirtualAuthenticatorManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VirtualAuthenticatorManager RequestValidator");

  switch (message->header()->name) {
    case internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_GetAuthenticators_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data>(
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

bool VirtualAuthenticatorManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VirtualAuthenticatorManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVirtualAuthenticatorManager_CreateAuthenticator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_GetAuthenticators_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_RemoveAuthenticator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVirtualAuthenticatorManager_ClearAuthenticators_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data>(
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
void VirtualAuthenticatorManagerInterceptorForTesting::CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) {
  GetForwardingInterface()->CreateAuthenticator(std::move(options), std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::GetAuthenticators(GetAuthenticatorsCallback callback) {
  GetForwardingInterface()->GetAuthenticators(std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::RemoveAuthenticator(const WTF::String& id, RemoveAuthenticatorCallback callback) {
  GetForwardingInterface()->RemoveAuthenticator(std::move(id), std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::ClearAuthenticators(ClearAuthenticatorsCallback callback) {
  GetForwardingInterface()->ClearAuthenticators(std::move(callback));
}
VirtualAuthenticatorManagerAsyncWaiter::VirtualAuthenticatorManagerAsyncWaiter(
    VirtualAuthenticatorManager* proxy) : proxy_(proxy) {}

VirtualAuthenticatorManagerAsyncWaiter::~VirtualAuthenticatorManagerAsyncWaiter() = default;

void VirtualAuthenticatorManagerAsyncWaiter::CreateAuthenticator(
    VirtualAuthenticatorOptionsPtr options, VirtualAuthenticatorPtr* out_authenticator) {
  base::RunLoop loop;
  proxy_->CreateAuthenticator(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             VirtualAuthenticatorPtr* out_authenticator
,
             VirtualAuthenticatorPtr authenticator) {*out_authenticator = std::move(authenticator);
            loop->Quit();
          },
          &loop,
          out_authenticator));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::GetAuthenticators(
    WTF::Vector<VirtualAuthenticatorPtrInfo>* out_authenticators) {
  base::RunLoop loop;
  proxy_->GetAuthenticators(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<VirtualAuthenticatorPtrInfo>* out_authenticators
,
             WTF::Vector<VirtualAuthenticatorPtrInfo> authenticators) {*out_authenticators = std::move(authenticators);
            loop->Quit();
          },
          &loop,
          out_authenticators));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::RemoveAuthenticator(
    const WTF::String& id, bool* out_removed) {
  base::RunLoop loop;
  proxy_->RemoveAuthenticator(std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_removed
,
             bool removed) {*out_removed = std::move(removed);
            loop->Quit();
          },
          &loop,
          out_removed));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::ClearAuthenticators(
    ) {
  base::RunLoop loop;
  proxy_->ClearAuthenticators(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace test
}  // namespace webauth

namespace mojo {


// static
bool StructTraits<::webauth::test::mojom::blink::VirtualAuthenticatorOptions::DataView, ::webauth::test::mojom::blink::VirtualAuthenticatorOptionsPtr>::Read(
    ::webauth::test::mojom::blink::VirtualAuthenticatorOptions::DataView input,
    ::webauth::test::mojom::blink::VirtualAuthenticatorOptionsPtr* output) {
  bool success = true;
  ::webauth::test::mojom::blink::VirtualAuthenticatorOptionsPtr result(::webauth::test::mojom::blink::VirtualAuthenticatorOptions::New());
  
      if (!input.ReadProtocol(&result->protocol))
        success = false;
      if (!input.ReadTransport(&result->transport))
        success = false;
      if (!input.ReadAttachment(&result->attachment))
        success = false;
      result->has_resident_key = input.has_resident_key();
      result->has_user_verification = input.has_user_verification();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::webauth::test::mojom::blink::RegisteredKey::DataView, ::webauth::test::mojom::blink::RegisteredKeyPtr>::Read(
    ::webauth::test::mojom::blink::RegisteredKey::DataView input,
    ::webauth::test::mojom::blink::RegisteredKeyPtr* output) {
  bool success = true;
  ::webauth::test::mojom::blink::RegisteredKeyPtr result(::webauth::test::mojom::blink::RegisteredKey::New());
  
      if (!input.ReadKeyHandle(&result->key_handle))
        success = false;
      if (!input.ReadApplicationParameter(&result->application_parameter))
        success = false;
      if (!input.ReadPrivateKey(&result->private_key))
        success = false;
      result->counter = input.counter();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
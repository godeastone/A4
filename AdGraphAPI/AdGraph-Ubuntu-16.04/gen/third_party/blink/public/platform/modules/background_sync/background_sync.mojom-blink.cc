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

#include "third_party/blink/public/platform/modules/background_sync/background_sync.mojom-blink.h"

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

#include "third_party/blink/public/platform/modules/background_sync/background_sync.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace blink {
namespace mojom {
namespace blink {
SyncRegistration::SyncRegistration()
    : id(-1),
      tag(""),
      network_state(BackgroundSyncNetworkState::ONLINE) {}

SyncRegistration::SyncRegistration(
    int64_t id_in,
    const WTF::String& tag_in,
    BackgroundSyncNetworkState network_state_in)
    : id(std::move(id_in)),
      tag(std::move(tag_in)),
      network_state(std::move(network_state_in)) {}

SyncRegistration::~SyncRegistration() = default;
size_t SyncRegistration::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->id);
  seed = mojo::internal::WTFHash(seed, this->tag);
  seed = mojo::internal::WTFHash(seed, this->network_state);
  return seed;
}

bool SyncRegistration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BackgroundSyncService::Name_[] = "blink.mojom.BackgroundSyncService";

class BackgroundSyncService_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_Register_ForwardToCallback(
      BackgroundSyncService::RegisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::RegisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ForwardToCallback);
};

class BackgroundSyncService_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_GetRegistrations_ForwardToCallback(
      BackgroundSyncService::GetRegistrationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::GetRegistrationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ForwardToCallback);
};

BackgroundSyncServiceProxy::BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BackgroundSyncServiceProxy::Register(
    SyncRegistrationPtr in_options, int64_t in_service_worker_registration_id, RegisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BackgroundSyncService::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register request");
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundSyncService_Register_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundSyncServiceProxy::GetRegistrations(
    int64_t in_service_worker_registration_id, GetRegistrationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BackgroundSyncService::GetRegistrations");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundSyncService_GetRegistrations_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BackgroundSyncService_Register_ProxyToResponder {
 public:
  static BackgroundSyncService::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundSyncService_Register_ProxyToResponder> proxy(
        new BackgroundSyncService_Register_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundSyncService_Register_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundSyncService_Register_ProxyToResponder() {
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
  BackgroundSyncService_Register_ProxyToResponder(
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
        << "BackgroundSyncService::RegisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundSyncError in_err, SyncRegistrationPtr in_options);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ProxyToResponder);
};

bool BackgroundSyncService_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BackgroundSyncService::RegisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundSyncService_Register_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundSyncService_Register_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundSyncError p_err{};
  SyncRegistrationPtr p_options{};
  BackgroundSyncService_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadOptions(&p_options))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BackgroundSyncService::Register response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err), 
std::move(p_options));
  return true;
}

void BackgroundSyncService_Register_ProxyToResponder::Run(
    BackgroundSyncError in_err, SyncRegistrationPtr in_options) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_Register_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::RegisterCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundSyncService_GetRegistrations_ProxyToResponder {
 public:
  static BackgroundSyncService::GetRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundSyncService_GetRegistrations_ProxyToResponder> proxy(
        new BackgroundSyncService_GetRegistrations_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundSyncService_GetRegistrations_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundSyncService_GetRegistrations_ProxyToResponder() {
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
  BackgroundSyncService_GetRegistrations_ProxyToResponder(
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
        << "BackgroundSyncService::GetRegistrationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundSyncError in_err, WTF::Vector<SyncRegistrationPtr> in_registrations);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ProxyToResponder);
};

bool BackgroundSyncService_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BackgroundSyncService::GetRegistrationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundSyncError p_err{};
  WTF::Vector<SyncRegistrationPtr> p_registrations{};
  BackgroundSyncService_GetRegistrations_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadRegistrations(&p_registrations))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BackgroundSyncService::GetRegistrations response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err), 
std::move(p_registrations));
  return true;
}

void BackgroundSyncService_GetRegistrations_ProxyToResponder::Run(
    BackgroundSyncError in_err, WTF::Vector<SyncRegistrationPtr> in_registrations) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->registrations)::BaseType::BufferWriter
      registrations_writer;
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SyncRegistrationDataView>>(
      in_registrations, buffer, &registrations_writer, &registrations_validate_params,
      &serialization_context);
  params->registrations.Set(
      registrations_writer.is_null() ? nullptr : registrations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registrations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registrations in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::GetRegistrationsCallback",
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
bool BackgroundSyncServiceStubDispatch::Accept(
    BackgroundSyncService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::Register",
               "message", message->name());
#endif
      break;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::GetRegistrations",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool BackgroundSyncServiceStubDispatch::AcceptWithResponder(
    BackgroundSyncService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::Register",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundSyncService_Register_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundSyncService_Register_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SyncRegistrationPtr p_options{};
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_Register_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BackgroundSyncService::Register deserializer");
        return false;
      }
      BackgroundSyncService::RegisterCallback callback =
          BackgroundSyncService_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Register(
std::move(p_options), 
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BackgroundSyncService::GetRegistrations",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundSyncService_GetRegistrations_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundSyncService_GetRegistrations_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_GetRegistrations_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BackgroundSyncService::GetRegistrations deserializer");
        return false;
      }
      BackgroundSyncService::GetRegistrationsCallback callback =
          BackgroundSyncService_GetRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetRegistrations(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool BackgroundSyncServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundSyncService RequestValidator");

  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_Params_Data>(
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

bool BackgroundSyncServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundSyncService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data>(
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
void BackgroundSyncServiceInterceptorForTesting::Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(options), std::move(service_worker_registration_id), std::move(callback));
}
void BackgroundSyncServiceInterceptorForTesting::GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) {
  GetForwardingInterface()->GetRegistrations(std::move(service_worker_registration_id), std::move(callback));
}
BackgroundSyncServiceAsyncWaiter::BackgroundSyncServiceAsyncWaiter(
    BackgroundSyncService* proxy) : proxy_(proxy) {}

BackgroundSyncServiceAsyncWaiter::~BackgroundSyncServiceAsyncWaiter() = default;

void BackgroundSyncServiceAsyncWaiter::Register(
    SyncRegistrationPtr options, int64_t service_worker_registration_id, BackgroundSyncError* out_err, SyncRegistrationPtr* out_options) {
  base::RunLoop loop;
  proxy_->Register(std::move(options),std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundSyncError* out_err
,
             SyncRegistrationPtr* out_options
,
             BackgroundSyncError err,
             SyncRegistrationPtr options) {*out_err = std::move(err);*out_options = std::move(options);
            loop->Quit();
          },
          &loop,
          out_err,
          out_options));
  loop.Run();
}
void BackgroundSyncServiceAsyncWaiter::GetRegistrations(
    int64_t service_worker_registration_id, BackgroundSyncError* out_err, WTF::Vector<SyncRegistrationPtr>* out_registrations) {
  base::RunLoop loop;
  proxy_->GetRegistrations(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundSyncError* out_err
,
             WTF::Vector<SyncRegistrationPtr>* out_registrations
,
             BackgroundSyncError err,
             WTF::Vector<SyncRegistrationPtr> registrations) {*out_err = std::move(err);*out_registrations = std::move(registrations);
            loop->Quit();
          },
          &loop,
          out_err,
          out_registrations));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SyncRegistration::DataView, ::blink::mojom::blink::SyncRegistrationPtr>::Read(
    ::blink::mojom::blink::SyncRegistration::DataView input,
    ::blink::mojom::blink::SyncRegistrationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SyncRegistrationPtr result(::blink::mojom::blink::SyncRegistration::New());
  
      result->id = input.id();
      if (!input.ReadTag(&result->tag))
        success = false;
      if (!input.ReadNetworkState(&result->network_state))
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
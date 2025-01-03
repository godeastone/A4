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

#include "services/service_manager/public/mojom/connector.mojom-blink.h"

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

#include "services/service_manager/public/mojom/connector.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace service_manager {
namespace mojom {
namespace blink {
Identity::Identity()
    : name(),
      user_id(),
      instance() {}

Identity::Identity(
    const WTF::String& name_in,
    const WTF::String& user_id_in,
    const WTF::String& instance_in)
    : name(std::move(name_in)),
      user_id(std::move(user_id_in)),
      instance(std::move(instance_in)) {}

Identity::~Identity() = default;
size_t Identity::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->user_id);
  seed = mojo::internal::WTFHash(seed, this->instance);
  return seed;
}

bool Identity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PIDReceiver::Name_[] = "service_manager.mojom.PIDReceiver";

PIDReceiverProxy::PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PIDReceiverProxy::SetPID(
    uint32_t in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::PIDReceiver::SetPID");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPIDReceiver_SetPID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::PIDReceiver_SetPID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->pid = in_pid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PIDReceiverStubDispatch::Accept(
    PIDReceiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::PIDReceiver::SetPID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PIDReceiver_SetPID_Params_Data* params =
          reinterpret_cast<internal::PIDReceiver_SetPID_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_pid{};
      PIDReceiver_SetPID_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PIDReceiver::SetPID deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPID(
std::move(p_pid));
      return true;
    }
  }
  return false;
}

// static
bool PIDReceiverStubDispatch::AcceptWithResponder(
    PIDReceiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::PIDReceiver::SetPID",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PIDReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PIDReceiver RequestValidator");

  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PIDReceiver_SetPID_Params_Data>(
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

void PIDReceiverInterceptorForTesting::SetPID(uint32_t pid) {
  GetForwardingInterface()->SetPID(std::move(pid));
}
PIDReceiverAsyncWaiter::PIDReceiverAsyncWaiter(
    PIDReceiver* proxy) : proxy_(proxy) {}

PIDReceiverAsyncWaiter::~PIDReceiverAsyncWaiter() = default;


const char Connector::Name_[] = "service_manager.mojom.Connector";

class Connector_BindInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_BindInterface_ForwardToCallback(
      Connector::BindInterfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::BindInterfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_BindInterface_ForwardToCallback);
};

class Connector_QueryService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_QueryService_ForwardToCallback(
      Connector::QueryServiceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::QueryServiceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_QueryService_ForwardToCallback);
};

class Connector_StartService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_StartService_ForwardToCallback(
      Connector::StartServiceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::StartServiceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_StartService_ForwardToCallback);
};

class Connector_StartServiceWithProcess_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_StartServiceWithProcess_ForwardToCallback(
      Connector::StartServiceWithProcessCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::StartServiceWithProcessCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_StartServiceWithProcess_ForwardToCallback);
};

ConnectorProxy::ConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ConnectorProxy::BindInterface(
    IdentityPtr in_target, const WTF::String& in_interface_name, mojo::ScopedMessagePipeHandle in_interface_pipe, BindInterfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::BindInterface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_BindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_BindInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in Connector.BindInterface request");
  typename decltype(params->interface_name)::BaseType::BufferWriter
      interface_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_interface_name, buffer, &interface_name_writer, &serialization_context);
  params->interface_name.Set(
      interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interface_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in Connector.BindInterface request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_interface_pipe, &params->interface_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_pipe in Connector.BindInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_BindInterface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::QueryService(
    IdentityPtr in_target, QueryServiceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::QueryService");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_QueryService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_QueryService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in Connector.QueryService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_QueryService_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::StartService(
    IdentityPtr in_target, StartServiceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::StartService");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_StartService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_StartService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in Connector.StartService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_StartService_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::StartServiceWithProcess(
    IdentityPtr in_target, mojo::ScopedMessagePipeHandle in_service, PIDReceiverRequest in_pid_receiver_request, StartServiceWithProcessCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::StartServiceWithProcess");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_StartServiceWithProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_StartServiceWithProcess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in Connector.StartServiceWithProcess request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_service, &params->service, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service in Connector.StartServiceWithProcess request");
  mojo::internal::Serialize<::service_manager::mojom::PIDReceiverRequestDataView>(
      in_pid_receiver_request, &params->pid_receiver_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pid_receiver_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pid_receiver_request in Connector.StartServiceWithProcess request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_StartServiceWithProcess_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::Clone(
    ConnectorRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectorRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in Connector.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ConnectorProxy::FilterInterfaces(
    const WTF::String& in_spec, IdentityPtr in_source, ::service_manager::mojom::blink::InterfaceProviderRequest in_source_request, ::service_manager::mojom::blink::InterfaceProviderPtr in_target) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::Connector::FilterInterfaces");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_FilterInterfaces_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_FilterInterfaces_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->spec)::BaseType::BufferWriter
      spec_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_spec, buffer, &spec_writer, &serialization_context);
  params->spec.Set(
      spec_writer.is_null() ? nullptr : spec_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->spec.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null spec in Connector.FilterInterfaces request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in Connector.FilterInterfaces request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_source_request, &params->source_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->source_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source_request in Connector.FilterInterfaces request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_target, &params->target, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->target),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid target in Connector.FilterInterfaces request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Connector_BindInterface_ProxyToResponder {
 public:
  static Connector::BindInterfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_BindInterface_ProxyToResponder> proxy(
        new Connector_BindInterface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_BindInterface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_BindInterface_ProxyToResponder() {
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
  Connector_BindInterface_ProxyToResponder(
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
        << "Connector::BindInterfaceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, IdentityPtr in_user_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_BindInterface_ProxyToResponder);
};

bool Connector_BindInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "service_manager::mojom::Connector::BindInterfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_BindInterface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_BindInterface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  IdentityPtr p_user_id{};
  Connector_BindInterface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadUserId(&p_user_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Connector::BindInterface response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_user_id));
  return true;
}

void Connector_BindInterface_ProxyToResponder::Run(
    ConnectResult in_result, IdentityPtr in_user_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_BindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_BindInterface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->user_id)::BaseType::BufferWriter
      user_id_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_user_id, buffer, &user_id_writer, &serialization_context);
  params->user_id.Set(
      user_id_writer.is_null() ? nullptr : user_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::BindInterfaceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_QueryService_ProxyToResponder {
 public:
  static Connector::QueryServiceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_QueryService_ProxyToResponder> proxy(
        new Connector_QueryService_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_QueryService_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_QueryService_ProxyToResponder() {
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
  Connector_QueryService_ProxyToResponder(
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
        << "Connector::QueryServiceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, const WTF::String& in_sandbox_type);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_QueryService_ProxyToResponder);
};

bool Connector_QueryService_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "service_manager::mojom::Connector::QueryServiceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_QueryService_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_QueryService_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  WTF::String p_sandbox_type{};
  Connector_QueryService_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadSandboxType(&p_sandbox_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Connector::QueryService response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_sandbox_type));
  return true;
}

void Connector_QueryService_ProxyToResponder::Run(
    ConnectResult in_result, const WTF::String& in_sandbox_type) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_QueryService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_QueryService_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->sandbox_type)::BaseType::BufferWriter
      sandbox_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sandbox_type, buffer, &sandbox_type_writer, &serialization_context);
  params->sandbox_type.Set(
      sandbox_type_writer.is_null() ? nullptr : sandbox_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sandbox_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sandbox_type in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::QueryServiceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_StartService_ProxyToResponder {
 public:
  static Connector::StartServiceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_StartService_ProxyToResponder> proxy(
        new Connector_StartService_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_StartService_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_StartService_ProxyToResponder() {
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
  Connector_StartService_ProxyToResponder(
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
        << "Connector::StartServiceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, IdentityPtr in_identity);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_StartService_ProxyToResponder);
};

bool Connector_StartService_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "service_manager::mojom::Connector::StartServiceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_StartService_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_StartService_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  IdentityPtr p_identity{};
  Connector_StartService_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Connector::StartService response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_identity));
  return true;
}

void Connector_StartService_ProxyToResponder::Run(
    ConnectResult in_result, IdentityPtr in_identity) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_StartService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_StartService_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartServiceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_StartServiceWithProcess_ProxyToResponder {
 public:
  static Connector::StartServiceWithProcessCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_StartServiceWithProcess_ProxyToResponder> proxy(
        new Connector_StartServiceWithProcess_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_StartServiceWithProcess_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_StartServiceWithProcess_ProxyToResponder() {
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
  Connector_StartServiceWithProcess_ProxyToResponder(
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
        << "Connector::StartServiceWithProcessCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, IdentityPtr in_identity);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_StartServiceWithProcess_ProxyToResponder);
};

bool Connector_StartServiceWithProcess_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "service_manager::mojom::Connector::StartServiceWithProcessCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_StartServiceWithProcess_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_StartServiceWithProcess_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  IdentityPtr p_identity{};
  Connector_StartServiceWithProcess_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Connector::StartServiceWithProcess response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_identity));
  return true;
}

void Connector_StartServiceWithProcess_ProxyToResponder::Run(
    ConnectResult in_result, IdentityPtr in_identity) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_StartServiceWithProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_StartServiceWithProcess_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartServiceWithProcessCallback",
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
bool ConnectorStubDispatch::Accept(
    Connector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::BindInterface",
               "message", message->name());
#endif
      break;
    }
    case internal::kConnector_QueryService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::QueryService",
               "message", message->name());
#endif
      break;
    }
    case internal::kConnector_StartService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartService",
               "message", message->name());
#endif
      break;
    }
    case internal::kConnector_StartServiceWithProcess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartServiceWithProcess",
               "message", message->name());
#endif
      break;
    }
    case internal::kConnector_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Connector_Clone_Params_Data* params =
          reinterpret_cast<internal::Connector_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ConnectorRequest p_request{};
      Connector_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_request));
      return true;
    }
    case internal::kConnector_FilterInterfaces_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::FilterInterfaces",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Connector_FilterInterfaces_Params_Data* params =
          reinterpret_cast<internal::Connector_FilterInterfaces_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_spec{};
      IdentityPtr p_source{};
      ::service_manager::mojom::blink::InterfaceProviderRequest p_source_request{};
      ::service_manager::mojom::blink::InterfaceProviderPtr p_target{};
      Connector_FilterInterfaces_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSpec(&p_spec))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      p_source_request =
          input_data_view.TakeSourceRequest<decltype(p_source_request)>();
      p_target =
          input_data_view.TakeTarget<decltype(p_target)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::FilterInterfaces deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FilterInterfaces(
std::move(p_spec), 
std::move(p_source), 
std::move(p_source_request), 
std::move(p_target));
      return true;
    }
  }
  return false;
}

// static
bool ConnectorStubDispatch::AcceptWithResponder(
    Connector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::BindInterface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_BindInterface_Params_Data* params =
          reinterpret_cast<
              internal::Connector_BindInterface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityPtr p_target{};
      WTF::String p_interface_name{};
      mojo::ScopedMessagePipeHandle p_interface_pipe{};
      Connector_BindInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!input_data_view.ReadInterfaceName(&p_interface_name))
        success = false;
      p_interface_pipe = input_data_view.TakeInterfacePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::BindInterface deserializer");
        return false;
      }
      Connector::BindInterfaceCallback callback =
          Connector_BindInterface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BindInterface(
std::move(p_target), 
std::move(p_interface_name), 
std::move(p_interface_pipe), std::move(callback));
      return true;
    }
    case internal::kConnector_QueryService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::QueryService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_QueryService_Params_Data* params =
          reinterpret_cast<
              internal::Connector_QueryService_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityPtr p_target{};
      Connector_QueryService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::QueryService deserializer");
        return false;
      }
      Connector::QueryServiceCallback callback =
          Connector_QueryService_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueryService(
std::move(p_target), std::move(callback));
      return true;
    }
    case internal::kConnector_StartService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_StartService_Params_Data* params =
          reinterpret_cast<
              internal::Connector_StartService_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityPtr p_target{};
      Connector_StartService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::StartService deserializer");
        return false;
      }
      Connector::StartServiceCallback callback =
          Connector_StartService_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartService(
std::move(p_target), std::move(callback));
      return true;
    }
    case internal::kConnector_StartServiceWithProcess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::StartServiceWithProcess",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_StartServiceWithProcess_Params_Data* params =
          reinterpret_cast<
              internal::Connector_StartServiceWithProcess_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IdentityPtr p_target{};
      mojo::ScopedMessagePipeHandle p_service{};
      PIDReceiverRequest p_pid_receiver_request{};
      Connector_StartServiceWithProcess_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      p_service = input_data_view.TakeService();
      p_pid_receiver_request =
          input_data_view.TakePidReceiverRequest<decltype(p_pid_receiver_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::StartServiceWithProcess deserializer");
        return false;
      }
      Connector::StartServiceWithProcessCallback callback =
          Connector_StartServiceWithProcess_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartServiceWithProcess(
std::move(p_target), 
std::move(p_service), 
std::move(p_pid_receiver_request), std::move(callback));
      return true;
    }
    case internal::kConnector_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::Clone",
               "message", message->name());
#endif
      break;
    }
    case internal::kConnector_FilterInterfaces_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::Connector::FilterInterfaces",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Connector RequestValidator");

  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_BindInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_QueryService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_QueryService_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_StartService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_StartService_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_StartServiceWithProcess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_StartServiceWithProcess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_Clone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_FilterInterfaces_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_FilterInterfaces_Params_Data>(
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

bool ConnectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Connector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_BindInterface_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_QueryService_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_QueryService_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_StartService_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_StartService_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_StartServiceWithProcess_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_StartServiceWithProcess_ResponseParams_Data>(
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
void ConnectorInterceptorForTesting::BindInterface(IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfaceCallback callback) {
  GetForwardingInterface()->BindInterface(std::move(target), std::move(interface_name), std::move(interface_pipe), std::move(callback));
}
void ConnectorInterceptorForTesting::QueryService(IdentityPtr target, QueryServiceCallback callback) {
  GetForwardingInterface()->QueryService(std::move(target), std::move(callback));
}
void ConnectorInterceptorForTesting::StartService(IdentityPtr target, StartServiceCallback callback) {
  GetForwardingInterface()->StartService(std::move(target), std::move(callback));
}
void ConnectorInterceptorForTesting::StartServiceWithProcess(IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, StartServiceWithProcessCallback callback) {
  GetForwardingInterface()->StartServiceWithProcess(std::move(target), std::move(service), std::move(pid_receiver_request), std::move(callback));
}
void ConnectorInterceptorForTesting::Clone(ConnectorRequest request) {
  GetForwardingInterface()->Clone(std::move(request));
}
void ConnectorInterceptorForTesting::FilterInterfaces(const WTF::String& spec, IdentityPtr source, ::service_manager::mojom::blink::InterfaceProviderRequest source_request, ::service_manager::mojom::blink::InterfaceProviderPtr target) {
  GetForwardingInterface()->FilterInterfaces(std::move(spec), std::move(source), std::move(source_request), std::move(target));
}
ConnectorAsyncWaiter::ConnectorAsyncWaiter(
    Connector* proxy) : proxy_(proxy) {}

ConnectorAsyncWaiter::~ConnectorAsyncWaiter() = default;

void ConnectorAsyncWaiter::BindInterface(
    IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, ConnectResult* out_result, IdentityPtr* out_user_id) {
  base::RunLoop loop;
  proxy_->BindInterface(std::move(target),std::move(interface_name),std::move(interface_pipe),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             IdentityPtr* out_user_id
,
             ConnectResult result,
             IdentityPtr user_id) {*out_result = std::move(result);*out_user_id = std::move(user_id);
            loop->Quit();
          },
          &loop,
          out_result,
          out_user_id));
  loop.Run();
}
void ConnectorAsyncWaiter::QueryService(
    IdentityPtr target, ConnectResult* out_result, WTF::String* out_sandbox_type) {
  base::RunLoop loop;
  proxy_->QueryService(std::move(target),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             WTF::String* out_sandbox_type
,
             ConnectResult result,
             const WTF::String& sandbox_type) {*out_result = std::move(result);*out_sandbox_type = std::move(sandbox_type);
            loop->Quit();
          },
          &loop,
          out_result,
          out_sandbox_type));
  loop.Run();
}
void ConnectorAsyncWaiter::StartService(
    IdentityPtr target, ConnectResult* out_result, IdentityPtr* out_identity) {
  base::RunLoop loop;
  proxy_->StartService(std::move(target),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             IdentityPtr* out_identity
,
             ConnectResult result,
             IdentityPtr identity) {*out_result = std::move(result);*out_identity = std::move(identity);
            loop->Quit();
          },
          &loop,
          out_result,
          out_identity));
  loop.Run();
}
void ConnectorAsyncWaiter::StartServiceWithProcess(
    IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, ConnectResult* out_result, IdentityPtr* out_identity) {
  base::RunLoop loop;
  proxy_->StartServiceWithProcess(std::move(target),std::move(service),std::move(pid_receiver_request),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             IdentityPtr* out_identity
,
             ConnectResult result,
             IdentityPtr identity) {*out_result = std::move(result);*out_identity = std::move(identity);
            loop->Quit();
          },
          &loop,
          out_result,
          out_identity));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::blink::Identity::DataView, ::service_manager::mojom::blink::IdentityPtr>::Read(
    ::service_manager::mojom::blink::Identity::DataView input,
    ::service_manager::mojom::blink::IdentityPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::IdentityPtr result(::service_manager::mojom::blink::Identity::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadUserId(&result->user_id))
        success = false;
      if (!input.ReadInstance(&result->instance))
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
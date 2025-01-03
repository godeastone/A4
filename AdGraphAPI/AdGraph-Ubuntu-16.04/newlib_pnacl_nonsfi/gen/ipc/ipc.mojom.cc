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

#include "ipc/ipc.mojom.h"

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

#include "ipc/ipc.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/read_only_buffer_mojom_traits.h"
namespace IPC {
namespace mojom {
const char GenericInterface::Name_[] = "IPC.mojom.GenericInterface";

GenericInterfaceProxy::GenericInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool GenericInterfaceStubDispatch::Accept(
    GenericInterface* impl,
    mojo::Message* message) {
  return false;
}

// static
bool GenericInterfaceStubDispatch::AcceptWithResponder(
    GenericInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool GenericInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GenericInterface RequestValidator");

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

GenericInterfaceAsyncWaiter::GenericInterfaceAsyncWaiter(
    GenericInterface* proxy) : proxy_(proxy) {}

GenericInterfaceAsyncWaiter::~GenericInterfaceAsyncWaiter() = default;


const char Channel::Name_[] = "IPC.mojom.Channel";

ChannelProxy::ChannelProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChannelProxy::SetPeerPid(
    int32_t in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "IPC::mojom::Channel::SetPeerPid");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChannel_SetPeerPid_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::IPC::mojom::internal::Channel_SetPeerPid_Params_Data::BufferWriter
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

void ChannelProxy::Receive(
    base::span<const uint8_t> in_data, base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> in_handles) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "IPC::mojom::Channel::Receive");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChannel_Receive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::IPC::mojom::internal::Channel_Receive_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Channel.Receive request");
  typename decltype(params->handles)::BaseType::BufferWriter
      handles_writer;
  const mojo::internal::ContainerValidateParams handles_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
      in_handles, buffer, &handles_writer, &handles_validate_params,
      &serialization_context);
  params->handles.Set(
      handles_writer.is_null() ? nullptr : handles_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChannelProxy::GetAssociatedInterface(
    const std::string& in_name, GenericInterfaceAssociatedRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "IPC::mojom::Channel::GetAssociatedInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChannel_GetAssociatedInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::IPC::mojom::internal::Channel_GetAssociatedInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Channel.GetAssociatedInterface request");
  mojo::internal::Serialize<::IPC::mojom::GenericInterfaceAssociatedRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in Channel.GetAssociatedInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ChannelStubDispatch::Accept(
    Channel* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::SetPeerPid",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Channel_SetPeerPid_Params_Data* params =
          reinterpret_cast<internal::Channel_SetPeerPid_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_pid{};
      Channel_SetPeerPid_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::SetPeerPid deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPeerPid(
std::move(p_pid));
      return true;
    }
    case internal::kChannel_Receive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::Receive",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Channel_Receive_Params_Data* params =
          reinterpret_cast<internal::Channel_Receive_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::span<const uint8_t> p_data{};
      base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> p_handles{};
      Channel_Receive_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadHandles(&p_handles))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::Receive deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Receive(
std::move(p_data), 
std::move(p_handles));
      return true;
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::GetAssociatedInterface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Channel_GetAssociatedInterface_Params_Data* params =
          reinterpret_cast<internal::Channel_GetAssociatedInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      GenericInterfaceAssociatedRequest p_request{};
      Channel_GetAssociatedInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::GetAssociatedInterface deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAssociatedInterface(
std::move(p_name), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool ChannelStubDispatch::AcceptWithResponder(
    Channel* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::SetPeerPid",
               "message", message->name());
#endif
      break;
    }
    case internal::kChannel_Receive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::Receive",
               "message", message->name());
#endif
      break;
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)IPC::mojom::Channel::GetAssociatedInterface",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ChannelRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Channel RequestValidator");

  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_SetPeerPid_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChannel_Receive_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_Receive_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_GetAssociatedInterface_Params_Data>(
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

void ChannelInterceptorForTesting::SetPeerPid(int32_t pid) {
  GetForwardingInterface()->SetPeerPid(std::move(pid));
}
void ChannelInterceptorForTesting::Receive(base::span<const uint8_t> data, base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles) {
  GetForwardingInterface()->Receive(std::move(data), std::move(handles));
}
void ChannelInterceptorForTesting::GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) {
  GetForwardingInterface()->GetAssociatedInterface(std::move(name), std::move(request));
}
ChannelAsyncWaiter::ChannelAsyncWaiter(
    Channel* proxy) : proxy_(proxy) {}

ChannelAsyncWaiter::~ChannelAsyncWaiter() = default;


const char ChannelBootstrap::Name_[] = "IPC.mojom.ChannelBootstrap";

ChannelBootstrapProxy::ChannelBootstrapProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool ChannelBootstrapStubDispatch::Accept(
    ChannelBootstrap* impl,
    mojo::Message* message) {
  return false;
}

// static
bool ChannelBootstrapStubDispatch::AcceptWithResponder(
    ChannelBootstrap* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool ChannelBootstrapRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChannelBootstrap RequestValidator");

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

ChannelBootstrapAsyncWaiter::ChannelBootstrapAsyncWaiter(
    ChannelBootstrap* proxy) : proxy_(proxy) {}

ChannelBootstrapAsyncWaiter::~ChannelBootstrapAsyncWaiter() = default;


}  // namespace mojom
}  // namespace IPC

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
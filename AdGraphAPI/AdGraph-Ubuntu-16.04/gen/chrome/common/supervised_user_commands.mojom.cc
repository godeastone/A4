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

#include "chrome/common/supervised_user_commands.mojom.h"

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

#include "chrome/common/supervised_user_commands.mojom-shared-message-ids.h"
namespace supervised_user {
namespace mojom {
const char SupervisedUserCommands::Name_[] = "supervised_user.mojom.SupervisedUserCommands";

class SupervisedUserCommands_RequestPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SupervisedUserCommands_RequestPermission_ForwardToCallback(
      SupervisedUserCommands::RequestPermissionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SupervisedUserCommands::RequestPermissionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SupervisedUserCommands_RequestPermission_ForwardToCallback);
};

SupervisedUserCommandsProxy::SupervisedUserCommandsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SupervisedUserCommandsProxy::GoBack(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "supervised_user::mojom::SupervisedUserCommands::GoBack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSupervisedUserCommands_GoBack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::supervised_user::mojom::internal::SupervisedUserCommands_GoBack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SupervisedUserCommandsProxy::RequestPermission(
    RequestPermissionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "supervised_user::mojom::SupervisedUserCommands::RequestPermission");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSupervisedUserCommands_RequestPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::supervised_user::mojom::internal::SupervisedUserCommands_RequestPermission_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SupervisedUserCommands_RequestPermission_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SupervisedUserCommandsProxy::Feedback(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "supervised_user::mojom::SupervisedUserCommands::Feedback");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSupervisedUserCommands_Feedback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::supervised_user::mojom::internal::SupervisedUserCommands_Feedback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SupervisedUserCommands_RequestPermission_ProxyToResponder {
 public:
  static SupervisedUserCommands::RequestPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SupervisedUserCommands_RequestPermission_ProxyToResponder> proxy(
        new SupervisedUserCommands_RequestPermission_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SupervisedUserCommands_RequestPermission_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SupervisedUserCommands_RequestPermission_ProxyToResponder() {
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
  SupervisedUserCommands_RequestPermission_ProxyToResponder(
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
        << "SupervisedUserCommands::RequestPermissionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SupervisedUserCommands_RequestPermission_ProxyToResponder);
};

bool SupervisedUserCommands_RequestPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "supervised_user::mojom::SupervisedUserCommands::RequestPermissionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SupervisedUserCommands_RequestPermission_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SupervisedUserCommands::RequestPermission response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SupervisedUserCommands_RequestPermission_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSupervisedUserCommands_RequestPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::supervised_user::mojom::internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::RequestPermissionCallback",
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
bool SupervisedUserCommandsStubDispatch::Accept(
    SupervisedUserCommands* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSupervisedUserCommands_GoBack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::GoBack",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SupervisedUserCommands_GoBack_Params_Data* params =
          reinterpret_cast<internal::SupervisedUserCommands_GoBack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SupervisedUserCommands_GoBack_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SupervisedUserCommands::GoBack deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GoBack();
      return true;
    }
    case internal::kSupervisedUserCommands_RequestPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::RequestPermission",
               "message", message->name());
#endif
      break;
    }
    case internal::kSupervisedUserCommands_Feedback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::Feedback",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SupervisedUserCommands_Feedback_Params_Data* params =
          reinterpret_cast<internal::SupervisedUserCommands_Feedback_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SupervisedUserCommands_Feedback_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SupervisedUserCommands::Feedback deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Feedback();
      return true;
    }
  }
  return false;
}

// static
bool SupervisedUserCommandsStubDispatch::AcceptWithResponder(
    SupervisedUserCommands* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSupervisedUserCommands_GoBack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::GoBack",
               "message", message->name());
#endif
      break;
    }
    case internal::kSupervisedUserCommands_RequestPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::RequestPermission",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SupervisedUserCommands_RequestPermission_Params_Data* params =
          reinterpret_cast<
              internal::SupervisedUserCommands_RequestPermission_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SupervisedUserCommands_RequestPermission_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SupervisedUserCommands::RequestPermission deserializer");
        return false;
      }
      SupervisedUserCommands::RequestPermissionCallback callback =
          SupervisedUserCommands_RequestPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestPermission(std::move(callback));
      return true;
    }
    case internal::kSupervisedUserCommands_Feedback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)supervised_user::mojom::SupervisedUserCommands::Feedback",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SupervisedUserCommandsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SupervisedUserCommands RequestValidator");

  switch (message->header()->name) {
    case internal::kSupervisedUserCommands_GoBack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SupervisedUserCommands_GoBack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSupervisedUserCommands_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SupervisedUserCommands_RequestPermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSupervisedUserCommands_Feedback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SupervisedUserCommands_Feedback_Params_Data>(
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

bool SupervisedUserCommandsResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SupervisedUserCommands ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSupervisedUserCommands_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data>(
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
void SupervisedUserCommandsInterceptorForTesting::GoBack() {
  GetForwardingInterface()->GoBack();
}
void SupervisedUserCommandsInterceptorForTesting::RequestPermission(RequestPermissionCallback callback) {
  GetForwardingInterface()->RequestPermission(std::move(callback));
}
void SupervisedUserCommandsInterceptorForTesting::Feedback() {
  GetForwardingInterface()->Feedback();
}
SupervisedUserCommandsAsyncWaiter::SupervisedUserCommandsAsyncWaiter(
    SupervisedUserCommands* proxy) : proxy_(proxy) {}

SupervisedUserCommandsAsyncWaiter::~SupervisedUserCommandsAsyncWaiter() = default;

void SupervisedUserCommandsAsyncWaiter::RequestPermission(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->RequestPermission(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}

}  // namespace mojom
}  // namespace supervised_user

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
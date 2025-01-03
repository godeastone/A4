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

#include "services/ui/public/interfaces/display/output_protection.mojom.h"

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

#include "services/ui/public/interfaces/display/output_protection.mojom-shared-message-ids.h"
namespace display {
namespace mojom {
const char OutputProtection::Name_[] = "display.mojom.OutputProtection";

class OutputProtection_QueryContentProtectionStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_QueryContentProtectionStatus_ForwardToCallback(
      const OutputProtection::QueryContentProtectionStatusCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::QueryContentProtectionStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryContentProtectionStatus_ForwardToCallback);
};

class OutputProtection_SetContentProtection_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_SetContentProtection_ForwardToCallback(
      const OutputProtection::SetContentProtectionCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::SetContentProtectionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_SetContentProtection_ForwardToCallback);
};

OutputProtectionProxy::OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OutputProtectionProxy::QueryContentProtectionStatus(
    int64_t in_display_id, const QueryContentProtectionStatusCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::OutputProtection::QueryContentProtectionStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_QueryContentProtectionStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::OutputProtection_QueryContentProtectionStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new OutputProtection_QueryContentProtectionStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void OutputProtectionProxy::SetContentProtection(
    int64_t in_display_id, uint32_t in_desired_method_mask, const SetContentProtectionCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::OutputProtection::SetContentProtection");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_SetContentProtection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::OutputProtection_SetContentProtection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  params->desired_method_mask = in_desired_method_mask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new OutputProtection_SetContentProtection_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class OutputProtection_QueryContentProtectionStatus_ProxyToResponder {
 public:
  static OutputProtection::QueryContentProtectionStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<OutputProtection_QueryContentProtectionStatus_ProxyToResponder> proxy(
        new OutputProtection_QueryContentProtectionStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&OutputProtection_QueryContentProtectionStatus_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OutputProtection_QueryContentProtectionStatus_ProxyToResponder() {
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
  OutputProtection_QueryContentProtectionStatus_ProxyToResponder(
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
        << "OutputProtection::QueryContentProtectionStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryContentProtectionStatus_ProxyToResponder);
};

bool OutputProtection_QueryContentProtectionStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::OutputProtection::QueryContentProtectionStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  uint32_t p_link_mask{};
  uint32_t p_protection_mask{};
  OutputProtection_QueryContentProtectionStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_link_mask = input_data_view.link_mask();
  p_protection_mask = input_data_view.protection_mask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OutputProtection::QueryContentProtectionStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_link_mask), 
std::move(p_protection_mask));
  return true;
}

void OutputProtection_QueryContentProtectionStatus_ProxyToResponder::Run(
    bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_QueryContentProtectionStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->link_mask = in_link_mask;
  params->protection_mask = in_protection_mask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::QueryContentProtectionStatusCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class OutputProtection_SetContentProtection_ProxyToResponder {
 public:
  static OutputProtection::SetContentProtectionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<OutputProtection_SetContentProtection_ProxyToResponder> proxy(
        new OutputProtection_SetContentProtection_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&OutputProtection_SetContentProtection_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OutputProtection_SetContentProtection_ProxyToResponder() {
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
  OutputProtection_SetContentProtection_ProxyToResponder(
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
        << "OutputProtection::SetContentProtectionCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_SetContentProtection_ProxyToResponder);
};

bool OutputProtection_SetContentProtection_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::OutputProtection::SetContentProtectionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::OutputProtection_SetContentProtection_ResponseParams_Data* params =
      reinterpret_cast<
          internal::OutputProtection_SetContentProtection_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  OutputProtection_SetContentProtection_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OutputProtection::SetContentProtection response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void OutputProtection_SetContentProtection_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_SetContentProtection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::OutputProtection_SetContentProtection_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::SetContentProtectionCallback",
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
bool OutputProtectionStubDispatch::Accept(
    OutputProtection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryContentProtectionStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::QueryContentProtectionStatus",
               "message", message->name());
#endif
      break;
    }
    case internal::kOutputProtection_SetContentProtection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::SetContentProtection",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool OutputProtectionStubDispatch::AcceptWithResponder(
    OutputProtection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryContentProtectionStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::QueryContentProtectionStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::OutputProtection_QueryContentProtectionStatus_Params_Data* params =
          reinterpret_cast<
              internal::OutputProtection_QueryContentProtectionStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      OutputProtection_QueryContentProtectionStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OutputProtection::QueryContentProtectionStatus deserializer");
        return false;
      }
      OutputProtection::QueryContentProtectionStatusCallback callback =
          OutputProtection_QueryContentProtectionStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueryContentProtectionStatus(
std::move(p_display_id), std::move(callback));
      return true;
    }
    case internal::kOutputProtection_SetContentProtection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::OutputProtection::SetContentProtection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::OutputProtection_SetContentProtection_Params_Data* params =
          reinterpret_cast<
              internal::OutputProtection_SetContentProtection_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      uint32_t p_desired_method_mask{};
      OutputProtection_SetContentProtection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      p_desired_method_mask = input_data_view.desired_method_mask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OutputProtection::SetContentProtection deserializer");
        return false;
      }
      OutputProtection::SetContentProtectionCallback callback =
          OutputProtection_SetContentProtection_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetContentProtection(
std::move(p_display_id), 
std::move(p_desired_method_mask), std::move(callback));
      return true;
    }
  }
  return false;
}

bool OutputProtectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OutputProtection RequestValidator");

  switch (message->header()->name) {
    case internal::kOutputProtection_QueryContentProtectionStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryContentProtectionStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kOutputProtection_SetContentProtection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_SetContentProtection_Params_Data>(
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

bool OutputProtectionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OutputProtection ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryContentProtectionStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kOutputProtection_SetContentProtection_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_SetContentProtection_ResponseParams_Data>(
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
void OutputProtectionInterceptorForTesting::QueryContentProtectionStatus(int64_t display_id, const QueryContentProtectionStatusCallback& callback) {
  GetForwardingInterface()->QueryContentProtectionStatus(std::move(display_id), std::move(callback));
}
void OutputProtectionInterceptorForTesting::SetContentProtection(int64_t display_id, uint32_t desired_method_mask, const SetContentProtectionCallback& callback) {
  GetForwardingInterface()->SetContentProtection(std::move(display_id), std::move(desired_method_mask), std::move(callback));
}
OutputProtectionAsyncWaiter::OutputProtectionAsyncWaiter(
    OutputProtection* proxy) : proxy_(proxy) {}

OutputProtectionAsyncWaiter::~OutputProtectionAsyncWaiter() = default;

void OutputProtectionAsyncWaiter::QueryContentProtectionStatus(
    int64_t display_id, bool* out_success, uint32_t* out_link_mask, uint32_t* out_protection_mask) {
  base::RunLoop loop;
  proxy_->QueryContentProtectionStatus(std::move(display_id),
      base::Bind(
          [](base::RunLoop* loop,
             bool* out_success
,
             uint32_t* out_link_mask
,
             uint32_t* out_protection_mask
,
             bool success,
             uint32_t link_mask,
             uint32_t protection_mask) {*out_success = std::move(success);*out_link_mask = std::move(link_mask);*out_protection_mask = std::move(protection_mask);
            loop->Quit();
          },
          &loop,
          out_success,
          out_link_mask,
          out_protection_mask));
  loop.Run();
}
void OutputProtectionAsyncWaiter::SetContentProtection(
    int64_t display_id, uint32_t desired_method_mask, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetContentProtection(std::move(display_id),std::move(desired_method_mask),
      base::Bind(
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
}  // namespace display

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
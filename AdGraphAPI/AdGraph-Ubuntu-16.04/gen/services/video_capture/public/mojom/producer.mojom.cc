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

#include "services/video_capture/public/mojom/producer.mojom.h"

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

#include "services/video_capture/public/mojom/producer.mojom-shared-message-ids.h"
namespace video_capture {
namespace mojom {
const char Producer::Name_[] = "video_capture.mojom.Producer";

class Producer_OnNewBufferHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Producer_OnNewBufferHandle_ForwardToCallback(
      Producer::OnNewBufferHandleCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Producer::OnNewBufferHandleCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Producer_OnNewBufferHandle_ForwardToCallback);
};

ProducerProxy::ProducerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProducerProxy::OnNewBufferHandle(
    int32_t in_buffer_id, mojo::ScopedSharedBufferHandle in_buffer_handle, OnNewBufferHandleCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Producer::OnNewBufferHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducer_OnNewBufferHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Producer_OnNewBufferHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer_handle, &params->buffer_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer_handle in Producer.OnNewBufferHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Producer_OnNewBufferHandle_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ProducerProxy::OnBufferRetired(
    int32_t in_buffer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Producer::OnBufferRetired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducer_OnBufferRetired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Producer_OnBufferRetired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Producer_OnNewBufferHandle_ProxyToResponder {
 public:
  static Producer::OnNewBufferHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Producer_OnNewBufferHandle_ProxyToResponder> proxy(
        new Producer_OnNewBufferHandle_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Producer_OnNewBufferHandle_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Producer_OnNewBufferHandle_ProxyToResponder() {
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
  Producer_OnNewBufferHandle_ProxyToResponder(
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
        << "Producer::OnNewBufferHandleCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Producer_OnNewBufferHandle_ProxyToResponder);
};

bool Producer_OnNewBufferHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::Producer::OnNewBufferHandleCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Producer_OnNewBufferHandle_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Producer_OnNewBufferHandle_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Producer_OnNewBufferHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Producer::OnNewBufferHandle response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void Producer_OnNewBufferHandle_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducer_OnNewBufferHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Producer_OnNewBufferHandle_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Producer::OnNewBufferHandleCallback",
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
bool ProducerStubDispatch::Accept(
    Producer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProducer_OnNewBufferHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Producer::OnNewBufferHandle",
               "message", message->name());
#endif
      break;
    }
    case internal::kProducer_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Producer::OnBufferRetired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Producer_OnBufferRetired_Params_Data* params =
          reinterpret_cast<internal::Producer_OnBufferRetired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      Producer_OnBufferRetired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Producer::OnBufferRetired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBufferRetired(
std::move(p_buffer_id));
      return true;
    }
  }
  return false;
}

// static
bool ProducerStubDispatch::AcceptWithResponder(
    Producer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProducer_OnNewBufferHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Producer::OnNewBufferHandle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Producer_OnNewBufferHandle_Params_Data* params =
          reinterpret_cast<
              internal::Producer_OnNewBufferHandle_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      mojo::ScopedSharedBufferHandle p_buffer_handle{};
      Producer_OnNewBufferHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      p_buffer_handle = input_data_view.TakeBufferHandle();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Producer::OnNewBufferHandle deserializer");
        return false;
      }
      Producer::OnNewBufferHandleCallback callback =
          Producer_OnNewBufferHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNewBufferHandle(
std::move(p_buffer_id), 
std::move(p_buffer_handle), std::move(callback));
      return true;
    }
    case internal::kProducer_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Producer::OnBufferRetired",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProducerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Producer RequestValidator");

  switch (message->header()->name) {
    case internal::kProducer_OnNewBufferHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Producer_OnNewBufferHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducer_OnBufferRetired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Producer_OnBufferRetired_Params_Data>(
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

bool ProducerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Producer ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProducer_OnNewBufferHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Producer_OnNewBufferHandle_ResponseParams_Data>(
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
void ProducerInterceptorForTesting::OnNewBufferHandle(int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle, OnNewBufferHandleCallback callback) {
  GetForwardingInterface()->OnNewBufferHandle(std::move(buffer_id), std::move(buffer_handle), std::move(callback));
}
void ProducerInterceptorForTesting::OnBufferRetired(int32_t buffer_id) {
  GetForwardingInterface()->OnBufferRetired(std::move(buffer_id));
}
ProducerAsyncWaiter::ProducerAsyncWaiter(
    Producer* proxy) : proxy_(proxy) {}

ProducerAsyncWaiter::~ProducerAsyncWaiter() = default;

void ProducerAsyncWaiter::OnNewBufferHandle(
    int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle) {
  base::RunLoop loop;
  proxy_->OnNewBufferHandle(std::move(buffer_id),std::move(buffer_handle),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
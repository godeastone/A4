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

#include "components/arc/common/video.mojom.h"

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

#include "components/arc/common/video.mojom-shared-message-ids.h"
namespace arc {
namespace mojom {
const char VideoHost::Name_[] = "arc.mojom.VideoHost";

class VideoHost_OnBootstrapVideoAcceleratorFactory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoHost_OnBootstrapVideoAcceleratorFactory_ForwardToCallback(
      VideoHost::OnBootstrapVideoAcceleratorFactoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoHost::OnBootstrapVideoAcceleratorFactoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoHost_OnBootstrapVideoAcceleratorFactory_ForwardToCallback);
};

VideoHostProxy::VideoHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoHostProxy::OnBootstrapVideoAcceleratorFactory(
    OnBootstrapVideoAcceleratorFactoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoHost::OnBootstrapVideoAcceleratorFactory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoHost_OnBootstrapVideoAcceleratorFactory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder {
 public:
  static VideoHost::OnBootstrapVideoAcceleratorFactoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder> proxy(
        new VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder() {
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
  VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder(
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
        << "VideoHost::OnBootstrapVideoAcceleratorFactoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedHandle in_channel_handle, const std::string& in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder);
};

bool VideoHost_OnBootstrapVideoAcceleratorFactory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoHost::OnBootstrapVideoAcceleratorFactoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedHandle p_channel_handle{};
  std::string p_token{};
  VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoHost::OnBootstrapVideoAcceleratorFactory response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_channel_handle), 
std::move(p_token));
  return true;
}

void VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder::Run(
    mojo::ScopedHandle in_channel_handle, const std::string& in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_channel_handle, &params->channel_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->channel_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid channel_handle in ");
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoHost::OnBootstrapVideoAcceleratorFactoryCallback",
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
bool VideoHostStubDispatch::Accept(
    VideoHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoHost::OnBootstrapVideoAcceleratorFactory",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VideoHostStubDispatch::AcceptWithResponder(
    VideoHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoHost::OnBootstrapVideoAcceleratorFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data* params =
          reinterpret_cast<
              internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoHost_OnBootstrapVideoAcceleratorFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoHost::OnBootstrapVideoAcceleratorFactory deserializer");
        return false;
      }
      VideoHost::OnBootstrapVideoAcceleratorFactoryCallback callback =
          VideoHost_OnBootstrapVideoAcceleratorFactory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBootstrapVideoAcceleratorFactory(std::move(callback));
      return true;
    }
  }
  return false;
}

bool VideoHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoHost RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoHost_OnBootstrapVideoAcceleratorFactory_Params_Data>(
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

bool VideoHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoHost_OnBootstrapVideoAcceleratorFactory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams_Data>(
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
void VideoHostInterceptorForTesting::OnBootstrapVideoAcceleratorFactory(OnBootstrapVideoAcceleratorFactoryCallback callback) {
  GetForwardingInterface()->OnBootstrapVideoAcceleratorFactory(std::move(callback));
}
VideoHostAsyncWaiter::VideoHostAsyncWaiter(
    VideoHost* proxy) : proxy_(proxy) {}

VideoHostAsyncWaiter::~VideoHostAsyncWaiter() = default;

void VideoHostAsyncWaiter::OnBootstrapVideoAcceleratorFactory(
    mojo::ScopedHandle* out_channel_handle, std::string* out_token) {
  base::RunLoop loop;
  proxy_->OnBootstrapVideoAcceleratorFactory(
      base::BindOnce(
          [](base::RunLoop* loop,
             mojo::ScopedHandle* out_channel_handle
,
             std::string* out_token
,
             mojo::ScopedHandle channel_handle,
             const std::string& token) {*out_channel_handle = std::move(channel_handle);*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_channel_handle,
          out_token));
  loop.Run();
}

const char VideoInstance::Name_[] = "arc.mojom.VideoInstance";

class VideoInstance_Init_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoInstance_Init_ForwardToCallback(
      VideoInstance::InitCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoInstance::InitCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoInstance_Init_ForwardToCallback);
};

VideoInstanceProxy::VideoInstanceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoInstanceProxy::InitDeprecated(
    VideoHostPtr in_host_ptr) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoInstance::InitDeprecated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoInstance_InitDeprecated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoInstance_InitDeprecated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoHostPtrDataView>(
      in_host_ptr, &params->host_ptr, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host_ptr),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host_ptr in VideoInstance.InitDeprecated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoInstanceProxy::Init(
    VideoHostPtr in_host_ptr, InitCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoInstance::Init");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoInstance_Init_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoInstance_Init_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoHostPtrDataView>(
      in_host_ptr, &params->host_ptr, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host_ptr),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host_ptr in VideoInstance.Init request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoInstance_Init_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VideoInstance_Init_ProxyToResponder {
 public:
  static VideoInstance::InitCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoInstance_Init_ProxyToResponder> proxy(
        new VideoInstance_Init_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoInstance_Init_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoInstance_Init_ProxyToResponder() {
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
  VideoInstance_Init_ProxyToResponder(
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
        << "VideoInstance::InitCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VideoInstance_Init_ProxyToResponder);
};

bool VideoInstance_Init_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoInstance::InitCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoInstance_Init_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoInstance_Init_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoInstance_Init_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoInstance::Init response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VideoInstance_Init_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoInstance_Init_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoInstance_Init_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoInstance::InitCallback",
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
bool VideoInstanceStubDispatch::Accept(
    VideoInstance* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoInstance_InitDeprecated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoInstance::InitDeprecated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoInstance_InitDeprecated_Params_Data* params =
          reinterpret_cast<internal::VideoInstance_InitDeprecated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoHostPtr p_host_ptr{};
      VideoInstance_InitDeprecated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_ptr =
          input_data_view.TakeHostPtr<decltype(p_host_ptr)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoInstance::InitDeprecated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InitDeprecated(
std::move(p_host_ptr));
      return true;
    }
    case internal::kVideoInstance_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoInstance::Init",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VideoInstanceStubDispatch::AcceptWithResponder(
    VideoInstance* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoInstance_InitDeprecated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoInstance::InitDeprecated",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoInstance_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoInstance::Init",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoInstance_Init_Params_Data* params =
          reinterpret_cast<
              internal::VideoInstance_Init_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoHostPtr p_host_ptr{};
      VideoInstance_Init_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_ptr =
          input_data_view.TakeHostPtr<decltype(p_host_ptr)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoInstance::Init deserializer");
        return false;
      }
      VideoInstance::InitCallback callback =
          VideoInstance_Init_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Init(
std::move(p_host_ptr), std::move(callback));
      return true;
    }
  }
  return false;
}

bool VideoInstanceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoInstance RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoInstance_InitDeprecated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoInstance_InitDeprecated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoInstance_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoInstance_Init_Params_Data>(
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

bool VideoInstanceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoInstance ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoInstance_Init_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoInstance_Init_ResponseParams_Data>(
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
void VideoInstanceInterceptorForTesting::InitDeprecated(VideoHostPtr host_ptr) {
  GetForwardingInterface()->InitDeprecated(std::move(host_ptr));
}
void VideoInstanceInterceptorForTesting::Init(VideoHostPtr host_ptr, InitCallback callback) {
  GetForwardingInterface()->Init(std::move(host_ptr), std::move(callback));
}
VideoInstanceAsyncWaiter::VideoInstanceAsyncWaiter(
    VideoInstance* proxy) : proxy_(proxy) {}

VideoInstanceAsyncWaiter::~VideoInstanceAsyncWaiter() = default;

void VideoInstanceAsyncWaiter::Init(
    VideoHostPtr host_ptr) {
  base::RunLoop loop;
  proxy_->Init(std::move(host_ptr),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char VideoAcceleratorFactory::Name_[] = "arc.mojom.VideoAcceleratorFactory";

VideoAcceleratorFactoryProxy::VideoAcceleratorFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoAcceleratorFactoryProxy::CreateEncodeAccelerator(
    ::arc::mojom::VideoEncodeAcceleratorRequest in_video_encoder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoAcceleratorFactory::CreateEncodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoAcceleratorFactory_CreateEncodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoEncodeAcceleratorRequestDataView>(
      in_video_encoder, &params->video_encoder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_encoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_encoder in VideoAcceleratorFactory.CreateEncodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoAcceleratorFactoryProxy::CreateDecodeAccelerator(
    ::arc::mojom::VideoDecodeAcceleratorRequest in_video_decoder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoAcceleratorFactory::CreateDecodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoAcceleratorFactory_CreateDecodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAcceleratorRequestDataView>(
      in_video_decoder, &params->video_decoder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_decoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_decoder in VideoAcceleratorFactory.CreateDecodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoAcceleratorFactoryProxy::CreateProtectedBufferAllocator(
    ::arc::mojom::VideoProtectedBufferAllocatorRequest in_video_protected_buffer_allocator) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoAcceleratorFactory::CreateProtectedBufferAllocator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoProtectedBufferAllocatorRequestDataView>(
      in_video_protected_buffer_allocator, &params->video_protected_buffer_allocator, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_protected_buffer_allocator),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_protected_buffer_allocator in VideoAcceleratorFactory.CreateProtectedBufferAllocator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoAcceleratorFactoryStubDispatch::Accept(
    VideoAcceleratorFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoAcceleratorFactory_CreateEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateEncodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::arc::mojom::VideoEncodeAcceleratorRequest p_video_encoder{};
      VideoAcceleratorFactory_CreateEncodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_video_encoder =
          input_data_view.TakeVideoEncoder<decltype(p_video_encoder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoAcceleratorFactory::CreateEncodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateEncodeAccelerator(
std::move(p_video_encoder));
      return true;
    }
    case internal::kVideoAcceleratorFactory_CreateDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateDecodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::arc::mojom::VideoDecodeAcceleratorRequest p_video_decoder{};
      VideoAcceleratorFactory_CreateDecodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_video_decoder =
          input_data_view.TakeVideoDecoder<decltype(p_video_decoder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoAcceleratorFactory::CreateDecodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateDecodeAccelerator(
std::move(p_video_decoder));
      return true;
    }
    case internal::kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateProtectedBufferAllocator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data* params =
          reinterpret_cast<internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::arc::mojom::VideoProtectedBufferAllocatorRequest p_video_protected_buffer_allocator{};
      VideoAcceleratorFactory_CreateProtectedBufferAllocator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_video_protected_buffer_allocator =
          input_data_view.TakeVideoProtectedBufferAllocator<decltype(p_video_protected_buffer_allocator)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoAcceleratorFactory::CreateProtectedBufferAllocator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateProtectedBufferAllocator(
std::move(p_video_protected_buffer_allocator));
      return true;
    }
  }
  return false;
}

// static
bool VideoAcceleratorFactoryStubDispatch::AcceptWithResponder(
    VideoAcceleratorFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoAcceleratorFactory_CreateEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateEncodeAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoAcceleratorFactory_CreateDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateDecodeAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoAcceleratorFactory::CreateProtectedBufferAllocator",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoAcceleratorFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoAcceleratorFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoAcceleratorFactory_CreateEncodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoAcceleratorFactory_CreateEncodeAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoAcceleratorFactory_CreateDecodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoAcceleratorFactory_CreateDecodeAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params_Data>(
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

void VideoAcceleratorFactoryInterceptorForTesting::CreateEncodeAccelerator(::arc::mojom::VideoEncodeAcceleratorRequest video_encoder) {
  GetForwardingInterface()->CreateEncodeAccelerator(std::move(video_encoder));
}
void VideoAcceleratorFactoryInterceptorForTesting::CreateDecodeAccelerator(::arc::mojom::VideoDecodeAcceleratorRequest video_decoder) {
  GetForwardingInterface()->CreateDecodeAccelerator(std::move(video_decoder));
}
void VideoAcceleratorFactoryInterceptorForTesting::CreateProtectedBufferAllocator(::arc::mojom::VideoProtectedBufferAllocatorRequest video_protected_buffer_allocator) {
  GetForwardingInterface()->CreateProtectedBufferAllocator(std::move(video_protected_buffer_allocator));
}
VideoAcceleratorFactoryAsyncWaiter::VideoAcceleratorFactoryAsyncWaiter(
    VideoAcceleratorFactory* proxy) : proxy_(proxy) {}

VideoAcceleratorFactoryAsyncWaiter::~VideoAcceleratorFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-blink.h"

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

#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace media {
namespace mojom {
namespace blink {
const char JpegEncodeAccelerator::Name_[] = "media.mojom.JpegEncodeAccelerator";

class JpegEncodeAccelerator_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  JpegEncodeAccelerator_Initialize_ForwardToCallback(
      JpegEncodeAccelerator::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  JpegEncodeAccelerator::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(JpegEncodeAccelerator_Initialize_ForwardToCallback);
};

class JpegEncodeAccelerator_EncodeWithFD_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  JpegEncodeAccelerator_EncodeWithFD_ForwardToCallback(
      JpegEncodeAccelerator::EncodeWithFDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  JpegEncodeAccelerator::EncodeWithFDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(JpegEncodeAccelerator_EncodeWithFD_ForwardToCallback);
};

JpegEncodeAcceleratorProxy::JpegEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void JpegEncodeAcceleratorProxy::Initialize(
    InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new JpegEncodeAccelerator_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void JpegEncodeAcceleratorProxy::EncodeWithFD(
    int32_t in_buffer_id, mojo::ScopedHandle in_input_fd, uint32_t in_input_buffer_size, int32_t in_coded_size_width, int32_t in_coded_size_height, mojo::ScopedHandle in_exif_fd, uint32_t in_exif_buffer_size, mojo::ScopedHandle in_output_fd, uint32_t in_output_buffer_size, EncodeWithFDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegEncodeAccelerator::EncodeWithFD");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegEncodeAccelerator_EncodeWithFD_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_input_fd, &params->input_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->input_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid input_fd in JpegEncodeAccelerator.EncodeWithFD request");
  params->input_buffer_size = in_input_buffer_size;
  params->coded_size_width = in_coded_size_width;
  params->coded_size_height = in_coded_size_height;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_exif_fd, &params->exif_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->exif_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exif_fd in JpegEncodeAccelerator.EncodeWithFD request");
  params->exif_buffer_size = in_exif_buffer_size;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_output_fd, &params->output_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->output_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid output_fd in JpegEncodeAccelerator.EncodeWithFD request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new JpegEncodeAccelerator_EncodeWithFD_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class JpegEncodeAccelerator_Initialize_ProxyToResponder {
 public:
  static JpegEncodeAccelerator::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<JpegEncodeAccelerator_Initialize_ProxyToResponder> proxy(
        new JpegEncodeAccelerator_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&JpegEncodeAccelerator_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~JpegEncodeAccelerator_Initialize_ProxyToResponder() {
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
  JpegEncodeAccelerator_Initialize_ProxyToResponder(
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
        << "JpegEncodeAccelerator::InitializeCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(JpegEncodeAccelerator_Initialize_ProxyToResponder);
};

bool JpegEncodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::JpegEncodeAccelerator::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  JpegEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "JpegEncodeAccelerator::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void JpegEncodeAccelerator_Initialize_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder {
 public:
  static JpegEncodeAccelerator::EncodeWithFDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder> proxy(
        new JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder() {
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
  JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder(
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
        << "JpegEncodeAccelerator::EncodeWithFDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_buffer_id, uint32_t in_encoded_buffer_size, EncodeStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder);
};

bool JpegEncodeAccelerator_EncodeWithFD_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::JpegEncodeAccelerator::EncodeWithFDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data* params =
      reinterpret_cast<
          internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_buffer_id{};
  uint32_t p_encoded_buffer_size{};
  EncodeStatus p_status{};
  JpegEncodeAccelerator_EncodeWithFD_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_buffer_id = input_data_view.buffer_id();
  p_encoded_buffer_size = input_data_view.encoded_buffer_size();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "JpegEncodeAccelerator::EncodeWithFD response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_id), 
std::move(p_encoded_buffer_size), 
std::move(p_status));
  return true;
}

void JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder::Run(
    int32_t in_buffer_id, uint32_t in_encoded_buffer_size, EncodeStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegEncodeAccelerator_EncodeWithFD_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  params->encoded_buffer_size = in_encoded_buffer_size;
  mojo::internal::Serialize<::media::mojom::EncodeStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::EncodeWithFDCallback",
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
bool JpegEncodeAcceleratorStubDispatch::Accept(
    JpegEncodeAccelerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kJpegEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kJpegEncodeAccelerator_EncodeWithFD_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::EncodeWithFD",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool JpegEncodeAcceleratorStubDispatch::AcceptWithResponder(
    JpegEncodeAccelerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kJpegEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::JpegEncodeAccelerator_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::JpegEncodeAccelerator_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      JpegEncodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegEncodeAccelerator::Initialize deserializer");
        return false;
      }
      JpegEncodeAccelerator::InitializeCallback callback =
          JpegEncodeAccelerator_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(std::move(callback));
      return true;
    }
    case internal::kJpegEncodeAccelerator_EncodeWithFD_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegEncodeAccelerator::EncodeWithFD",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data* params =
          reinterpret_cast<
              internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      mojo::ScopedHandle p_input_fd{};
      uint32_t p_input_buffer_size{};
      int32_t p_coded_size_width{};
      int32_t p_coded_size_height{};
      mojo::ScopedHandle p_exif_fd{};
      uint32_t p_exif_buffer_size{};
      mojo::ScopedHandle p_output_fd{};
      uint32_t p_output_buffer_size{};
      JpegEncodeAccelerator_EncodeWithFD_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      p_input_fd = input_data_view.TakeInputFd();
      p_input_buffer_size = input_data_view.input_buffer_size();
      p_coded_size_width = input_data_view.coded_size_width();
      p_coded_size_height = input_data_view.coded_size_height();
      p_exif_fd = input_data_view.TakeExifFd();
      p_exif_buffer_size = input_data_view.exif_buffer_size();
      p_output_fd = input_data_view.TakeOutputFd();
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegEncodeAccelerator::EncodeWithFD deserializer");
        return false;
      }
      JpegEncodeAccelerator::EncodeWithFDCallback callback =
          JpegEncodeAccelerator_EncodeWithFD_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EncodeWithFD(
std::move(p_buffer_id), 
std::move(p_input_fd), 
std::move(p_input_buffer_size), 
std::move(p_coded_size_width), 
std::move(p_coded_size_height), 
std::move(p_exif_fd), 
std::move(p_exif_buffer_size), 
std::move(p_output_fd), 
std::move(p_output_buffer_size), std::move(callback));
      return true;
    }
  }
  return false;
}

bool JpegEncodeAcceleratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "JpegEncodeAccelerator RequestValidator");

  switch (message->header()->name) {
    case internal::kJpegEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegEncodeAccelerator_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegEncodeAccelerator_EncodeWithFD_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data>(
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

bool JpegEncodeAcceleratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "JpegEncodeAccelerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kJpegEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegEncodeAccelerator_EncodeWithFD_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data>(
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
void JpegEncodeAcceleratorInterceptorForTesting::Initialize(InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(callback));
}
void JpegEncodeAcceleratorInterceptorForTesting::EncodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, EncodeWithFDCallback callback) {
  GetForwardingInterface()->EncodeWithFD(std::move(buffer_id), std::move(input_fd), std::move(input_buffer_size), std::move(coded_size_width), std::move(coded_size_height), std::move(exif_fd), std::move(exif_buffer_size), std::move(output_fd), std::move(output_buffer_size), std::move(callback));
}
JpegEncodeAcceleratorAsyncWaiter::JpegEncodeAcceleratorAsyncWaiter(
    JpegEncodeAccelerator* proxy) : proxy_(proxy) {}

JpegEncodeAcceleratorAsyncWaiter::~JpegEncodeAcceleratorAsyncWaiter() = default;

void JpegEncodeAcceleratorAsyncWaiter::Initialize(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Initialize(
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
void JpegEncodeAcceleratorAsyncWaiter::EncodeWithFD(
    int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, int32_t* out_buffer_id, uint32_t* out_encoded_buffer_size, EncodeStatus* out_status) {
  base::RunLoop loop;
  proxy_->EncodeWithFD(std::move(buffer_id),std::move(input_fd),std::move(input_buffer_size),std::move(coded_size_width),std::move(coded_size_height),std::move(exif_fd),std::move(exif_buffer_size),std::move(output_fd),std::move(output_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_buffer_id
,
             uint32_t* out_encoded_buffer_size
,
             EncodeStatus* out_status
,
             int32_t buffer_id,
             uint32_t encoded_buffer_size,
             EncodeStatus status) {*out_buffer_id = std::move(buffer_id);*out_encoded_buffer_size = std::move(encoded_buffer_size);*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_buffer_id,
          out_encoded_buffer_size,
          out_status));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
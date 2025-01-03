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

#include "extensions/common/api/mime_handler.mojom.h"

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

#include "extensions/common/api/mime_handler.mojom-shared-message-ids.h"
namespace extensions {
namespace mime_handler {
StreamInfo::StreamInfo()
    : mime_type(),
      original_url(),
      stream_url(),
      tab_id(),
      response_headers(),
      embedded() {}

StreamInfo::StreamInfo(
    const std::string& mime_type_in,
    const std::string& original_url_in,
    const std::string& stream_url_in,
    int32_t tab_id_in,
    const base::flat_map<std::string, std::string>& response_headers_in,
    bool embedded_in)
    : mime_type(std::move(mime_type_in)),
      original_url(std::move(original_url_in)),
      stream_url(std::move(stream_url_in)),
      tab_id(std::move(tab_id_in)),
      response_headers(std::move(response_headers_in)),
      embedded(std::move(embedded_in)) {}

StreamInfo::~StreamInfo() = default;

bool StreamInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MimeHandlerService::Name_[] = "extensions.mime_handler.MimeHandlerService";

class MimeHandlerService_GetStreamInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeHandlerService_GetStreamInfo_ForwardToCallback(
      MimeHandlerService::GetStreamInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeHandlerService::GetStreamInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_GetStreamInfo_ForwardToCallback);
};

class MimeHandlerService_AbortStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeHandlerService_AbortStream_ForwardToCallback(
      MimeHandlerService::AbortStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeHandlerService::AbortStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_AbortStream_ForwardToCallback);
};

MimeHandlerServiceProxy::MimeHandlerServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MimeHandlerServiceProxy::GetStreamInfo(
    GetStreamInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mime_handler::MimeHandlerService::GetStreamInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeHandlerService_GetStreamInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mime_handler::internal::MimeHandlerService_GetStreamInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MimeHandlerService_GetStreamInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MimeHandlerServiceProxy::AbortStream(
    AbortStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mime_handler::MimeHandlerService::AbortStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeHandlerService_AbortStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mime_handler::internal::MimeHandlerService_AbortStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MimeHandlerService_AbortStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MimeHandlerService_GetStreamInfo_ProxyToResponder {
 public:
  static MimeHandlerService::GetStreamInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MimeHandlerService_GetStreamInfo_ProxyToResponder> proxy(
        new MimeHandlerService_GetStreamInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MimeHandlerService_GetStreamInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MimeHandlerService_GetStreamInfo_ProxyToResponder() {
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
  MimeHandlerService_GetStreamInfo_ProxyToResponder(
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
        << "MimeHandlerService::GetStreamInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      StreamInfoPtr in_stream_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_GetStreamInfo_ProxyToResponder);
};

bool MimeHandlerService_GetStreamInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "extensions::mime_handler::MimeHandlerService::GetStreamInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  StreamInfoPtr p_stream_info{};
  MimeHandlerService_GetStreamInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStreamInfo(&p_stream_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MimeHandlerService::GetStreamInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_stream_info));
  return true;
}

void MimeHandlerService_GetStreamInfo_ProxyToResponder::Run(
    StreamInfoPtr in_stream_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeHandlerService_GetStreamInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mime_handler::internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->stream_info)::BaseType::BufferWriter
      stream_info_writer;
  mojo::internal::Serialize<::extensions::mime_handler::StreamInfoDataView>(
      in_stream_info, buffer, &stream_info_writer, &serialization_context);
  params->stream_info.Set(
      stream_info_writer.is_null() ? nullptr : stream_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::GetStreamInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MimeHandlerService_AbortStream_ProxyToResponder {
 public:
  static MimeHandlerService::AbortStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MimeHandlerService_AbortStream_ProxyToResponder> proxy(
        new MimeHandlerService_AbortStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MimeHandlerService_AbortStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MimeHandlerService_AbortStream_ProxyToResponder() {
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
  MimeHandlerService_AbortStream_ProxyToResponder(
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
        << "MimeHandlerService::AbortStreamCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_AbortStream_ProxyToResponder);
};

bool MimeHandlerService_AbortStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "extensions::mime_handler::MimeHandlerService::AbortStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MimeHandlerService_AbortStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MimeHandlerService_AbortStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MimeHandlerService_AbortStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MimeHandlerService::AbortStream response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void MimeHandlerService_AbortStream_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeHandlerService_AbortStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mime_handler::internal::MimeHandlerService_AbortStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::AbortStreamCallback",
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
bool MimeHandlerServiceStubDispatch::Accept(
    MimeHandlerService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::GetStreamInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::AbortStream",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MimeHandlerServiceStubDispatch::AcceptWithResponder(
    MimeHandlerService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::GetStreamInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MimeHandlerService_GetStreamInfo_Params_Data* params =
          reinterpret_cast<
              internal::MimeHandlerService_GetStreamInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MimeHandlerService_GetStreamInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MimeHandlerService::GetStreamInfo deserializer");
        return false;
      }
      MimeHandlerService::GetStreamInfoCallback callback =
          MimeHandlerService_GetStreamInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetStreamInfo(std::move(callback));
      return true;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mime_handler::MimeHandlerService::AbortStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MimeHandlerService_AbortStream_Params_Data* params =
          reinterpret_cast<
              internal::MimeHandlerService_AbortStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MimeHandlerService_AbortStream_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MimeHandlerService::AbortStream deserializer");
        return false;
      }
      MimeHandlerService::AbortStreamCallback callback =
          MimeHandlerService_AbortStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AbortStream(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MimeHandlerServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MimeHandlerService RequestValidator");

  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_GetStreamInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_AbortStream_Params_Data>(
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

bool MimeHandlerServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MimeHandlerService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_AbortStream_ResponseParams_Data>(
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
void MimeHandlerServiceInterceptorForTesting::GetStreamInfo(GetStreamInfoCallback callback) {
  GetForwardingInterface()->GetStreamInfo(std::move(callback));
}
void MimeHandlerServiceInterceptorForTesting::AbortStream(AbortStreamCallback callback) {
  GetForwardingInterface()->AbortStream(std::move(callback));
}
MimeHandlerServiceAsyncWaiter::MimeHandlerServiceAsyncWaiter(
    MimeHandlerService* proxy) : proxy_(proxy) {}

MimeHandlerServiceAsyncWaiter::~MimeHandlerServiceAsyncWaiter() = default;

void MimeHandlerServiceAsyncWaiter::GetStreamInfo(
    StreamInfoPtr* out_stream_info) {
  base::RunLoop loop;
  proxy_->GetStreamInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             StreamInfoPtr* out_stream_info
,
             StreamInfoPtr stream_info) {*out_stream_info = std::move(stream_info);
            loop->Quit();
          },
          &loop,
          out_stream_info));
  loop.Run();
}
void MimeHandlerServiceAsyncWaiter::AbortStream(
    ) {
  base::RunLoop loop;
  proxy_->AbortStream(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mime_handler
}  // namespace extensions

namespace mojo {


// static
bool StructTraits<::extensions::mime_handler::StreamInfo::DataView, ::extensions::mime_handler::StreamInfoPtr>::Read(
    ::extensions::mime_handler::StreamInfo::DataView input,
    ::extensions::mime_handler::StreamInfoPtr* output) {
  bool success = true;
  ::extensions::mime_handler::StreamInfoPtr result(::extensions::mime_handler::StreamInfo::New());
  
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      if (!input.ReadOriginalUrl(&result->original_url))
        success = false;
      if (!input.ReadStreamUrl(&result->stream_url))
        success = false;
      result->tab_id = input.tab_id();
      if (!input.ReadResponseHeaders(&result->response_headers))
        success = false;
      result->embedded = input.embedded();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
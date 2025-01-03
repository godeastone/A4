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

#include "components/services/unzip/public/interfaces/unzipper.mojom.h"

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

#include "components/services/unzip/public/interfaces/unzipper.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
namespace unzip {
namespace mojom {
const char UnzipFilter::Name_[] = "unzip.mojom.UnzipFilter";
bool UnzipFilter::ShouldUnzipFile(const base::FilePath& path, bool* out_result) {
  NOTREACHED();
  return false;
}
class UnzipFilter_ShouldUnzipFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  UnzipFilter_ShouldUnzipFile_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(UnzipFilter_ShouldUnzipFile_HandleSyncResponse);
};

class UnzipFilter_ShouldUnzipFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UnzipFilter_ShouldUnzipFile_ForwardToCallback(
      UnzipFilter::ShouldUnzipFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UnzipFilter::ShouldUnzipFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UnzipFilter_ShouldUnzipFile_ForwardToCallback);
};

UnzipFilterProxy::UnzipFilterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool UnzipFilterProxy::ShouldUnzipFile(
    const base::FilePath& param_path, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "unzip::mojom::UnzipFilter::ShouldUnzipFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipFilter_ShouldUnzipFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::UnzipFilter_ShouldUnzipFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in UnzipFilter.ShouldUnzipFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UnzipFilter_ShouldUnzipFile_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void UnzipFilterProxy::ShouldUnzipFile(
    const base::FilePath& in_path, ShouldUnzipFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "unzip::mojom::UnzipFilter::ShouldUnzipFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipFilter_ShouldUnzipFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::UnzipFilter_ShouldUnzipFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in UnzipFilter.ShouldUnzipFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UnzipFilter_ShouldUnzipFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class UnzipFilter_ShouldUnzipFile_ProxyToResponder {
 public:
  static UnzipFilter::ShouldUnzipFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UnzipFilter_ShouldUnzipFile_ProxyToResponder> proxy(
        new UnzipFilter_ShouldUnzipFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UnzipFilter_ShouldUnzipFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UnzipFilter_ShouldUnzipFile_ProxyToResponder() {
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
  UnzipFilter_ShouldUnzipFile_ProxyToResponder(
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
        << "UnzipFilter::ShouldUnzipFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UnzipFilter_ShouldUnzipFile_ProxyToResponder);
};

bool UnzipFilter_ShouldUnzipFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "unzip::mojom::UnzipFilter::ShouldUnzipFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  UnzipFilter_ShouldUnzipFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UnzipFilter::ShouldUnzipFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UnzipFilter_ShouldUnzipFile_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipFilter_ShouldUnzipFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::UnzipFilter::ShouldUnzipFileCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool UnzipFilter_ShouldUnzipFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data* params =
      reinterpret_cast<internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  UnzipFilter_ShouldUnzipFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UnzipFilter::ShouldUnzipFile response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool UnzipFilterStubDispatch::Accept(
    UnzipFilter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUnzipFilter_ShouldUnzipFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::UnzipFilter::ShouldUnzipFile",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool UnzipFilterStubDispatch::AcceptWithResponder(
    UnzipFilter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUnzipFilter_ShouldUnzipFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::UnzipFilter::ShouldUnzipFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UnzipFilter_ShouldUnzipFile_Params_Data* params =
          reinterpret_cast<
              internal::UnzipFilter_ShouldUnzipFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_path{};
      UnzipFilter_ShouldUnzipFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UnzipFilter::ShouldUnzipFile deserializer");
        return false;
      }
      UnzipFilter::ShouldUnzipFileCallback callback =
          UnzipFilter_ShouldUnzipFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShouldUnzipFile(
std::move(p_path), std::move(callback));
      return true;
    }
  }
  return false;
}

bool UnzipFilterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UnzipFilter RequestValidator");

  switch (message->header()->name) {
    case internal::kUnzipFilter_ShouldUnzipFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UnzipFilter_ShouldUnzipFile_Params_Data>(
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

bool UnzipFilterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UnzipFilter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUnzipFilter_ShouldUnzipFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data>(
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
void UnzipFilterInterceptorForTesting::ShouldUnzipFile(const base::FilePath& path, ShouldUnzipFileCallback callback) {
  GetForwardingInterface()->ShouldUnzipFile(std::move(path), std::move(callback));
}
UnzipFilterAsyncWaiter::UnzipFilterAsyncWaiter(
    UnzipFilter* proxy) : proxy_(proxy) {}

UnzipFilterAsyncWaiter::~UnzipFilterAsyncWaiter() = default;

void UnzipFilterAsyncWaiter::ShouldUnzipFile(
    const base::FilePath& path, bool* out_result) {
  base::RunLoop loop;
  proxy_->ShouldUnzipFile(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

const char Unzipper::Name_[] = "unzip.mojom.Unzipper";

class Unzipper_Unzip_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Unzipper_Unzip_ForwardToCallback(
      Unzipper::UnzipCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Unzipper::UnzipCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Unzipper_Unzip_ForwardToCallback);
};

class Unzipper_UnzipWithFilter_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Unzipper_UnzipWithFilter_ForwardToCallback(
      Unzipper::UnzipWithFilterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Unzipper::UnzipWithFilterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Unzipper_UnzipWithFilter_ForwardToCallback);
};

UnzipperProxy::UnzipperProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UnzipperProxy::Unzip(
    base::File in_zip_file, ::filesystem::mojom::DirectoryPtr in_output_dir, UnzipCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "unzip::mojom::Unzipper::Unzip");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipper_Unzip_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::Unzipper_Unzip_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->zip_file)::BaseType::BufferWriter
      zip_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_zip_file, buffer, &zip_file_writer, &serialization_context);
  params->zip_file.Set(
      zip_file_writer.is_null() ? nullptr : zip_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->zip_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null zip_file in Unzipper.Unzip request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      in_output_dir, &params->output_dir, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->output_dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid output_dir in Unzipper.Unzip request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Unzipper_Unzip_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UnzipperProxy::UnzipWithFilter(
    base::File in_zip_file, ::filesystem::mojom::DirectoryPtr in_output_dir, UnzipFilterPtr in_filter, UnzipWithFilterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "unzip::mojom::Unzipper::UnzipWithFilter");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipper_UnzipWithFilter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::Unzipper_UnzipWithFilter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->zip_file)::BaseType::BufferWriter
      zip_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_zip_file, buffer, &zip_file_writer, &serialization_context);
  params->zip_file.Set(
      zip_file_writer.is_null() ? nullptr : zip_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->zip_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null zip_file in Unzipper.UnzipWithFilter request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      in_output_dir, &params->output_dir, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->output_dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid output_dir in Unzipper.UnzipWithFilter request");
  mojo::internal::Serialize<::unzip::mojom::UnzipFilterPtrDataView>(
      in_filter, &params->filter, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->filter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid filter in Unzipper.UnzipWithFilter request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Unzipper_UnzipWithFilter_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Unzipper_Unzip_ProxyToResponder {
 public:
  static Unzipper::UnzipCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Unzipper_Unzip_ProxyToResponder> proxy(
        new Unzipper_Unzip_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Unzipper_Unzip_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Unzipper_Unzip_ProxyToResponder() {
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
  Unzipper_Unzip_ProxyToResponder(
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
        << "Unzipper::UnzipCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Unzipper_Unzip_ProxyToResponder);
};

bool Unzipper_Unzip_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "unzip::mojom::Unzipper::UnzipCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Unzipper_Unzip_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Unzipper_Unzip_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  Unzipper_Unzip_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Unzipper::Unzip response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Unzipper_Unzip_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipper_Unzip_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::Unzipper_Unzip_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::UnzipCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Unzipper_UnzipWithFilter_ProxyToResponder {
 public:
  static Unzipper::UnzipWithFilterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Unzipper_UnzipWithFilter_ProxyToResponder> proxy(
        new Unzipper_UnzipWithFilter_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Unzipper_UnzipWithFilter_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Unzipper_UnzipWithFilter_ProxyToResponder() {
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
  Unzipper_UnzipWithFilter_ProxyToResponder(
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
        << "Unzipper::UnzipWithFilterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Unzipper_UnzipWithFilter_ProxyToResponder);
};

bool Unzipper_UnzipWithFilter_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "unzip::mojom::Unzipper::UnzipWithFilterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Unzipper_UnzipWithFilter_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Unzipper_UnzipWithFilter_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  Unzipper_UnzipWithFilter_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Unzipper::UnzipWithFilter response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Unzipper_UnzipWithFilter_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnzipper_UnzipWithFilter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::unzip::mojom::internal::Unzipper_UnzipWithFilter_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::UnzipWithFilterCallback",
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
bool UnzipperStubDispatch::Accept(
    Unzipper* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUnzipper_Unzip_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::Unzip",
               "message", message->name());
#endif
      break;
    }
    case internal::kUnzipper_UnzipWithFilter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::UnzipWithFilter",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool UnzipperStubDispatch::AcceptWithResponder(
    Unzipper* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUnzipper_Unzip_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::Unzip",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Unzipper_Unzip_Params_Data* params =
          reinterpret_cast<
              internal::Unzipper_Unzip_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_zip_file{};
      ::filesystem::mojom::DirectoryPtr p_output_dir{};
      Unzipper_Unzip_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadZipFile(&p_zip_file))
        success = false;
      p_output_dir =
          input_data_view.TakeOutputDir<decltype(p_output_dir)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Unzipper::Unzip deserializer");
        return false;
      }
      Unzipper::UnzipCallback callback =
          Unzipper_Unzip_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Unzip(
std::move(p_zip_file), 
std::move(p_output_dir), std::move(callback));
      return true;
    }
    case internal::kUnzipper_UnzipWithFilter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)unzip::mojom::Unzipper::UnzipWithFilter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Unzipper_UnzipWithFilter_Params_Data* params =
          reinterpret_cast<
              internal::Unzipper_UnzipWithFilter_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_zip_file{};
      ::filesystem::mojom::DirectoryPtr p_output_dir{};
      UnzipFilterPtr p_filter{};
      Unzipper_UnzipWithFilter_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadZipFile(&p_zip_file))
        success = false;
      p_output_dir =
          input_data_view.TakeOutputDir<decltype(p_output_dir)>();
      p_filter =
          input_data_view.TakeFilter<decltype(p_filter)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Unzipper::UnzipWithFilter deserializer");
        return false;
      }
      Unzipper::UnzipWithFilterCallback callback =
          Unzipper_UnzipWithFilter_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UnzipWithFilter(
std::move(p_zip_file), 
std::move(p_output_dir), 
std::move(p_filter), std::move(callback));
      return true;
    }
  }
  return false;
}

bool UnzipperRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Unzipper RequestValidator");

  switch (message->header()->name) {
    case internal::kUnzipper_Unzip_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Unzipper_Unzip_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUnzipper_UnzipWithFilter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Unzipper_UnzipWithFilter_Params_Data>(
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

bool UnzipperResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Unzipper ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUnzipper_Unzip_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Unzipper_Unzip_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUnzipper_UnzipWithFilter_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Unzipper_UnzipWithFilter_ResponseParams_Data>(
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
void UnzipperInterceptorForTesting::Unzip(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipCallback callback) {
  GetForwardingInterface()->Unzip(std::move(zip_file), std::move(output_dir), std::move(callback));
}
void UnzipperInterceptorForTesting::UnzipWithFilter(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, UnzipWithFilterCallback callback) {
  GetForwardingInterface()->UnzipWithFilter(std::move(zip_file), std::move(output_dir), std::move(filter), std::move(callback));
}
UnzipperAsyncWaiter::UnzipperAsyncWaiter(
    Unzipper* proxy) : proxy_(proxy) {}

UnzipperAsyncWaiter::~UnzipperAsyncWaiter() = default;

void UnzipperAsyncWaiter::Unzip(
    base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, bool* out_result) {
  base::RunLoop loop;
  proxy_->Unzip(std::move(zip_file),std::move(output_dir),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UnzipperAsyncWaiter::UnzipWithFilter(
    base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, bool* out_result) {
  base::RunLoop loop;
  proxy_->UnzipWithFilter(std::move(zip_file),std::move(output_dir),std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace unzip

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
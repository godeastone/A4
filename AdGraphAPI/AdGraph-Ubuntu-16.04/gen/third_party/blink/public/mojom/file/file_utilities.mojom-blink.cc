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

#include "third_party/blink/public/mojom/file/file_utilities.mojom-blink.h"

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

#include "third_party/blink/public/mojom/file/file_utilities.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char FileUtilitiesHost::Name_[] = "blink.mojom.FileUtilitiesHost";
bool FileUtilitiesHost::GetFileInfo(const base::FilePath& path, base::Optional<base::File::Info>* out_result) {
  NOTREACHED();
  return false;
}
class FileUtilitiesHost_GetFileInfo_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileUtilitiesHost_GetFileInfo_HandleSyncResponse(
      bool* result, base::Optional<base::File::Info>* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::Optional<base::File::Info>* out_result_;DISALLOW_COPY_AND_ASSIGN(FileUtilitiesHost_GetFileInfo_HandleSyncResponse);
};

class FileUtilitiesHost_GetFileInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileUtilitiesHost_GetFileInfo_ForwardToCallback(
      FileUtilitiesHost::GetFileInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileUtilitiesHost::GetFileInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileUtilitiesHost_GetFileInfo_ForwardToCallback);
};

FileUtilitiesHostProxy::FileUtilitiesHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FileUtilitiesHostProxy::GetFileInfo(
    const base::FilePath& param_path, base::Optional<base::File::Info>* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FileUtilitiesHost::GetFileInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileUtilitiesHost_GetFileInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileUtilitiesHost_GetFileInfo_Params_Data::BufferWriter
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
      "null path in FileUtilitiesHost.GetFileInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileUtilitiesHost_GetFileInfo_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileUtilitiesHostProxy::GetFileInfo(
    const base::FilePath& in_path, GetFileInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FileUtilitiesHost::GetFileInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileUtilitiesHost_GetFileInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileUtilitiesHost_GetFileInfo_Params_Data::BufferWriter
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
      "null path in FileUtilitiesHost.GetFileInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileUtilitiesHost_GetFileInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileUtilitiesHost_GetFileInfo_ProxyToResponder {
 public:
  static FileUtilitiesHost::GetFileInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileUtilitiesHost_GetFileInfo_ProxyToResponder> proxy(
        new FileUtilitiesHost_GetFileInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileUtilitiesHost_GetFileInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileUtilitiesHost_GetFileInfo_ProxyToResponder() {
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
  FileUtilitiesHost_GetFileInfo_ProxyToResponder(
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
        << "FileUtilitiesHost::GetFileInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<base::File::Info>& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileUtilitiesHost_GetFileInfo_ProxyToResponder);
};

bool FileUtilitiesHost_GetFileInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::FileUtilitiesHost::GetFileInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::File::Info> p_result{};
  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileUtilitiesHost::GetFileInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void FileUtilitiesHost_GetFileInfo_ProxyToResponder::Run(
    const base::Optional<base::File::Info>& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileUtilitiesHost_GetFileInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileInfoDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FileUtilitiesHost::GetFileInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileUtilitiesHost_GetFileInfo_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::File::Info> p_result{};
  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileUtilitiesHost::GetFileInfo response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FileUtilitiesHostStubDispatch::Accept(
    FileUtilitiesHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileUtilitiesHost_GetFileInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FileUtilitiesHost::GetFileInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FileUtilitiesHostStubDispatch::AcceptWithResponder(
    FileUtilitiesHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileUtilitiesHost_GetFileInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FileUtilitiesHost::GetFileInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FileUtilitiesHost_GetFileInfo_Params_Data* params =
          reinterpret_cast<
              internal::FileUtilitiesHost_GetFileInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_path{};
      FileUtilitiesHost_GetFileInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FileUtilitiesHost::GetFileInfo deserializer");
        return false;
      }
      FileUtilitiesHost::GetFileInfoCallback callback =
          FileUtilitiesHost_GetFileInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetFileInfo(
std::move(p_path), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileUtilitiesHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileUtilitiesHost RequestValidator");

  switch (message->header()->name) {
    case internal::kFileUtilitiesHost_GetFileInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileUtilitiesHost_GetFileInfo_Params_Data>(
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

bool FileUtilitiesHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileUtilitiesHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileUtilitiesHost_GetFileInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data>(
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
void FileUtilitiesHostInterceptorForTesting::GetFileInfo(const base::FilePath& path, GetFileInfoCallback callback) {
  GetForwardingInterface()->GetFileInfo(std::move(path), std::move(callback));
}
FileUtilitiesHostAsyncWaiter::FileUtilitiesHostAsyncWaiter(
    FileUtilitiesHost* proxy) : proxy_(proxy) {}

FileUtilitiesHostAsyncWaiter::~FileUtilitiesHostAsyncWaiter() = default;

void FileUtilitiesHostAsyncWaiter::GetFileInfo(
    const base::FilePath& path, base::Optional<base::File::Info>* out_result) {
  base::RunLoop loop;
  proxy_->GetFileInfo(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<base::File::Info>* out_result
,
             const base::Optional<base::File::Info>& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
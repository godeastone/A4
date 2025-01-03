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

#include "components/services/patch/public/interfaces/file_patcher.mojom.h"

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

#include "components/services/patch/public/interfaces/file_patcher.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
namespace patch {
namespace mojom {
const char FilePatcher::Name_[] = "patch.mojom.FilePatcher";

class FilePatcher_PatchFileBsdiff_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FilePatcher_PatchFileBsdiff_ForwardToCallback(
      FilePatcher::PatchFileBsdiffCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FilePatcher::PatchFileBsdiffCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FilePatcher_PatchFileBsdiff_ForwardToCallback);
};

class FilePatcher_PatchFileCourgette_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FilePatcher_PatchFileCourgette_ForwardToCallback(
      FilePatcher::PatchFileCourgetteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FilePatcher::PatchFileCourgetteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FilePatcher_PatchFileCourgette_ForwardToCallback);
};

FilePatcherProxy::FilePatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FilePatcherProxy::PatchFileBsdiff(
    base::File in_input_file, base::File in_patch_file, base::File in_output_file, PatchFileBsdiffCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "patch::mojom::FilePatcher::PatchFileBsdiff");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFilePatcher_PatchFileBsdiff_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::patch::mojom::internal::FilePatcher_PatchFileBsdiff_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_file)::BaseType::BufferWriter
      input_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_input_file, buffer, &input_file_writer, &serialization_context);
  params->input_file.Set(
      input_file_writer.is_null() ? nullptr : input_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_file in FilePatcher.PatchFileBsdiff request");
  typename decltype(params->patch_file)::BaseType::BufferWriter
      patch_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_patch_file, buffer, &patch_file_writer, &serialization_context);
  params->patch_file.Set(
      patch_file_writer.is_null() ? nullptr : patch_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->patch_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null patch_file in FilePatcher.PatchFileBsdiff request");
  typename decltype(params->output_file)::BaseType::BufferWriter
      output_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_output_file, buffer, &output_file_writer, &serialization_context);
  params->output_file.Set(
      output_file_writer.is_null() ? nullptr : output_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_file in FilePatcher.PatchFileBsdiff request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FilePatcher_PatchFileBsdiff_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FilePatcherProxy::PatchFileCourgette(
    base::File in_input_file, base::File in_patch_file, base::File in_output_file, PatchFileCourgetteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "patch::mojom::FilePatcher::PatchFileCourgette");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFilePatcher_PatchFileCourgette_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::patch::mojom::internal::FilePatcher_PatchFileCourgette_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_file)::BaseType::BufferWriter
      input_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_input_file, buffer, &input_file_writer, &serialization_context);
  params->input_file.Set(
      input_file_writer.is_null() ? nullptr : input_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_file in FilePatcher.PatchFileCourgette request");
  typename decltype(params->patch_file)::BaseType::BufferWriter
      patch_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_patch_file, buffer, &patch_file_writer, &serialization_context);
  params->patch_file.Set(
      patch_file_writer.is_null() ? nullptr : patch_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->patch_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null patch_file in FilePatcher.PatchFileCourgette request");
  typename decltype(params->output_file)::BaseType::BufferWriter
      output_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_output_file, buffer, &output_file_writer, &serialization_context);
  params->output_file.Set(
      output_file_writer.is_null() ? nullptr : output_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_file in FilePatcher.PatchFileCourgette request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FilePatcher_PatchFileCourgette_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FilePatcher_PatchFileBsdiff_ProxyToResponder {
 public:
  static FilePatcher::PatchFileBsdiffCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FilePatcher_PatchFileBsdiff_ProxyToResponder> proxy(
        new FilePatcher_PatchFileBsdiff_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FilePatcher_PatchFileBsdiff_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FilePatcher_PatchFileBsdiff_ProxyToResponder() {
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
  FilePatcher_PatchFileBsdiff_ProxyToResponder(
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
        << "FilePatcher::PatchFileBsdiffCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FilePatcher_PatchFileBsdiff_ProxyToResponder);
};

bool FilePatcher_PatchFileBsdiff_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "patch::mojom::FilePatcher::PatchFileBsdiffCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  FilePatcher_PatchFileBsdiff_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FilePatcher::PatchFileBsdiff response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void FilePatcher_PatchFileBsdiff_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFilePatcher_PatchFileBsdiff_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::patch::mojom::internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileBsdiffCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FilePatcher_PatchFileCourgette_ProxyToResponder {
 public:
  static FilePatcher::PatchFileCourgetteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FilePatcher_PatchFileCourgette_ProxyToResponder> proxy(
        new FilePatcher_PatchFileCourgette_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FilePatcher_PatchFileCourgette_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FilePatcher_PatchFileCourgette_ProxyToResponder() {
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
  FilePatcher_PatchFileCourgette_ProxyToResponder(
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
        << "FilePatcher::PatchFileCourgetteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FilePatcher_PatchFileCourgette_ProxyToResponder);
};

bool FilePatcher_PatchFileCourgette_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "patch::mojom::FilePatcher::PatchFileCourgetteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FilePatcher_PatchFileCourgette_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FilePatcher_PatchFileCourgette_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  FilePatcher_PatchFileCourgette_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FilePatcher::PatchFileCourgette response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void FilePatcher_PatchFileCourgette_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFilePatcher_PatchFileCourgette_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::patch::mojom::internal::FilePatcher_PatchFileCourgette_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileCourgetteCallback",
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
bool FilePatcherStubDispatch::Accept(
    FilePatcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFilePatcher_PatchFileBsdiff_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileBsdiff",
               "message", message->name());
#endif
      break;
    }
    case internal::kFilePatcher_PatchFileCourgette_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileCourgette",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FilePatcherStubDispatch::AcceptWithResponder(
    FilePatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFilePatcher_PatchFileBsdiff_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileBsdiff",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FilePatcher_PatchFileBsdiff_Params_Data* params =
          reinterpret_cast<
              internal::FilePatcher_PatchFileBsdiff_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_input_file{};
      base::File p_patch_file{};
      base::File p_output_file{};
      FilePatcher_PatchFileBsdiff_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputFile(&p_input_file))
        success = false;
      if (!input_data_view.ReadPatchFile(&p_patch_file))
        success = false;
      if (!input_data_view.ReadOutputFile(&p_output_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FilePatcher::PatchFileBsdiff deserializer");
        return false;
      }
      FilePatcher::PatchFileBsdiffCallback callback =
          FilePatcher_PatchFileBsdiff_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PatchFileBsdiff(
std::move(p_input_file), 
std::move(p_patch_file), 
std::move(p_output_file), std::move(callback));
      return true;
    }
    case internal::kFilePatcher_PatchFileCourgette_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)patch::mojom::FilePatcher::PatchFileCourgette",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FilePatcher_PatchFileCourgette_Params_Data* params =
          reinterpret_cast<
              internal::FilePatcher_PatchFileCourgette_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_input_file{};
      base::File p_patch_file{};
      base::File p_output_file{};
      FilePatcher_PatchFileCourgette_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputFile(&p_input_file))
        success = false;
      if (!input_data_view.ReadPatchFile(&p_patch_file))
        success = false;
      if (!input_data_view.ReadOutputFile(&p_output_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FilePatcher::PatchFileCourgette deserializer");
        return false;
      }
      FilePatcher::PatchFileCourgetteCallback callback =
          FilePatcher_PatchFileCourgette_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PatchFileCourgette(
std::move(p_input_file), 
std::move(p_patch_file), 
std::move(p_output_file), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FilePatcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FilePatcher RequestValidator");

  switch (message->header()->name) {
    case internal::kFilePatcher_PatchFileBsdiff_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FilePatcher_PatchFileBsdiff_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFilePatcher_PatchFileCourgette_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FilePatcher_PatchFileCourgette_Params_Data>(
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

bool FilePatcherResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FilePatcher ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFilePatcher_PatchFileBsdiff_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFilePatcher_PatchFileCourgette_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FilePatcher_PatchFileCourgette_ResponseParams_Data>(
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
void FilePatcherInterceptorForTesting::PatchFileBsdiff(base::File input_file, base::File patch_file, base::File output_file, PatchFileBsdiffCallback callback) {
  GetForwardingInterface()->PatchFileBsdiff(std::move(input_file), std::move(patch_file), std::move(output_file), std::move(callback));
}
void FilePatcherInterceptorForTesting::PatchFileCourgette(base::File input_file, base::File patch_file, base::File output_file, PatchFileCourgetteCallback callback) {
  GetForwardingInterface()->PatchFileCourgette(std::move(input_file), std::move(patch_file), std::move(output_file), std::move(callback));
}
FilePatcherAsyncWaiter::FilePatcherAsyncWaiter(
    FilePatcher* proxy) : proxy_(proxy) {}

FilePatcherAsyncWaiter::~FilePatcherAsyncWaiter() = default;

void FilePatcherAsyncWaiter::PatchFileBsdiff(
    base::File input_file, base::File patch_file, base::File output_file, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->PatchFileBsdiff(std::move(input_file),std::move(patch_file),std::move(output_file),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void FilePatcherAsyncWaiter::PatchFileCourgette(
    base::File input_file, base::File patch_file, base::File output_file, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->PatchFileCourgette(std::move(input_file),std::move(patch_file),std::move(output_file),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace patch

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
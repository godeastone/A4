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

#include "chrome/common/extensions/mojom/inline_install.mojom.h"

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

#include "chrome/common/extensions/mojom/inline_install.mojom-shared-message-ids.h"
#include "chrome/common/extensions/mojom/inline_install_traits.h"
namespace extensions {
namespace mojom {
const char InlineInstallProgressListener::Name_[] = "extensions.mojom.InlineInstallProgressListener";

InlineInstallProgressListenerProxy::InlineInstallProgressListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InlineInstallProgressListenerProxy::InlineInstallStageChanged(
    ::extensions::api::webstore::InstallStage in_stage) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mojom::InlineInstallProgressListener::InlineInstallStageChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInlineInstallProgressListener_InlineInstallStageChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::extensions::mojom::WebstoreInstallStage>(
      in_stage, &params->stage);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InlineInstallProgressListenerProxy::InlineInstallDownloadProgress(
    int32_t in_percent_downloaded) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mojom::InlineInstallProgressListener::InlineInstallDownloadProgress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInlineInstallProgressListener_InlineInstallDownloadProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->percent_downloaded = in_percent_downloaded;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InlineInstallProgressListenerStubDispatch::Accept(
    InlineInstallProgressListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInlineInstallProgressListener_InlineInstallStageChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstallProgressListener::InlineInstallStageChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data* params =
          reinterpret_cast<internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::extensions::api::webstore::InstallStage p_stage{};
      InlineInstallProgressListener_InlineInstallStageChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStage(&p_stage))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InlineInstallProgressListener::InlineInstallStageChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InlineInstallStageChanged(
std::move(p_stage));
      return true;
    }
    case internal::kInlineInstallProgressListener_InlineInstallDownloadProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstallProgressListener::InlineInstallDownloadProgress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data* params =
          reinterpret_cast<internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_percent_downloaded{};
      InlineInstallProgressListener_InlineInstallDownloadProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_percent_downloaded = input_data_view.percent_downloaded();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InlineInstallProgressListener::InlineInstallDownloadProgress deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InlineInstallDownloadProgress(
std::move(p_percent_downloaded));
      return true;
    }
  }
  return false;
}

// static
bool InlineInstallProgressListenerStubDispatch::AcceptWithResponder(
    InlineInstallProgressListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInlineInstallProgressListener_InlineInstallStageChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstallProgressListener::InlineInstallStageChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInlineInstallProgressListener_InlineInstallDownloadProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstallProgressListener::InlineInstallDownloadProgress",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InlineInstallProgressListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InlineInstallProgressListener RequestValidator");

  switch (message->header()->name) {
    case internal::kInlineInstallProgressListener_InlineInstallStageChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInlineInstallProgressListener_InlineInstallDownloadProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data>(
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

void InlineInstallProgressListenerInterceptorForTesting::InlineInstallStageChanged(::extensions::api::webstore::InstallStage stage) {
  GetForwardingInterface()->InlineInstallStageChanged(std::move(stage));
}
void InlineInstallProgressListenerInterceptorForTesting::InlineInstallDownloadProgress(int32_t percent_downloaded) {
  GetForwardingInterface()->InlineInstallDownloadProgress(std::move(percent_downloaded));
}
InlineInstallProgressListenerAsyncWaiter::InlineInstallProgressListenerAsyncWaiter(
    InlineInstallProgressListener* proxy) : proxy_(proxy) {}

InlineInstallProgressListenerAsyncWaiter::~InlineInstallProgressListenerAsyncWaiter() = default;


const char InlineInstaller::Name_[] = "extensions.mojom.InlineInstaller";

class InlineInstaller_DoInlineInstall_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InlineInstaller_DoInlineInstall_ForwardToCallback(
      InlineInstaller::DoInlineInstallCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InlineInstaller::DoInlineInstallCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InlineInstaller_DoInlineInstall_ForwardToCallback);
};

InlineInstallerProxy::InlineInstallerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InlineInstallerProxy::DoInlineInstall(
    const std::string& in_webstore_item_id, int32_t in_listeners_mask, InlineInstallProgressListenerPtr in_install_progress_listener, DoInlineInstallCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mojom::InlineInstaller::DoInlineInstall");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInlineInstaller_DoInlineInstall_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::InlineInstaller_DoInlineInstall_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->webstore_item_id)::BaseType::BufferWriter
      webstore_item_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_webstore_item_id, buffer, &webstore_item_id_writer, &serialization_context);
  params->webstore_item_id.Set(
      webstore_item_id_writer.is_null() ? nullptr : webstore_item_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->webstore_item_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null webstore_item_id in InlineInstaller.DoInlineInstall request");
  params->listeners_mask = in_listeners_mask;
  mojo::internal::Serialize<::extensions::mojom::InlineInstallProgressListenerPtrDataView>(
      in_install_progress_listener, &params->install_progress_listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->install_progress_listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid install_progress_listener in InlineInstaller.DoInlineInstall request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InlineInstaller_DoInlineInstall_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class InlineInstaller_DoInlineInstall_ProxyToResponder {
 public:
  static InlineInstaller::DoInlineInstallCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InlineInstaller_DoInlineInstall_ProxyToResponder> proxy(
        new InlineInstaller_DoInlineInstall_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InlineInstaller_DoInlineInstall_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InlineInstaller_DoInlineInstall_ProxyToResponder() {
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
  InlineInstaller_DoInlineInstall_ProxyToResponder(
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
        << "InlineInstaller::DoInlineInstallCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const std::string& in_error, ::extensions::webstore_install::Result in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InlineInstaller_DoInlineInstall_ProxyToResponder);
};

bool InlineInstaller_DoInlineInstall_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "extensions::mojom::InlineInstaller::DoInlineInstallCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InlineInstaller_DoInlineInstall_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InlineInstaller_DoInlineInstall_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  std::string p_error{};
  ::extensions::webstore_install::Result p_result{};
  InlineInstaller_DoInlineInstall_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InlineInstaller::DoInlineInstall response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_error), 
std::move(p_result));
  return true;
}

void InlineInstaller_DoInlineInstall_ProxyToResponder::Run(
    bool in_success, const std::string& in_error, ::extensions::webstore_install::Result in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInlineInstaller_DoInlineInstall_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::InlineInstaller_DoInlineInstall_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ");
  mojo::internal::Serialize<::extensions::mojom::WebstoreInstallResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstaller::DoInlineInstallCallback",
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
bool InlineInstallerStubDispatch::Accept(
    InlineInstaller* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInlineInstaller_DoInlineInstall_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstaller::DoInlineInstall",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool InlineInstallerStubDispatch::AcceptWithResponder(
    InlineInstaller* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInlineInstaller_DoInlineInstall_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::InlineInstaller::DoInlineInstall",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InlineInstaller_DoInlineInstall_Params_Data* params =
          reinterpret_cast<
              internal::InlineInstaller_DoInlineInstall_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_webstore_item_id{};
      int32_t p_listeners_mask{};
      InlineInstallProgressListenerPtr p_install_progress_listener{};
      InlineInstaller_DoInlineInstall_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWebstoreItemId(&p_webstore_item_id))
        success = false;
      p_listeners_mask = input_data_view.listeners_mask();
      p_install_progress_listener =
          input_data_view.TakeInstallProgressListener<decltype(p_install_progress_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InlineInstaller::DoInlineInstall deserializer");
        return false;
      }
      InlineInstaller::DoInlineInstallCallback callback =
          InlineInstaller_DoInlineInstall_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DoInlineInstall(
std::move(p_webstore_item_id), 
std::move(p_listeners_mask), 
std::move(p_install_progress_listener), std::move(callback));
      return true;
    }
  }
  return false;
}

bool InlineInstallerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InlineInstaller RequestValidator");

  switch (message->header()->name) {
    case internal::kInlineInstaller_DoInlineInstall_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InlineInstaller_DoInlineInstall_Params_Data>(
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

bool InlineInstallerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InlineInstaller ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInlineInstaller_DoInlineInstall_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InlineInstaller_DoInlineInstall_ResponseParams_Data>(
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
void InlineInstallerInterceptorForTesting::DoInlineInstall(const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, DoInlineInstallCallback callback) {
  GetForwardingInterface()->DoInlineInstall(std::move(webstore_item_id), std::move(listeners_mask), std::move(install_progress_listener), std::move(callback));
}
InlineInstallerAsyncWaiter::InlineInstallerAsyncWaiter(
    InlineInstaller* proxy) : proxy_(proxy) {}

InlineInstallerAsyncWaiter::~InlineInstallerAsyncWaiter() = default;

void InlineInstallerAsyncWaiter::DoInlineInstall(
    const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, bool* out_success, std::string* out_error, ::extensions::webstore_install::Result* out_result) {
  base::RunLoop loop;
  proxy_->DoInlineInstall(std::move(webstore_item_id),std::move(listeners_mask),std::move(install_progress_listener),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             std::string* out_error
,
             ::extensions::webstore_install::Result* out_result
,
             bool success,
             const std::string& error,
             ::extensions::webstore_install::Result result) {*out_success = std::move(success);*out_error = std::move(error);*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_success,
          out_error,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
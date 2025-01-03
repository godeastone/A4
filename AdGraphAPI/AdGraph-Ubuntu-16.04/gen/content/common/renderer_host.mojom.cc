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

#include "content/common/renderer_host.mojom.h"

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

#include "content/common/renderer_host.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char RendererHost::Name_[] = "content.mojom.RendererHost";
bool RendererHost::GetBrowserHistogram(const std::string& name, std::string* out_histogram_json) {
  NOTREACHED();
  return false;
}
class RendererHost_GetBrowserHistogram_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RendererHost_GetBrowserHistogram_HandleSyncResponse(
      bool* result, std::string* out_histogram_json)
      : result_(result), out_histogram_json_(out_histogram_json) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_histogram_json_;DISALLOW_COPY_AND_ASSIGN(RendererHost_GetBrowserHistogram_HandleSyncResponse);
};

class RendererHost_GetBrowserHistogram_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RendererHost_GetBrowserHistogram_ForwardToCallback(
      RendererHost::GetBrowserHistogramCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RendererHost::GetBrowserHistogramCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RendererHost_GetBrowserHistogram_ForwardToCallback);
};

RendererHostProxy::RendererHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererHostProxy::GetBlobURLLoaderFactory(
    ::network::mojom::URLLoaderFactoryRequest in_loader) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererHost::GetBlobURLLoaderFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_GetBlobURLLoaderFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_GetBlobURLLoaderFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      in_loader, &params->loader, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->loader),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid loader in RendererHost.GetBlobURLLoaderFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool RendererHostProxy::GetBrowserHistogram(
    const std::string& param_name, std::string* out_param_histogram_json) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererHost::GetBrowserHistogram");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_GetBrowserHistogram_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_GetBrowserHistogram_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RendererHost.GetBrowserHistogram request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RendererHost_GetBrowserHistogram_HandleSyncResponse(
          &result, out_param_histogram_json));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RendererHostProxy::GetBrowserHistogram(
    const std::string& in_name, GetBrowserHistogramCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererHost::GetBrowserHistogram");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_GetBrowserHistogram_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_GetBrowserHistogram_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RendererHost.GetBrowserHistogram request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RendererHost_GetBrowserHistogram_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RendererHostProxy::SuddenTerminationChanged(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererHost::SuddenTerminationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_SuddenTerminationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_SuddenTerminationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererHostProxy::ShutdownRequest(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererHost::ShutdownRequest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_ShutdownRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_ShutdownRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class RendererHost_GetBrowserHistogram_ProxyToResponder {
 public:
  static RendererHost::GetBrowserHistogramCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RendererHost_GetBrowserHistogram_ProxyToResponder> proxy(
        new RendererHost_GetBrowserHistogram_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RendererHost_GetBrowserHistogram_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RendererHost_GetBrowserHistogram_ProxyToResponder() {
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
  RendererHost_GetBrowserHistogram_ProxyToResponder(
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
        << "RendererHost::GetBrowserHistogramCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_histogram_json);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RendererHost_GetBrowserHistogram_ProxyToResponder);
};

bool RendererHost_GetBrowserHistogram_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RendererHost::GetBrowserHistogramCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RendererHost_GetBrowserHistogram_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RendererHost_GetBrowserHistogram_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_histogram_json{};
  RendererHost_GetBrowserHistogram_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadHistogramJson(&p_histogram_json))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RendererHost::GetBrowserHistogram response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_histogram_json));
  return true;
}

void RendererHost_GetBrowserHistogram_ProxyToResponder::Run(
    const std::string& in_histogram_json) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererHost_GetBrowserHistogram_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererHost_GetBrowserHistogram_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->histogram_json)::BaseType::BufferWriter
      histogram_json_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_histogram_json, buffer, &histogram_json_writer, &serialization_context);
  params->histogram_json.Set(
      histogram_json_writer.is_null() ? nullptr : histogram_json_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->histogram_json.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null histogram_json in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::GetBrowserHistogramCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RendererHost_GetBrowserHistogram_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RendererHost_GetBrowserHistogram_ResponseParams_Data* params =
      reinterpret_cast<internal::RendererHost_GetBrowserHistogram_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_histogram_json{};
  RendererHost_GetBrowserHistogram_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadHistogramJson(&p_histogram_json))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RendererHost::GetBrowserHistogram response deserializer");
    return false;
  }
  *out_histogram_json_ = std::move(p_histogram_json);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool RendererHostStubDispatch::Accept(
    RendererHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererHost_GetBlobURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::GetBlobURLLoaderFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererHost_GetBlobURLLoaderFactory_Params_Data* params =
          reinterpret_cast<internal::RendererHost_GetBlobURLLoaderFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::URLLoaderFactoryRequest p_loader{};
      RendererHost_GetBlobURLLoaderFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_loader =
          input_data_view.TakeLoader<decltype(p_loader)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererHost::GetBlobURLLoaderFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetBlobURLLoaderFactory(
std::move(p_loader));
      return true;
    }
    case internal::kRendererHost_GetBrowserHistogram_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::GetBrowserHistogram",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererHost_SuddenTerminationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::SuddenTerminationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererHost_SuddenTerminationChanged_Params_Data* params =
          reinterpret_cast<internal::RendererHost_SuddenTerminationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      RendererHost_SuddenTerminationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererHost::SuddenTerminationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuddenTerminationChanged(
std::move(p_enabled));
      return true;
    }
    case internal::kRendererHost_ShutdownRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::ShutdownRequest",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererHost_ShutdownRequest_Params_Data* params =
          reinterpret_cast<internal::RendererHost_ShutdownRequest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererHost_ShutdownRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererHost::ShutdownRequest deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShutdownRequest();
      return true;
    }
  }
  return false;
}

// static
bool RendererHostStubDispatch::AcceptWithResponder(
    RendererHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererHost_GetBlobURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::GetBlobURLLoaderFactory",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererHost_GetBrowserHistogram_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::GetBrowserHistogram",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RendererHost_GetBrowserHistogram_Params_Data* params =
          reinterpret_cast<
              internal::RendererHost_GetBrowserHistogram_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      RendererHost_GetBrowserHistogram_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererHost::GetBrowserHistogram deserializer");
        return false;
      }
      RendererHost::GetBrowserHistogramCallback callback =
          RendererHost_GetBrowserHistogram_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetBrowserHistogram(
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kRendererHost_SuddenTerminationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::SuddenTerminationChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererHost_ShutdownRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererHost::ShutdownRequest",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererHost RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererHost_GetBlobURLLoaderFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererHost_GetBlobURLLoaderFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererHost_GetBrowserHistogram_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererHost_GetBrowserHistogram_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererHost_SuddenTerminationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererHost_SuddenTerminationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererHost_ShutdownRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererHost_ShutdownRequest_Params_Data>(
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

bool RendererHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRendererHost_GetBrowserHistogram_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererHost_GetBrowserHistogram_ResponseParams_Data>(
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
void RendererHostInterceptorForTesting::GetBlobURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest loader) {
  GetForwardingInterface()->GetBlobURLLoaderFactory(std::move(loader));
}
void RendererHostInterceptorForTesting::GetBrowserHistogram(const std::string& name, GetBrowserHistogramCallback callback) {
  GetForwardingInterface()->GetBrowserHistogram(std::move(name), std::move(callback));
}
void RendererHostInterceptorForTesting::SuddenTerminationChanged(bool enabled) {
  GetForwardingInterface()->SuddenTerminationChanged(std::move(enabled));
}
void RendererHostInterceptorForTesting::ShutdownRequest() {
  GetForwardingInterface()->ShutdownRequest();
}
RendererHostAsyncWaiter::RendererHostAsyncWaiter(
    RendererHost* proxy) : proxy_(proxy) {}

RendererHostAsyncWaiter::~RendererHostAsyncWaiter() = default;

void RendererHostAsyncWaiter::GetBrowserHistogram(
    const std::string& name, std::string* out_histogram_json) {
  base::RunLoop loop;
  proxy_->GetBrowserHistogram(std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_histogram_json
,
             const std::string& histogram_json) {*out_histogram_json = std::move(histogram_json);
            loop->Quit();
          },
          &loop,
          out_histogram_json));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
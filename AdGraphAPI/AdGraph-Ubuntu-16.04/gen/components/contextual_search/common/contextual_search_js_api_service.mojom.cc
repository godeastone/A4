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

#include "components/contextual_search/common/contextual_search_js_api_service.mojom.h"

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

#include "components/contextual_search/common/contextual_search_js_api_service.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace contextual_search {
namespace mojom {
const char ContextualSearchJsApiService::Name_[] = "contextual_search.mojom.ContextualSearchJsApiService";

class ContextualSearchJsApiService_ShouldEnableJsApi_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContextualSearchJsApiService_ShouldEnableJsApi_ForwardToCallback(
      ContextualSearchJsApiService::ShouldEnableJsApiCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContextualSearchJsApiService::ShouldEnableJsApiCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContextualSearchJsApiService_ShouldEnableJsApi_ForwardToCallback);
};

ContextualSearchJsApiServiceProxy::ContextualSearchJsApiServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContextualSearchJsApiServiceProxy::ShouldEnableJsApi(
    const GURL& in_url, ShouldEnableJsApiCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "contextual_search::mojom::ContextualSearchJsApiService::ShouldEnableJsApi");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::contextual_search::mojom::internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ContextualSearchJsApiService.ShouldEnableJsApi request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContextualSearchJsApiService_ShouldEnableJsApi_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContextualSearchJsApiServiceProxy::HandleSetCaption(
    const std::string& in_message, bool in_does_answer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "contextual_search::mojom::ContextualSearchJsApiService::HandleSetCaption");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContextualSearchJsApiService_HandleSetCaption_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::contextual_search::mojom::internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ContextualSearchJsApiService.HandleSetCaption request");
  params->does_answer = in_does_answer;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder {
 public:
  static ContextualSearchJsApiService::ShouldEnableJsApiCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder> proxy(
        new ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder() {
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
  ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder(
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
        << "ContextualSearchJsApiService::ShouldEnableJsApiCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_should_enable);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder);
};

bool ContextualSearchJsApiService_ShouldEnableJsApi_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "contextual_search::mojom::ContextualSearchJsApiService::ShouldEnableJsApiCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_should_enable{};
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_should_enable = input_data_view.should_enable();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContextualSearchJsApiService::ShouldEnableJsApi response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_should_enable));
  return true;
}

void ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder::Run(
    bool in_should_enable) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::contextual_search::mojom::internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->should_enable = in_should_enable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)contextual_search::mojom::ContextualSearchJsApiService::ShouldEnableJsApiCallback",
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
bool ContextualSearchJsApiServiceStubDispatch::Accept(
    ContextualSearchJsApiService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)contextual_search::mojom::ContextualSearchJsApiService::ShouldEnableJsApi",
               "message", message->name());
#endif
      break;
    }
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)contextual_search::mojom::ContextualSearchJsApiService::HandleSetCaption",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* params =
          reinterpret_cast<internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_message{};
      bool p_does_answer{};
      ContextualSearchJsApiService_HandleSetCaption_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_does_answer = input_data_view.does_answer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContextualSearchJsApiService::HandleSetCaption deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HandleSetCaption(
std::move(p_message), 
std::move(p_does_answer));
      return true;
    }
  }
  return false;
}

// static
bool ContextualSearchJsApiServiceStubDispatch::AcceptWithResponder(
    ContextualSearchJsApiService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)contextual_search::mojom::ContextualSearchJsApiService::ShouldEnableJsApi",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data* params =
          reinterpret_cast<
              internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ContextualSearchJsApiService_ShouldEnableJsApi_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContextualSearchJsApiService::ShouldEnableJsApi deserializer");
        return false;
      }
      ContextualSearchJsApiService::ShouldEnableJsApiCallback callback =
          ContextualSearchJsApiService_ShouldEnableJsApi_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShouldEnableJsApi(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)contextual_search::mojom::ContextualSearchJsApiService::HandleSetCaption",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ContextualSearchJsApiServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContextualSearchJsApiService RequestValidator");

  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data>(
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

bool ContextualSearchJsApiServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContextualSearchJsApiService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_ShouldEnableJsApi_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data>(
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
void ContextualSearchJsApiServiceInterceptorForTesting::ShouldEnableJsApi(const GURL& url, ShouldEnableJsApiCallback callback) {
  GetForwardingInterface()->ShouldEnableJsApi(std::move(url), std::move(callback));
}
void ContextualSearchJsApiServiceInterceptorForTesting::HandleSetCaption(const std::string& message, bool does_answer) {
  GetForwardingInterface()->HandleSetCaption(std::move(message), std::move(does_answer));
}
ContextualSearchJsApiServiceAsyncWaiter::ContextualSearchJsApiServiceAsyncWaiter(
    ContextualSearchJsApiService* proxy) : proxy_(proxy) {}

ContextualSearchJsApiServiceAsyncWaiter::~ContextualSearchJsApiServiceAsyncWaiter() = default;

void ContextualSearchJsApiServiceAsyncWaiter::ShouldEnableJsApi(
    const GURL& url, bool* out_should_enable) {
  base::RunLoop loop;
  proxy_->ShouldEnableJsApi(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_should_enable
,
             bool should_enable) {*out_should_enable = std::move(should_enable);
            loop->Quit();
          },
          &loop,
          out_should_enable));
  loop.Run();
}

}  // namespace mojom
}  // namespace contextual_search

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
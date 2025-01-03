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

#include "third_party/blink/public/platform/modules/app_banner/app_banner.mojom-blink.h"

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

#include "third_party/blink/public/platform/modules/app_banner/app_banner.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace blink {
namespace mojom {
namespace blink {
const char AppBannerController::Name_[] = "blink.mojom.AppBannerController";

class AppBannerController_BannerPromptRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppBannerController_BannerPromptRequest_ForwardToCallback(
      AppBannerController::BannerPromptRequestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppBannerController::BannerPromptRequestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppBannerController_BannerPromptRequest_ForwardToCallback);
};

AppBannerControllerProxy::AppBannerControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppBannerControllerProxy::BannerPromptRequest(
    AppBannerServicePtr in_service, AppBannerEventRequest in_event, const WTF::Vector<WTF::String>& in_platform, BannerPromptRequestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::AppBannerController::BannerPromptRequest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppBannerController_BannerPromptRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppBannerController_BannerPromptRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AppBannerServicePtrDataView>(
      in_service, &params->service, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service in AppBannerController.BannerPromptRequest request");
  mojo::internal::Serialize<::blink::mojom::AppBannerEventRequestDataView>(
      in_event, &params->event, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->event),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid event in AppBannerController.BannerPromptRequest request");
  typename decltype(params->platform)::BaseType::BufferWriter
      platform_writer;
  const mojo::internal::ContainerValidateParams platform_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_platform, buffer, &platform_writer, &platform_validate_params,
      &serialization_context);
  params->platform.Set(
      platform_writer.is_null() ? nullptr : platform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->platform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null platform in AppBannerController.BannerPromptRequest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppBannerController_BannerPromptRequest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class AppBannerController_BannerPromptRequest_ProxyToResponder {
 public:
  static AppBannerController::BannerPromptRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppBannerController_BannerPromptRequest_ProxyToResponder> proxy(
        new AppBannerController_BannerPromptRequest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppBannerController_BannerPromptRequest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppBannerController_BannerPromptRequest_ProxyToResponder() {
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
  AppBannerController_BannerPromptRequest_ProxyToResponder(
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
        << "AppBannerController::BannerPromptRequestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      AppBannerPromptReply in_reply, const WTF::String& in_referrer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerController_BannerPromptRequest_ProxyToResponder);
};

bool AppBannerController_BannerPromptRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::AppBannerController::BannerPromptRequestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppBannerController_BannerPromptRequest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppBannerController_BannerPromptRequest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AppBannerPromptReply p_reply{};
  WTF::String p_referrer{};
  AppBannerController_BannerPromptRequest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadReply(&p_reply))
    success = false;
  if (!input_data_view.ReadReferrer(&p_referrer))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppBannerController::BannerPromptRequest response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_reply), 
std::move(p_referrer));
  return true;
}

void AppBannerController_BannerPromptRequest_ProxyToResponder::Run(
    AppBannerPromptReply in_reply, const WTF::String& in_referrer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppBannerController_BannerPromptRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppBannerController_BannerPromptRequest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AppBannerPromptReply>(
      in_reply, &params->reply);
  typename decltype(params->referrer)::BaseType::BufferWriter
      referrer_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_referrer, buffer, &referrer_writer, &serialization_context);
  params->referrer.Set(
      referrer_writer.is_null() ? nullptr : referrer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->referrer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null referrer in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerController::BannerPromptRequestCallback",
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
bool AppBannerControllerStubDispatch::Accept(
    AppBannerController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppBannerController_BannerPromptRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerController::BannerPromptRequest",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool AppBannerControllerStubDispatch::AcceptWithResponder(
    AppBannerController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppBannerController_BannerPromptRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerController::BannerPromptRequest",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::AppBannerController_BannerPromptRequest_Params_Data* params =
          reinterpret_cast<
              internal::AppBannerController_BannerPromptRequest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppBannerServicePtr p_service{};
      AppBannerEventRequest p_event{};
      WTF::Vector<WTF::String> p_platform{};
      AppBannerController_BannerPromptRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service =
          input_data_view.TakeService<decltype(p_service)>();
      p_event =
          input_data_view.TakeEvent<decltype(p_event)>();
      if (!input_data_view.ReadPlatform(&p_platform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppBannerController::BannerPromptRequest deserializer");
        return false;
      }
      AppBannerController::BannerPromptRequestCallback callback =
          AppBannerController_BannerPromptRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BannerPromptRequest(
std::move(p_service), 
std::move(p_event), 
std::move(p_platform), std::move(callback));
      return true;
    }
  }
  return false;
}

bool AppBannerControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppBannerController RequestValidator");

  switch (message->header()->name) {
    case internal::kAppBannerController_BannerPromptRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppBannerController_BannerPromptRequest_Params_Data>(
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

bool AppBannerControllerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppBannerController ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAppBannerController_BannerPromptRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppBannerController_BannerPromptRequest_ResponseParams_Data>(
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
void AppBannerControllerInterceptorForTesting::BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, BannerPromptRequestCallback callback) {
  GetForwardingInterface()->BannerPromptRequest(std::move(service), std::move(event), std::move(platform), std::move(callback));
}
AppBannerControllerAsyncWaiter::AppBannerControllerAsyncWaiter(
    AppBannerController* proxy) : proxy_(proxy) {}

AppBannerControllerAsyncWaiter::~AppBannerControllerAsyncWaiter() = default;

void AppBannerControllerAsyncWaiter::BannerPromptRequest(
    AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, AppBannerPromptReply* out_reply, WTF::String* out_referrer) {
  base::RunLoop loop;
  proxy_->BannerPromptRequest(std::move(service),std::move(event),std::move(platform),
      base::BindOnce(
          [](base::RunLoop* loop,
             AppBannerPromptReply* out_reply
,
             WTF::String* out_referrer
,
             AppBannerPromptReply reply,
             const WTF::String& referrer) {*out_reply = std::move(reply);*out_referrer = std::move(referrer);
            loop->Quit();
          },
          &loop,
          out_reply,
          out_referrer));
  loop.Run();
}

const char AppBannerEvent::Name_[] = "blink.mojom.AppBannerEvent";

AppBannerEventProxy::AppBannerEventProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppBannerEventProxy::BannerAccepted(
    const WTF::String& in_platform) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::AppBannerEvent::BannerAccepted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppBannerEvent_BannerAccepted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppBannerEvent_BannerAccepted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->platform)::BaseType::BufferWriter
      platform_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_platform, buffer, &platform_writer, &serialization_context);
  params->platform.Set(
      platform_writer.is_null() ? nullptr : platform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->platform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null platform in AppBannerEvent.BannerAccepted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppBannerEventProxy::BannerDismissed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::AppBannerEvent::BannerDismissed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppBannerEvent_BannerDismissed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppBannerEvent_BannerDismissed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AppBannerEventStubDispatch::Accept(
    AppBannerEvent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppBannerEvent_BannerAccepted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerEvent::BannerAccepted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppBannerEvent_BannerAccepted_Params_Data* params =
          reinterpret_cast<internal::AppBannerEvent_BannerAccepted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_platform{};
      AppBannerEvent_BannerAccepted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPlatform(&p_platform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppBannerEvent::BannerAccepted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BannerAccepted(
std::move(p_platform));
      return true;
    }
    case internal::kAppBannerEvent_BannerDismissed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerEvent::BannerDismissed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppBannerEvent_BannerDismissed_Params_Data* params =
          reinterpret_cast<internal::AppBannerEvent_BannerDismissed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppBannerEvent_BannerDismissed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppBannerEvent::BannerDismissed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BannerDismissed();
      return true;
    }
  }
  return false;
}

// static
bool AppBannerEventStubDispatch::AcceptWithResponder(
    AppBannerEvent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppBannerEvent_BannerAccepted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerEvent::BannerAccepted",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppBannerEvent_BannerDismissed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerEvent::BannerDismissed",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AppBannerEventRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppBannerEvent RequestValidator");

  switch (message->header()->name) {
    case internal::kAppBannerEvent_BannerAccepted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppBannerEvent_BannerAccepted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppBannerEvent_BannerDismissed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppBannerEvent_BannerDismissed_Params_Data>(
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

void AppBannerEventInterceptorForTesting::BannerAccepted(const WTF::String& platform) {
  GetForwardingInterface()->BannerAccepted(std::move(platform));
}
void AppBannerEventInterceptorForTesting::BannerDismissed() {
  GetForwardingInterface()->BannerDismissed();
}
AppBannerEventAsyncWaiter::AppBannerEventAsyncWaiter(
    AppBannerEvent* proxy) : proxy_(proxy) {}

AppBannerEventAsyncWaiter::~AppBannerEventAsyncWaiter() = default;


const char AppBannerService::Name_[] = "blink.mojom.AppBannerService";

AppBannerServiceProxy::AppBannerServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppBannerServiceProxy::DisplayAppBanner(
    bool in_user_gesture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::AppBannerService::DisplayAppBanner");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppBannerService_DisplayAppBanner_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppBannerService_DisplayAppBanner_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->user_gesture = in_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AppBannerServiceStubDispatch::Accept(
    AppBannerService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppBannerService_DisplayAppBanner_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerService::DisplayAppBanner",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppBannerService_DisplayAppBanner_Params_Data* params =
          reinterpret_cast<internal::AppBannerService_DisplayAppBanner_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_user_gesture{};
      AppBannerService_DisplayAppBanner_ParamsDataView input_data_view(params, &serialization_context);
      
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppBannerService::DisplayAppBanner deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DisplayAppBanner(
std::move(p_user_gesture));
      return true;
    }
  }
  return false;
}

// static
bool AppBannerServiceStubDispatch::AcceptWithResponder(
    AppBannerService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppBannerService_DisplayAppBanner_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AppBannerService::DisplayAppBanner",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AppBannerServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppBannerService RequestValidator");

  switch (message->header()->name) {
    case internal::kAppBannerService_DisplayAppBanner_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppBannerService_DisplayAppBanner_Params_Data>(
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

void AppBannerServiceInterceptorForTesting::DisplayAppBanner(bool user_gesture) {
  GetForwardingInterface()->DisplayAppBanner(std::move(user_gesture));
}
AppBannerServiceAsyncWaiter::AppBannerServiceAsyncWaiter(
    AppBannerService* proxy) : proxy_(proxy) {}

AppBannerServiceAsyncWaiter::~AppBannerServiceAsyncWaiter() = default;


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
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

#include "third_party/blink/public/mojom/web_package/web_package_internals.mojom.h"

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

#include "third_party/blink/public/mojom/web_package/web_package_internals.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace blink {
namespace test {
namespace mojom {
const char WebPackageInternals::Name_[] = "blink.test.mojom.WebPackageInternals";

class WebPackageInternals_SetSignedExchangeVerificationTime_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebPackageInternals_SetSignedExchangeVerificationTime_ForwardToCallback(
      WebPackageInternals::SetSignedExchangeVerificationTimeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebPackageInternals::SetSignedExchangeVerificationTimeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebPackageInternals_SetSignedExchangeVerificationTime_ForwardToCallback);
};

WebPackageInternalsProxy::WebPackageInternalsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebPackageInternalsProxy::SetSignedExchangeVerificationTime(
    base::Time in_time, SetSignedExchangeVerificationTimeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::test::mojom::WebPackageInternals::SetSignedExchangeVerificationTime");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::test::mojom::internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in WebPackageInternals.SetSignedExchangeVerificationTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebPackageInternals_SetSignedExchangeVerificationTime_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder {
 public:
  static WebPackageInternals::SetSignedExchangeVerificationTimeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder> proxy(
        new WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder() {
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
  WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder(
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
        << "WebPackageInternals::SetSignedExchangeVerificationTimeCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder);
};

bool WebPackageInternals_SetSignedExchangeVerificationTime_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::test::mojom::WebPackageInternals::SetSignedExchangeVerificationTimeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebPackageInternals::SetSignedExchangeVerificationTime response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::test::mojom::internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::test::mojom::WebPackageInternals::SetSignedExchangeVerificationTimeCallback",
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
bool WebPackageInternalsStubDispatch::Accept(
    WebPackageInternals* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::test::mojom::WebPackageInternals::SetSignedExchangeVerificationTime",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool WebPackageInternalsStubDispatch::AcceptWithResponder(
    WebPackageInternals* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::test::mojom::WebPackageInternals::SetSignedExchangeVerificationTime",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data* params =
          reinterpret_cast<
              internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_time{};
      WebPackageInternals_SetSignedExchangeVerificationTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebPackageInternals::SetSignedExchangeVerificationTime deserializer");
        return false;
      }
      WebPackageInternals::SetSignedExchangeVerificationTimeCallback callback =
          WebPackageInternals_SetSignedExchangeVerificationTime_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSignedExchangeVerificationTime(
std::move(p_time), std::move(callback));
      return true;
    }
  }
  return false;
}

bool WebPackageInternalsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebPackageInternals RequestValidator");

  switch (message->header()->name) {
    case internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data>(
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

bool WebPackageInternalsResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebPackageInternals ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWebPackageInternals_SetSignedExchangeVerificationTime_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data>(
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
void WebPackageInternalsInterceptorForTesting::SetSignedExchangeVerificationTime(base::Time time, SetSignedExchangeVerificationTimeCallback callback) {
  GetForwardingInterface()->SetSignedExchangeVerificationTime(std::move(time), std::move(callback));
}
WebPackageInternalsAsyncWaiter::WebPackageInternalsAsyncWaiter(
    WebPackageInternals* proxy) : proxy_(proxy) {}

WebPackageInternalsAsyncWaiter::~WebPackageInternalsAsyncWaiter() = default;

void WebPackageInternalsAsyncWaiter::SetSignedExchangeVerificationTime(
    base::Time time) {
  base::RunLoop loop;
  proxy_->SetSignedExchangeVerificationTime(std::move(time),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
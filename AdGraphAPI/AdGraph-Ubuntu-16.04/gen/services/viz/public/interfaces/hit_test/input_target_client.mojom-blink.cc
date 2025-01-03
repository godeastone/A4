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

#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-blink.h"

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

#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace viz {
namespace mojom {
namespace blink {
const char InputTargetClient::Name_[] = "viz.mojom.InputTargetClient";

class InputTargetClient_FrameSinkIdAt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputTargetClient_FrameSinkIdAt_ForwardToCallback(
      InputTargetClient::FrameSinkIdAtCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputTargetClient::FrameSinkIdAtCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputTargetClient_FrameSinkIdAt_ForwardToCallback);
};

InputTargetClientProxy::InputTargetClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputTargetClientProxy::FrameSinkIdAt(
    const ::blink::WebPoint& in_point, FrameSinkIdAtCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::InputTargetClient::FrameSinkIdAt");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputTargetClient_FrameSinkIdAt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::InputTargetClient_FrameSinkIdAt_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in InputTargetClient.FrameSinkIdAt request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputTargetClient_FrameSinkIdAt_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class InputTargetClient_FrameSinkIdAt_ProxyToResponder {
 public:
  static InputTargetClient::FrameSinkIdAtCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputTargetClient_FrameSinkIdAt_ProxyToResponder> proxy(
        new InputTargetClient_FrameSinkIdAt_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputTargetClient_FrameSinkIdAt_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputTargetClient_FrameSinkIdAt_ProxyToResponder() {
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
  InputTargetClient_FrameSinkIdAt_ProxyToResponder(
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
        << "InputTargetClient::FrameSinkIdAtCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const viz::FrameSinkId& in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputTargetClient_FrameSinkIdAt_ProxyToResponder);
};

bool InputTargetClient_FrameSinkIdAt_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::InputTargetClient::FrameSinkIdAtCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  viz::FrameSinkId p_id{};
  InputTargetClient_FrameSinkIdAt_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputTargetClient::FrameSinkIdAt response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void InputTargetClient_FrameSinkIdAt_ProxyToResponder::Run(
    const viz::FrameSinkId& in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputTargetClient_FrameSinkIdAt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::InputTargetClient::FrameSinkIdAtCallback",
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
bool InputTargetClientStubDispatch::Accept(
    InputTargetClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputTargetClient_FrameSinkIdAt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::InputTargetClient::FrameSinkIdAt",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool InputTargetClientStubDispatch::AcceptWithResponder(
    InputTargetClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputTargetClient_FrameSinkIdAt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::InputTargetClient::FrameSinkIdAt",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputTargetClient_FrameSinkIdAt_Params_Data* params =
          reinterpret_cast<
              internal::InputTargetClient_FrameSinkIdAt_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebPoint p_point{};
      InputTargetClient_FrameSinkIdAt_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputTargetClient::FrameSinkIdAt deserializer");
        return false;
      }
      InputTargetClient::FrameSinkIdAtCallback callback =
          InputTargetClient_FrameSinkIdAt_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FrameSinkIdAt(
std::move(p_point), std::move(callback));
      return true;
    }
  }
  return false;
}

bool InputTargetClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputTargetClient RequestValidator");

  switch (message->header()->name) {
    case internal::kInputTargetClient_FrameSinkIdAt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputTargetClient_FrameSinkIdAt_Params_Data>(
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

bool InputTargetClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputTargetClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInputTargetClient_FrameSinkIdAt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data>(
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
void InputTargetClientInterceptorForTesting::FrameSinkIdAt(const ::blink::WebPoint& point, FrameSinkIdAtCallback callback) {
  GetForwardingInterface()->FrameSinkIdAt(std::move(point), std::move(callback));
}
InputTargetClientAsyncWaiter::InputTargetClientAsyncWaiter(
    InputTargetClient* proxy) : proxy_(proxy) {}

InputTargetClientAsyncWaiter::~InputTargetClientAsyncWaiter() = default;

void InputTargetClientAsyncWaiter::FrameSinkIdAt(
    const ::blink::WebPoint& point, viz::FrameSinkId* out_id) {
  base::RunLoop loop;
  proxy_->FrameSinkIdAt(std::move(point),
      base::BindOnce(
          [](base::RunLoop* loop,
             viz::FrameSinkId* out_id
,
             const viz::FrameSinkId& id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
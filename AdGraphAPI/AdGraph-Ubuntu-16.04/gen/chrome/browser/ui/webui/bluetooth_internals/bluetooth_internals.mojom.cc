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

#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom.h"

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

#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-shared-message-ids.h"
namespace mojom {
const char BluetoothInternalsHandler::Name_[] = "mojom.BluetoothInternalsHandler";

class BluetoothInternalsHandler_GetAdapter_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothInternalsHandler_GetAdapter_ForwardToCallback(
      BluetoothInternalsHandler::GetAdapterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothInternalsHandler::GetAdapterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothInternalsHandler_GetAdapter_ForwardToCallback);
};

BluetoothInternalsHandlerProxy::BluetoothInternalsHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BluetoothInternalsHandlerProxy::GetAdapter(
    GetAdapterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::BluetoothInternalsHandler::GetAdapter");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothInternalsHandler_GetAdapter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::BluetoothInternalsHandler_GetAdapter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothInternalsHandler_GetAdapter_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BluetoothInternalsHandler_GetAdapter_ProxyToResponder {
 public:
  static BluetoothInternalsHandler::GetAdapterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothInternalsHandler_GetAdapter_ProxyToResponder> proxy(
        new BluetoothInternalsHandler_GetAdapter_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothInternalsHandler_GetAdapter_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothInternalsHandler_GetAdapter_ProxyToResponder() {
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
  BluetoothInternalsHandler_GetAdapter_ProxyToResponder(
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
        << "BluetoothInternalsHandler::GetAdapterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::bluetooth::mojom::AdapterPtr in_adapter);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothInternalsHandler_GetAdapter_ProxyToResponder);
};

bool BluetoothInternalsHandler_GetAdapter_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::BluetoothInternalsHandler::GetAdapterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::bluetooth::mojom::AdapterPtr p_adapter{};
  BluetoothInternalsHandler_GetAdapter_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_adapter =
      input_data_view.TakeAdapter<decltype(p_adapter)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BluetoothInternalsHandler::GetAdapter response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_adapter));
  return true;
}

void BluetoothInternalsHandler_GetAdapter_ProxyToResponder::Run(
    ::bluetooth::mojom::AdapterPtr in_adapter) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothInternalsHandler_GetAdapter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::AdapterPtrDataView>(
      in_adapter, &params->adapter, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::BluetoothInternalsHandler::GetAdapterCallback",
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
bool BluetoothInternalsHandlerStubDispatch::Accept(
    BluetoothInternalsHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBluetoothInternalsHandler_GetAdapter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::BluetoothInternalsHandler::GetAdapter",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool BluetoothInternalsHandlerStubDispatch::AcceptWithResponder(
    BluetoothInternalsHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBluetoothInternalsHandler_GetAdapter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::BluetoothInternalsHandler::GetAdapter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothInternalsHandler_GetAdapter_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothInternalsHandler_GetAdapter_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothInternalsHandler_GetAdapter_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BluetoothInternalsHandler::GetAdapter deserializer");
        return false;
      }
      BluetoothInternalsHandler::GetAdapterCallback callback =
          BluetoothInternalsHandler_GetAdapter_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAdapter(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BluetoothInternalsHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothInternalsHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kBluetoothInternalsHandler_GetAdapter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothInternalsHandler_GetAdapter_Params_Data>(
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

bool BluetoothInternalsHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothInternalsHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBluetoothInternalsHandler_GetAdapter_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data>(
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
void BluetoothInternalsHandlerInterceptorForTesting::GetAdapter(GetAdapterCallback callback) {
  GetForwardingInterface()->GetAdapter(std::move(callback));
}
BluetoothInternalsHandlerAsyncWaiter::BluetoothInternalsHandlerAsyncWaiter(
    BluetoothInternalsHandler* proxy) : proxy_(proxy) {}

BluetoothInternalsHandlerAsyncWaiter::~BluetoothInternalsHandlerAsyncWaiter() = default;

void BluetoothInternalsHandlerAsyncWaiter::GetAdapter(
    ::bluetooth::mojom::AdapterPtr* out_adapter) {
  base::RunLoop loop;
  proxy_->GetAdapter(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::bluetooth::mojom::AdapterPtr* out_adapter
,
             ::bluetooth::mojom::AdapterPtr adapter) {*out_adapter = std::move(adapter);
            loop->Quit();
          },
          &loop,
          out_adapter));
  loop.Run();
}

}  // namespace mojom

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace viz {
namespace mojom {
const char LayeredWindowUpdater::Name_[] = "viz.mojom.LayeredWindowUpdater";

class LayeredWindowUpdater_Draw_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LayeredWindowUpdater_Draw_ForwardToCallback(
      LayeredWindowUpdater::DrawCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LayeredWindowUpdater::DrawCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LayeredWindowUpdater_Draw_ForwardToCallback);
};

LayeredWindowUpdaterProxy::LayeredWindowUpdaterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LayeredWindowUpdaterProxy::OnAllocatedSharedMemory(
    const gfx::Size& in_pixel_size, mojo::ScopedSharedBufferHandle in_scoped_buffer_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::LayeredWindowUpdater::OnAllocatedSharedMemory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLayeredWindowUpdater_OnAllocatedSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pixel_size)::BaseType::BufferWriter
      pixel_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_pixel_size, buffer, &pixel_size_writer, &serialization_context);
  params->pixel_size.Set(
      pixel_size_writer.is_null() ? nullptr : pixel_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pixel_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pixel_size in LayeredWindowUpdater.OnAllocatedSharedMemory request");
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_scoped_buffer_handle, &params->scoped_buffer_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->scoped_buffer_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid scoped_buffer_handle in LayeredWindowUpdater.OnAllocatedSharedMemory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LayeredWindowUpdaterProxy::Draw(
    DrawCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::LayeredWindowUpdater::Draw");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLayeredWindowUpdater_Draw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::LayeredWindowUpdater_Draw_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LayeredWindowUpdater_Draw_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LayeredWindowUpdater_Draw_ProxyToResponder {
 public:
  static LayeredWindowUpdater::DrawCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LayeredWindowUpdater_Draw_ProxyToResponder> proxy(
        new LayeredWindowUpdater_Draw_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LayeredWindowUpdater_Draw_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LayeredWindowUpdater_Draw_ProxyToResponder() {
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
  LayeredWindowUpdater_Draw_ProxyToResponder(
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
        << "LayeredWindowUpdater::DrawCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(LayeredWindowUpdater_Draw_ProxyToResponder);
};

bool LayeredWindowUpdater_Draw_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::LayeredWindowUpdater::DrawCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LayeredWindowUpdater_Draw_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LayeredWindowUpdater_Draw_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  LayeredWindowUpdater_Draw_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LayeredWindowUpdater::Draw response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void LayeredWindowUpdater_Draw_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLayeredWindowUpdater_Draw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::LayeredWindowUpdater_Draw_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::LayeredWindowUpdater::DrawCallback",
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
bool LayeredWindowUpdaterStubDispatch::Accept(
    LayeredWindowUpdater* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLayeredWindowUpdater_OnAllocatedSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::LayeredWindowUpdater::OnAllocatedSharedMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* params =
          reinterpret_cast<internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_pixel_size{};
      mojo::ScopedSharedBufferHandle p_scoped_buffer_handle{};
      LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPixelSize(&p_pixel_size))
        success = false;
      p_scoped_buffer_handle = input_data_view.TakeScopedBufferHandle();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LayeredWindowUpdater::OnAllocatedSharedMemory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAllocatedSharedMemory(
std::move(p_pixel_size), 
std::move(p_scoped_buffer_handle));
      return true;
    }
    case internal::kLayeredWindowUpdater_Draw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::LayeredWindowUpdater::Draw",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool LayeredWindowUpdaterStubDispatch::AcceptWithResponder(
    LayeredWindowUpdater* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLayeredWindowUpdater_OnAllocatedSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::LayeredWindowUpdater::OnAllocatedSharedMemory",
               "message", message->name());
#endif
      break;
    }
    case internal::kLayeredWindowUpdater_Draw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::LayeredWindowUpdater::Draw",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LayeredWindowUpdater_Draw_Params_Data* params =
          reinterpret_cast<
              internal::LayeredWindowUpdater_Draw_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LayeredWindowUpdater_Draw_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LayeredWindowUpdater::Draw deserializer");
        return false;
      }
      LayeredWindowUpdater::DrawCallback callback =
          LayeredWindowUpdater_Draw_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Draw(std::move(callback));
      return true;
    }
  }
  return false;
}

bool LayeredWindowUpdaterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LayeredWindowUpdater RequestValidator");

  switch (message->header()->name) {
    case internal::kLayeredWindowUpdater_OnAllocatedSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLayeredWindowUpdater_Draw_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LayeredWindowUpdater_Draw_Params_Data>(
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

bool LayeredWindowUpdaterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LayeredWindowUpdater ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLayeredWindowUpdater_Draw_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LayeredWindowUpdater_Draw_ResponseParams_Data>(
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
void LayeredWindowUpdaterInterceptorForTesting::OnAllocatedSharedMemory(const gfx::Size& pixel_size, mojo::ScopedSharedBufferHandle scoped_buffer_handle) {
  GetForwardingInterface()->OnAllocatedSharedMemory(std::move(pixel_size), std::move(scoped_buffer_handle));
}
void LayeredWindowUpdaterInterceptorForTesting::Draw(DrawCallback callback) {
  GetForwardingInterface()->Draw(std::move(callback));
}
LayeredWindowUpdaterAsyncWaiter::LayeredWindowUpdaterAsyncWaiter(
    LayeredWindowUpdater* proxy) : proxy_(proxy) {}

LayeredWindowUpdaterAsyncWaiter::~LayeredWindowUpdaterAsyncWaiter() = default;

void LayeredWindowUpdaterAsyncWaiter::Draw(
    ) {
  base::RunLoop loop;
  proxy_->Draw(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
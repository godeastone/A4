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

#include "components/arc/common/protected_buffer_manager.mojom.h"

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

#include "components/arc/common/protected_buffer_manager.mojom-shared-message-ids.h"
namespace arc {
namespace mojom {
const char ProtectedBufferManager::Name_[] = "arc.mojom.ProtectedBufferManager";

class ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ForwardToCallback(
      ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ForwardToCallback);
};

ProtectedBufferManagerProxy::ProtectedBufferManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProtectedBufferManagerProxy::GetProtectedSharedMemoryFromHandle(
    mojo::ScopedHandle in_dummy_handle, GetProtectedSharedMemoryFromHandleCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::ProtectedBufferManager::GetProtectedSharedMemoryFromHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_dummy_handle, &params->dummy_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dummy_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dummy_handle in ProtectedBufferManager.GetProtectedSharedMemoryFromHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder {
 public:
  static ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder> proxy(
        new ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder() {
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
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder(
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
        << "ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedHandle in_shared_memory_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder);
};

bool ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedHandle p_shared_memory_handle{};
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_shared_memory_handle = input_data_view.TakeSharedMemoryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ProtectedBufferManager::GetProtectedSharedMemoryFromHandle response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_shared_memory_handle));
  return true;
}

void ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder::Run(
    mojo::ScopedHandle in_shared_memory_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_shared_memory_handle, &params->shared_memory_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shared_memory_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shared_memory_handle in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback",
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
bool ProtectedBufferManagerStubDispatch::Accept(
    ProtectedBufferManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::ProtectedBufferManager::GetProtectedSharedMemoryFromHandle",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ProtectedBufferManagerStubDispatch::AcceptWithResponder(
    ProtectedBufferManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::ProtectedBufferManager::GetProtectedSharedMemoryFromHandle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data* params =
          reinterpret_cast<
              internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedHandle p_dummy_handle{};
      ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_dummy_handle = input_data_view.TakeDummyHandle();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProtectedBufferManager::GetProtectedSharedMemoryFromHandle deserializer");
        return false;
      }
      ProtectedBufferManager::GetProtectedSharedMemoryFromHandleCallback callback =
          ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetProtectedSharedMemoryFromHandle(
std::move(p_dummy_handle), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProtectedBufferManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProtectedBufferManager RequestValidator");

  switch (message->header()->name) {
    case internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data>(
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

bool ProtectedBufferManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProtectedBufferManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data>(
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
void ProtectedBufferManagerInterceptorForTesting::GetProtectedSharedMemoryFromHandle(mojo::ScopedHandle dummy_handle, GetProtectedSharedMemoryFromHandleCallback callback) {
  GetForwardingInterface()->GetProtectedSharedMemoryFromHandle(std::move(dummy_handle), std::move(callback));
}
ProtectedBufferManagerAsyncWaiter::ProtectedBufferManagerAsyncWaiter(
    ProtectedBufferManager* proxy) : proxy_(proxy) {}

ProtectedBufferManagerAsyncWaiter::~ProtectedBufferManagerAsyncWaiter() = default;

void ProtectedBufferManagerAsyncWaiter::GetProtectedSharedMemoryFromHandle(
    mojo::ScopedHandle dummy_handle, mojo::ScopedHandle* out_shared_memory_handle) {
  base::RunLoop loop;
  proxy_->GetProtectedSharedMemoryFromHandle(std::move(dummy_handle),
      base::BindOnce(
          [](base::RunLoop* loop,
             mojo::ScopedHandle* out_shared_memory_handle
,
             mojo::ScopedHandle shared_memory_handle) {*out_shared_memory_handle = std::move(shared_memory_handle);
            loop->Quit();
          },
          &loop,
          out_shared_memory_handle));
  loop.Run();
}

}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
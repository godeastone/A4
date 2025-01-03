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

#include "content/common/histogram_fetcher.mojom.h"

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

#include "content/common/histogram_fetcher.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char ChildHistogramFetcherFactory::Name_[] = "content.mojom.ChildHistogramFetcherFactory";

ChildHistogramFetcherFactoryProxy::ChildHistogramFetcherFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChildHistogramFetcherFactoryProxy::CreateFetcher(
    mojo::ScopedSharedBufferHandle in_shm_handle, ChildHistogramFetcherRequest in_child_histogram_fetcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ChildHistogramFetcherFactory::CreateFetcher");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChildHistogramFetcherFactory_CreateFetcher_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_shm_handle, &params->shm_handle, &serialization_context);
  mojo::internal::Serialize<::content::mojom::ChildHistogramFetcherRequestDataView>(
      in_child_histogram_fetcher, &params->child_histogram_fetcher, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->child_histogram_fetcher),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid child_histogram_fetcher in ChildHistogramFetcherFactory.CreateFetcher request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ChildHistogramFetcherFactoryStubDispatch::Accept(
    ChildHistogramFetcherFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChildHistogramFetcherFactory_CreateFetcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildHistogramFetcherFactory::CreateFetcher",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data* params =
          reinterpret_cast<internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedSharedBufferHandle p_shm_handle{};
      ChildHistogramFetcherRequest p_child_histogram_fetcher{};
      ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView input_data_view(params, &serialization_context);
      
      p_shm_handle = input_data_view.TakeShmHandle();
      p_child_histogram_fetcher =
          input_data_view.TakeChildHistogramFetcher<decltype(p_child_histogram_fetcher)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChildHistogramFetcherFactory::CreateFetcher deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFetcher(
std::move(p_shm_handle), 
std::move(p_child_histogram_fetcher));
      return true;
    }
  }
  return false;
}

// static
bool ChildHistogramFetcherFactoryStubDispatch::AcceptWithResponder(
    ChildHistogramFetcherFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChildHistogramFetcherFactory_CreateFetcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildHistogramFetcherFactory::CreateFetcher",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ChildHistogramFetcherFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChildHistogramFetcherFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kChildHistogramFetcherFactory_CreateFetcher_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data>(
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

void ChildHistogramFetcherFactoryInterceptorForTesting::CreateFetcher(mojo::ScopedSharedBufferHandle shm_handle, ChildHistogramFetcherRequest child_histogram_fetcher) {
  GetForwardingInterface()->CreateFetcher(std::move(shm_handle), std::move(child_histogram_fetcher));
}
ChildHistogramFetcherFactoryAsyncWaiter::ChildHistogramFetcherFactoryAsyncWaiter(
    ChildHistogramFetcherFactory* proxy) : proxy_(proxy) {}

ChildHistogramFetcherFactoryAsyncWaiter::~ChildHistogramFetcherFactoryAsyncWaiter() = default;


const char ChildHistogramFetcher::Name_[] = "content.mojom.ChildHistogramFetcher";

class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ForwardToCallback(
      ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ForwardToCallback);
};

ChildHistogramFetcherProxy::ChildHistogramFetcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChildHistogramFetcherProxy::GetChildNonPersistentHistogramData(
    GetChildNonPersistentHistogramDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ChildHistogramFetcher::GetChildNonPersistentHistogramData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ChildHistogramFetcher_GetChildNonPersistentHistogramData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder {
 public:
  static ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder> proxy(
        new ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder() {
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
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder(
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
        << "ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<std::string>& in_deltas);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder);
};

bool ChildHistogramFetcher_GetChildNonPersistentHistogramData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::string> p_deltas{};
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDeltas(&p_deltas))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ChildHistogramFetcher::GetChildNonPersistentHistogramData response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_deltas));
  return true;
}

void ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder::Run(
    const std::vector<std::string>& in_deltas) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->deltas)::BaseType::BufferWriter
      deltas_writer;
  const mojo::internal::ContainerValidateParams deltas_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_deltas, buffer, &deltas_writer, &deltas_validate_params,
      &serialization_context);
  params->deltas.Set(
      deltas_writer.is_null() ? nullptr : deltas_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->deltas.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null deltas in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback",
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
bool ChildHistogramFetcherStubDispatch::Accept(
    ChildHistogramFetcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildHistogramFetcher::GetChildNonPersistentHistogramData",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ChildHistogramFetcherStubDispatch::AcceptWithResponder(
    ChildHistogramFetcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildHistogramFetcher::GetChildNonPersistentHistogramData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* params =
          reinterpret_cast<
              internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChildHistogramFetcher::GetChildNonPersistentHistogramData deserializer");
        return false;
      }
      ChildHistogramFetcher::GetChildNonPersistentHistogramDataCallback callback =
          ChildHistogramFetcher_GetChildNonPersistentHistogramData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetChildNonPersistentHistogramData(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ChildHistogramFetcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChildHistogramFetcher RequestValidator");

  switch (message->header()->name) {
    case internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data>(
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

bool ChildHistogramFetcherResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChildHistogramFetcher ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data>(
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
void ChildHistogramFetcherInterceptorForTesting::GetChildNonPersistentHistogramData(GetChildNonPersistentHistogramDataCallback callback) {
  GetForwardingInterface()->GetChildNonPersistentHistogramData(std::move(callback));
}
ChildHistogramFetcherAsyncWaiter::ChildHistogramFetcherAsyncWaiter(
    ChildHistogramFetcher* proxy) : proxy_(proxy) {}

ChildHistogramFetcherAsyncWaiter::~ChildHistogramFetcherAsyncWaiter() = default;

void ChildHistogramFetcherAsyncWaiter::GetChildNonPersistentHistogramData(
    std::vector<std::string>* out_deltas) {
  base::RunLoop loop;
  proxy_->GetChildNonPersistentHistogramData(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::string>* out_deltas
,
             const std::vector<std::string>& deltas) {*out_deltas = std::move(deltas);
            loop->Quit();
          },
          &loop,
          out_deltas));
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
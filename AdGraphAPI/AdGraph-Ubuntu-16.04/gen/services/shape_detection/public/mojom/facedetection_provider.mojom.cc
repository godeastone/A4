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

#include "services/shape_detection/public/mojom/facedetection_provider.mojom.h"

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

#include "services/shape_detection/public/mojom/facedetection_provider.mojom-shared-message-ids.h"
namespace shape_detection {
namespace mojom {
const char FaceDetectionProvider::Name_[] = "shape_detection.mojom.FaceDetectionProvider";

FaceDetectionProviderProxy::FaceDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FaceDetectionProviderProxy::CreateFaceDetection(
    ::shape_detection::mojom::FaceDetectionRequest in_request, ::shape_detection::mojom::FaceDetectorOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFaceDetectionProvider_CreateFaceDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::FaceDetectionProvider_CreateFaceDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::shape_detection::mojom::FaceDetectionRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in FaceDetectionProvider.CreateFaceDetection request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::shape_detection::mojom::FaceDetectorOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in FaceDetectionProvider.CreateFaceDetection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FaceDetectionProviderStubDispatch::Accept(
    FaceDetectionProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* params =
          reinterpret_cast<internal::FaceDetectionProvider_CreateFaceDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::shape_detection::mojom::FaceDetectionRequest p_request{};
      ::shape_detection::mojom::FaceDetectorOptionsPtr p_options{};
      FaceDetectionProvider_CreateFaceDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FaceDetectionProvider::CreateFaceDetection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFaceDetection(
std::move(p_request), 
std::move(p_options));
      return true;
    }
  }
  return false;
}

// static
bool FaceDetectionProviderStubDispatch::AcceptWithResponder(
    FaceDetectionProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FaceDetectionProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FaceDetectionProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FaceDetectionProvider_CreateFaceDetection_Params_Data>(
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

void FaceDetectionProviderInterceptorForTesting::CreateFaceDetection(::shape_detection::mojom::FaceDetectionRequest request, ::shape_detection::mojom::FaceDetectorOptionsPtr options) {
  GetForwardingInterface()->CreateFaceDetection(std::move(request), std::move(options));
}
FaceDetectionProviderAsyncWaiter::FaceDetectionProviderAsyncWaiter(
    FaceDetectionProvider* proxy) : proxy_(proxy) {}

FaceDetectionProviderAsyncWaiter::~FaceDetectionProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace shape_detection

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
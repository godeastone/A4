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

#include "services/shape_detection/public/mojom/barcodedetection.mojom.h"

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

#include "services/shape_detection/public/mojom/barcodedetection.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace shape_detection {
namespace mojom {
BarcodeDetectionResult::BarcodeDetectionResult()
    : raw_value(),
      bounding_box(),
      corner_points() {}

BarcodeDetectionResult::BarcodeDetectionResult(
    const std::string& raw_value_in,
    const gfx::RectF& bounding_box_in,
    const std::vector<gfx::PointF>& corner_points_in)
    : raw_value(std::move(raw_value_in)),
      bounding_box(std::move(bounding_box_in)),
      corner_points(std::move(corner_points_in)) {}

BarcodeDetectionResult::~BarcodeDetectionResult() = default;

bool BarcodeDetectionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BarcodeDetection::Name_[] = "shape_detection.mojom.BarcodeDetection";

class BarcodeDetection_Detect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BarcodeDetection_Detect_ForwardToCallback(
      BarcodeDetection::DetectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BarcodeDetection::DetectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BarcodeDetection_Detect_ForwardToCallback);
};

BarcodeDetectionProxy::BarcodeDetectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BarcodeDetectionProxy::Detect(
    const SkBitmap& in_bitmap_data, DetectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "shape_detection::mojom::BarcodeDetection::Detect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBarcodeDetection_Detect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::BarcodeDetection_Detect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bitmap_data)::BaseType::BufferWriter
      bitmap_data_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_bitmap_data, buffer, &bitmap_data_writer, &serialization_context);
  params->bitmap_data.Set(
      bitmap_data_writer.is_null() ? nullptr : bitmap_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bitmap_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bitmap_data in BarcodeDetection.Detect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BarcodeDetection_Detect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BarcodeDetection_Detect_ProxyToResponder {
 public:
  static BarcodeDetection::DetectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BarcodeDetection_Detect_ProxyToResponder> proxy(
        new BarcodeDetection_Detect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BarcodeDetection_Detect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BarcodeDetection_Detect_ProxyToResponder() {
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
  BarcodeDetection_Detect_ProxyToResponder(
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
        << "BarcodeDetection::DetectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<BarcodeDetectionResultPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BarcodeDetection_Detect_ProxyToResponder);
};

bool BarcodeDetection_Detect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "shape_detection::mojom::BarcodeDetection::DetectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BarcodeDetection_Detect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BarcodeDetection_Detect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<BarcodeDetectionResultPtr> p_results{};
  BarcodeDetection_Detect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BarcodeDetection::Detect response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void BarcodeDetection_Detect_ProxyToResponder::Run(
    std::vector<BarcodeDetectionResultPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBarcodeDetection_Detect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::BarcodeDetection_Detect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::shape_detection::mojom::BarcodeDetectionResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::BarcodeDetection::DetectCallback",
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
bool BarcodeDetectionStubDispatch::Accept(
    BarcodeDetection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBarcodeDetection_Detect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::BarcodeDetection::Detect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool BarcodeDetectionStubDispatch::AcceptWithResponder(
    BarcodeDetection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBarcodeDetection_Detect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::BarcodeDetection::Detect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BarcodeDetection_Detect_Params_Data* params =
          reinterpret_cast<
              internal::BarcodeDetection_Detect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SkBitmap p_bitmap_data{};
      BarcodeDetection_Detect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBitmapData(&p_bitmap_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BarcodeDetection::Detect deserializer");
        return false;
      }
      BarcodeDetection::DetectCallback callback =
          BarcodeDetection_Detect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Detect(
std::move(p_bitmap_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool BarcodeDetectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BarcodeDetection RequestValidator");

  switch (message->header()->name) {
    case internal::kBarcodeDetection_Detect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BarcodeDetection_Detect_Params_Data>(
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

bool BarcodeDetectionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BarcodeDetection ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBarcodeDetection_Detect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BarcodeDetection_Detect_ResponseParams_Data>(
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
void BarcodeDetectionInterceptorForTesting::Detect(const SkBitmap& bitmap_data, DetectCallback callback) {
  GetForwardingInterface()->Detect(std::move(bitmap_data), std::move(callback));
}
BarcodeDetectionAsyncWaiter::BarcodeDetectionAsyncWaiter(
    BarcodeDetection* proxy) : proxy_(proxy) {}

BarcodeDetectionAsyncWaiter::~BarcodeDetectionAsyncWaiter() = default;

void BarcodeDetectionAsyncWaiter::Detect(
    const SkBitmap& bitmap_data, std::vector<BarcodeDetectionResultPtr>* out_results) {
  base::RunLoop loop;
  proxy_->Detect(std::move(bitmap_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<BarcodeDetectionResultPtr>* out_results
,
             std::vector<BarcodeDetectionResultPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}

}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


// static
bool StructTraits<::shape_detection::mojom::BarcodeDetectionResult::DataView, ::shape_detection::mojom::BarcodeDetectionResultPtr>::Read(
    ::shape_detection::mojom::BarcodeDetectionResult::DataView input,
    ::shape_detection::mojom::BarcodeDetectionResultPtr* output) {
  bool success = true;
  ::shape_detection::mojom::BarcodeDetectionResultPtr result(::shape_detection::mojom::BarcodeDetectionResult::New());
  
      if (!input.ReadRawValue(&result->raw_value))
        success = false;
      if (!input.ReadBoundingBox(&result->bounding_box))
        success = false;
      if (!input.ReadCornerPoints(&result->corner_points))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
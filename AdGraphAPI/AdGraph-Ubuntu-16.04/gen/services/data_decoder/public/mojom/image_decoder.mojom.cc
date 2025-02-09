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

#include "services/data_decoder/public/mojom/image_decoder.mojom.h"

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

#include "services/data_decoder/public/mojom/image_decoder.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace data_decoder {
namespace mojom {
AnimationFrame::AnimationFrame()
    : bitmap(),
      duration() {}

AnimationFrame::AnimationFrame(
    const SkBitmap& bitmap_in,
    base::TimeDelta duration_in)
    : bitmap(std::move(bitmap_in)),
      duration(std::move(duration_in)) {}

AnimationFrame::~AnimationFrame() = default;

bool AnimationFrame::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ImageDecoder::Name_[] = "data_decoder.mojom.ImageDecoder";

class ImageDecoder_DecodeImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDecoder_DecodeImage_ForwardToCallback(
      ImageDecoder::DecodeImageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDecoder::DecodeImageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeImage_ForwardToCallback);
};

class ImageDecoder_DecodeAnimation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDecoder_DecodeAnimation_ForwardToCallback(
      ImageDecoder::DecodeAnimationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDecoder::DecodeAnimationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeAnimation_ForwardToCallback);
};

ImageDecoderProxy::ImageDecoderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImageDecoderProxy::DecodeImage(
    const std::vector<uint8_t>& in_encoded_data, ImageCodec in_codec, bool in_shrink_to_fit, int64_t in_max_size_in_bytes, const gfx::Size& in_desired_image_frame_size, DecodeImageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "data_decoder::mojom::ImageDecoder::DecodeImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDecoder_DecodeImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::ImageDecoder_DecodeImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->encoded_data)::BaseType::BufferWriter
      encoded_data_writer;
  const mojo::internal::ContainerValidateParams encoded_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_encoded_data, buffer, &encoded_data_writer, &encoded_data_validate_params,
      &serialization_context);
  params->encoded_data.Set(
      encoded_data_writer.is_null() ? nullptr : encoded_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encoded_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encoded_data in ImageDecoder.DecodeImage request");
  mojo::internal::Serialize<::data_decoder::mojom::ImageCodec>(
      in_codec, &params->codec);
  params->shrink_to_fit = in_shrink_to_fit;
  params->max_size_in_bytes = in_max_size_in_bytes;
  typename decltype(params->desired_image_frame_size)::BaseType::BufferWriter
      desired_image_frame_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_desired_image_frame_size, buffer, &desired_image_frame_size_writer, &serialization_context);
  params->desired_image_frame_size.Set(
      desired_image_frame_size_writer.is_null() ? nullptr : desired_image_frame_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->desired_image_frame_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null desired_image_frame_size in ImageDecoder.DecodeImage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageDecoder_DecodeImage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImageDecoderProxy::DecodeAnimation(
    const std::vector<uint8_t>& in_encoded_data, bool in_shrink_to_fit, int64_t in_max_size_in_bytes, DecodeAnimationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "data_decoder::mojom::ImageDecoder::DecodeAnimation");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDecoder_DecodeAnimation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::ImageDecoder_DecodeAnimation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->encoded_data)::BaseType::BufferWriter
      encoded_data_writer;
  const mojo::internal::ContainerValidateParams encoded_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_encoded_data, buffer, &encoded_data_writer, &encoded_data_validate_params,
      &serialization_context);
  params->encoded_data.Set(
      encoded_data_writer.is_null() ? nullptr : encoded_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encoded_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encoded_data in ImageDecoder.DecodeAnimation request");
  params->shrink_to_fit = in_shrink_to_fit;
  params->max_size_in_bytes = in_max_size_in_bytes;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageDecoder_DecodeAnimation_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ImageDecoder_DecodeImage_ProxyToResponder {
 public:
  static ImageDecoder::DecodeImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageDecoder_DecodeImage_ProxyToResponder> proxy(
        new ImageDecoder_DecodeImage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageDecoder_DecodeImage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageDecoder_DecodeImage_ProxyToResponder() {
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
  ImageDecoder_DecodeImage_ProxyToResponder(
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
        << "ImageDecoder::DecodeImageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const SkBitmap& in_decoded_image);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeImage_ProxyToResponder);
};

bool ImageDecoder_DecodeImage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "data_decoder::mojom::ImageDecoder::DecodeImageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageDecoder_DecodeImage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageDecoder_DecodeImage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SkBitmap p_decoded_image{};
  ImageDecoder_DecodeImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDecodedImage(&p_decoded_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageDecoder::DecodeImage response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_decoded_image));
  return true;
}

void ImageDecoder_DecodeImage_ProxyToResponder::Run(
    const SkBitmap& in_decoded_image) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDecoder_DecodeImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::ImageDecoder_DecodeImage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->decoded_image)::BaseType::BufferWriter
      decoded_image_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_decoded_image, buffer, &decoded_image_writer, &serialization_context);
  params->decoded_image.Set(
      decoded_image_writer.is_null() ? nullptr : decoded_image_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeImageCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ImageDecoder_DecodeAnimation_ProxyToResponder {
 public:
  static ImageDecoder::DecodeAnimationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageDecoder_DecodeAnimation_ProxyToResponder> proxy(
        new ImageDecoder_DecodeAnimation_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageDecoder_DecodeAnimation_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageDecoder_DecodeAnimation_ProxyToResponder() {
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
  ImageDecoder_DecodeAnimation_ProxyToResponder(
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
        << "ImageDecoder::DecodeAnimationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<AnimationFramePtr> in_decoded_image);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeAnimation_ProxyToResponder);
};

bool ImageDecoder_DecodeAnimation_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "data_decoder::mojom::ImageDecoder::DecodeAnimationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageDecoder_DecodeAnimation_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageDecoder_DecodeAnimation_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AnimationFramePtr> p_decoded_image{};
  ImageDecoder_DecodeAnimation_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDecodedImage(&p_decoded_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageDecoder::DecodeAnimation response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_decoded_image));
  return true;
}

void ImageDecoder_DecodeAnimation_ProxyToResponder::Run(
    std::vector<AnimationFramePtr> in_decoded_image) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDecoder_DecodeAnimation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::ImageDecoder_DecodeAnimation_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->decoded_image)::BaseType::BufferWriter
      decoded_image_writer;
  const mojo::internal::ContainerValidateParams decoded_image_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::data_decoder::mojom::AnimationFrameDataView>>(
      in_decoded_image, buffer, &decoded_image_writer, &decoded_image_validate_params,
      &serialization_context);
  params->decoded_image.Set(
      decoded_image_writer.is_null() ? nullptr : decoded_image_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->decoded_image.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null decoded_image in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeAnimationCallback",
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
bool ImageDecoderStubDispatch::Accept(
    ImageDecoder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeImage",
               "message", message->name());
#endif
      break;
    }
    case internal::kImageDecoder_DecodeAnimation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeAnimation",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ImageDecoderStubDispatch::AcceptWithResponder(
    ImageDecoder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeImage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageDecoder_DecodeImage_Params_Data* params =
          reinterpret_cast<
              internal::ImageDecoder_DecodeImage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_encoded_data{};
      ImageCodec p_codec{};
      bool p_shrink_to_fit{};
      int64_t p_max_size_in_bytes{};
      gfx::Size p_desired_image_frame_size{};
      ImageDecoder_DecodeImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEncodedData(&p_encoded_data))
        success = false;
      if (!input_data_view.ReadCodec(&p_codec))
        success = false;
      p_shrink_to_fit = input_data_view.shrink_to_fit();
      p_max_size_in_bytes = input_data_view.max_size_in_bytes();
      if (!input_data_view.ReadDesiredImageFrameSize(&p_desired_image_frame_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageDecoder::DecodeImage deserializer");
        return false;
      }
      ImageDecoder::DecodeImageCallback callback =
          ImageDecoder_DecodeImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DecodeImage(
std::move(p_encoded_data), 
std::move(p_codec), 
std::move(p_shrink_to_fit), 
std::move(p_max_size_in_bytes), 
std::move(p_desired_image_frame_size), std::move(callback));
      return true;
    }
    case internal::kImageDecoder_DecodeAnimation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::ImageDecoder::DecodeAnimation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageDecoder_DecodeAnimation_Params_Data* params =
          reinterpret_cast<
              internal::ImageDecoder_DecodeAnimation_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_encoded_data{};
      bool p_shrink_to_fit{};
      int64_t p_max_size_in_bytes{};
      ImageDecoder_DecodeAnimation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEncodedData(&p_encoded_data))
        success = false;
      p_shrink_to_fit = input_data_view.shrink_to_fit();
      p_max_size_in_bytes = input_data_view.max_size_in_bytes();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageDecoder::DecodeAnimation deserializer");
        return false;
      }
      ImageDecoder::DecodeAnimationCallback callback =
          ImageDecoder_DecodeAnimation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DecodeAnimation(
std::move(p_encoded_data), 
std::move(p_shrink_to_fit), 
std::move(p_max_size_in_bytes), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ImageDecoderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageDecoder RequestValidator");

  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageDecoder_DecodeAnimation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeAnimation_Params_Data>(
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

bool ImageDecoderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageDecoder ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeImage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageDecoder_DecodeAnimation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeAnimation_ResponseParams_Data>(
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
void ImageDecoderInterceptorForTesting::DecodeImage(const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, DecodeImageCallback callback) {
  GetForwardingInterface()->DecodeImage(std::move(encoded_data), std::move(codec), std::move(shrink_to_fit), std::move(max_size_in_bytes), std::move(desired_image_frame_size), std::move(callback));
}
void ImageDecoderInterceptorForTesting::DecodeAnimation(const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, DecodeAnimationCallback callback) {
  GetForwardingInterface()->DecodeAnimation(std::move(encoded_data), std::move(shrink_to_fit), std::move(max_size_in_bytes), std::move(callback));
}
ImageDecoderAsyncWaiter::ImageDecoderAsyncWaiter(
    ImageDecoder* proxy) : proxy_(proxy) {}

ImageDecoderAsyncWaiter::~ImageDecoderAsyncWaiter() = default;

void ImageDecoderAsyncWaiter::DecodeImage(
    const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, SkBitmap* out_decoded_image) {
  base::RunLoop loop;
  proxy_->DecodeImage(std::move(encoded_data),std::move(codec),std::move(shrink_to_fit),std::move(max_size_in_bytes),std::move(desired_image_frame_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             SkBitmap* out_decoded_image
,
             const SkBitmap& decoded_image) {*out_decoded_image = std::move(decoded_image);
            loop->Quit();
          },
          &loop,
          out_decoded_image));
  loop.Run();
}
void ImageDecoderAsyncWaiter::DecodeAnimation(
    const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, std::vector<AnimationFramePtr>* out_decoded_image) {
  base::RunLoop loop;
  proxy_->DecodeAnimation(std::move(encoded_data),std::move(shrink_to_fit),std::move(max_size_in_bytes),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<AnimationFramePtr>* out_decoded_image
,
             std::vector<AnimationFramePtr> decoded_image) {*out_decoded_image = std::move(decoded_image);
            loop->Quit();
          },
          &loop,
          out_decoded_image));
  loop.Run();
}

}  // namespace mojom
}  // namespace data_decoder

namespace mojo {


// static
bool StructTraits<::data_decoder::mojom::AnimationFrame::DataView, ::data_decoder::mojom::AnimationFramePtr>::Read(
    ::data_decoder::mojom::AnimationFrame::DataView input,
    ::data_decoder::mojom::AnimationFramePtr* output) {
  bool success = true;
  ::data_decoder::mojom::AnimationFramePtr result(::data_decoder::mojom::AnimationFrame::New());
  
      if (!input.ReadBitmap(&result->bitmap))
        success = false;
      if (!input.ReadDuration(&result->duration))
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
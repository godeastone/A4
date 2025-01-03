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

#include "content/common/image_downloader/image_downloader.mojom.h"

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

#include "content/common/image_downloader/image_downloader.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char ImageDownloader::Name_[] = "content.mojom.ImageDownloader";

class ImageDownloader_DownloadImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDownloader_DownloadImage_ForwardToCallback(
      ImageDownloader::DownloadImageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDownloader::DownloadImageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ForwardToCallback);
};

ImageDownloaderProxy::ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImageDownloaderProxy::DownloadImage(
    const GURL& in_url, bool in_is_favicon, uint32_t in_max_bitmap_size, bool in_bypass_cache, DownloadImageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ImageDownloader::DownloadImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDownloader_DownloadImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ImageDownloader_DownloadImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ImageDownloader.DownloadImage request");
  params->is_favicon = in_is_favicon;
  params->max_bitmap_size = in_max_bitmap_size;
  params->bypass_cache = in_bypass_cache;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageDownloader_DownloadImage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ImageDownloader_DownloadImage_ProxyToResponder {
 public:
  static ImageDownloader::DownloadImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageDownloader_DownloadImage_ProxyToResponder> proxy(
        new ImageDownloader_DownloadImage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageDownloader_DownloadImage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageDownloader_DownloadImage_ProxyToResponder() {
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
  ImageDownloader_DownloadImage_ProxyToResponder(
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
        << "ImageDownloader::DownloadImageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_http_status_code, const std::vector<SkBitmap>& in_images, const std::vector<gfx::Size>& in_original_image_sizes);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ProxyToResponder);
};

bool ImageDownloader_DownloadImage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ImageDownloader::DownloadImageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageDownloader_DownloadImage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageDownloader_DownloadImage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_http_status_code{};
  std::vector<SkBitmap> p_images{};
  std::vector<gfx::Size> p_original_image_sizes{};
  ImageDownloader_DownloadImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_http_status_code = input_data_view.http_status_code();
  if (!input_data_view.ReadImages(&p_images))
    success = false;
  if (!input_data_view.ReadOriginalImageSizes(&p_original_image_sizes))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageDownloader::DownloadImage response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_http_status_code), 
std::move(p_images), 
std::move(p_original_image_sizes));
  return true;
}

void ImageDownloader_DownloadImage_ProxyToResponder::Run(
    int32_t in_http_status_code, const std::vector<SkBitmap>& in_images, const std::vector<gfx::Size>& in_original_image_sizes) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageDownloader_DownloadImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ImageDownloader_DownloadImage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->http_status_code = in_http_status_code;
  typename decltype(params->images)::BaseType::BufferWriter
      images_writer;
  const mojo::internal::ContainerValidateParams images_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
      in_images, buffer, &images_writer, &images_validate_params,
      &serialization_context);
  params->images.Set(
      images_writer.is_null() ? nullptr : images_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->images.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null images in ");
  typename decltype(params->original_image_sizes)::BaseType::BufferWriter
      original_image_sizes_writer;
  const mojo::internal::ContainerValidateParams original_image_sizes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
      in_original_image_sizes, buffer, &original_image_sizes_writer, &original_image_sizes_validate_params,
      &serialization_context);
  params->original_image_sizes.Set(
      original_image_sizes_writer.is_null() ? nullptr : original_image_sizes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_image_sizes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_image_sizes in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ImageDownloader::DownloadImageCallback",
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
bool ImageDownloaderStubDispatch::Accept(
    ImageDownloader* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ImageDownloader::DownloadImage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ImageDownloaderStubDispatch::AcceptWithResponder(
    ImageDownloader* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ImageDownloader::DownloadImage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageDownloader_DownloadImage_Params_Data* params =
          reinterpret_cast<
              internal::ImageDownloader_DownloadImage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      bool p_is_favicon{};
      uint32_t p_max_bitmap_size{};
      bool p_bypass_cache{};
      ImageDownloader_DownloadImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_is_favicon = input_data_view.is_favicon();
      p_max_bitmap_size = input_data_view.max_bitmap_size();
      p_bypass_cache = input_data_view.bypass_cache();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageDownloader::DownloadImage deserializer");
        return false;
      }
      ImageDownloader::DownloadImageCallback callback =
          ImageDownloader_DownloadImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DownloadImage(
std::move(p_url), 
std::move(p_is_favicon), 
std::move(p_max_bitmap_size), 
std::move(p_bypass_cache), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ImageDownloaderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageDownloader RequestValidator");

  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_Params_Data>(
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

bool ImageDownloaderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageDownloader ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_ResponseParams_Data>(
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
void ImageDownloaderInterceptorForTesting::DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, DownloadImageCallback callback) {
  GetForwardingInterface()->DownloadImage(std::move(url), std::move(is_favicon), std::move(max_bitmap_size), std::move(bypass_cache), std::move(callback));
}
ImageDownloaderAsyncWaiter::ImageDownloaderAsyncWaiter(
    ImageDownloader* proxy) : proxy_(proxy) {}

ImageDownloaderAsyncWaiter::~ImageDownloaderAsyncWaiter() = default;

void ImageDownloaderAsyncWaiter::DownloadImage(
    const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, int32_t* out_http_status_code, std::vector<SkBitmap>* out_images, std::vector<gfx::Size>* out_original_image_sizes) {
  base::RunLoop loop;
  proxy_->DownloadImage(std::move(url),std::move(is_favicon),std::move(max_bitmap_size),std::move(bypass_cache),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_http_status_code
,
             std::vector<SkBitmap>* out_images
,
             std::vector<gfx::Size>* out_original_image_sizes
,
             int32_t http_status_code,
             const std::vector<SkBitmap>& images,
             const std::vector<gfx::Size>& original_image_sizes) {*out_http_status_code = std::move(http_status_code);*out_images = std::move(images);*out_original_image_sizes = std::move(original_image_sizes);
            loop->Quit();
          },
          &loop,
          out_http_status_code,
          out_images,
          out_original_image_sizes));
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
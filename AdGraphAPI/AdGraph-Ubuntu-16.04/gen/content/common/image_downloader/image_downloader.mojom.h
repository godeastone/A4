// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
#define CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/common/image_downloader/image_downloader.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class ImageDownloader;
using ImageDownloaderPtr = mojo::InterfacePtr<ImageDownloader>;
using ImageDownloaderPtrInfo = mojo::InterfacePtrInfo<ImageDownloader>;
using ThreadSafeImageDownloaderPtr =
    mojo::ThreadSafeInterfacePtr<ImageDownloader>;
using ImageDownloaderRequest = mojo::InterfaceRequest<ImageDownloader>;
using ImageDownloaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageDownloader>;
using ThreadSafeImageDownloaderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImageDownloader>;
using ImageDownloaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageDownloader>;
using ImageDownloaderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageDownloader>;


class ImageDownloaderProxy;

template <typename ImplRefTraits>
class ImageDownloaderStub;

class ImageDownloaderRequestValidator;
class ImageDownloaderResponseValidator;

class CONTENT_EXPORT ImageDownloader
    : public ImageDownloaderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ImageDownloaderProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImageDownloaderStub<ImplRefTraits>;

  using RequestValidator_ = ImageDownloaderRequestValidator;
  using ResponseValidator_ = ImageDownloaderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDownloadImageMinVersion = 0,
  };
  virtual ~ImageDownloader() {}


  using DownloadImageCallback = base::OnceCallback<void(int32_t, const std::vector<SkBitmap>&, const std::vector<gfx::Size>&)>;
  virtual void DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, DownloadImageCallback callback) = 0;
};
class CONTENT_EXPORT ImageDownloaderInterceptorForTesting : public ImageDownloader {
  virtual ImageDownloader* GetForwardingInterface() = 0;
  void DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, DownloadImageCallback callback) override;
};
class CONTENT_EXPORT ImageDownloaderAsyncWaiter {
 public:
  explicit ImageDownloaderAsyncWaiter(ImageDownloader* proxy);
  ~ImageDownloaderAsyncWaiter();
  void DownloadImage(
      const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, int32_t* out_http_status_code, std::vector<SkBitmap>* out_images, std::vector<gfx::Size>* out_original_image_sizes);

 private:
  ImageDownloader* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImageDownloaderAsyncWaiter);
};

class CONTENT_EXPORT ImageDownloaderProxy
    : public ImageDownloader {
 public:
  explicit ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, DownloadImageCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ImageDownloaderStubDispatch {
 public:
  static bool Accept(ImageDownloader* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImageDownloader* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImageDownloader>>
class ImageDownloaderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImageDownloaderStub() {}
  ~ImageDownloaderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageDownloaderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageDownloaderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ImageDownloaderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ImageDownloaderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
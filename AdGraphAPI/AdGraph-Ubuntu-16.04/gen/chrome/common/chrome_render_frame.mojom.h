// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_H_
#define CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_H_

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
#include "chrome/common/chrome_render_frame.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "third_party/blink/public/web/window_features.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "chrome/common/web_application_info.h"
#include "content/public/common/browser_controls_state.h"


namespace chrome {
namespace mojom {
class ChromeRenderFrame;
using ChromeRenderFramePtr = mojo::InterfacePtr<ChromeRenderFrame>;
using ChromeRenderFramePtrInfo = mojo::InterfacePtrInfo<ChromeRenderFrame>;
using ThreadSafeChromeRenderFramePtr =
    mojo::ThreadSafeInterfacePtr<ChromeRenderFrame>;
using ChromeRenderFrameRequest = mojo::InterfaceRequest<ChromeRenderFrame>;
using ChromeRenderFrameAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChromeRenderFrame>;
using ThreadSafeChromeRenderFrameAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChromeRenderFrame>;
using ChromeRenderFrameAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChromeRenderFrame>;
using ChromeRenderFrameAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChromeRenderFrame>;

using WebApplicationInfo = mojo::native::NativeStruct;
using WebApplicationInfoPtr = mojo::native::NativeStructPtr;


class ChromeRenderFrameProxy;

template <typename ImplRefTraits>
class ChromeRenderFrameStub;

class ChromeRenderFrameRequestValidator;
class ChromeRenderFrameResponseValidator;

class  ChromeRenderFrame
    : public ChromeRenderFrameInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChromeRenderFrameProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChromeRenderFrameStub<ImplRefTraits>;

  using RequestValidator_ = ChromeRenderFrameRequestValidator;
  using ResponseValidator_ = ChromeRenderFrameResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetWindowFeaturesMinVersion = 0,
    kRequestReloadImageForContextNodeMinVersion = 0,
    kRequestThumbnailForContextNodeMinVersion = 0,
    kExecuteWebUIJavaScriptMinVersion = 0,
    kSetClientSidePhishingDetectionMinVersion = 0,
    kGetWebApplicationInfoMinVersion = 0,
  };
  virtual ~ChromeRenderFrame() {}

  virtual void SetWindowFeatures(::blink::mojom::WindowFeaturesPtr window_features) = 0;

  virtual void RequestReloadImageForContextNode() = 0;


  using RequestThumbnailForContextNodeCallback = base::Callback<void(const std::vector<uint8_t>&, const gfx::Size&)>;
  virtual void RequestThumbnailForContextNode(int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, const RequestThumbnailForContextNodeCallback& callback) = 0;

  virtual void ExecuteWebUIJavaScript(const base::string16& javascript) = 0;

  virtual void SetClientSidePhishingDetection(bool enable_phishing_detection) = 0;


  using GetWebApplicationInfoCallback = base::Callback<void(const ::WebApplicationInfo&)>;
  virtual void GetWebApplicationInfo(const GetWebApplicationInfoCallback& callback) = 0;
};
class  ChromeRenderFrameInterceptorForTesting : public ChromeRenderFrame {
  virtual ChromeRenderFrame* GetForwardingInterface() = 0;
  void SetWindowFeatures(::blink::mojom::WindowFeaturesPtr window_features) override;
  void RequestReloadImageForContextNode() override;
  void RequestThumbnailForContextNode(int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, const RequestThumbnailForContextNodeCallback& callback) override;
  void ExecuteWebUIJavaScript(const base::string16& javascript) override;
  void SetClientSidePhishingDetection(bool enable_phishing_detection) override;
  void GetWebApplicationInfo(const GetWebApplicationInfoCallback& callback) override;
};
class  ChromeRenderFrameAsyncWaiter {
 public:
  explicit ChromeRenderFrameAsyncWaiter(ChromeRenderFrame* proxy);
  ~ChromeRenderFrameAsyncWaiter();
  void RequestThumbnailForContextNode(
      int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, std::vector<uint8_t>* out_thumbnail_data, gfx::Size* out_original_size);
  void GetWebApplicationInfo(
      ::WebApplicationInfo* out_web_application_info);

 private:
  ChromeRenderFrame* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChromeRenderFrameAsyncWaiter);
};

class  ChromeRenderFrameProxy
    : public ChromeRenderFrame {
 public:
  explicit ChromeRenderFrameProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetWindowFeatures(::blink::mojom::WindowFeaturesPtr window_features) final;
  void RequestReloadImageForContextNode() final;
  void RequestThumbnailForContextNode(int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, const RequestThumbnailForContextNodeCallback& callback) final;
  void ExecuteWebUIJavaScript(const base::string16& javascript) final;
  void SetClientSidePhishingDetection(bool enable_phishing_detection) final;
  void GetWebApplicationInfo(const GetWebApplicationInfoCallback& callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ChromeRenderFrameStubDispatch {
 public:
  static bool Accept(ChromeRenderFrame* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChromeRenderFrame* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChromeRenderFrame>>
class ChromeRenderFrameStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChromeRenderFrameStub() {}
  ~ChromeRenderFrameStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChromeRenderFrameStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChromeRenderFrameStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ChromeRenderFrameRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ChromeRenderFrameResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_H_
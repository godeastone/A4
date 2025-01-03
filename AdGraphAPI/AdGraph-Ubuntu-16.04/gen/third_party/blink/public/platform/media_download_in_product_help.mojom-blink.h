// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/media_download_in_product_help.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {
class MediaDownloadInProductHelp;
using MediaDownloadInProductHelpPtr = mojo::InterfacePtr<MediaDownloadInProductHelp>;
using RevocableMediaDownloadInProductHelpPtr = ::blink::RevocableInterfacePtr<MediaDownloadInProductHelp>;
using MediaDownloadInProductHelpPtrInfo = mojo::InterfacePtrInfo<MediaDownloadInProductHelp>;
using ThreadSafeMediaDownloadInProductHelpPtr =
    mojo::ThreadSafeInterfacePtr<MediaDownloadInProductHelp>;
using MediaDownloadInProductHelpRequest = mojo::InterfaceRequest<MediaDownloadInProductHelp>;
using MediaDownloadInProductHelpAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDownloadInProductHelp>;
using ThreadSafeMediaDownloadInProductHelpAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDownloadInProductHelp>;
using MediaDownloadInProductHelpAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDownloadInProductHelp>;
using MediaDownloadInProductHelpAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDownloadInProductHelp>;


class MediaDownloadInProductHelpProxy;

template <typename ImplRefTraits>
class MediaDownloadInProductHelpStub;

class MediaDownloadInProductHelpRequestValidator;

class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelp
    : public MediaDownloadInProductHelpInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaDownloadInProductHelpProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDownloadInProductHelpStub<ImplRefTraits>;

  using RequestValidator_ = MediaDownloadInProductHelpRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kShowInProductHelpWidgetMinVersion = 0,
  };
  virtual ~MediaDownloadInProductHelp() {}

  virtual void ShowInProductHelpWidget(const ::blink::WebRect& button_rect) = 0;
};
class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelpInterceptorForTesting : public MediaDownloadInProductHelp {
  virtual MediaDownloadInProductHelp* GetForwardingInterface() = 0;
  void ShowInProductHelpWidget(const ::blink::WebRect& button_rect) override;
};
class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelpAsyncWaiter {
 public:
  explicit MediaDownloadInProductHelpAsyncWaiter(MediaDownloadInProductHelp* proxy);
  ~MediaDownloadInProductHelpAsyncWaiter();

 private:
  MediaDownloadInProductHelp* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDownloadInProductHelpAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelpProxy
    : public MediaDownloadInProductHelp {
 public:
  explicit MediaDownloadInProductHelpProxy(mojo::MessageReceiverWithResponder* receiver);
  void ShowInProductHelpWidget(const ::blink::WebRect& button_rect) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelpStubDispatch {
 public:
  static bool Accept(MediaDownloadInProductHelp* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDownloadInProductHelp* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDownloadInProductHelp>>
class MediaDownloadInProductHelpStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDownloadInProductHelpStub() {}
  ~MediaDownloadInProductHelpStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDownloadInProductHelpStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDownloadInProductHelpStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaDownloadInProductHelpRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_BLINK_H_
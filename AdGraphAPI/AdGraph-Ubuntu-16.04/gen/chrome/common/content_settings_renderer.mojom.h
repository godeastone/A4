// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_H_
#define CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_H_

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
#include "chrome/common/content_settings_renderer.mojom-shared.h"
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


namespace chrome {
namespace mojom {
class ContentSettingsRenderer;
using ContentSettingsRendererPtr = mojo::InterfacePtr<ContentSettingsRenderer>;
using ContentSettingsRendererPtrInfo = mojo::InterfacePtrInfo<ContentSettingsRenderer>;
using ThreadSafeContentSettingsRendererPtr =
    mojo::ThreadSafeInterfacePtr<ContentSettingsRenderer>;
using ContentSettingsRendererRequest = mojo::InterfaceRequest<ContentSettingsRenderer>;
using ContentSettingsRendererAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentSettingsRenderer>;
using ThreadSafeContentSettingsRendererAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ContentSettingsRenderer>;
using ContentSettingsRendererAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentSettingsRenderer>;
using ContentSettingsRendererAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentSettingsRenderer>;


class ContentSettingsRendererProxy;

template <typename ImplRefTraits>
class ContentSettingsRendererStub;

class ContentSettingsRendererRequestValidator;

class  ContentSettingsRenderer
    : public ContentSettingsRendererInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ContentSettingsRendererProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContentSettingsRendererStub<ImplRefTraits>;

  using RequestValidator_ = ContentSettingsRendererRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetAllowRunningInsecureContentMinVersion = 0,
    kSetAsInterstitialMinVersion = 0,
  };
  virtual ~ContentSettingsRenderer() {}

  virtual void SetAllowRunningInsecureContent() = 0;

  virtual void SetAsInterstitial() = 0;
};
class  ContentSettingsRendererInterceptorForTesting : public ContentSettingsRenderer {
  virtual ContentSettingsRenderer* GetForwardingInterface() = 0;
  void SetAllowRunningInsecureContent() override;
  void SetAsInterstitial() override;
};
class  ContentSettingsRendererAsyncWaiter {
 public:
  explicit ContentSettingsRendererAsyncWaiter(ContentSettingsRenderer* proxy);
  ~ContentSettingsRendererAsyncWaiter();

 private:
  ContentSettingsRenderer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentSettingsRendererAsyncWaiter);
};

class  ContentSettingsRendererProxy
    : public ContentSettingsRenderer {
 public:
  explicit ContentSettingsRendererProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetAllowRunningInsecureContent() final;
  void SetAsInterstitial() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ContentSettingsRendererStubDispatch {
 public:
  static bool Accept(ContentSettingsRenderer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContentSettingsRenderer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContentSettingsRenderer>>
class ContentSettingsRendererStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContentSettingsRendererStub() {}
  ~ContentSettingsRendererStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentSettingsRendererStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentSettingsRendererStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ContentSettingsRendererRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_H_
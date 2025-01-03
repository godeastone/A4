// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_H_
#define CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_H_

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
#include "content/common/render_widget_window_tree_client_factory.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/ui/public/interfaces/window_tree.mojom.h"
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
class RenderWidgetWindowTreeClient;
using RenderWidgetWindowTreeClientPtr = mojo::InterfacePtr<RenderWidgetWindowTreeClient>;
using RenderWidgetWindowTreeClientPtrInfo = mojo::InterfacePtrInfo<RenderWidgetWindowTreeClient>;
using ThreadSafeRenderWidgetWindowTreeClientPtr =
    mojo::ThreadSafeInterfacePtr<RenderWidgetWindowTreeClient>;
using RenderWidgetWindowTreeClientRequest = mojo::InterfaceRequest<RenderWidgetWindowTreeClient>;
using RenderWidgetWindowTreeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderWidgetWindowTreeClient>;
using ThreadSafeRenderWidgetWindowTreeClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderWidgetWindowTreeClient>;
using RenderWidgetWindowTreeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderWidgetWindowTreeClient>;
using RenderWidgetWindowTreeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderWidgetWindowTreeClient>;

class RenderWidgetWindowTreeClientFactory;
using RenderWidgetWindowTreeClientFactoryPtr = mojo::InterfacePtr<RenderWidgetWindowTreeClientFactory>;
using RenderWidgetWindowTreeClientFactoryPtrInfo = mojo::InterfacePtrInfo<RenderWidgetWindowTreeClientFactory>;
using ThreadSafeRenderWidgetWindowTreeClientFactoryPtr =
    mojo::ThreadSafeInterfacePtr<RenderWidgetWindowTreeClientFactory>;
using RenderWidgetWindowTreeClientFactoryRequest = mojo::InterfaceRequest<RenderWidgetWindowTreeClientFactory>;
using RenderWidgetWindowTreeClientFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderWidgetWindowTreeClientFactory>;
using ThreadSafeRenderWidgetWindowTreeClientFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderWidgetWindowTreeClientFactory>;
using RenderWidgetWindowTreeClientFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderWidgetWindowTreeClientFactory>;
using RenderWidgetWindowTreeClientFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderWidgetWindowTreeClientFactory>;


class RenderWidgetWindowTreeClientProxy;

template <typename ImplRefTraits>
class RenderWidgetWindowTreeClientStub;

class RenderWidgetWindowTreeClientRequestValidator;

class CONTENT_EXPORT RenderWidgetWindowTreeClient
    : public RenderWidgetWindowTreeClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RenderWidgetWindowTreeClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderWidgetWindowTreeClientStub<ImplRefTraits>;

  using RequestValidator_ = RenderWidgetWindowTreeClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kEmbedMinVersion = 0,
    kDestroyFrameMinVersion = 0,
  };
  virtual ~RenderWidgetWindowTreeClient() {}

  virtual void Embed(uint32_t frame_routing_id, const base::UnguessableToken& token) = 0;

  virtual void DestroyFrame(uint32_t frame_routing_id) = 0;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientInterceptorForTesting : public RenderWidgetWindowTreeClient {
  virtual RenderWidgetWindowTreeClient* GetForwardingInterface() = 0;
  void Embed(uint32_t frame_routing_id, const base::UnguessableToken& token) override;
  void DestroyFrame(uint32_t frame_routing_id) override;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientAsyncWaiter {
 public:
  explicit RenderWidgetWindowTreeClientAsyncWaiter(RenderWidgetWindowTreeClient* proxy);
  ~RenderWidgetWindowTreeClientAsyncWaiter();

 private:
  RenderWidgetWindowTreeClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderWidgetWindowTreeClientAsyncWaiter);
};

class RenderWidgetWindowTreeClientFactoryProxy;

template <typename ImplRefTraits>
class RenderWidgetWindowTreeClientFactoryStub;

class RenderWidgetWindowTreeClientFactoryRequestValidator;

class CONTENT_EXPORT RenderWidgetWindowTreeClientFactory
    : public RenderWidgetWindowTreeClientFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RenderWidgetWindowTreeClientFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderWidgetWindowTreeClientFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RenderWidgetWindowTreeClientFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWindowTreeClientForRenderWidgetMinVersion = 0,
  };
  virtual ~RenderWidgetWindowTreeClientFactory() {}

  virtual void CreateWindowTreeClientForRenderWidget(uint32_t render_widget_host_routing_id, ::ui::mojom::WindowTreeClientRequest window_tree_client, RenderWidgetWindowTreeClientRequest render_widget_window_tree_client_request) = 0;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientFactoryInterceptorForTesting : public RenderWidgetWindowTreeClientFactory {
  virtual RenderWidgetWindowTreeClientFactory* GetForwardingInterface() = 0;
  void CreateWindowTreeClientForRenderWidget(uint32_t render_widget_host_routing_id, ::ui::mojom::WindowTreeClientRequest window_tree_client, RenderWidgetWindowTreeClientRequest render_widget_window_tree_client_request) override;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientFactoryAsyncWaiter {
 public:
  explicit RenderWidgetWindowTreeClientFactoryAsyncWaiter(RenderWidgetWindowTreeClientFactory* proxy);
  ~RenderWidgetWindowTreeClientFactoryAsyncWaiter();

 private:
  RenderWidgetWindowTreeClientFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderWidgetWindowTreeClientFactoryAsyncWaiter);
};

class CONTENT_EXPORT RenderWidgetWindowTreeClientProxy
    : public RenderWidgetWindowTreeClient {
 public:
  explicit RenderWidgetWindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Embed(uint32_t frame_routing_id, const base::UnguessableToken& token) final;
  void DestroyFrame(uint32_t frame_routing_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT RenderWidgetWindowTreeClientFactoryProxy
    : public RenderWidgetWindowTreeClientFactory {
 public:
  explicit RenderWidgetWindowTreeClientFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTreeClientForRenderWidget(uint32_t render_widget_host_routing_id, ::ui::mojom::WindowTreeClientRequest window_tree_client, RenderWidgetWindowTreeClientRequest render_widget_window_tree_client_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientStubDispatch {
 public:
  static bool Accept(RenderWidgetWindowTreeClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderWidgetWindowTreeClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderWidgetWindowTreeClient>>
class RenderWidgetWindowTreeClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderWidgetWindowTreeClientStub() {}
  ~RenderWidgetWindowTreeClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderWidgetWindowTreeClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderWidgetWindowTreeClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientFactoryStubDispatch {
 public:
  static bool Accept(RenderWidgetWindowTreeClientFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderWidgetWindowTreeClientFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderWidgetWindowTreeClientFactory>>
class RenderWidgetWindowTreeClientFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderWidgetWindowTreeClientFactoryStub() {}
  ~RenderWidgetWindowTreeClientFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderWidgetWindowTreeClientFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderWidgetWindowTreeClientFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RenderWidgetWindowTreeClientFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_H_
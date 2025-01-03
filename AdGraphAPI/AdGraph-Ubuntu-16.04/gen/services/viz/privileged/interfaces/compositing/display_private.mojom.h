// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_H_

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
#include "services/viz/privileged/interfaces/compositing/display_private.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/mojo/ca_layer_params.mojom.h"
#include "ui/gfx/mojo/color_space.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include "ui/latency/mojo/latency_info.mojom.h"
#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom.h"
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


namespace viz {
namespace mojom {
class DisplayPrivate;
using DisplayPrivatePtr = mojo::InterfacePtr<DisplayPrivate>;
using DisplayPrivatePtrInfo = mojo::InterfacePtrInfo<DisplayPrivate>;
using ThreadSafeDisplayPrivatePtr =
    mojo::ThreadSafeInterfacePtr<DisplayPrivate>;
using DisplayPrivateRequest = mojo::InterfaceRequest<DisplayPrivate>;
using DisplayPrivateAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayPrivate>;
using ThreadSafeDisplayPrivateAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DisplayPrivate>;
using DisplayPrivateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayPrivate>;
using DisplayPrivateAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayPrivate>;

class DisplayClient;
using DisplayClientPtr = mojo::InterfacePtr<DisplayClient>;
using DisplayClientPtrInfo = mojo::InterfacePtrInfo<DisplayClient>;
using ThreadSafeDisplayClientPtr =
    mojo::ThreadSafeInterfacePtr<DisplayClient>;
using DisplayClientRequest = mojo::InterfaceRequest<DisplayClient>;
using DisplayClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayClient>;
using ThreadSafeDisplayClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DisplayClient>;
using DisplayClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayClient>;
using DisplayClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayClient>;


class DisplayPrivateProxy;

template <typename ImplRefTraits>
class DisplayPrivateStub;

class DisplayPrivateRequestValidator;

class  DisplayPrivate
    : public DisplayPrivateInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DisplayPrivateProxy;

  template <typename ImplRefTraits>
  using Stub_ = DisplayPrivateStub<ImplRefTraits>;

  using RequestValidator_ = DisplayPrivateRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetDisplayVisibleMinVersion = 0,
    kSetDisplayColorMatrixMinVersion = 0,
    kSetDisplayColorSpaceMinVersion = 0,
    kSetOutputIsSecureMinVersion = 0,
    kSetAuthoritativeVSyncIntervalMinVersion = 0,
    kSetDisplayVSyncParametersMinVersion = 0,
  };
  virtual ~DisplayPrivate() {}

  virtual void SetDisplayVisible(bool visible) = 0;

  virtual void SetDisplayColorMatrix(const gfx::Transform& color_matrix) = 0;

  virtual void SetDisplayColorSpace(const gfx::ColorSpace& blending_color_space, const gfx::ColorSpace& device_color_space) = 0;

  virtual void SetOutputIsSecure(bool secure) = 0;

  virtual void SetAuthoritativeVSyncInterval(base::TimeDelta interval) = 0;

  virtual void SetDisplayVSyncParameters(base::TimeTicks timebase, base::TimeDelta interval) = 0;
};
class  DisplayPrivateInterceptorForTesting : public DisplayPrivate {
  virtual DisplayPrivate* GetForwardingInterface() = 0;
  void SetDisplayVisible(bool visible) override;
  void SetDisplayColorMatrix(const gfx::Transform& color_matrix) override;
  void SetDisplayColorSpace(const gfx::ColorSpace& blending_color_space, const gfx::ColorSpace& device_color_space) override;
  void SetOutputIsSecure(bool secure) override;
  void SetAuthoritativeVSyncInterval(base::TimeDelta interval) override;
  void SetDisplayVSyncParameters(base::TimeTicks timebase, base::TimeDelta interval) override;
};
class  DisplayPrivateAsyncWaiter {
 public:
  explicit DisplayPrivateAsyncWaiter(DisplayPrivate* proxy);
  ~DisplayPrivateAsyncWaiter();

 private:
  DisplayPrivate* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayPrivateAsyncWaiter);
};

class DisplayClientProxy;

template <typename ImplRefTraits>
class DisplayClientStub;

class DisplayClientRequestValidator;

class  DisplayClient
    : public DisplayClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DisplayClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DisplayClientStub<ImplRefTraits>;

  using RequestValidator_ = DisplayClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDisplayReceivedCALayerParamsMinVersion = 0,
    kDidSwapAfterSnapshotRequestReceivedMinVersion = 0,
    kCreateLayeredWindowUpdaterMinVersion = 0,
  };
  virtual ~DisplayClient() {}

  virtual void OnDisplayReceivedCALayerParams(const gfx::CALayerParams& ca_layer_params) = 0;

  virtual void DidSwapAfterSnapshotRequestReceived(const std::vector<ui::LatencyInfo>& latency_info) = 0;

  virtual void CreateLayeredWindowUpdater(::viz::mojom::LayeredWindowUpdaterRequest layered_window_updater) = 0;
};
class  DisplayClientInterceptorForTesting : public DisplayClient {
  virtual DisplayClient* GetForwardingInterface() = 0;
  void OnDisplayReceivedCALayerParams(const gfx::CALayerParams& ca_layer_params) override;
  void DidSwapAfterSnapshotRequestReceived(const std::vector<ui::LatencyInfo>& latency_info) override;
  void CreateLayeredWindowUpdater(::viz::mojom::LayeredWindowUpdaterRequest layered_window_updater) override;
};
class  DisplayClientAsyncWaiter {
 public:
  explicit DisplayClientAsyncWaiter(DisplayClient* proxy);
  ~DisplayClientAsyncWaiter();

 private:
  DisplayClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayClientAsyncWaiter);
};

class  DisplayPrivateProxy
    : public DisplayPrivate {
 public:
  explicit DisplayPrivateProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetDisplayVisible(bool visible) final;
  void SetDisplayColorMatrix(const gfx::Transform& color_matrix) final;
  void SetDisplayColorSpace(const gfx::ColorSpace& blending_color_space, const gfx::ColorSpace& device_color_space) final;
  void SetOutputIsSecure(bool secure) final;
  void SetAuthoritativeVSyncInterval(base::TimeDelta interval) final;
  void SetDisplayVSyncParameters(base::TimeTicks timebase, base::TimeDelta interval) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  DisplayClientProxy
    : public DisplayClient {
 public:
  explicit DisplayClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplayReceivedCALayerParams(const gfx::CALayerParams& ca_layer_params) final;
  void DidSwapAfterSnapshotRequestReceived(const std::vector<ui::LatencyInfo>& latency_info) final;
  void CreateLayeredWindowUpdater(::viz::mojom::LayeredWindowUpdaterRequest layered_window_updater) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DisplayPrivateStubDispatch {
 public:
  static bool Accept(DisplayPrivate* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DisplayPrivate* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DisplayPrivate>>
class DisplayPrivateStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DisplayPrivateStub() {}
  ~DisplayPrivateStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayPrivateStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayPrivateStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DisplayClientStubDispatch {
 public:
  static bool Accept(DisplayClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DisplayClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DisplayClient>>
class DisplayClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DisplayClientStub() {}
  ~DisplayClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DisplayPrivateRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DisplayClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_H_
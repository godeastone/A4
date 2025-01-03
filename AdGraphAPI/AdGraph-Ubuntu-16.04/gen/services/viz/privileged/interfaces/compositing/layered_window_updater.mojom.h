// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_H_

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
#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom-shared.h"
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


namespace viz {
namespace mojom {
class LayeredWindowUpdater;
using LayeredWindowUpdaterPtr = mojo::InterfacePtr<LayeredWindowUpdater>;
using LayeredWindowUpdaterPtrInfo = mojo::InterfacePtrInfo<LayeredWindowUpdater>;
using ThreadSafeLayeredWindowUpdaterPtr =
    mojo::ThreadSafeInterfacePtr<LayeredWindowUpdater>;
using LayeredWindowUpdaterRequest = mojo::InterfaceRequest<LayeredWindowUpdater>;
using LayeredWindowUpdaterAssociatedPtr =
    mojo::AssociatedInterfacePtr<LayeredWindowUpdater>;
using ThreadSafeLayeredWindowUpdaterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LayeredWindowUpdater>;
using LayeredWindowUpdaterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LayeredWindowUpdater>;
using LayeredWindowUpdaterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LayeredWindowUpdater>;


class LayeredWindowUpdaterProxy;

template <typename ImplRefTraits>
class LayeredWindowUpdaterStub;

class LayeredWindowUpdaterRequestValidator;
class LayeredWindowUpdaterResponseValidator;

class  LayeredWindowUpdater
    : public LayeredWindowUpdaterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LayeredWindowUpdaterProxy;

  template <typename ImplRefTraits>
  using Stub_ = LayeredWindowUpdaterStub<ImplRefTraits>;

  using RequestValidator_ = LayeredWindowUpdaterRequestValidator;
  using ResponseValidator_ = LayeredWindowUpdaterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnAllocatedSharedMemoryMinVersion = 0,
    kDrawMinVersion = 0,
  };
  virtual ~LayeredWindowUpdater() {}

  virtual void OnAllocatedSharedMemory(const gfx::Size& pixel_size, mojo::ScopedSharedBufferHandle scoped_buffer_handle) = 0;


  using DrawCallback = base::OnceCallback<void()>;
  virtual void Draw(DrawCallback callback) = 0;
};
class  LayeredWindowUpdaterInterceptorForTesting : public LayeredWindowUpdater {
  virtual LayeredWindowUpdater* GetForwardingInterface() = 0;
  void OnAllocatedSharedMemory(const gfx::Size& pixel_size, mojo::ScopedSharedBufferHandle scoped_buffer_handle) override;
  void Draw(DrawCallback callback) override;
};
class  LayeredWindowUpdaterAsyncWaiter {
 public:
  explicit LayeredWindowUpdaterAsyncWaiter(LayeredWindowUpdater* proxy);
  ~LayeredWindowUpdaterAsyncWaiter();
  void Draw(
      );

 private:
  LayeredWindowUpdater* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LayeredWindowUpdaterAsyncWaiter);
};

class  LayeredWindowUpdaterProxy
    : public LayeredWindowUpdater {
 public:
  explicit LayeredWindowUpdaterProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAllocatedSharedMemory(const gfx::Size& pixel_size, mojo::ScopedSharedBufferHandle scoped_buffer_handle) final;
  void Draw(DrawCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  LayeredWindowUpdaterStubDispatch {
 public:
  static bool Accept(LayeredWindowUpdater* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LayeredWindowUpdater* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LayeredWindowUpdater>>
class LayeredWindowUpdaterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LayeredWindowUpdaterStub() {}
  ~LayeredWindowUpdaterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LayeredWindowUpdaterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LayeredWindowUpdaterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  LayeredWindowUpdaterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  LayeredWindowUpdaterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_H_
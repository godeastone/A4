// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_H_
#define COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_H_

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
#include "components/arc/common/protected_buffer_manager.mojom-shared.h"
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


namespace arc {
namespace mojom {
class ProtectedBufferManager;
using ProtectedBufferManagerPtr = mojo::InterfacePtr<ProtectedBufferManager>;
using ProtectedBufferManagerPtrInfo = mojo::InterfacePtrInfo<ProtectedBufferManager>;
using ThreadSafeProtectedBufferManagerPtr =
    mojo::ThreadSafeInterfacePtr<ProtectedBufferManager>;
using ProtectedBufferManagerRequest = mojo::InterfaceRequest<ProtectedBufferManager>;
using ProtectedBufferManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProtectedBufferManager>;
using ThreadSafeProtectedBufferManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProtectedBufferManager>;
using ProtectedBufferManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProtectedBufferManager>;
using ProtectedBufferManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProtectedBufferManager>;


class ProtectedBufferManagerProxy;

template <typename ImplRefTraits>
class ProtectedBufferManagerStub;

class ProtectedBufferManagerRequestValidator;
class ProtectedBufferManagerResponseValidator;

class  ProtectedBufferManager
    : public ProtectedBufferManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProtectedBufferManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProtectedBufferManagerStub<ImplRefTraits>;

  using RequestValidator_ = ProtectedBufferManagerRequestValidator;
  using ResponseValidator_ = ProtectedBufferManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetProtectedSharedMemoryFromHandleMinVersion = 0,
  };
  virtual ~ProtectedBufferManager() {}


  using GetProtectedSharedMemoryFromHandleCallback = base::OnceCallback<void(mojo::ScopedHandle)>;
  virtual void GetProtectedSharedMemoryFromHandle(mojo::ScopedHandle dummy_handle, GetProtectedSharedMemoryFromHandleCallback callback) = 0;
};
class  ProtectedBufferManagerInterceptorForTesting : public ProtectedBufferManager {
  virtual ProtectedBufferManager* GetForwardingInterface() = 0;
  void GetProtectedSharedMemoryFromHandle(mojo::ScopedHandle dummy_handle, GetProtectedSharedMemoryFromHandleCallback callback) override;
};
class  ProtectedBufferManagerAsyncWaiter {
 public:
  explicit ProtectedBufferManagerAsyncWaiter(ProtectedBufferManager* proxy);
  ~ProtectedBufferManagerAsyncWaiter();
  void GetProtectedSharedMemoryFromHandle(
      mojo::ScopedHandle dummy_handle, mojo::ScopedHandle* out_shared_memory_handle);

 private:
  ProtectedBufferManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProtectedBufferManagerAsyncWaiter);
};

class  ProtectedBufferManagerProxy
    : public ProtectedBufferManager {
 public:
  explicit ProtectedBufferManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetProtectedSharedMemoryFromHandle(mojo::ScopedHandle dummy_handle, GetProtectedSharedMemoryFromHandleCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProtectedBufferManagerStubDispatch {
 public:
  static bool Accept(ProtectedBufferManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProtectedBufferManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProtectedBufferManager>>
class ProtectedBufferManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProtectedBufferManagerStub() {}
  ~ProtectedBufferManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProtectedBufferManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProtectedBufferManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProtectedBufferManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProtectedBufferManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_H_
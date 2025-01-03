// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/wake_lock.mojom-shared.h"

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


namespace WTF {
struct device_mojom_internal_WakeLockType_DataHashFn {
  static unsigned GetHash(const ::device::mojom::WakeLockType& value) {
    using utype = std::underlying_type<::device::mojom::WakeLockType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::WakeLockType& left, const ::device::mojom::WakeLockType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::WakeLockType> {
  using Hash = device_mojom_internal_WakeLockType_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::WakeLockType>
    : public GenericHashTraits<::device::mojom::WakeLockType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::WakeLockType& value) {
    return value == static_cast<::device::mojom::WakeLockType>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::WakeLockType& slot, bool) {
    slot = static_cast<::device::mojom::WakeLockType>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::WakeLockType& value) {
    return value == static_cast<::device::mojom::WakeLockType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_WakeLockReason_DataHashFn {
  static unsigned GetHash(const ::device::mojom::WakeLockReason& value) {
    using utype = std::underlying_type<::device::mojom::WakeLockReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::WakeLockReason& left, const ::device::mojom::WakeLockReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::WakeLockReason> {
  using Hash = device_mojom_internal_WakeLockReason_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::WakeLockReason>
    : public GenericHashTraits<::device::mojom::WakeLockReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::WakeLockReason& value) {
    return value == static_cast<::device::mojom::WakeLockReason>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::WakeLockReason& slot, bool) {
    slot = static_cast<::device::mojom::WakeLockReason>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::WakeLockReason& value) {
    return value == static_cast<::device::mojom::WakeLockReason>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using WakeLockType = WakeLockType;  // Alias for definition in the parent namespace.
using WakeLockReason = WakeLockReason;  // Alias for definition in the parent namespace.
class WakeLock;
using WakeLockPtr = mojo::InterfacePtr<WakeLock>;
using RevocableWakeLockPtr = ::blink::RevocableInterfacePtr<WakeLock>;
using WakeLockPtrInfo = mojo::InterfacePtrInfo<WakeLock>;
using ThreadSafeWakeLockPtr =
    mojo::ThreadSafeInterfacePtr<WakeLock>;
using WakeLockRequest = mojo::InterfaceRequest<WakeLock>;
using WakeLockAssociatedPtr =
    mojo::AssociatedInterfacePtr<WakeLock>;
using ThreadSafeWakeLockAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WakeLock>;
using WakeLockAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WakeLock>;
using WakeLockAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WakeLock>;


class WakeLockProxy;

template <typename ImplRefTraits>
class WakeLockStub;

class WakeLockRequestValidator;
class WakeLockResponseValidator;

class BLINK_PLATFORM_EXPORT WakeLock
    : public WakeLockInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WakeLockProxy;

  template <typename ImplRefTraits>
  using Stub_ = WakeLockStub<ImplRefTraits>;

  using RequestValidator_ = WakeLockRequestValidator;
  using ResponseValidator_ = WakeLockResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestWakeLockMinVersion = 0,
    kCancelWakeLockMinVersion = 0,
    kAddClientMinVersion = 0,
    kChangeTypeMinVersion = 0,
    kHasWakeLockForTestsMinVersion = 0,
  };
  virtual ~WakeLock() {}

  virtual void RequestWakeLock() = 0;

  virtual void CancelWakeLock() = 0;

  virtual void AddClient(WakeLockRequest wake_lock) = 0;


  using ChangeTypeCallback = base::OnceCallback<void(bool)>;
  virtual void ChangeType(WakeLockType type, ChangeTypeCallback callback) = 0;


  using HasWakeLockForTestsCallback = base::OnceCallback<void(bool)>;
  virtual void HasWakeLockForTests(HasWakeLockForTestsCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT WakeLockInterceptorForTesting : public WakeLock {
  virtual WakeLock* GetForwardingInterface() = 0;
  void RequestWakeLock() override;
  void CancelWakeLock() override;
  void AddClient(WakeLockRequest wake_lock) override;
  void ChangeType(WakeLockType type, ChangeTypeCallback callback) override;
  void HasWakeLockForTests(HasWakeLockForTestsCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WakeLockAsyncWaiter {
 public:
  explicit WakeLockAsyncWaiter(WakeLock* proxy);
  ~WakeLockAsyncWaiter();
  void ChangeType(
      WakeLockType type, bool* out_result);
  void HasWakeLockForTests(
      bool* out_result);

 private:
  WakeLock* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT WakeLockProxy
    : public WakeLock {
 public:
  explicit WakeLockProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestWakeLock() final;
  void CancelWakeLock() final;
  void AddClient(WakeLockRequest wake_lock) final;
  void ChangeType(WakeLockType type, ChangeTypeCallback callback) final;
  void HasWakeLockForTests(HasWakeLockForTestsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT WakeLockStubDispatch {
 public:
  static bool Accept(WakeLock* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WakeLock* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WakeLock>>
class WakeLockStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WakeLockStub() {}
  ~WakeLockStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WakeLockRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WakeLockResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_H_
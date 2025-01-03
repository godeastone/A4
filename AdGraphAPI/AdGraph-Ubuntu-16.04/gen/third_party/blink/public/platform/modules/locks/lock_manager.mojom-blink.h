// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/locks/lock_manager.mojom-shared.h"

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
struct blink_mojom_internal_LockMode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::LockMode& value) {
    using utype = std::underlying_type<::blink::mojom::LockMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::LockMode& left, const ::blink::mojom::LockMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::LockMode> {
  using Hash = blink_mojom_internal_LockMode_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::LockMode>
    : public GenericHashTraits<::blink::mojom::LockMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::LockMode& value) {
    return value == static_cast<::blink::mojom::LockMode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::LockMode& slot, bool) {
    slot = static_cast<::blink::mojom::LockMode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::LockMode& value) {
    return value == static_cast<::blink::mojom::LockMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_LockManager_WaitMode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::LockManager_WaitMode& value) {
    using utype = std::underlying_type<::blink::mojom::LockManager_WaitMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::LockManager_WaitMode& left, const ::blink::mojom::LockManager_WaitMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::LockManager_WaitMode> {
  using Hash = blink_mojom_internal_LockManager_WaitMode_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::LockManager_WaitMode>
    : public GenericHashTraits<::blink::mojom::LockManager_WaitMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::LockManager_WaitMode& value) {
    return value == static_cast<::blink::mojom::LockManager_WaitMode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::LockManager_WaitMode& slot, bool) {
    slot = static_cast<::blink::mojom::LockManager_WaitMode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::LockManager_WaitMode& value) {
    return value == static_cast<::blink::mojom::LockManager_WaitMode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using LockMode = LockMode;  // Alias for definition in the parent namespace.
class LockHandle;
using LockHandlePtr = mojo::InterfacePtr<LockHandle>;
using RevocableLockHandlePtr = ::blink::RevocableInterfacePtr<LockHandle>;
using LockHandlePtrInfo = mojo::InterfacePtrInfo<LockHandle>;
using ThreadSafeLockHandlePtr =
    mojo::ThreadSafeInterfacePtr<LockHandle>;
using LockHandleRequest = mojo::InterfaceRequest<LockHandle>;
using LockHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockHandle>;
using ThreadSafeLockHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockHandle>;
using LockHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockHandle>;
using LockHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockHandle>;

class LockRequest;
using LockRequestPtr = mojo::InterfacePtr<LockRequest>;
using RevocableLockRequestPtr = ::blink::RevocableInterfacePtr<LockRequest>;
using LockRequestPtrInfo = mojo::InterfacePtrInfo<LockRequest>;
using ThreadSafeLockRequestPtr =
    mojo::ThreadSafeInterfacePtr<LockRequest>;
using LockRequestRequest = mojo::InterfaceRequest<LockRequest>;
using LockRequestAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockRequest>;
using ThreadSafeLockRequestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockRequest>;
using LockRequestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockRequest>;
using LockRequestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockRequest>;

class LockManager;
using LockManagerPtr = mojo::InterfacePtr<LockManager>;
using RevocableLockManagerPtr = ::blink::RevocableInterfacePtr<LockManager>;
using LockManagerPtrInfo = mojo::InterfacePtrInfo<LockManager>;
using ThreadSafeLockManagerPtr =
    mojo::ThreadSafeInterfacePtr<LockManager>;
using LockManagerRequest = mojo::InterfaceRequest<LockManager>;
using LockManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockManager>;
using ThreadSafeLockManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockManager>;
using LockManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockManager>;
using LockManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockManager>;

class LockInfo;
using LockInfoPtr = mojo::InlinedStructPtr<LockInfo>;


class LockHandleProxy;

template <typename ImplRefTraits>
class LockHandleStub;

class LockHandleRequestValidator;

class BLINK_PLATFORM_EXPORT LockHandle
    : public LockHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LockHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockHandleStub<ImplRefTraits>;

  using RequestValidator_ = LockHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~LockHandle() {}
};
class BLINK_PLATFORM_EXPORT LockHandleInterceptorForTesting : public LockHandle {
  virtual LockHandle* GetForwardingInterface() = 0;
};
class BLINK_PLATFORM_EXPORT LockHandleAsyncWaiter {
 public:
  explicit LockHandleAsyncWaiter(LockHandle* proxy);
  ~LockHandleAsyncWaiter();

 private:
  LockHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockHandleAsyncWaiter);
};

class LockRequestProxy;

template <typename ImplRefTraits>
class LockRequestStub;

class LockRequestRequestValidator;

class BLINK_PLATFORM_EXPORT LockRequest
    : public LockRequestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LockRequestProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockRequestStub<ImplRefTraits>;

  using RequestValidator_ = LockRequestRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGrantedMinVersion = 0,
    kFailedMinVersion = 0,
    kAbortMinVersion = 0,
  };
  virtual ~LockRequest() {}

  virtual void Granted(LockHandlePtr lock_handle) = 0;

  virtual void Failed() = 0;

  virtual void Abort(const WTF::String& reason) = 0;
};
class BLINK_PLATFORM_EXPORT LockRequestInterceptorForTesting : public LockRequest {
  virtual LockRequest* GetForwardingInterface() = 0;
  void Granted(LockHandlePtr lock_handle) override;
  void Failed() override;
  void Abort(const WTF::String& reason) override;
};
class BLINK_PLATFORM_EXPORT LockRequestAsyncWaiter {
 public:
  explicit LockRequestAsyncWaiter(LockRequest* proxy);
  ~LockRequestAsyncWaiter();

 private:
  LockRequest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockRequestAsyncWaiter);
};

class LockManagerProxy;

template <typename ImplRefTraits>
class LockManagerStub;

class LockManagerRequestValidator;
class LockManagerResponseValidator;

class BLINK_PLATFORM_EXPORT LockManager
    : public LockManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LockManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockManagerStub<ImplRefTraits>;

  using RequestValidator_ = LockManagerRequestValidator;
  using ResponseValidator_ = LockManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestLockMinVersion = 0,
    kQueryStateMinVersion = 0,
  };
  using WaitMode = LockManager_WaitMode;
  virtual ~LockManager() {}

  virtual void RequestLock(const WTF::String& name, LockMode mode, LockManager::WaitMode wait, LockRequestPtr request) = 0;


  using QueryStateCallback = base::OnceCallback<void(WTF::Vector<LockInfoPtr>, WTF::Vector<LockInfoPtr>)>;
  virtual void QueryState(QueryStateCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT LockManagerInterceptorForTesting : public LockManager {
  virtual LockManager* GetForwardingInterface() = 0;
  void RequestLock(const WTF::String& name, LockMode mode, LockManager::WaitMode wait, LockRequestPtr request) override;
  void QueryState(QueryStateCallback callback) override;
};
class BLINK_PLATFORM_EXPORT LockManagerAsyncWaiter {
 public:
  explicit LockManagerAsyncWaiter(LockManager* proxy);
  ~LockManagerAsyncWaiter();
  void QueryState(
      WTF::Vector<LockInfoPtr>* out_requested, WTF::Vector<LockInfoPtr>* out_held);

 private:
  LockManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockManagerAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT LockHandleProxy
    : public LockHandle {
 public:
  explicit LockHandleProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT LockRequestProxy
    : public LockRequest {
 public:
  explicit LockRequestProxy(mojo::MessageReceiverWithResponder* receiver);
  void Granted(LockHandlePtr lock_handle) final;
  void Failed() final;
  void Abort(const WTF::String& reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT LockManagerProxy
    : public LockManager {
 public:
  explicit LockManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestLock(const WTF::String& name, LockMode mode, LockManager::WaitMode wait, LockRequestPtr request) final;
  void QueryState(QueryStateCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT LockHandleStubDispatch {
 public:
  static bool Accept(LockHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockHandle>>
class LockHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockHandleStub() {}
  ~LockHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT LockRequestStubDispatch {
 public:
  static bool Accept(LockRequest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockRequest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockRequest>>
class LockRequestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockRequestStub() {}
  ~LockRequestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockRequestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockRequestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT LockManagerStubDispatch {
 public:
  static bool Accept(LockManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockManager>>
class LockManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockManagerStub() {}
  ~LockManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT LockHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT LockRequestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT LockManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT LockManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class BLINK_PLATFORM_EXPORT LockInfo {
 public:
  using DataView = LockInfoDataView;
  using Data_ = internal::LockInfo_Data;

  template <typename... Args>
  static LockInfoPtr New(Args&&... args) {
    return LockInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LockInfoPtr From(const U& u) {
    return mojo::TypeConverter<LockInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LockInfo>::Convert(*this);
  }


  LockInfo();

  LockInfo(
      const WTF::String& name,
      LockMode mode,
      const WTF::String& client_id);

  ~LockInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LockInfoPtr>
  LockInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LockInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LockInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LockInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LockInfo_UnserializedMessageContext<
            UserType, LockInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LockInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return LockInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LockInfo_UnserializedMessageContext<
            UserType, LockInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LockInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String name;
  LockMode mode;
  WTF::String client_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
LockInfoPtr LockInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(mode),
      mojo::Clone(client_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LockInfo>::value>::type*>
bool LockInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::LockInfo::DataView,
                                         ::blink::mojom::blink::LockInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::LockInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::LockInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::LockInfo::name)& name(
      const ::blink::mojom::blink::LockInfoPtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::blink::LockInfo::mode) mode(
      const ::blink::mojom::blink::LockInfoPtr& input) {
    return input->mode;
  }

  static const decltype(::blink::mojom::blink::LockInfo::client_id)& client_id(
      const ::blink::mojom::blink::LockInfoPtr& input) {
    return input->client_id;
  }

  static bool Read(::blink::mojom::blink::LockInfo::DataView input, ::blink::mojom::blink::LockInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_BLINK_H_
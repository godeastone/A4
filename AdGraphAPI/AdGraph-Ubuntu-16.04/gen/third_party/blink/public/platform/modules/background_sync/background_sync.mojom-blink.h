// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/background_sync/background_sync.mojom-shared.h"

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
struct blink_mojom_internal_BackgroundSyncNetworkState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncNetworkState& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncNetworkState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncNetworkState& left, const ::blink::mojom::BackgroundSyncNetworkState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncNetworkState> {
  using Hash = blink_mojom_internal_BackgroundSyncNetworkState_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncNetworkState>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncNetworkState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncNetworkState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncNetworkState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncNetworkState& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncNetworkState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncNetworkState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncNetworkState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncError& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncError& left, const ::blink::mojom::BackgroundSyncError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncError> {
  using Hash = blink_mojom_internal_BackgroundSyncError_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncError>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncError& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncError& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncError& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncState& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncState& left, const ::blink::mojom::BackgroundSyncState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncState> {
  using Hash = blink_mojom_internal_BackgroundSyncState_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncState>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncState& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncEventLastChance>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncEventLastChance& left, const ::blink::mojom::BackgroundSyncEventLastChance& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncEventLastChance> {
  using Hash = blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncEventLastChance>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncEventLastChance> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncEventLastChance& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using BackgroundSyncNetworkState = BackgroundSyncNetworkState;  // Alias for definition in the parent namespace.
using BackgroundSyncError = BackgroundSyncError;  // Alias for definition in the parent namespace.
using BackgroundSyncState = BackgroundSyncState;  // Alias for definition in the parent namespace.
using BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;  // Alias for definition in the parent namespace.
class BackgroundSyncService;
using BackgroundSyncServicePtr = mojo::InterfacePtr<BackgroundSyncService>;
using RevocableBackgroundSyncServicePtr = ::blink::RevocableInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServicePtrInfo = mojo::InterfacePtrInfo<BackgroundSyncService>;
using ThreadSafeBackgroundSyncServicePtr =
    mojo::ThreadSafeInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceRequest = mojo::InterfaceRequest<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncService>;
using ThreadSafeBackgroundSyncServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundSyncService>;

class SyncRegistration;
using SyncRegistrationPtr = mojo::InlinedStructPtr<SyncRegistration>;


class BackgroundSyncServiceProxy;

template <typename ImplRefTraits>
class BackgroundSyncServiceStub;

class BackgroundSyncServiceRequestValidator;
class BackgroundSyncServiceResponseValidator;

class BLINK_PLATFORM_EXPORT BackgroundSyncService
    : public BackgroundSyncServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BackgroundSyncServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundSyncServiceStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
  };
  virtual ~BackgroundSyncService() {}


  using RegisterCallback = base::OnceCallback<void(BackgroundSyncError, SyncRegistrationPtr)>;
  virtual void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(BackgroundSyncError, WTF::Vector<SyncRegistrationPtr>)>;
  virtual void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceInterceptorForTesting : public BackgroundSyncService {
  virtual BackgroundSyncService* GetForwardingInterface() = 0;
  void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) override;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) override;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceAsyncWaiter {
 public:
  explicit BackgroundSyncServiceAsyncWaiter(BackgroundSyncService* proxy);
  ~BackgroundSyncServiceAsyncWaiter();
  void Register(
      SyncRegistrationPtr options, int64_t service_worker_registration_id, BackgroundSyncError* out_err, SyncRegistrationPtr* out_options);
  void GetRegistrations(
      int64_t service_worker_registration_id, BackgroundSyncError* out_err, WTF::Vector<SyncRegistrationPtr>* out_registrations);

 private:
  BackgroundSyncService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT BackgroundSyncServiceProxy
    : public BackgroundSyncService {
 public:
  explicit BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) final;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceStubDispatch {
 public:
  static bool Accept(BackgroundSyncService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundSyncService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundSyncService>>
class BackgroundSyncServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundSyncServiceStub() {}
  ~BackgroundSyncServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundSyncServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundSyncServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class BLINK_PLATFORM_EXPORT SyncRegistration {
 public:
  using DataView = SyncRegistrationDataView;
  using Data_ = internal::SyncRegistration_Data;

  template <typename... Args>
  static SyncRegistrationPtr New(Args&&... args) {
    return SyncRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SyncRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<SyncRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncRegistration>::Convert(*this);
  }


  SyncRegistration();

  SyncRegistration(
      int64_t id,
      const WTF::String& tag,
      BackgroundSyncNetworkState network_state);

  ~SyncRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncRegistrationPtr>
  SyncRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SyncRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SyncRegistration::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SyncRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SyncRegistration_UnserializedMessageContext<
            UserType, SyncRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SyncRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SyncRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SyncRegistration_UnserializedMessageContext<
            UserType, SyncRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SyncRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  WTF::String tag;
  BackgroundSyncNetworkState network_state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SyncRegistrationPtr SyncRegistration::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(tag),
      mojo::Clone(network_state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SyncRegistration>::value>::type*>
bool SyncRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->network_state, other_struct.network_state))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SyncRegistration::DataView,
                                         ::blink::mojom::blink::SyncRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::blink::SyncRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SyncRegistrationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::SyncRegistration::id) id(
      const ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::SyncRegistration::tag)& tag(
      const ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::blink::SyncRegistration::network_state) network_state(
      const ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->network_state;
  }

  static bool Read(::blink::mojom::blink::SyncRegistration::DataView input, ::blink::mojom::blink::SyncRegistrationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
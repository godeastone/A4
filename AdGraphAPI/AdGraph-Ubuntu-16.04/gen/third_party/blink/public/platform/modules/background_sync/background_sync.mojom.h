// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_H_

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


namespace blink {
namespace mojom {
class BackgroundSyncService;
using BackgroundSyncServicePtr = mojo::InterfacePtr<BackgroundSyncService>;
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

class CONTENT_EXPORT BackgroundSyncService
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


  using GetRegistrationsCallback = base::OnceCallback<void(BackgroundSyncError, std::vector<SyncRegistrationPtr>)>;
  virtual void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) = 0;
};
class CONTENT_EXPORT BackgroundSyncServiceInterceptorForTesting : public BackgroundSyncService {
  virtual BackgroundSyncService* GetForwardingInterface() = 0;
  void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) override;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) override;
};
class CONTENT_EXPORT BackgroundSyncServiceAsyncWaiter {
 public:
  explicit BackgroundSyncServiceAsyncWaiter(BackgroundSyncService* proxy);
  ~BackgroundSyncServiceAsyncWaiter();
  void Register(
      SyncRegistrationPtr options, int64_t service_worker_registration_id, BackgroundSyncError* out_err, SyncRegistrationPtr* out_options);
  void GetRegistrations(
      int64_t service_worker_registration_id, BackgroundSyncError* out_err, std::vector<SyncRegistrationPtr>* out_registrations);

 private:
  BackgroundSyncService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceAsyncWaiter);
};

class CONTENT_EXPORT BackgroundSyncServiceProxy
    : public BackgroundSyncService {
 public:
  explicit BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, RegisterCallback callback) final;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT BackgroundSyncServiceStubDispatch {
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
class CONTENT_EXPORT BackgroundSyncServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT BackgroundSyncServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT SyncRegistration {
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
      const std::string& tag,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SyncRegistration::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  std::string tag;
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::SyncRegistration::DataView,
                                         ::blink::mojom::SyncRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::SyncRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SyncRegistrationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::SyncRegistration::id) id(
      const ::blink::mojom::SyncRegistrationPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::SyncRegistration::tag)& tag(
      const ::blink::mojom::SyncRegistrationPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::SyncRegistration::network_state) network_state(
      const ::blink::mojom::SyncRegistrationPtr& input) {
    return input->network_state;
  }

  static bool Read(::blink::mojom::SyncRegistration::DataView input, ::blink::mojom::SyncRegistrationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_H_
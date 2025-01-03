// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PUSH_MESSAGING_MOJOM_H_
#define CONTENT_COMMON_PUSH_MESSAGING_MOJOM_H_

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
#include "content/common/push_messaging.mojom-shared.h"
#include "content/public/common/push_messaging_status.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "content/public/common/push_subscription_options.h"
#include "third_party/blink/public/platform/modules/push_messaging/web_push_error.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class PushMessaging;
using PushMessagingPtr = mojo::InterfacePtr<PushMessaging>;
using PushMessagingPtrInfo = mojo::InterfacePtrInfo<PushMessaging>;
using ThreadSafePushMessagingPtr =
    mojo::ThreadSafeInterfacePtr<PushMessaging>;
using PushMessagingRequest = mojo::InterfaceRequest<PushMessaging>;
using PushMessagingAssociatedPtr =
    mojo::AssociatedInterfacePtr<PushMessaging>;
using ThreadSafePushMessagingAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PushMessaging>;
using PushMessagingAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PushMessaging>;
using PushMessagingAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PushMessaging>;

class PushSubscriptionOptions;
using PushSubscriptionOptionsPtr = mojo::InlinedStructPtr<PushSubscriptionOptions>;


class PushMessagingProxy;

template <typename ImplRefTraits>
class PushMessagingStub;

class PushMessagingRequestValidator;
class PushMessagingResponseValidator;

class CONTENT_EXPORT PushMessaging
    : public PushMessagingInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PushMessagingProxy;

  template <typename ImplRefTraits>
  using Stub_ = PushMessagingStub<ImplRefTraits>;

  using RequestValidator_ = PushMessagingRequestValidator;
  using ResponseValidator_ = PushMessagingResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSubscribeMinVersion = 0,
    kUnsubscribeMinVersion = 0,
    kGetSubscriptionMinVersion = 0,
  };
  virtual ~PushMessaging() {}


  using SubscribeCallback = base::OnceCallback<void(::content::mojom::PushRegistrationStatus, const base::Optional<GURL>&, const base::Optional<content::PushSubscriptionOptions>&, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, const content::PushSubscriptionOptions& options, bool user_gesture, SubscribeCallback callback) = 0;


  using UnsubscribeCallback = base::OnceCallback<void(blink::WebPushError::ErrorType, bool, const base::Optional<std::string>&)>;
  virtual void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) = 0;


  using GetSubscriptionCallback = base::OnceCallback<void(::content::mojom::PushGetRegistrationStatus, const base::Optional<GURL>&, const base::Optional<content::PushSubscriptionOptions>&, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) = 0;
};
class CONTENT_EXPORT PushMessagingInterceptorForTesting : public PushMessaging {
  virtual PushMessaging* GetForwardingInterface() = 0;
  void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, const content::PushSubscriptionOptions& options, bool user_gesture, SubscribeCallback callback) override;
  void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) override;
  void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) override;
};
class CONTENT_EXPORT PushMessagingAsyncWaiter {
 public:
  explicit PushMessagingAsyncWaiter(PushMessaging* proxy);
  ~PushMessagingAsyncWaiter();
  void Subscribe(
      int32_t render_frame_id, int64_t service_worker_registration_id, const content::PushSubscriptionOptions& options, bool user_gesture, ::content::mojom::PushRegistrationStatus* out_status, base::Optional<GURL>* out_endpoint, base::Optional<content::PushSubscriptionOptions>* out_options, base::Optional<std::vector<uint8_t>>* out_p256dh, base::Optional<std::vector<uint8_t>>* out_auth);
  void Unsubscribe(
      int64_t service_worker_registration_id, blink::WebPushError::ErrorType* out_error_type, bool* out_did_unsubscribe, base::Optional<std::string>* out_error_message);
  void GetSubscription(
      int64_t service_worker_registration_id, ::content::mojom::PushGetRegistrationStatus* out_status, base::Optional<GURL>* out_endpoint, base::Optional<content::PushSubscriptionOptions>* out_options, base::Optional<std::vector<uint8_t>>* out_p256dh, base::Optional<std::vector<uint8_t>>* out_auth);

 private:
  PushMessaging* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PushMessagingAsyncWaiter);
};

class CONTENT_EXPORT PushMessagingProxy
    : public PushMessaging {
 public:
  explicit PushMessagingProxy(mojo::MessageReceiverWithResponder* receiver);
  void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, const content::PushSubscriptionOptions& options, bool user_gesture, SubscribeCallback callback) final;
  void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) final;
  void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT PushMessagingStubDispatch {
 public:
  static bool Accept(PushMessaging* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PushMessaging* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PushMessaging>>
class PushMessagingStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PushMessagingStub() {}
  ~PushMessagingStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PushMessagingStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PushMessagingStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT PushMessagingRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT PushMessagingResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT PushSubscriptionOptions {
 public:
  using DataView = PushSubscriptionOptionsDataView;
  using Data_ = internal::PushSubscriptionOptions_Data;

  template <typename... Args>
  static PushSubscriptionOptionsPtr New(Args&&... args) {
    return PushSubscriptionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PushSubscriptionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PushSubscriptionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PushSubscriptionOptions>::Convert(*this);
  }


  PushSubscriptionOptions();

  PushSubscriptionOptions(
      bool user_visible_only,
      const std::string& sender_info);

  ~PushSubscriptionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PushSubscriptionOptionsPtr>
  PushSubscriptionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PushSubscriptionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PushSubscriptionOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PushSubscriptionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PushSubscriptionOptions_UnserializedMessageContext<
            UserType, PushSubscriptionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PushSubscriptionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PushSubscriptionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PushSubscriptionOptions_UnserializedMessageContext<
            UserType, PushSubscriptionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PushSubscriptionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool user_visible_only;
  std::string sender_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
PushSubscriptionOptionsPtr PushSubscriptionOptions::Clone() const {
  return New(
      mojo::Clone(user_visible_only),
      mojo::Clone(sender_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PushSubscriptionOptions>::value>::type*>
bool PushSubscriptionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->user_visible_only, other_struct.user_visible_only))
    return false;
  if (!mojo::Equals(this->sender_info, other_struct.sender_info))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::PushSubscriptionOptions::DataView,
                                         ::content::mojom::PushSubscriptionOptionsPtr> {
  static bool IsNull(const ::content::mojom::PushSubscriptionOptionsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::PushSubscriptionOptionsPtr* output) { output->reset(); }

  static decltype(::content::mojom::PushSubscriptionOptions::user_visible_only) user_visible_only(
      const ::content::mojom::PushSubscriptionOptionsPtr& input) {
    return input->user_visible_only;
  }

  static const decltype(::content::mojom::PushSubscriptionOptions::sender_info)& sender_info(
      const ::content::mojom::PushSubscriptionOptionsPtr& input) {
    return input->sender_info;
  }

  static bool Read(::content::mojom::PushSubscriptionOptions::DataView input, ::content::mojom::PushSubscriptionOptionsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_PUSH_MESSAGING_MOJOM_H_
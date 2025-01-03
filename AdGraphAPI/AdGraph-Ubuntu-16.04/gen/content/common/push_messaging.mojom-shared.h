// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_H_
#define CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/common/push_messaging.mojom-shared-internal.h"
#include "content/public/common/push_messaging_status.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class PushSubscriptionOptionsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::PushSubscriptionOptionsDataView> {
  using Data = ::content::mojom::internal::PushSubscriptionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class PushErrorType : int32_t {
  ABORT = 0,
  NETWORK = 1,
  NONE = 2,
  NOT_ALLOWED = 3,
  NOT_FOUND = 4,
  NOT_SUPPORTED = 5,
  INVALID_STATE = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, PushErrorType value) {
  switch(value) {
    case PushErrorType::ABORT:
      return os << "PushErrorType::ABORT";
    case PushErrorType::NETWORK:
      return os << "PushErrorType::NETWORK";
    case PushErrorType::NONE:
      return os << "PushErrorType::NONE";
    case PushErrorType::NOT_ALLOWED:
      return os << "PushErrorType::NOT_ALLOWED";
    case PushErrorType::NOT_FOUND:
      return os << "PushErrorType::NOT_FOUND";
    case PushErrorType::NOT_SUPPORTED:
      return os << "PushErrorType::NOT_SUPPORTED";
    case PushErrorType::INVALID_STATE:
      return os << "PushErrorType::INVALID_STATE";
    default:
      return os << "Unknown PushErrorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushErrorType value) {
  return internal::PushErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PushMessagingInterfaceBase {};

using PushMessagingPtrDataView =
    mojo::InterfacePtrDataView<PushMessagingInterfaceBase>;
using PushMessagingRequestDataView =
    mojo::InterfaceRequestDataView<PushMessagingInterfaceBase>;
using PushMessagingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PushMessagingInterfaceBase>;
using PushMessagingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PushMessagingInterfaceBase>;
class PushSubscriptionOptionsDataView {
 public:
  PushSubscriptionOptionsDataView() {}

  PushSubscriptionOptionsDataView(
      internal::PushSubscriptionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool user_visible_only() const {
    return data_->user_visible_only;
  }
  inline void GetSenderInfoDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSenderInfo(UserType* output) {
    auto* pointer = data_->sender_info.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PushSubscriptionOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_Subscribe_ParamsDataView {
 public:
  PushMessaging_Subscribe_ParamsDataView() {}

  PushMessaging_Subscribe_ParamsDataView(
      internal::PushMessaging_Subscribe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::content::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PushMessaging_Subscribe_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_Subscribe_ResponseParamsDataView {
 public:
  PushMessaging_Subscribe_ResponseParamsDataView() {}

  PushMessaging_Subscribe_ResponseParamsDataView(
      internal::PushMessaging_Subscribe_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::PushRegistrationStatus>(
        data_value, output);
  }

  ::content::mojom::PushRegistrationStatus status() const {
    return static_cast<::content::mojom::PushRegistrationStatus>(data_->status);
  }
  inline void GetEndpointDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoint(UserType* output) {
    auto* pointer = data_->endpoint.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::content::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetP256dhDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadP256dh(UserType* output) {
    auto* pointer = data_->p256dh.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuth(UserType* output) {
    auto* pointer = data_->auth.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_Subscribe_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_Unsubscribe_ParamsDataView {
 public:
  PushMessaging_Unsubscribe_ParamsDataView() {}

  PushMessaging_Unsubscribe_ParamsDataView(
      internal::PushMessaging_Unsubscribe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::PushMessaging_Unsubscribe_Params_Data* data_ = nullptr;
};

class PushMessaging_Unsubscribe_ResponseParamsDataView {
 public:
  PushMessaging_Unsubscribe_ResponseParamsDataView() {}

  PushMessaging_Unsubscribe_ResponseParamsDataView(
      internal::PushMessaging_Unsubscribe_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::content::mojom::PushErrorType>(
        data_value, output);
  }

  PushErrorType error_type() const {
    return static_cast<PushErrorType>(data_->error_type);
  }
  bool did_unsubscribe() const {
    return data_->did_unsubscribe;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_Unsubscribe_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_GetSubscription_ParamsDataView {
 public:
  PushMessaging_GetSubscription_ParamsDataView() {}

  PushMessaging_GetSubscription_ParamsDataView(
      internal::PushMessaging_GetSubscription_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::PushMessaging_GetSubscription_Params_Data* data_ = nullptr;
};

class PushMessaging_GetSubscription_ResponseParamsDataView {
 public:
  PushMessaging_GetSubscription_ResponseParamsDataView() {}

  PushMessaging_GetSubscription_ResponseParamsDataView(
      internal::PushMessaging_GetSubscription_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::PushGetRegistrationStatus>(
        data_value, output);
  }

  ::content::mojom::PushGetRegistrationStatus status() const {
    return static_cast<::content::mojom::PushGetRegistrationStatus>(data_->status);
  }
  inline void GetEndpointDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoint(UserType* output) {
    auto* pointer = data_->endpoint.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::content::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetP256dhDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadP256dh(UserType* output) {
    auto* pointer = data_->p256dh.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuth(UserType* output) {
    auto* pointer = data_->auth.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_GetSubscription_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::PushErrorType>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushErrorType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::PushErrorType, ::content::mojom::PushErrorType> {
  static ::content::mojom::PushErrorType ToMojom(::content::mojom::PushErrorType input) { return input; }
  static bool FromMojom(::content::mojom::PushErrorType input, ::content::mojom::PushErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushErrorType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushSubscriptionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::PushSubscriptionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::PushSubscriptionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->user_visible_only = CallWithContext(Traits::user_visible_only, input, custom_context);
    decltype(CallWithContext(Traits::sender_info, input, custom_context)) in_sender_info = CallWithContext(Traits::sender_info, input, custom_context);
    typename decltype((*output)->sender_info)::BaseType::BufferWriter
        sender_info_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sender_info, buffer, &sender_info_writer, context);
    (*output)->sender_info.Set(
        sender_info_writer.is_null() ? nullptr : sender_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sender_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sender_info in PushSubscriptionOptions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::PushSubscriptionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::PushSubscriptionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void PushSubscriptionOptionsDataView::GetSenderInfoDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sender_info.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PushMessaging_Subscribe_ParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}


inline void PushMessaging_Subscribe_ResponseParamsDataView::GetEndpointDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->endpoint.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetP256dhDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->p256dh.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetAuthDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->auth.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void PushMessaging_Unsubscribe_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetEndpointDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->endpoint.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetP256dhDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->p256dh.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetAuthDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->auth.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_H_

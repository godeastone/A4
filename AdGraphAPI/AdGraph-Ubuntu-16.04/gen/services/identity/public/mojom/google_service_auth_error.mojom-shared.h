// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/google_service_auth_error.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class CaptchaDataView;

class SecondFactorDataView;

class GoogleServiceAuthErrorDataView;



}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::identity::mojom::CaptchaDataView> {
  using Data = ::identity::mojom::internal::Captcha_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::identity::mojom::SecondFactorDataView> {
  using Data = ::identity::mojom::internal::SecondFactor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::identity::mojom::GoogleServiceAuthErrorDataView> {
  using Data = ::identity::mojom::internal::GoogleServiceAuthError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
class CaptchaDataView {
 public:
  CaptchaDataView() {}

  CaptchaDataView(
      internal::Captcha_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAudioUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioUrl(UserType* output) {
    auto* pointer = data_->audio_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetImageUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageUrl(UserType* output) {
    auto* pointer = data_->image_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetUnlockUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnlockUrl(UserType* output) {
    auto* pointer = data_->unlock_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t image_width() const {
    return data_->image_width;
  }
  int32_t image_height() const {
    return data_->image_height;
  }
 private:
  internal::Captcha_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SecondFactorDataView {
 public:
  SecondFactorDataView() {}

  SecondFactorDataView(
      internal::SecondFactor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPromptTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPromptText(UserType* output) {
    auto* pointer = data_->prompt_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAlternateTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlternateText(UserType* output) {
    auto* pointer = data_->alternate_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t field_length() const {
    return data_->field_length;
  }
 private:
  internal::SecondFactor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GoogleServiceAuthErrorDataView {
 public:
  GoogleServiceAuthErrorDataView() {}

  GoogleServiceAuthErrorDataView(
      internal::GoogleServiceAuthError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t state() const {
    return data_->state;
  }
  inline void GetCaptchaDataView(
      CaptchaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptcha(UserType* output) {
    auto* pointer = data_->captcha.Get();
    return mojo::internal::Deserialize<::identity::mojom::CaptchaDataView>(
        pointer, output, context_);
  }
  inline void GetSecondFactorDataView(
      SecondFactorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecondFactor(UserType* output) {
    auto* pointer = data_->second_factor.Get();
    return mojo::internal::Deserialize<::identity::mojom::SecondFactorDataView>(
        pointer, output, context_);
  }
  int32_t network_error() const {
    return data_->network_error;
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
  internal::GoogleServiceAuthError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::CaptchaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::CaptchaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::Captcha_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::token, input, custom_context)) in_token = CallWithContext(Traits::token, input, custom_context);
    typename decltype((*output)->token)::BaseType::BufferWriter
        token_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_token, buffer, &token_writer, context);
    (*output)->token.Set(
        token_writer.is_null() ? nullptr : token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in Captcha struct");
    decltype(CallWithContext(Traits::audio_url, input, custom_context)) in_audio_url = CallWithContext(Traits::audio_url, input, custom_context);
    typename decltype((*output)->audio_url)::BaseType::BufferWriter
        audio_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_audio_url, buffer, &audio_url_writer, context);
    (*output)->audio_url.Set(
        audio_url_writer.is_null() ? nullptr : audio_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->audio_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null audio_url in Captcha struct");
    decltype(CallWithContext(Traits::image_url, input, custom_context)) in_image_url = CallWithContext(Traits::image_url, input, custom_context);
    typename decltype((*output)->image_url)::BaseType::BufferWriter
        image_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_image_url, buffer, &image_url_writer, context);
    (*output)->image_url.Set(
        image_url_writer.is_null() ? nullptr : image_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_url in Captcha struct");
    decltype(CallWithContext(Traits::unlock_url, input, custom_context)) in_unlock_url = CallWithContext(Traits::unlock_url, input, custom_context);
    typename decltype((*output)->unlock_url)::BaseType::BufferWriter
        unlock_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_unlock_url, buffer, &unlock_url_writer, context);
    (*output)->unlock_url.Set(
        unlock_url_writer.is_null() ? nullptr : unlock_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->unlock_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null unlock_url in Captcha struct");
    (*output)->image_width = CallWithContext(Traits::image_width, input, custom_context);
    (*output)->image_height = CallWithContext(Traits::image_height, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::Captcha_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::CaptchaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::SecondFactorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::SecondFactorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::SecondFactor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::token, input, custom_context)) in_token = CallWithContext(Traits::token, input, custom_context);
    typename decltype((*output)->token)::BaseType::BufferWriter
        token_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_token, buffer, &token_writer, context);
    (*output)->token.Set(
        token_writer.is_null() ? nullptr : token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in SecondFactor struct");
    decltype(CallWithContext(Traits::prompt_text, input, custom_context)) in_prompt_text = CallWithContext(Traits::prompt_text, input, custom_context);
    typename decltype((*output)->prompt_text)::BaseType::BufferWriter
        prompt_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_prompt_text, buffer, &prompt_text_writer, context);
    (*output)->prompt_text.Set(
        prompt_text_writer.is_null() ? nullptr : prompt_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->prompt_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null prompt_text in SecondFactor struct");
    decltype(CallWithContext(Traits::alternate_text, input, custom_context)) in_alternate_text = CallWithContext(Traits::alternate_text, input, custom_context);
    typename decltype((*output)->alternate_text)::BaseType::BufferWriter
        alternate_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_alternate_text, buffer, &alternate_text_writer, context);
    (*output)->alternate_text.Set(
        alternate_text_writer.is_null() ? nullptr : alternate_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->alternate_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null alternate_text in SecondFactor struct");
    (*output)->field_length = CallWithContext(Traits::field_length, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::SecondFactor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::SecondFactorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::GoogleServiceAuthErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::GoogleServiceAuthErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::GoogleServiceAuthError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->state = CallWithContext(Traits::state, input, custom_context);
    decltype(CallWithContext(Traits::captcha, input, custom_context)) in_captcha = CallWithContext(Traits::captcha, input, custom_context);
    typename decltype((*output)->captcha)::BaseType::BufferWriter
        captcha_writer;
    mojo::internal::Serialize<::identity::mojom::CaptchaDataView>(
        in_captcha, buffer, &captcha_writer, context);
    (*output)->captcha.Set(
        captcha_writer.is_null() ? nullptr : captcha_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->captcha.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null captcha in GoogleServiceAuthError struct");
    decltype(CallWithContext(Traits::second_factor, input, custom_context)) in_second_factor = CallWithContext(Traits::second_factor, input, custom_context);
    typename decltype((*output)->second_factor)::BaseType::BufferWriter
        second_factor_writer;
    mojo::internal::Serialize<::identity::mojom::SecondFactorDataView>(
        in_second_factor, buffer, &second_factor_writer, context);
    (*output)->second_factor.Set(
        second_factor_writer.is_null() ? nullptr : second_factor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->second_factor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null second_factor in GoogleServiceAuthError struct");
    (*output)->network_error = CallWithContext(Traits::network_error, input, custom_context);
    decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
    typename decltype((*output)->error_message)::BaseType::BufferWriter
        error_message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error_message, buffer, &error_message_writer, context);
    (*output)->error_message.Set(
        error_message_writer.is_null() ? nullptr : error_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in GoogleServiceAuthError struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::GoogleServiceAuthError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::GoogleServiceAuthErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace identity {
namespace mojom {

inline void CaptchaDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CaptchaDataView::GetAudioUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->audio_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CaptchaDataView::GetImageUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->image_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CaptchaDataView::GetUnlockUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->unlock_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void SecondFactorDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SecondFactorDataView::GetPromptTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->prompt_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SecondFactorDataView::GetAlternateTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->alternate_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void GoogleServiceAuthErrorDataView::GetCaptchaDataView(
    CaptchaDataView* output) {
  auto pointer = data_->captcha.Get();
  *output = CaptchaDataView(pointer, context_);
}
inline void GoogleServiceAuthErrorDataView::GetSecondFactorDataView(
    SecondFactorDataView* output) {
  auto pointer = data_->second_factor.Get();
  *output = SecondFactorDataView(pointer, context_);
}
inline void GoogleServiceAuthErrorDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_SHARED_H_

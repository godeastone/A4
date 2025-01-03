// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_H_

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
#include "services/identity/public/mojom/google_service_auth_error.mojom-shared.h"
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
#include "google_apis/gaia/google_service_auth_error.h"


namespace identity {
namespace mojom {
class Captcha;
using CaptchaPtr = mojo::StructPtr<Captcha>;

class SecondFactor;
using SecondFactorPtr = mojo::InlinedStructPtr<SecondFactor>;

class GoogleServiceAuthError;
using GoogleServiceAuthErrorPtr = mojo::StructPtr<GoogleServiceAuthError>;




class  SecondFactor {
 public:
  using DataView = SecondFactorDataView;
  using Data_ = internal::SecondFactor_Data;

  template <typename... Args>
  static SecondFactorPtr New(Args&&... args) {
    return SecondFactorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SecondFactorPtr From(const U& u) {
    return mojo::TypeConverter<SecondFactorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SecondFactor>::Convert(*this);
  }


  SecondFactor();

  SecondFactor(
      const std::string& token,
      const std::string& prompt_text,
      const std::string& alternate_text,
      int32_t field_length);

  ~SecondFactor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SecondFactorPtr>
  SecondFactorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SecondFactor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SecondFactor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SecondFactor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SecondFactor_UnserializedMessageContext<
            UserType, SecondFactor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SecondFactor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SecondFactor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SecondFactor_UnserializedMessageContext<
            UserType, SecondFactor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SecondFactor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string token;
  std::string prompt_text;
  std::string alternate_text;
  int32_t field_length;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Captcha {
 public:
  using DataView = CaptchaDataView;
  using Data_ = internal::Captcha_Data;

  template <typename... Args>
  static CaptchaPtr New(Args&&... args) {
    return CaptchaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CaptchaPtr From(const U& u) {
    return mojo::TypeConverter<CaptchaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Captcha>::Convert(*this);
  }


  Captcha();

  Captcha(
      const std::string& token,
      const GURL& audio_url,
      const GURL& image_url,
      const GURL& unlock_url,
      int32_t image_width,
      int32_t image_height);

  ~Captcha();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CaptchaPtr>
  CaptchaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Captcha>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Captcha::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Captcha::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Captcha_UnserializedMessageContext<
            UserType, Captcha::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Captcha::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Captcha::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Captcha_UnserializedMessageContext<
            UserType, Captcha::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Captcha::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string token;
  GURL audio_url;
  GURL image_url;
  GURL unlock_url;
  int32_t image_width;
  int32_t image_height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  GoogleServiceAuthError {
 public:
  using DataView = GoogleServiceAuthErrorDataView;
  using Data_ = internal::GoogleServiceAuthError_Data;

  template <typename... Args>
  static GoogleServiceAuthErrorPtr New(Args&&... args) {
    return GoogleServiceAuthErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GoogleServiceAuthErrorPtr From(const U& u) {
    return mojo::TypeConverter<GoogleServiceAuthErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GoogleServiceAuthError>::Convert(*this);
  }


  GoogleServiceAuthError();

  GoogleServiceAuthError(
      int32_t state,
      const ::GoogleServiceAuthError::Captcha& captcha,
      const ::GoogleServiceAuthError::SecondFactor& second_factor,
      int32_t network_error,
      const std::string& error_message);

  ~GoogleServiceAuthError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GoogleServiceAuthErrorPtr>
  GoogleServiceAuthErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GoogleServiceAuthError>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GoogleServiceAuthError::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GoogleServiceAuthError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GoogleServiceAuthError_UnserializedMessageContext<
            UserType, GoogleServiceAuthError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GoogleServiceAuthError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GoogleServiceAuthError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GoogleServiceAuthError_UnserializedMessageContext<
            UserType, GoogleServiceAuthError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GoogleServiceAuthError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t state;
  ::GoogleServiceAuthError::Captcha captcha;
  ::GoogleServiceAuthError::SecondFactor second_factor;
  int32_t network_error;
  std::string error_message;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CaptchaPtr Captcha::Clone() const {
  return New(
      mojo::Clone(token),
      mojo::Clone(audio_url),
      mojo::Clone(image_url),
      mojo::Clone(unlock_url),
      mojo::Clone(image_width),
      mojo::Clone(image_height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Captcha>::value>::type*>
bool Captcha::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->token, other_struct.token))
    return false;
  if (!mojo::Equals(this->audio_url, other_struct.audio_url))
    return false;
  if (!mojo::Equals(this->image_url, other_struct.image_url))
    return false;
  if (!mojo::Equals(this->unlock_url, other_struct.unlock_url))
    return false;
  if (!mojo::Equals(this->image_width, other_struct.image_width))
    return false;
  if (!mojo::Equals(this->image_height, other_struct.image_height))
    return false;
  return true;
}
template <typename StructPtrType>
SecondFactorPtr SecondFactor::Clone() const {
  return New(
      mojo::Clone(token),
      mojo::Clone(prompt_text),
      mojo::Clone(alternate_text),
      mojo::Clone(field_length)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SecondFactor>::value>::type*>
bool SecondFactor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->token, other_struct.token))
    return false;
  if (!mojo::Equals(this->prompt_text, other_struct.prompt_text))
    return false;
  if (!mojo::Equals(this->alternate_text, other_struct.alternate_text))
    return false;
  if (!mojo::Equals(this->field_length, other_struct.field_length))
    return false;
  return true;
}
template <typename StructPtrType>
GoogleServiceAuthErrorPtr GoogleServiceAuthError::Clone() const {
  return New(
      mojo::Clone(state),
      mojo::Clone(captcha),
      mojo::Clone(second_factor),
      mojo::Clone(network_error),
      mojo::Clone(error_message)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GoogleServiceAuthError>::value>::type*>
bool GoogleServiceAuthError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->captcha, other_struct.captcha))
    return false;
  if (!mojo::Equals(this->second_factor, other_struct.second_factor))
    return false;
  if (!mojo::Equals(this->network_error, other_struct.network_error))
    return false;
  if (!mojo::Equals(this->error_message, other_struct.error_message))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace identity

namespace mojo {


template <>
struct  StructTraits<::identity::mojom::Captcha::DataView,
                                         ::identity::mojom::CaptchaPtr> {
  static bool IsNull(const ::identity::mojom::CaptchaPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::CaptchaPtr* output) { output->reset(); }

  static const decltype(::identity::mojom::Captcha::token)& token(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->token;
  }

  static const decltype(::identity::mojom::Captcha::audio_url)& audio_url(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->audio_url;
  }

  static const decltype(::identity::mojom::Captcha::image_url)& image_url(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->image_url;
  }

  static const decltype(::identity::mojom::Captcha::unlock_url)& unlock_url(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->unlock_url;
  }

  static decltype(::identity::mojom::Captcha::image_width) image_width(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->image_width;
  }

  static decltype(::identity::mojom::Captcha::image_height) image_height(
      const ::identity::mojom::CaptchaPtr& input) {
    return input->image_height;
  }

  static bool Read(::identity::mojom::Captcha::DataView input, ::identity::mojom::CaptchaPtr* output);
};


template <>
struct  StructTraits<::identity::mojom::SecondFactor::DataView,
                                         ::identity::mojom::SecondFactorPtr> {
  static bool IsNull(const ::identity::mojom::SecondFactorPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::SecondFactorPtr* output) { output->reset(); }

  static const decltype(::identity::mojom::SecondFactor::token)& token(
      const ::identity::mojom::SecondFactorPtr& input) {
    return input->token;
  }

  static const decltype(::identity::mojom::SecondFactor::prompt_text)& prompt_text(
      const ::identity::mojom::SecondFactorPtr& input) {
    return input->prompt_text;
  }

  static const decltype(::identity::mojom::SecondFactor::alternate_text)& alternate_text(
      const ::identity::mojom::SecondFactorPtr& input) {
    return input->alternate_text;
  }

  static decltype(::identity::mojom::SecondFactor::field_length) field_length(
      const ::identity::mojom::SecondFactorPtr& input) {
    return input->field_length;
  }

  static bool Read(::identity::mojom::SecondFactor::DataView input, ::identity::mojom::SecondFactorPtr* output);
};


template <>
struct  StructTraits<::identity::mojom::GoogleServiceAuthError::DataView,
                                         ::identity::mojom::GoogleServiceAuthErrorPtr> {
  static bool IsNull(const ::identity::mojom::GoogleServiceAuthErrorPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::GoogleServiceAuthErrorPtr* output) { output->reset(); }

  static decltype(::identity::mojom::GoogleServiceAuthError::state) state(
      const ::identity::mojom::GoogleServiceAuthErrorPtr& input) {
    return input->state;
  }

  static const decltype(::identity::mojom::GoogleServiceAuthError::captcha)& captcha(
      const ::identity::mojom::GoogleServiceAuthErrorPtr& input) {
    return input->captcha;
  }

  static const decltype(::identity::mojom::GoogleServiceAuthError::second_factor)& second_factor(
      const ::identity::mojom::GoogleServiceAuthErrorPtr& input) {
    return input->second_factor;
  }

  static decltype(::identity::mojom::GoogleServiceAuthError::network_error) network_error(
      const ::identity::mojom::GoogleServiceAuthErrorPtr& input) {
    return input->network_error;
  }

  static const decltype(::identity::mojom::GoogleServiceAuthError::error_message)& error_message(
      const ::identity::mojom::GoogleServiceAuthErrorPtr& input) {
    return input->error_message;
  }

  static bool Read(::identity::mojom::GoogleServiceAuthError::DataView input, ::identity::mojom::GoogleServiceAuthErrorPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_GOOGLE_SERVICE_AUTH_ERROR_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/identity/public/mojom/google_service_auth_error.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/identity/public/mojom/google_service_auth_error.mojom-shared-message-ids.h"
#include "services/identity/public/cpp/google_service_auth_error_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace identity {
namespace mojom {
Captcha::Captcha()
    : token(),
      audio_url(),
      image_url(),
      unlock_url(),
      image_width(),
      image_height() {}

Captcha::Captcha(
    const std::string& token_in,
    const GURL& audio_url_in,
    const GURL& image_url_in,
    const GURL& unlock_url_in,
    int32_t image_width_in,
    int32_t image_height_in)
    : token(std::move(token_in)),
      audio_url(std::move(audio_url_in)),
      image_url(std::move(image_url_in)),
      unlock_url(std::move(unlock_url_in)),
      image_width(std::move(image_width_in)),
      image_height(std::move(image_height_in)) {}

Captcha::~Captcha() = default;

bool Captcha::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SecondFactor::SecondFactor()
    : token(),
      prompt_text(),
      alternate_text(),
      field_length() {}

SecondFactor::SecondFactor(
    const std::string& token_in,
    const std::string& prompt_text_in,
    const std::string& alternate_text_in,
    int32_t field_length_in)
    : token(std::move(token_in)),
      prompt_text(std::move(prompt_text_in)),
      alternate_text(std::move(alternate_text_in)),
      field_length(std::move(field_length_in)) {}

SecondFactor::~SecondFactor() = default;

bool SecondFactor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GoogleServiceAuthError::GoogleServiceAuthError()
    : state(),
      captcha(),
      second_factor(),
      network_error(),
      error_message() {}

GoogleServiceAuthError::GoogleServiceAuthError(
    int32_t state_in,
    const ::GoogleServiceAuthError::Captcha& captcha_in,
    const ::GoogleServiceAuthError::SecondFactor& second_factor_in,
    int32_t network_error_in,
    const std::string& error_message_in)
    : state(std::move(state_in)),
      captcha(std::move(captcha_in)),
      second_factor(std::move(second_factor_in)),
      network_error(std::move(network_error_in)),
      error_message(std::move(error_message_in)) {}

GoogleServiceAuthError::~GoogleServiceAuthError() = default;

bool GoogleServiceAuthError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace identity

namespace mojo {


// static
bool StructTraits<::identity::mojom::Captcha::DataView, ::identity::mojom::CaptchaPtr>::Read(
    ::identity::mojom::Captcha::DataView input,
    ::identity::mojom::CaptchaPtr* output) {
  bool success = true;
  ::identity::mojom::CaptchaPtr result(::identity::mojom::Captcha::New());
  
      if (!input.ReadToken(&result->token))
        success = false;
      if (!input.ReadAudioUrl(&result->audio_url))
        success = false;
      if (!input.ReadImageUrl(&result->image_url))
        success = false;
      if (!input.ReadUnlockUrl(&result->unlock_url))
        success = false;
      result->image_width = input.image_width();
      result->image_height = input.image_height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::identity::mojom::SecondFactor::DataView, ::identity::mojom::SecondFactorPtr>::Read(
    ::identity::mojom::SecondFactor::DataView input,
    ::identity::mojom::SecondFactorPtr* output) {
  bool success = true;
  ::identity::mojom::SecondFactorPtr result(::identity::mojom::SecondFactor::New());
  
      if (!input.ReadToken(&result->token))
        success = false;
      if (!input.ReadPromptText(&result->prompt_text))
        success = false;
      if (!input.ReadAlternateText(&result->alternate_text))
        success = false;
      result->field_length = input.field_length();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::identity::mojom::GoogleServiceAuthError::DataView, ::identity::mojom::GoogleServiceAuthErrorPtr>::Read(
    ::identity::mojom::GoogleServiceAuthError::DataView input,
    ::identity::mojom::GoogleServiceAuthErrorPtr* output) {
  bool success = true;
  ::identity::mojom::GoogleServiceAuthErrorPtr result(::identity::mojom::GoogleServiceAuthError::New());
  
      result->state = input.state();
      if (!input.ReadCaptcha(&result->captcha))
        success = false;
      if (!input.ReadSecondFactor(&result->second_factor))
        success = false;
      result->network_error = input.network_error();
      if (!input.ReadErrorMessage(&result->error_message))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
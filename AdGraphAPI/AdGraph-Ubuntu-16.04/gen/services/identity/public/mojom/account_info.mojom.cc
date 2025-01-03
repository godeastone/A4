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

#include "services/identity/public/mojom/account_info.mojom.h"

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

#include "services/identity/public/mojom/account_info.mojom-shared-message-ids.h"
namespace identity {
namespace mojom {
AccountInfo::AccountInfo()
    : account_id(),
      gaia(),
      email(),
      full_name(),
      given_name(),
      hosted_domain(),
      locale(),
      picture_url(),
      is_child_account() {}

AccountInfo::AccountInfo(
    const std::string& account_id_in,
    const std::string& gaia_in,
    const std::string& email_in,
    const std::string& full_name_in,
    const std::string& given_name_in,
    const std::string& hosted_domain_in,
    const std::string& locale_in,
    const std::string& picture_url_in,
    bool is_child_account_in)
    : account_id(std::move(account_id_in)),
      gaia(std::move(gaia_in)),
      email(std::move(email_in)),
      full_name(std::move(full_name_in)),
      given_name(std::move(given_name_in)),
      hosted_domain(std::move(hosted_domain_in)),
      locale(std::move(locale_in)),
      picture_url(std::move(picture_url_in)),
      is_child_account(std::move(is_child_account_in)) {}

AccountInfo::~AccountInfo() = default;

bool AccountInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace identity

namespace mojo {


// static
bool StructTraits<::identity::mojom::AccountInfo::DataView, ::identity::mojom::AccountInfoPtr>::Read(
    ::identity::mojom::AccountInfo::DataView input,
    ::identity::mojom::AccountInfoPtr* output) {
  bool success = true;
  ::identity::mojom::AccountInfoPtr result(::identity::mojom::AccountInfo::New());
  
      if (!input.ReadAccountId(&result->account_id))
        success = false;
      if (!input.ReadGaia(&result->gaia))
        success = false;
      if (!input.ReadEmail(&result->email))
        success = false;
      if (!input.ReadFullName(&result->full_name))
        success = false;
      if (!input.ReadGivenName(&result->given_name))
        success = false;
      if (!input.ReadHostedDomain(&result->hosted_domain))
        success = false;
      if (!input.ReadLocale(&result->locale))
        success = false;
      if (!input.ReadPictureUrl(&result->picture_url))
        success = false;
      result->is_child_account = input.is_child_account();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
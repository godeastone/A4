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

#include "services/identity/public/mojom/account_state.mojom.h"

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

#include "services/identity/public/mojom/account_state.mojom-shared-message-ids.h"
namespace identity {
namespace mojom {
AccountState::AccountState()
    : has_refresh_token(),
      is_primary_account() {}

AccountState::AccountState(
    bool has_refresh_token_in,
    bool is_primary_account_in)
    : has_refresh_token(std::move(has_refresh_token_in)),
      is_primary_account(std::move(is_primary_account_in)) {}

AccountState::~AccountState() = default;

bool AccountState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace identity

namespace mojo {


// static
bool StructTraits<::identity::mojom::AccountState::DataView, ::identity::mojom::AccountStatePtr>::Read(
    ::identity::mojom::AccountState::DataView input,
    ::identity::mojom::AccountStatePtr* output) {
  bool success = true;
  ::identity::mojom::AccountStatePtr result(::identity::mojom::AccountState::New());
  
      result->has_refresh_token = input.has_refresh_token();
      result->is_primary_account = input.is_primary_account();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "services/identity/public/mojom/account.mojom.h"

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

#include "services/identity/public/mojom/account.mojom-shared-message-ids.h"
#include "services/identity/public/cpp/account_info_mojom_traits.h"
#include "services/identity/public/cpp/account_state_mojom_traits.h"
namespace identity {
namespace mojom {
Account::Account()
    : info(),
      state() {}

Account::Account(
    const ::AccountInfo& info_in,
    const identity::AccountState& state_in)
    : info(std::move(info_in)),
      state(std::move(state_in)) {}

Account::~Account() = default;

bool Account::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace identity

namespace mojo {


// static
bool StructTraits<::identity::mojom::Account::DataView, ::identity::mojom::AccountPtr>::Read(
    ::identity::mojom::Account::DataView input,
    ::identity::mojom::AccountPtr* output) {
  bool success = true;
  ::identity::mojom::AccountPtr result(::identity::mojom::Account::New());
  
      if (!input.ReadInfo(&result->info))
        success = false;
      if (!input.ReadState(&result->state))
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
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

#include "services/identity/public/mojom/scope_set.mojom.h"

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

#include "services/identity/public/mojom/scope_set.mojom-shared-message-ids.h"
namespace identity {
namespace mojom {
ScopeSet::ScopeSet()
    : scopes() {}

ScopeSet::ScopeSet(
    const std::vector<std::string>& scopes_in)
    : scopes(std::move(scopes_in)) {}

ScopeSet::~ScopeSet() = default;

bool ScopeSet::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace identity

namespace mojo {


// static
bool StructTraits<::identity::mojom::ScopeSet::DataView, ::identity::mojom::ScopeSetPtr>::Read(
    ::identity::mojom::ScopeSet::DataView input,
    ::identity::mojom::ScopeSetPtr* output) {
  bool success = true;
  ::identity::mojom::ScopeSetPtr result(::identity::mojom::ScopeSet::New());
  
      if (!input.ReadScopes(&result->scopes))
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
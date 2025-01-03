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

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom.h"

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

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared-message-ids.h"
#include "url/mojom/origin_mojom_traits.h"
namespace blink {
namespace mojom {
ParsedFeaturePolicyDeclaration::ParsedFeaturePolicyDeclaration()
    : feature(),
      matches_all_origins(),
      origins() {}

ParsedFeaturePolicyDeclaration::ParsedFeaturePolicyDeclaration(
    FeaturePolicyFeature feature_in,
    bool matches_all_origins_in,
    const std::vector<url::Origin>& origins_in)
    : feature(std::move(feature_in)),
      matches_all_origins(std::move(matches_all_origins_in)),
      origins(std::move(origins_in)) {}

ParsedFeaturePolicyDeclaration::~ParsedFeaturePolicyDeclaration() = default;

bool ParsedFeaturePolicyDeclaration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::ParsedFeaturePolicyDeclaration::DataView, ::blink::mojom::ParsedFeaturePolicyDeclarationPtr>::Read(
    ::blink::mojom::ParsedFeaturePolicyDeclaration::DataView input,
    ::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output) {
  bool success = true;
  ::blink::mojom::ParsedFeaturePolicyDeclarationPtr result(::blink::mojom::ParsedFeaturePolicyDeclaration::New());
  
      if (!input.ReadFeature(&result->feature))
        success = false;
      result->matches_all_origins = input.matches_all_origins();
      if (!input.ReadOrigins(&result->origins))
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
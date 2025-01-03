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

#include "content/common/url_loader_factory_bundle.mojom.h"

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

#include "content/common/url_loader_factory_bundle.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
URLLoaderFactoryBundle::URLLoaderFactoryBundle()
    : default_factory(),
      factories() {}

URLLoaderFactoryBundle::URLLoaderFactoryBundle(
    ::network::mojom::URLLoaderFactoryPtrInfo default_factory_in,
    base::flat_map<std::string, ::network::mojom::URLLoaderFactoryPtrInfo> factories_in)
    : default_factory(std::move(default_factory_in)),
      factories(std::move(factories_in)) {}

URLLoaderFactoryBundle::~URLLoaderFactoryBundle() = default;

bool URLLoaderFactoryBundle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::URLLoaderFactoryBundle::DataView, ::content::mojom::URLLoaderFactoryBundlePtr>::Read(
    ::content::mojom::URLLoaderFactoryBundle::DataView input,
    ::content::mojom::URLLoaderFactoryBundlePtr* output) {
  bool success = true;
  ::content::mojom::URLLoaderFactoryBundlePtr result(::content::mojom::URLLoaderFactoryBundle::New());
  
      result->default_factory =
          input.TakeDefaultFactory<decltype(result->default_factory)>();
      if (!input.ReadFactories(&result->factories))
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
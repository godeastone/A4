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

#include "content/public/common/transferrable_url_loader.mojom.h"

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

#include "content/public/common/transferrable_url_loader.mojom-shared-message-ids.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
TransferrableURLLoader::TransferrableURLLoader()
    : url(),
      url_loader(),
      url_loader_client(),
      head() {}

TransferrableURLLoader::TransferrableURLLoader(
    const GURL& url_in,
    ::network::mojom::URLLoaderPtrInfo url_loader_in,
    ::network::mojom::URLLoaderClientRequest url_loader_client_in,
    const network::ResourceResponseHead& head_in)
    : url(std::move(url_in)),
      url_loader(std::move(url_loader_in)),
      url_loader_client(std::move(url_loader_client_in)),
      head(std::move(head_in)) {}

TransferrableURLLoader::~TransferrableURLLoader() = default;

bool TransferrableURLLoader::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::TransferrableURLLoader::DataView, ::content::mojom::TransferrableURLLoaderPtr>::Read(
    ::content::mojom::TransferrableURLLoader::DataView input,
    ::content::mojom::TransferrableURLLoaderPtr* output) {
  bool success = true;
  ::content::mojom::TransferrableURLLoaderPtr result(::content::mojom::TransferrableURLLoader::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->url_loader =
          input.TakeUrlLoader<decltype(result->url_loader)>();
      result->url_loader_client =
          input.TakeUrlLoaderClient<decltype(result->url_loader_client)>();
      if (!input.ReadHead(&result->head))
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
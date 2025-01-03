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

#include "content/public/common/appcache_info.mojom.h"

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

#include "content/public/common/appcache_info.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
AppCacheInfo::AppCacheInfo()
    : manifest_url(),
      creation_time(),
      last_update_time(),
      last_access_time(),
      cache_id(),
      group_id(),
      status(),
      size(),
      is_complete() {}

AppCacheInfo::AppCacheInfo(
    const GURL& manifest_url_in,
    base::Time creation_time_in,
    base::Time last_update_time_in,
    base::Time last_access_time_in,
    int64_t cache_id_in,
    int64_t group_id_in,
    AppCacheStatus status_in,
    int64_t size_in,
    bool is_complete_in)
    : manifest_url(std::move(manifest_url_in)),
      creation_time(std::move(creation_time_in)),
      last_update_time(std::move(last_update_time_in)),
      last_access_time(std::move(last_access_time_in)),
      cache_id(std::move(cache_id_in)),
      group_id(std::move(group_id_in)),
      status(std::move(status_in)),
      size(std::move(size_in)),
      is_complete(std::move(is_complete_in)) {}

AppCacheInfo::~AppCacheInfo() = default;

bool AppCacheInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::AppCacheInfo::DataView, ::content::mojom::AppCacheInfoPtr>::Read(
    ::content::mojom::AppCacheInfo::DataView input,
    ::content::mojom::AppCacheInfoPtr* output) {
  bool success = true;
  ::content::mojom::AppCacheInfoPtr result(::content::mojom::AppCacheInfo::New());
  
      if (!input.ReadManifestUrl(&result->manifest_url))
        success = false;
      if (!input.ReadCreationTime(&result->creation_time))
        success = false;
      if (!input.ReadLastUpdateTime(&result->last_update_time))
        success = false;
      if (!input.ReadLastAccessTime(&result->last_access_time))
        success = false;
      result->cache_id = input.cache_id();
      result->group_id = input.group_id();
      if (!input.ReadStatus(&result->status))
        success = false;
      result->size = input.size();
      result->is_complete = input.is_complete();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
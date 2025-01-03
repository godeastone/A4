// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace contextual_search {
namespace mojom {

namespace internal {


// The 643554106 value is based on sha256(salt + "ContextualSearchJsApiService1").
constexpr uint32_t kContextualSearchJsApiService_ShouldEnableJsApi_Name = 643554106;
// The 1167490664 value is based on sha256(salt + "ContextualSearchJsApiService2").
constexpr uint32_t kContextualSearchJsApiService_HandleSetCaption_Name = 1167490664;

}  // namespace internal
}  // namespace mojom
}  // namespace contextual_search

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
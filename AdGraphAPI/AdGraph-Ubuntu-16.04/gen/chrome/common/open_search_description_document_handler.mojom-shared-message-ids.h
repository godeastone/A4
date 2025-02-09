// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1622278963 value is based on sha256(salt + "OpenSearchDescriptionDocumentHandler1").
constexpr uint32_t kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name = 1622278963;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
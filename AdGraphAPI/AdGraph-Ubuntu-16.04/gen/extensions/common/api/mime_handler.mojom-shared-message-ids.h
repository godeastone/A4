// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace extensions {
namespace mime_handler {

namespace internal {


// The 84708826 value is based on sha256(salt + "MimeHandlerService1").
constexpr uint32_t kMimeHandlerService_GetStreamInfo_Name = 84708826;
// The 346161876 value is based on sha256(salt + "MimeHandlerService2").
constexpr uint32_t kMimeHandlerService_AbortStream_Name = 346161876;

}  // namespace internal
}  // namespace mime_handler
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
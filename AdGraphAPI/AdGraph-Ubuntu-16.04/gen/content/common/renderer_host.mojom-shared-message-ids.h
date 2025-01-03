// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 246995347 value is based on sha256(salt + "RendererHost1").
constexpr uint32_t kRendererHost_GetBlobURLLoaderFactory_Name = 246995347;
// The 102202722 value is based on sha256(salt + "RendererHost2").
constexpr uint32_t kRendererHost_GetBrowserHistogram_Name = 102202722;
// The 190978281 value is based on sha256(salt + "RendererHost3").
constexpr uint32_t kRendererHost_SuddenTerminationChanged_Name = 190978281;
// The 821129689 value is based on sha256(salt + "RendererHost4").
constexpr uint32_t kRendererHost_ShutdownRequest_Name = 821129689;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
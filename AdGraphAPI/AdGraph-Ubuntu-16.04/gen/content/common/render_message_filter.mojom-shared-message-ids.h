// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 732286646 value is based on sha256(salt + "RenderMessageFilter1").
constexpr uint32_t kRenderMessageFilter_GenerateRoutingID_Name = 732286646;
// The 1766463562 value is based on sha256(salt + "RenderMessageFilter2").
constexpr uint32_t kRenderMessageFilter_CreateNewWidget_Name = 1766463562;
// The 1749450432 value is based on sha256(salt + "RenderMessageFilter3").
constexpr uint32_t kRenderMessageFilter_CreateFullscreenWidget_Name = 1749450432;
// The 1805260414 value is based on sha256(salt + "RenderMessageFilter4").
constexpr uint32_t kRenderMessageFilter_DidGenerateCacheableMetadata_Name = 1805260414;
// The 667662216 value is based on sha256(salt + "RenderMessageFilter5").
constexpr uint32_t kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name = 667662216;
// The 1825327839 value is based on sha256(salt + "RenderMessageFilter6").
constexpr uint32_t kRenderMessageFilter_HasGpuProcess_Name = 1825327839;
// The 1527813644 value is based on sha256(salt + "RenderMessageFilter7").
constexpr uint32_t kRenderMessageFilter_SetThreadPriority_Name = 1527813644;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1068512399 value is based on sha256(salt + "RenderWidgetWindowTreeClient1").
constexpr uint32_t kRenderWidgetWindowTreeClient_Embed_Name = 1068512399;
// The 1900631702 value is based on sha256(salt + "RenderWidgetWindowTreeClient2").
constexpr uint32_t kRenderWidgetWindowTreeClient_DestroyFrame_Name = 1900631702;
// The 821943978 value is based on sha256(salt + "RenderWidgetWindowTreeClientFactory1").
constexpr uint32_t kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name = 821943978;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WIDGET_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_WIDGET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 403568742 value is based on sha256(salt + "Widget1").
constexpr uint32_t kWidget_SetupWidgetInputHandler_Name = 403568742;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_WIDGET_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1719857011 value is based on sha256(salt + "ChromeRenderFrame1").
constexpr uint32_t kChromeRenderFrame_SetWindowFeatures_Name = 1719857011;
// The 1901190239 value is based on sha256(salt + "ChromeRenderFrame2").
constexpr uint32_t kChromeRenderFrame_RequestReloadImageForContextNode_Name = 1901190239;
// The 256419818 value is based on sha256(salt + "ChromeRenderFrame3").
constexpr uint32_t kChromeRenderFrame_RequestThumbnailForContextNode_Name = 256419818;
// The 771554986 value is based on sha256(salt + "ChromeRenderFrame4").
constexpr uint32_t kChromeRenderFrame_ExecuteWebUIJavaScript_Name = 771554986;
// The 8569112 value is based on sha256(salt + "ChromeRenderFrame5").
constexpr uint32_t kChromeRenderFrame_SetClientSidePhishingDetection_Name = 8569112;
// The 663991205 value is based on sha256(salt + "ChromeRenderFrame6").
constexpr uint32_t kChromeRenderFrame_GetWebApplicationInfo_Name = 663991205;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_
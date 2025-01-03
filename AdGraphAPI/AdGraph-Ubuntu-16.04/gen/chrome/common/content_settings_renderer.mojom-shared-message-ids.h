// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 972170456 value is based on sha256(salt + "ContentSettingsRenderer1").
constexpr uint32_t kContentSettingsRenderer_SetAllowRunningInsecureContent_Name = 972170456;
// The 600781901 value is based on sha256(salt + "ContentSettingsRenderer2").
constexpr uint32_t kContentSettingsRenderer_SetAsInterstitial_Name = 600781901;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
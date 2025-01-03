// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 452759151 value is based on sha256(salt + "RendererConfiguration1").
constexpr uint32_t kRendererConfiguration_SetInitialConfiguration_Name = 452759151;
// The 182976921 value is based on sha256(salt + "RendererConfiguration2").
constexpr uint32_t kRendererConfiguration_SetContentSettingRules_Name = 182976921;
// The 1379129538 value is based on sha256(salt + "RendererConfiguration3").
constexpr uint32_t kRendererConfiguration_SetFieldTrialGroup_Name = 1379129538;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_MESSAGE_IDS_H_
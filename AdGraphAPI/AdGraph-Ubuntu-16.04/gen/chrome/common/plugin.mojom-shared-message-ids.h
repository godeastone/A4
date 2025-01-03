// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PLUGIN_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_PLUGIN_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1007231330 value is based on sha256(salt + "PluginHost1").
constexpr uint32_t kPluginHost_ShowFlashPermissionBubble_Name = 1007231330;
// The 725473292 value is based on sha256(salt + "PluginHost2").
constexpr uint32_t kPluginHost_CouldNotLoadPlugin_Name = 725473292;
// The 1184014562 value is based on sha256(salt + "PluginHost3").
constexpr uint32_t kPluginHost_BlockedOutdatedPlugin_Name = 1184014562;
// The 2079292204 value is based on sha256(salt + "PluginHost4").
constexpr uint32_t kPluginHost_BlockedComponentUpdatedPlugin_Name = 2079292204;
// The 361667155 value is based on sha256(salt + "PluginAuthHost1").
constexpr uint32_t kPluginAuthHost_BlockedUnauthorizedPlugin_Name = 361667155;
// The 1860309940 value is based on sha256(salt + "PluginInfoHost1").
constexpr uint32_t kPluginInfoHost_GetPluginInfo_Name = 1860309940;
// The 1667731780 value is based on sha256(salt + "PluginRenderer1").
constexpr uint32_t kPluginRenderer_FinishedDownloading_Name = 1667731780;
// The 837671496 value is based on sha256(salt + "PluginRenderer2").
constexpr uint32_t kPluginRenderer_UpdateSuccess_Name = 837671496;
// The 1006218334 value is based on sha256(salt + "PluginRenderer3").
constexpr uint32_t kPluginRenderer_UpdateFailure_Name = 1006218334;
// The 266822422 value is based on sha256(salt + "PluginRenderer4").
constexpr uint32_t kPluginRenderer_UpdateDownloading_Name = 266822422;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PLUGIN_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 318349746 value is based on sha256(salt + "DiscardsDetailsProvider1").
constexpr uint32_t kDiscardsDetailsProvider_GetTabDiscardsInfo_Name = 318349746;
// The 717333746 value is based on sha256(salt + "DiscardsDetailsProvider2").
constexpr uint32_t kDiscardsDetailsProvider_SetAutoDiscardable_Name = 717333746;
// The 735842510 value is based on sha256(salt + "DiscardsDetailsProvider3").
constexpr uint32_t kDiscardsDetailsProvider_DiscardById_Name = 735842510;
// The 918603491 value is based on sha256(salt + "DiscardsDetailsProvider4").
constexpr uint32_t kDiscardsDetailsProvider_FreezeById_Name = 918603491;
// The 937641961 value is based on sha256(salt + "DiscardsDetailsProvider5").
constexpr uint32_t kDiscardsDetailsProvider_Discard_Name = 937641961;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_MESSAGE_IDS_H_
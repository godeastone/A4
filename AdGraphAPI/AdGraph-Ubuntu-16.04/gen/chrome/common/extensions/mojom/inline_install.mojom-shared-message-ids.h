// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace extensions {
namespace mojom {

namespace internal {


// The 594161984 value is based on sha256(salt + "InlineInstallProgressListener1").
constexpr uint32_t kInlineInstallProgressListener_InlineInstallStageChanged_Name = 594161984;
// The 203897324 value is based on sha256(salt + "InlineInstallProgressListener2").
constexpr uint32_t kInlineInstallProgressListener_InlineInstallDownloadProgress_Name = 203897324;
// The 1841070803 value is based on sha256(salt + "InlineInstaller1").
constexpr uint32_t kInlineInstaller_DoInlineInstall_Name = 1841070803;

}  // namespace internal
}  // namespace mojom
}  // namespace extensions

#endif  // CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_MESSAGE_IDS_H_
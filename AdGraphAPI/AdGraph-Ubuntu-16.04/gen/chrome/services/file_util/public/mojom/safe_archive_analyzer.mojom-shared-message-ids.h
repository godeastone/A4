// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1990156422 value is based on sha256(salt + "SafeArchiveAnalyzer1").
constexpr uint32_t kSafeArchiveAnalyzer_AnalyzeZipFile_Name = 1990156422;
// The 934892519 value is based on sha256(salt + "SafeArchiveAnalyzer2").
constexpr uint32_t kSafeArchiveAnalyzer_AnalyzeDmgFile_Name = 934892519;
// The 2000800670 value is based on sha256(salt + "SafeArchiveAnalyzer3").
constexpr uint32_t kSafeArchiveAnalyzer_AnalyzeRarFile_Name = 2000800670;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_MESSAGE_IDS_H_
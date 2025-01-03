// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1368062727 value is based on sha256(salt + "ServiceProcess1").
constexpr uint32_t kServiceProcess_Hello_Name = 1368062727;
// The 2054302958 value is based on sha256(salt + "ServiceProcess2").
constexpr uint32_t kServiceProcess_GetHistograms_Name = 2054302958;
// The 1668380393 value is based on sha256(salt + "ServiceProcess3").
constexpr uint32_t kServiceProcess_UpdateAvailable_Name = 1668380393;
// The 1765911655 value is based on sha256(salt + "ServiceProcess4").
constexpr uint32_t kServiceProcess_ShutDown_Name = 1765911655;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_
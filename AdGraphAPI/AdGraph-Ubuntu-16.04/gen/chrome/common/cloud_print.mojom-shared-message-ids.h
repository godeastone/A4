// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace cloud_print {
namespace mojom {

namespace internal {


// The 1170812758 value is based on sha256(salt + "CloudPrint1").
constexpr uint32_t kCloudPrint_EnableCloudPrintProxyWithRobot_Name = 1170812758;
// The 731006042 value is based on sha256(salt + "CloudPrint2").
constexpr uint32_t kCloudPrint_DisableCloudPrintProxy_Name = 731006042;
// The 1838004755 value is based on sha256(salt + "CloudPrint3").
constexpr uint32_t kCloudPrint_GetCloudPrintProxyInfo_Name = 1838004755;
// The 1333553502 value is based on sha256(salt + "CloudPrint4").
constexpr uint32_t kCloudPrint_GetPrinters_Name = 1333553502;

}  // namespace internal
}  // namespace mojom
}  // namespace cloud_print

#endif  // CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_MESSAGE_IDS_H_
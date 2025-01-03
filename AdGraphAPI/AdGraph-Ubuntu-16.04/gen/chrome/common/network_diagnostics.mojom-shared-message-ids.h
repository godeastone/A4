// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 748952164 value is based on sha256(salt + "NetworkDiagnostics1").
constexpr uint32_t kNetworkDiagnostics_RunNetworkDiagnostics_Name = 748952164;
// The 553221617 value is based on sha256(salt + "NetworkDiagnosticsClient1").
constexpr uint32_t kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name = 553221617;
// The 1578859240 value is based on sha256(salt + "NetworkDiagnosticsClient2").
constexpr uint32_t kNetworkDiagnosticsClient_DNSProbeStatus_Name = 1578859240;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_MESSAGE_IDS_H_
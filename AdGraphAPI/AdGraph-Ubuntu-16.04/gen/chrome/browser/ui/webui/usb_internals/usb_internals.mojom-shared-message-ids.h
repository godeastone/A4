// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 2073738460 value is based on sha256(salt + "UsbInternalsPageHandler1").
constexpr uint32_t kUsbInternalsPageHandler_AddDeviceForTesting_Name = 2073738460;
// The 1510216647 value is based on sha256(salt + "UsbInternalsPageHandler2").
constexpr uint32_t kUsbInternalsPageHandler_RemoveDeviceForTesting_Name = 1510216647;
// The 845878185 value is based on sha256(salt + "UsbInternalsPageHandler3").
constexpr uint32_t kUsbInternalsPageHandler_GetTestDevices_Name = 845878185;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_
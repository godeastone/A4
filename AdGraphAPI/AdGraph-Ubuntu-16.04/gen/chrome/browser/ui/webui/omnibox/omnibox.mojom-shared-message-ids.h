// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 1114496509 value is based on sha256(salt + "OmniboxPageHandler1").
constexpr uint32_t kOmniboxPageHandler_SetClientPage_Name = 1114496509;
// The 144256550 value is based on sha256(salt + "OmniboxPageHandler2").
constexpr uint32_t kOmniboxPageHandler_StartOmniboxQuery_Name = 144256550;
// The 725969913 value is based on sha256(salt + "OmniboxPage1").
constexpr uint32_t kOmniboxPage_HandleNewAutocompleteResult_Name = 725969913;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_MESSAGE_IDS_H_
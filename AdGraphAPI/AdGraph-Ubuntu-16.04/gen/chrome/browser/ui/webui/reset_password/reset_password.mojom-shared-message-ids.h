// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 1358331151 value is based on sha256(salt + "ResetPasswordHandler1").
constexpr uint32_t kResetPasswordHandler_HandlePasswordReset_Name = 1358331151;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_MESSAGE_IDS_H_
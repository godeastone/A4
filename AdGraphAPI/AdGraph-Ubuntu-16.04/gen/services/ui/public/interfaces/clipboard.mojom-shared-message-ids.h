// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 2145224323 value is based on sha256(salt + "Clipboard1").
constexpr uint32_t kClipboard_GetSequenceNumber_Name = 2145224323;
// The 2059186955 value is based on sha256(salt + "Clipboard2").
constexpr uint32_t kClipboard_GetAvailableMimeTypes_Name = 2059186955;
// The 519738601 value is based on sha256(salt + "Clipboard3").
constexpr uint32_t kClipboard_ReadClipboardData_Name = 519738601;
// The 343034773 value is based on sha256(salt + "Clipboard4").
constexpr uint32_t kClipboard_WriteClipboardData_Name = 343034773;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
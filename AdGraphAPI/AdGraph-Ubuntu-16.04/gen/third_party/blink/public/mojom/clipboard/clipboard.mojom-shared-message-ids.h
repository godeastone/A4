// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 398012063 value is based on sha256(salt + "ClipboardHost1").
constexpr uint32_t kClipboardHost_GetSequenceNumber_Name = 398012063;
// The 872936430 value is based on sha256(salt + "ClipboardHost2").
constexpr uint32_t kClipboardHost_IsFormatAvailable_Name = 872936430;
// The 572379568 value is based on sha256(salt + "ClipboardHost3").
constexpr uint32_t kClipboardHost_ReadAvailableTypes_Name = 572379568;
// The 228971085 value is based on sha256(salt + "ClipboardHost4").
constexpr uint32_t kClipboardHost_ReadText_Name = 228971085;
// The 694189617 value is based on sha256(salt + "ClipboardHost5").
constexpr uint32_t kClipboardHost_ReadHtml_Name = 694189617;
// The 1562975666 value is based on sha256(salt + "ClipboardHost6").
constexpr uint32_t kClipboardHost_ReadRtf_Name = 1562975666;
// The 2108739099 value is based on sha256(salt + "ClipboardHost7").
constexpr uint32_t kClipboardHost_ReadImage_Name = 2108739099;
// The 668465910 value is based on sha256(salt + "ClipboardHost8").
constexpr uint32_t kClipboardHost_ReadCustomData_Name = 668465910;
// The 1380960454 value is based on sha256(salt + "ClipboardHost9").
constexpr uint32_t kClipboardHost_WriteText_Name = 1380960454;
// The 469669147 value is based on sha256(salt + "ClipboardHost10").
constexpr uint32_t kClipboardHost_WriteHtml_Name = 469669147;
// The 1730161239 value is based on sha256(salt + "ClipboardHost11").
constexpr uint32_t kClipboardHost_WriteSmartPasteMarker_Name = 1730161239;
// The 2065734398 value is based on sha256(salt + "ClipboardHost12").
constexpr uint32_t kClipboardHost_WriteCustomData_Name = 2065734398;
// The 838124263 value is based on sha256(salt + "ClipboardHost13").
constexpr uint32_t kClipboardHost_WriteBookmark_Name = 838124263;
// The 1578617955 value is based on sha256(salt + "ClipboardHost14").
constexpr uint32_t kClipboardHost_WriteImage_Name = 1578617955;
// The 921784768 value is based on sha256(salt + "ClipboardHost15").
constexpr uint32_t kClipboardHost_CommitWrite_Name = 921784768;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
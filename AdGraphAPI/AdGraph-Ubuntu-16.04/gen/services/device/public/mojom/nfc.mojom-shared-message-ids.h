// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1697232678 value is based on sha256(salt + "NFC1").
constexpr uint32_t kNFC_SetClient_Name = 1697232678;
// The 178005645 value is based on sha256(salt + "NFC2").
constexpr uint32_t kNFC_Push_Name = 178005645;
// The 1673664147 value is based on sha256(salt + "NFC3").
constexpr uint32_t kNFC_CancelPush_Name = 1673664147;
// The 2075904296 value is based on sha256(salt + "NFC4").
constexpr uint32_t kNFC_Watch_Name = 2075904296;
// The 1651285553 value is based on sha256(salt + "NFC5").
constexpr uint32_t kNFC_CancelWatch_Name = 1651285553;
// The 1170647743 value is based on sha256(salt + "NFC6").
constexpr uint32_t kNFC_CancelAllWatches_Name = 1170647743;
// The 131737409 value is based on sha256(salt + "NFC7").
constexpr uint32_t kNFC_SuspendNFCOperations_Name = 131737409;
// The 1637934054 value is based on sha256(salt + "NFC8").
constexpr uint32_t kNFC_ResumeNFCOperations_Name = 1637934054;
// The 1086348421 value is based on sha256(salt + "NFCClient1").
constexpr uint32_t kNFCClient_OnWatch_Name = 1086348421;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_
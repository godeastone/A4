// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 601463666 value is based on sha256(salt + "FingerprintObserver1").
constexpr uint32_t kFingerprintObserver_OnRestarted_Name = 601463666;
// The 1955447640 value is based on sha256(salt + "FingerprintObserver2").
constexpr uint32_t kFingerprintObserver_OnEnrollScanDone_Name = 1955447640;
// The 1612386579 value is based on sha256(salt + "FingerprintObserver3").
constexpr uint32_t kFingerprintObserver_OnAuthScanDone_Name = 1612386579;
// The 70143011 value is based on sha256(salt + "FingerprintObserver4").
constexpr uint32_t kFingerprintObserver_OnSessionFailed_Name = 70143011;
// The 2093471378 value is based on sha256(salt + "Fingerprint1").
constexpr uint32_t kFingerprint_GetRecordsForUser_Name = 2093471378;
// The 1939138072 value is based on sha256(salt + "Fingerprint2").
constexpr uint32_t kFingerprint_StartEnrollSession_Name = 1939138072;
// The 1833128757 value is based on sha256(salt + "Fingerprint3").
constexpr uint32_t kFingerprint_CancelCurrentEnrollSession_Name = 1833128757;
// The 951521425 value is based on sha256(salt + "Fingerprint4").
constexpr uint32_t kFingerprint_RequestRecordLabel_Name = 951521425;
// The 616300526 value is based on sha256(salt + "Fingerprint5").
constexpr uint32_t kFingerprint_SetRecordLabel_Name = 616300526;
// The 1159774024 value is based on sha256(salt + "Fingerprint6").
constexpr uint32_t kFingerprint_RemoveRecord_Name = 1159774024;
// The 719413913 value is based on sha256(salt + "Fingerprint7").
constexpr uint32_t kFingerprint_StartAuthSession_Name = 719413913;
// The 437531533 value is based on sha256(salt + "Fingerprint8").
constexpr uint32_t kFingerprint_EndCurrentAuthSession_Name = 437531533;
// The 50311172 value is based on sha256(salt + "Fingerprint9").
constexpr uint32_t kFingerprint_DestroyAllRecords_Name = 50311172;
// The 1763374939 value is based on sha256(salt + "Fingerprint10").
constexpr uint32_t kFingerprint_AddFingerprintObserver_Name = 1763374939;
// The 1076552549 value is based on sha256(salt + "Fingerprint11").
constexpr uint32_t kFingerprint_RequestType_Name = 1076552549;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_
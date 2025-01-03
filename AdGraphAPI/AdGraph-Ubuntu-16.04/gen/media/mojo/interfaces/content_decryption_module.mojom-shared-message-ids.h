// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 292402607 value is based on sha256(salt + "ContentDecryptionModule1").
constexpr uint32_t kContentDecryptionModule_SetClient_Name = 292402607;
// The 1014234118 value is based on sha256(salt + "ContentDecryptionModule2").
constexpr uint32_t kContentDecryptionModule_Initialize_Name = 1014234118;
// The 1162151038 value is based on sha256(salt + "ContentDecryptionModule3").
constexpr uint32_t kContentDecryptionModule_SetServerCertificate_Name = 1162151038;
// The 630817577 value is based on sha256(salt + "ContentDecryptionModule4").
constexpr uint32_t kContentDecryptionModule_GetStatusForPolicy_Name = 630817577;
// The 955257373 value is based on sha256(salt + "ContentDecryptionModule5").
constexpr uint32_t kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 955257373;
// The 2139399771 value is based on sha256(salt + "ContentDecryptionModule6").
constexpr uint32_t kContentDecryptionModule_LoadSession_Name = 2139399771;
// The 1020826625 value is based on sha256(salt + "ContentDecryptionModule7").
constexpr uint32_t kContentDecryptionModule_UpdateSession_Name = 1020826625;
// The 124145985 value is based on sha256(salt + "ContentDecryptionModule8").
constexpr uint32_t kContentDecryptionModule_CloseSession_Name = 124145985;
// The 784068128 value is based on sha256(salt + "ContentDecryptionModule9").
constexpr uint32_t kContentDecryptionModule_RemoveSession_Name = 784068128;
// The 1662023783 value is based on sha256(salt + "ContentDecryptionModuleClient1").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionMessage_Name = 1662023783;
// The 476449832 value is based on sha256(salt + "ContentDecryptionModuleClient2").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionClosed_Name = 476449832;
// The 294335746 value is based on sha256(salt + "ContentDecryptionModuleClient3").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionKeysChange_Name = 294335746;
// The 886706572 value is based on sha256(salt + "ContentDecryptionModuleClient4").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 886706572;
// The 1237819256 value is based on sha256(salt + "CdmFactory1").
constexpr uint32_t kCdmFactory_CreateCdm_Name = 1237819256;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_
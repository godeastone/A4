// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 859106247 value is based on sha256(salt + "Decryptor1").
constexpr uint32_t kDecryptor_Initialize_Name = 859106247;
// The 931978516 value is based on sha256(salt + "Decryptor2").
constexpr uint32_t kDecryptor_Decrypt_Name = 931978516;
// The 1042962808 value is based on sha256(salt + "Decryptor3").
constexpr uint32_t kDecryptor_CancelDecrypt_Name = 1042962808;
// The 2077213541 value is based on sha256(salt + "Decryptor4").
constexpr uint32_t kDecryptor_InitializeAudioDecoder_Name = 2077213541;
// The 738843590 value is based on sha256(salt + "Decryptor5").
constexpr uint32_t kDecryptor_InitializeVideoDecoder_Name = 738843590;
// The 1852209922 value is based on sha256(salt + "Decryptor6").
constexpr uint32_t kDecryptor_DecryptAndDecodeAudio_Name = 1852209922;
// The 47174647 value is based on sha256(salt + "Decryptor7").
constexpr uint32_t kDecryptor_DecryptAndDecodeVideo_Name = 47174647;
// The 681083234 value is based on sha256(salt + "Decryptor8").
constexpr uint32_t kDecryptor_ResetDecoder_Name = 681083234;
// The 518717895 value is based on sha256(salt + "Decryptor9").
constexpr uint32_t kDecryptor_DeinitializeDecoder_Name = 518717895;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_
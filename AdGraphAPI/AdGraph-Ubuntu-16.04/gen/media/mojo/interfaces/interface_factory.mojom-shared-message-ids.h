// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1028411754 value is based on sha256(salt + "InterfaceFactory1").
constexpr uint32_t kInterfaceFactory_CreateAudioDecoder_Name = 1028411754;
// The 598348435 value is based on sha256(salt + "InterfaceFactory2").
constexpr uint32_t kInterfaceFactory_CreateVideoDecoder_Name = 598348435;
// The 1472627316 value is based on sha256(salt + "InterfaceFactory3").
constexpr uint32_t kInterfaceFactory_CreateRenderer_Name = 1472627316;
// The 1735483564 value is based on sha256(salt + "InterfaceFactory4").
constexpr uint32_t kInterfaceFactory_CreateCdm_Name = 1735483564;
// The 506568624 value is based on sha256(salt + "InterfaceFactory5").
constexpr uint32_t kInterfaceFactory_CreateDecryptor_Name = 506568624;
// The 1876205816 value is based on sha256(salt + "InterfaceFactory6").
constexpr uint32_t kInterfaceFactory_CreateCdmProxy_Name = 1876205816;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
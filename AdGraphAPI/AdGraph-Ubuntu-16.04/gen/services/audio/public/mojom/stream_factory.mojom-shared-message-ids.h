// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace audio {
namespace mojom {

namespace internal {


// The 1262762285 value is based on sha256(salt + "StreamFactory1").
constexpr uint32_t kStreamFactory_CreateInputStream_Name = 1262762285;
// The 1087535427 value is based on sha256(salt + "StreamFactory2").
constexpr uint32_t kStreamFactory_AssociateInputAndOutputForAec_Name = 1087535427;
// The 1357699458 value is based on sha256(salt + "StreamFactory3").
constexpr uint32_t kStreamFactory_CreateOutputStream_Name = 1357699458;
// The 213472669 value is based on sha256(salt + "StreamFactory4").
constexpr uint32_t kStreamFactory_BindMuter_Name = 213472669;
// The 550563078 value is based on sha256(salt + "StreamFactory5").
constexpr uint32_t kStreamFactory_CreateLoopbackStream_Name = 550563078;

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
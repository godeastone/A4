// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace nacl {
namespace mojom {

namespace internal {


// The 362933980 value is based on sha256(salt + "NaClRendererHost1").
constexpr uint32_t kNaClRendererHost_ReportExitStatus_Name = 362933980;
// The 1575651096 value is based on sha256(salt + "NaClRendererHost2").
constexpr uint32_t kNaClRendererHost_ReportLoadStatus_Name = 1575651096;
// The 349979203 value is based on sha256(salt + "NaClRendererHost3").
constexpr uint32_t kNaClRendererHost_ProvideExitControl_Name = 349979203;

}  // namespace internal
}  // namespace mojom
}  // namespace nacl

#endif  // COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_MESSAGE_IDS_H_
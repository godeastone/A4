// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace font_service {
namespace mojom {

namespace internal {


// The 1212140759 value is based on sha256(salt + "FontService1").
constexpr uint32_t kFontService_MatchFamilyName_Name = 1212140759;
// The 1598123070 value is based on sha256(salt + "FontService2").
constexpr uint32_t kFontService_OpenStream_Name = 1598123070;

}  // namespace internal
}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
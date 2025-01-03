// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace translate {
namespace mojom {

namespace internal {


// The 192042607 value is based on sha256(salt + "Page1").
constexpr uint32_t kPage_Translate_Name = 192042607;
// The 1404621925 value is based on sha256(salt + "Page2").
constexpr uint32_t kPage_RevertTranslation_Name = 1404621925;
// The 914182580 value is based on sha256(salt + "ContentTranslateDriver1").
constexpr uint32_t kContentTranslateDriver_RegisterPage_Name = 914182580;

}  // namespace internal
}  // namespace mojom
}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_MESSAGE_IDS_H_
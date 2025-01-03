// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 600672110 value is based on sha256(salt + "TextSuggestionHost1").
constexpr uint32_t kTextSuggestionHost_StartSuggestionMenuTimer_Name = 600672110;
// The 1806605516 value is based on sha256(salt + "TextSuggestionHost2").
constexpr uint32_t kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name = 1806605516;
// The 1692361128 value is based on sha256(salt + "TextSuggestionHost3").
constexpr uint32_t kTextSuggestionHost_ShowTextSuggestionMenu_Name = 1692361128;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
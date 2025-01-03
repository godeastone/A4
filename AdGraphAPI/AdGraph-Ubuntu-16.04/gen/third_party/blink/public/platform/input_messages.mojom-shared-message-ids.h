// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 23722445 value is based on sha256(salt + "TextSuggestionBackend1").
constexpr uint32_t kTextSuggestionBackend_ApplySpellCheckSuggestion_Name = 23722445;
// The 1403303429 value is based on sha256(salt + "TextSuggestionBackend2").
constexpr uint32_t kTextSuggestionBackend_ApplyTextSuggestion_Name = 1403303429;
// The 930667482 value is based on sha256(salt + "TextSuggestionBackend3").
constexpr uint32_t kTextSuggestionBackend_DeleteActiveSuggestionRange_Name = 930667482;
// The 110163821 value is based on sha256(salt + "TextSuggestionBackend4").
constexpr uint32_t kTextSuggestionBackend_OnNewWordAddedToDictionary_Name = 110163821;
// The 1227316587 value is based on sha256(salt + "TextSuggestionBackend5").
constexpr uint32_t kTextSuggestionBackend_OnSuggestionMenuClosed_Name = 1227316587;
// The 87375026 value is based on sha256(salt + "TextSuggestionBackend6").
constexpr uint32_t kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name = 87375026;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_
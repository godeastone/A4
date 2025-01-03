// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace spellcheck {
namespace mojom {

namespace internal {


// The 1517847514 value is based on sha256(salt + "SpellChecker1").
constexpr uint32_t kSpellChecker_Initialize_Name = 1517847514;
// The 956619591 value is based on sha256(salt + "SpellChecker2").
constexpr uint32_t kSpellChecker_CustomDictionaryChanged_Name = 956619591;
// The 1995038150 value is based on sha256(salt + "SpellCheckHost1").
constexpr uint32_t kSpellCheckHost_RequestDictionary_Name = 1995038150;
// The 1122563452 value is based on sha256(salt + "SpellCheckHost2").
constexpr uint32_t kSpellCheckHost_NotifyChecked_Name = 1122563452;
// The 1806535480 value is based on sha256(salt + "SpellCheckHost3").
constexpr uint32_t kSpellCheckHost_CallSpellingService_Name = 1806535480;

}  // namespace internal
}  // namespace mojom
}  // namespace spellcheck

#endif  // COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_MESSAGE_IDS_H_
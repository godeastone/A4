// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1757485129 value is based on sha256(salt + "FindInPage1").
constexpr uint32_t kFindInPage_StopFinding_Name = 1757485129;
// The 1345545298 value is based on sha256(salt + "FindInPage2").
constexpr uint32_t kFindInPage_ClearActiveFindMatch_Name = 1345545298;
// The 737178442 value is based on sha256(salt + "FindInPage3").
constexpr uint32_t kFindInPage_GetNearestFindResult_Name = 737178442;
// The 1376483731 value is based on sha256(salt + "FindInPage4").
constexpr uint32_t kFindInPage_ActivateNearestFindResult_Name = 1376483731;
// The 608986599 value is based on sha256(salt + "FindInPage5").
constexpr uint32_t kFindInPage_FindMatchRects_Name = 608986599;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_
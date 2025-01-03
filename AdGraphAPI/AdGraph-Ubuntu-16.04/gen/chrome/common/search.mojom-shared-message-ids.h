// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SEARCH_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_SEARCH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 787459062 value is based on sha256(salt + "EmbeddedSearchConnector1").
constexpr uint32_t kEmbeddedSearchConnector_Connect_Name = 787459062;
// The 1898887574 value is based on sha256(salt + "EmbeddedSearch1").
constexpr uint32_t kEmbeddedSearch_FocusOmnibox_Name = 1898887574;
// The 1004716437 value is based on sha256(salt + "EmbeddedSearch2").
constexpr uint32_t kEmbeddedSearch_DeleteMostVisitedItem_Name = 1004716437;
// The 270488830 value is based on sha256(salt + "EmbeddedSearch3").
constexpr uint32_t kEmbeddedSearch_UndoAllMostVisitedDeletions_Name = 270488830;
// The 1324904752 value is based on sha256(salt + "EmbeddedSearch4").
constexpr uint32_t kEmbeddedSearch_UndoMostVisitedDeletion_Name = 1324904752;
// The 1320239266 value is based on sha256(salt + "EmbeddedSearch5").
constexpr uint32_t kEmbeddedSearch_LogEvent_Name = 1320239266;
// The 1186822663 value is based on sha256(salt + "EmbeddedSearch6").
constexpr uint32_t kEmbeddedSearch_LogMostVisitedImpression_Name = 1186822663;
// The 1567195507 value is based on sha256(salt + "EmbeddedSearch7").
constexpr uint32_t kEmbeddedSearch_LogMostVisitedNavigation_Name = 1567195507;
// The 383208194 value is based on sha256(salt + "EmbeddedSearch8").
constexpr uint32_t kEmbeddedSearch_PasteAndOpenDropdown_Name = 383208194;
// The 1214099244 value is based on sha256(salt + "EmbeddedSearch9").
constexpr uint32_t kEmbeddedSearch_HistorySyncCheck_Name = 1214099244;
// The 2110859048 value is based on sha256(salt + "EmbeddedSearch10").
constexpr uint32_t kEmbeddedSearch_ChromeIdentityCheck_Name = 2110859048;
// The 389359210 value is based on sha256(salt + "EmbeddedSearchClient1").
constexpr uint32_t kEmbeddedSearchClient_SetPageSequenceNumber_Name = 389359210;
// The 462021963 value is based on sha256(salt + "EmbeddedSearchClient2").
constexpr uint32_t kEmbeddedSearchClient_FocusChanged_Name = 462021963;
// The 2011725474 value is based on sha256(salt + "EmbeddedSearchClient3").
constexpr uint32_t kEmbeddedSearchClient_MostVisitedChanged_Name = 2011725474;
// The 885125893 value is based on sha256(salt + "EmbeddedSearchClient4").
constexpr uint32_t kEmbeddedSearchClient_SetInputInProgress_Name = 885125893;
// The 295623847 value is based on sha256(salt + "EmbeddedSearchClient5").
constexpr uint32_t kEmbeddedSearchClient_ThemeChanged_Name = 295623847;
// The 547449203 value is based on sha256(salt + "SearchBouncer1").
constexpr uint32_t kSearchBouncer_SetNewTabPageURL_Name = 547449203;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SEARCH_MOJOM_SHARED_MESSAGE_IDS_H_
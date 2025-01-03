// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1955363869 value is based on sha256(salt + "ProfileImportObserver1").
constexpr uint32_t kProfileImportObserver_OnImportStart_Name = 1955363869;
// The 1098536403 value is based on sha256(salt + "ProfileImportObserver2").
constexpr uint32_t kProfileImportObserver_OnImportFinished_Name = 1098536403;
// The 639160780 value is based on sha256(salt + "ProfileImportObserver3").
constexpr uint32_t kProfileImportObserver_OnImportItemStart_Name = 639160780;
// The 722098873 value is based on sha256(salt + "ProfileImportObserver4").
constexpr uint32_t kProfileImportObserver_OnImportItemFinished_Name = 722098873;
// The 935733647 value is based on sha256(salt + "ProfileImportObserver5").
constexpr uint32_t kProfileImportObserver_OnHistoryImportStart_Name = 935733647;
// The 289491 value is based on sha256(salt + "ProfileImportObserver6").
constexpr uint32_t kProfileImportObserver_OnHistoryImportGroup_Name = 289491;
// The 1745297488 value is based on sha256(salt + "ProfileImportObserver7").
constexpr uint32_t kProfileImportObserver_OnHomePageImportReady_Name = 1745297488;
// The 816560878 value is based on sha256(salt + "ProfileImportObserver8").
constexpr uint32_t kProfileImportObserver_OnBookmarksImportStart_Name = 816560878;
// The 1886737912 value is based on sha256(salt + "ProfileImportObserver9").
constexpr uint32_t kProfileImportObserver_OnBookmarksImportGroup_Name = 1886737912;
// The 440279245 value is based on sha256(salt + "ProfileImportObserver10").
constexpr uint32_t kProfileImportObserver_OnFaviconsImportStart_Name = 440279245;
// The 2085781832 value is based on sha256(salt + "ProfileImportObserver11").
constexpr uint32_t kProfileImportObserver_OnFaviconsImportGroup_Name = 2085781832;
// The 304891212 value is based on sha256(salt + "ProfileImportObserver12").
constexpr uint32_t kProfileImportObserver_OnPasswordFormImportReady_Name = 304891212;
// The 1061087619 value is based on sha256(salt + "ProfileImportObserver13").
constexpr uint32_t kProfileImportObserver_OnKeywordsImportReady_Name = 1061087619;
// The 1476128254 value is based on sha256(salt + "ProfileImportObserver14").
constexpr uint32_t kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name = 1476128254;
// The 1921583394 value is based on sha256(salt + "ProfileImportObserver15").
constexpr uint32_t kProfileImportObserver_OnAutofillFormDataImportStart_Name = 1921583394;
// The 1033752745 value is based on sha256(salt + "ProfileImportObserver16").
constexpr uint32_t kProfileImportObserver_OnAutofillFormDataImportGroup_Name = 1033752745;
// The 1805908159 value is based on sha256(salt + "ProfileImportObserver17").
constexpr uint32_t kProfileImportObserver_OnIE7PasswordReceived_Name = 1805908159;
// The 1123464407 value is based on sha256(salt + "ProfileImport1").
constexpr uint32_t kProfileImport_StartImport_Name = 1123464407;
// The 84160913 value is based on sha256(salt + "ProfileImport2").
constexpr uint32_t kProfileImport_CancelImport_Name = 84160913;
// The 397039980 value is based on sha256(salt + "ProfileImport3").
constexpr uint32_t kProfileImport_ReportImportItemFinished_Name = 397039980;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_
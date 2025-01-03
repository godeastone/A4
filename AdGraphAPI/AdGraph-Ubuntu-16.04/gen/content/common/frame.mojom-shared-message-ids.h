// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 292232516 value is based on sha256(salt + "Frame1").
constexpr uint32_t kFrame_GetInterfaceProvider_Name = 292232516;
// The 902892967 value is based on sha256(salt + "Frame2").
constexpr uint32_t kFrame_GetCanonicalUrlForSharing_Name = 902892967;
// The 310106685 value is based on sha256(salt + "FrameNavigationControl1").
constexpr uint32_t kFrameNavigationControl_CommitNavigation_Name = 310106685;
// The 269527215 value is based on sha256(salt + "FrameNavigationControl2").
constexpr uint32_t kFrameNavigationControl_CommitFailedNavigation_Name = 269527215;
// The 651697597 value is based on sha256(salt + "FrameNavigationControl3").
constexpr uint32_t kFrameNavigationControl_CommitSameDocumentNavigation_Name = 651697597;
// The 236299665 value is based on sha256(salt + "FrameNavigationControl4").
constexpr uint32_t kFrameNavigationControl_HandleRendererDebugURL_Name = 236299665;
// The 1547198475 value is based on sha256(salt + "FrameNavigationControl5").
constexpr uint32_t kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name = 1547198475;
// The 904928104 value is based on sha256(salt + "FrameBindingsControl1").
constexpr uint32_t kFrameBindingsControl_AllowBindings_Name = 904928104;
// The 269220622 value is based on sha256(salt + "FrameFactory1").
constexpr uint32_t kFrameFactory_CreateFrame_Name = 269220622;
// The 1669494500 value is based on sha256(salt + "FrameHost1").
constexpr uint32_t kFrameHost_CreateNewWindow_Name = 1669494500;
// The 1745885026 value is based on sha256(salt + "FrameHost2").
constexpr uint32_t kFrameHost_IssueKeepAliveHandle_Name = 1745885026;
// The 1815889953 value is based on sha256(salt + "FrameHost3").
constexpr uint32_t kFrameHost_DidCommitProvisionalLoad_Name = 1815889953;
// The 1005886657 value is based on sha256(salt + "FrameHost4").
constexpr uint32_t kFrameHost_DidCommitSameDocumentNavigation_Name = 1005886657;
// The 1090321985 value is based on sha256(salt + "FrameHost5").
constexpr uint32_t kFrameHost_BeginNavigation_Name = 1090321985;
// The 1173160704 value is based on sha256(salt + "FrameHost6").
constexpr uint32_t kFrameHost_SubresourceResponseStarted_Name = 1173160704;
// The 1901761499 value is based on sha256(salt + "FrameHost7").
constexpr uint32_t kFrameHost_ResourceLoadComplete_Name = 1901761499;
// The 1308060636 value is based on sha256(salt + "FrameHost8").
constexpr uint32_t kFrameHost_DidChangeName_Name = 1308060636;
// The 781121074 value is based on sha256(salt + "FrameHost9").
constexpr uint32_t kFrameHost_EnforceInsecureRequestPolicy_Name = 781121074;
// The 308644336 value is based on sha256(salt + "FrameHost10").
constexpr uint32_t kFrameHost_EnforceInsecureNavigationsSet_Name = 308644336;
// The 587224718 value is based on sha256(salt + "FrameHost11").
constexpr uint32_t kFrameHost_DidSetFramePolicyHeaders_Name = 587224718;
// The 1192139250 value is based on sha256(salt + "FrameHost12").
constexpr uint32_t kFrameHost_CancelInitialHistoryLoad_Name = 1192139250;
// The 2075232632 value is based on sha256(salt + "FrameHost13").
constexpr uint32_t kFrameHost_UpdateEncoding_Name = 2075232632;
// The 729546372 value is based on sha256(salt + "FrameHost14").
constexpr uint32_t kFrameHost_FrameSizeChanged_Name = 729546372;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_
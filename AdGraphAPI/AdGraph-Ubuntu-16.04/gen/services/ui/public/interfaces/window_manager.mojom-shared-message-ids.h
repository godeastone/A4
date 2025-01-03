// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 155966734 value is based on sha256(salt + "WindowManager1").
constexpr uint32_t kWindowManager_OnConnect_Name = 155966734;
// The 379262682 value is based on sha256(salt + "WindowManager2").
constexpr uint32_t kWindowManager_WmOnAcceleratedWidgetForDisplay_Name = 379262682;
// The 1371233460 value is based on sha256(salt + "WindowManager3").
constexpr uint32_t kWindowManager_WmNewDisplayAdded_Name = 1371233460;
// The 266024843 value is based on sha256(salt + "WindowManager4").
constexpr uint32_t kWindowManager_WmDisplayRemoved_Name = 266024843;
// The 1670869534 value is based on sha256(salt + "WindowManager5").
constexpr uint32_t kWindowManager_WmDisplayModified_Name = 1670869534;
// The 2075775565 value is based on sha256(salt + "WindowManager6").
constexpr uint32_t kWindowManager_WmSetBounds_Name = 2075775565;
// The 2137484337 value is based on sha256(salt + "WindowManager7").
constexpr uint32_t kWindowManager_WmSetProperty_Name = 2137484337;
// The 2116162797 value is based on sha256(salt + "WindowManager8").
constexpr uint32_t kWindowManager_WmSetModalType_Name = 2116162797;
// The 1183829530 value is based on sha256(salt + "WindowManager9").
constexpr uint32_t kWindowManager_WmSetCanFocus_Name = 1183829530;
// The 1090176416 value is based on sha256(salt + "WindowManager10").
constexpr uint32_t kWindowManager_WmCreateTopLevelWindow_Name = 1090176416;
// The 1644488597 value is based on sha256(salt + "WindowManager11").
constexpr uint32_t kWindowManager_WmClientJankinessChanged_Name = 1644488597;
// The 1723855485 value is based on sha256(salt + "WindowManager12").
constexpr uint32_t kWindowManager_WmBuildDragImage_Name = 1723855485;
// The 1798369334 value is based on sha256(salt + "WindowManager13").
constexpr uint32_t kWindowManager_WmMoveDragImage_Name = 1798369334;
// The 1995237306 value is based on sha256(salt + "WindowManager14").
constexpr uint32_t kWindowManager_WmDestroyDragImage_Name = 1995237306;
// The 1472516588 value is based on sha256(salt + "WindowManager15").
constexpr uint32_t kWindowManager_WmPerformMoveLoop_Name = 1472516588;
// The 1755456907 value is based on sha256(salt + "WindowManager16").
constexpr uint32_t kWindowManager_WmCancelMoveLoop_Name = 1755456907;
// The 2044599900 value is based on sha256(salt + "WindowManager17").
constexpr uint32_t kWindowManager_WmDeactivateWindow_Name = 2044599900;
// The 460550951 value is based on sha256(salt + "WindowManager18").
constexpr uint32_t kWindowManager_WmStackAbove_Name = 460550951;
// The 399100876 value is based on sha256(salt + "WindowManager19").
constexpr uint32_t kWindowManager_WmStackAtTop_Name = 399100876;
// The 2033494031 value is based on sha256(salt + "WindowManager20").
constexpr uint32_t kWindowManager_WmPerformWmAction_Name = 2033494031;
// The 1035909111 value is based on sha256(salt + "WindowManager21").
constexpr uint32_t kWindowManager_OnAccelerator_Name = 1035909111;
// The 318314671 value is based on sha256(salt + "WindowManager22").
constexpr uint32_t kWindowManager_OnCursorTouchVisibleChanged_Name = 318314671;
// The 94246619 value is based on sha256(salt + "WindowManager23").
constexpr uint32_t kWindowManager_OnEventBlockedByModalWindow_Name = 94246619;
// The 587269451 value is based on sha256(salt + "WindowManagerClient1").
constexpr uint32_t kWindowManagerClient_AddActivationParent_Name = 587269451;
// The 1977105230 value is based on sha256(salt + "WindowManagerClient2").
constexpr uint32_t kWindowManagerClient_RemoveActivationParent_Name = 1977105230;
// The 1519506693 value is based on sha256(salt + "WindowManagerClient3").
constexpr uint32_t kWindowManagerClient_SetExtendedHitRegionForChildren_Name = 1519506693;
// The 768212718 value is based on sha256(salt + "WindowManagerClient4").
constexpr uint32_t kWindowManagerClient_AddAccelerators_Name = 768212718;
// The 559329449 value is based on sha256(salt + "WindowManagerClient5").
constexpr uint32_t kWindowManagerClient_RemoveAccelerator_Name = 559329449;
// The 637403525 value is based on sha256(salt + "WindowManagerClient6").
constexpr uint32_t kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name = 637403525;
// The 394486537 value is based on sha256(salt + "WindowManagerClient7").
constexpr uint32_t kWindowManagerClient_SetDisplayRoot_Name = 394486537;
// The 1640783283 value is based on sha256(salt + "WindowManagerClient8").
constexpr uint32_t kWindowManagerClient_SetDisplayConfiguration_Name = 1640783283;
// The 767411020 value is based on sha256(salt + "WindowManagerClient9").
constexpr uint32_t kWindowManagerClient_SwapDisplayRoots_Name = 767411020;
// The 1063373745 value is based on sha256(salt + "WindowManagerClient10").
constexpr uint32_t kWindowManagerClient_SetBlockingContainers_Name = 1063373745;
// The 694829916 value is based on sha256(salt + "WindowManagerClient11").
constexpr uint32_t kWindowManagerClient_WmResponse_Name = 694829916;
// The 977822476 value is based on sha256(salt + "WindowManagerClient12").
constexpr uint32_t kWindowManagerClient_WmSetBoundsResponse_Name = 977822476;
// The 329889435 value is based on sha256(salt + "WindowManagerClient13").
constexpr uint32_t kWindowManagerClient_WmRequestClose_Name = 329889435;
// The 375345558 value is based on sha256(salt + "WindowManagerClient14").
constexpr uint32_t kWindowManagerClient_WmSetFrameDecorationValues_Name = 375345558;
// The 1364964034 value is based on sha256(salt + "WindowManagerClient15").
constexpr uint32_t kWindowManagerClient_WmSetNonClientCursor_Name = 1364964034;
// The 98126924 value is based on sha256(salt + "WindowManagerClient16").
constexpr uint32_t kWindowManagerClient_WmLockCursor_Name = 98126924;
// The 1935985294 value is based on sha256(salt + "WindowManagerClient17").
constexpr uint32_t kWindowManagerClient_WmUnlockCursor_Name = 1935985294;
// The 1700640294 value is based on sha256(salt + "WindowManagerClient18").
constexpr uint32_t kWindowManagerClient_WmSetCursorVisible_Name = 1700640294;
// The 305292746 value is based on sha256(salt + "WindowManagerClient19").
constexpr uint32_t kWindowManagerClient_WmSetCursorSize_Name = 305292746;
// The 745951893 value is based on sha256(salt + "WindowManagerClient20").
constexpr uint32_t kWindowManagerClient_WmSetGlobalOverrideCursor_Name = 745951893;
// The 1139329913 value is based on sha256(salt + "WindowManagerClient21").
constexpr uint32_t kWindowManagerClient_WmMoveCursorToDisplayLocation_Name = 1139329913;
// The 1387581665 value is based on sha256(salt + "WindowManagerClient22").
constexpr uint32_t kWindowManagerClient_WmConfineCursorToBounds_Name = 1387581665;
// The 1857444411 value is based on sha256(salt + "WindowManagerClient23").
constexpr uint32_t kWindowManagerClient_WmSetCursorTouchVisible_Name = 1857444411;
// The 57667451 value is based on sha256(salt + "WindowManagerClient24").
constexpr uint32_t kWindowManagerClient_OnWmCreatedTopLevelWindow_Name = 57667451;
// The 90379662 value is based on sha256(salt + "WindowManagerClient25").
constexpr uint32_t kWindowManagerClient_OnAcceleratorAck_Name = 90379662;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
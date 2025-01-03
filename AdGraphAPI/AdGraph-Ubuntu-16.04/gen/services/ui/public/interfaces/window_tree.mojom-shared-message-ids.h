// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 1994333779 value is based on sha256(salt + "WindowTree1").
constexpr uint32_t kWindowTree_NewWindow_Name = 1994333779;
// The 1789156343 value is based on sha256(salt + "WindowTree2").
constexpr uint32_t kWindowTree_NewTopLevelWindow_Name = 1789156343;
// The 989834069 value is based on sha256(salt + "WindowTree3").
constexpr uint32_t kWindowTree_DeleteWindow_Name = 989834069;
// The 1958871176 value is based on sha256(salt + "WindowTree4").
constexpr uint32_t kWindowTree_SetCapture_Name = 1958871176;
// The 1824496570 value is based on sha256(salt + "WindowTree5").
constexpr uint32_t kWindowTree_ReleaseCapture_Name = 1824496570;
// The 2127695326 value is based on sha256(salt + "WindowTree6").
constexpr uint32_t kWindowTree_StartPointerWatcher_Name = 2127695326;
// The 20251330 value is based on sha256(salt + "WindowTree7").
constexpr uint32_t kWindowTree_StopPointerWatcher_Name = 20251330;
// The 704498196 value is based on sha256(salt + "WindowTree8").
constexpr uint32_t kWindowTree_SetWindowBounds_Name = 704498196;
// The 2097120538 value is based on sha256(salt + "WindowTree9").
constexpr uint32_t kWindowTree_SetWindowTransform_Name = 2097120538;
// The 214880148 value is based on sha256(salt + "WindowTree10").
constexpr uint32_t kWindowTree_SetClientArea_Name = 214880148;
// The 276262855 value is based on sha256(salt + "WindowTree11").
constexpr uint32_t kWindowTree_SetHitTestMask_Name = 276262855;
// The 986599605 value is based on sha256(salt + "WindowTree12").
constexpr uint32_t kWindowTree_SetCanAcceptDrops_Name = 986599605;
// The 1146578910 value is based on sha256(salt + "WindowTree13").
constexpr uint32_t kWindowTree_SetWindowVisibility_Name = 1146578910;
// The 379275746 value is based on sha256(salt + "WindowTree14").
constexpr uint32_t kWindowTree_SetWindowProperty_Name = 379275746;
// The 1167076038 value is based on sha256(salt + "WindowTree15").
constexpr uint32_t kWindowTree_SetWindowOpacity_Name = 1167076038;
// The 2005988343 value is based on sha256(salt + "WindowTree16").
constexpr uint32_t kWindowTree_AttachCompositorFrameSink_Name = 2005988343;
// The 447434107 value is based on sha256(salt + "WindowTree17").
constexpr uint32_t kWindowTree_AddWindow_Name = 447434107;
// The 1992366073 value is based on sha256(salt + "WindowTree18").
constexpr uint32_t kWindowTree_RemoveWindowFromParent_Name = 1992366073;
// The 1736641104 value is based on sha256(salt + "WindowTree19").
constexpr uint32_t kWindowTree_AddTransientWindow_Name = 1736641104;
// The 2024183978 value is based on sha256(salt + "WindowTree20").
constexpr uint32_t kWindowTree_RemoveTransientWindowFromParent_Name = 2024183978;
// The 1132701893 value is based on sha256(salt + "WindowTree21").
constexpr uint32_t kWindowTree_SetModalType_Name = 1132701893;
// The 755240227 value is based on sha256(salt + "WindowTree22").
constexpr uint32_t kWindowTree_SetChildModalParent_Name = 755240227;
// The 595433771 value is based on sha256(salt + "WindowTree23").
constexpr uint32_t kWindowTree_ReorderWindow_Name = 595433771;
// The 488142079 value is based on sha256(salt + "WindowTree24").
constexpr uint32_t kWindowTree_GetWindowTree_Name = 488142079;
// The 372368081 value is based on sha256(salt + "WindowTree25").
constexpr uint32_t kWindowTree_Embed_Name = 372368081;
// The 1444982417 value is based on sha256(salt + "WindowTree26").
constexpr uint32_t kWindowTree_ScheduleEmbed_Name = 1444982417;
// The 1697677311 value is based on sha256(salt + "WindowTree27").
constexpr uint32_t kWindowTree_ScheduleEmbedForExistingClient_Name = 1697677311;
// The 663590371 value is based on sha256(salt + "WindowTree28").
constexpr uint32_t kWindowTree_EmbedUsingToken_Name = 663590371;
// The 2058096368 value is based on sha256(salt + "WindowTree29").
constexpr uint32_t kWindowTree_SetFocus_Name = 2058096368;
// The 1791322686 value is based on sha256(salt + "WindowTree30").
constexpr uint32_t kWindowTree_SetCanFocus_Name = 1791322686;
// The 1347266856 value is based on sha256(salt + "WindowTree31").
constexpr uint32_t kWindowTree_SetCursor_Name = 1347266856;
// The 1513951275 value is based on sha256(salt + "WindowTree32").
constexpr uint32_t kWindowTree_SetWindowTextInputState_Name = 1513951275;
// The 2135014271 value is based on sha256(salt + "WindowTree33").
constexpr uint32_t kWindowTree_SetImeVisibility_Name = 2135014271;
// The 926109856 value is based on sha256(salt + "WindowTree34").
constexpr uint32_t kWindowTree_SetEventTargetingPolicy_Name = 926109856;
// The 852572736 value is based on sha256(salt + "WindowTree35").
constexpr uint32_t kWindowTree_OnWindowInputEventAck_Name = 852572736;
// The 505375610 value is based on sha256(salt + "WindowTree36").
constexpr uint32_t kWindowTree_DeactivateWindow_Name = 505375610;
// The 1109802999 value is based on sha256(salt + "WindowTree37").
constexpr uint32_t kWindowTree_StackAbove_Name = 1109802999;
// The 1793349551 value is based on sha256(salt + "WindowTree38").
constexpr uint32_t kWindowTree_StackAtTop_Name = 1793349551;
// The 951863471 value is based on sha256(salt + "WindowTree39").
constexpr uint32_t kWindowTree_PerformWmAction_Name = 951863471;
// The 804610480 value is based on sha256(salt + "WindowTree40").
constexpr uint32_t kWindowTree_GetWindowManagerClient_Name = 804610480;
// The 520938744 value is based on sha256(salt + "WindowTree41").
constexpr uint32_t kWindowTree_GetCursorLocationMemory_Name = 520938744;
// The 1021528674 value is based on sha256(salt + "WindowTree42").
constexpr uint32_t kWindowTree_PerformWindowMove_Name = 1021528674;
// The 1619228194 value is based on sha256(salt + "WindowTree43").
constexpr uint32_t kWindowTree_CancelWindowMove_Name = 1619228194;
// The 14490504 value is based on sha256(salt + "WindowTree44").
constexpr uint32_t kWindowTree_PerformDragDrop_Name = 14490504;
// The 21413638 value is based on sha256(salt + "WindowTree45").
constexpr uint32_t kWindowTree_CancelDragDrop_Name = 21413638;
// The 1469061151 value is based on sha256(salt + "WindowTreeClient1").
constexpr uint32_t kWindowTreeClient_OnEmbed_Name = 1469061151;
// The 995414148 value is based on sha256(salt + "WindowTreeClient2").
constexpr uint32_t kWindowTreeClient_OnEmbedFromToken_Name = 995414148;
// The 1366460383 value is based on sha256(salt + "WindowTreeClient3").
constexpr uint32_t kWindowTreeClient_OnEmbeddedAppDisconnected_Name = 1366460383;
// The 1547889806 value is based on sha256(salt + "WindowTreeClient4").
constexpr uint32_t kWindowTreeClient_OnUnembed_Name = 1547889806;
// The 2103095829 value is based on sha256(salt + "WindowTreeClient5").
constexpr uint32_t kWindowTreeClient_OnCaptureChanged_Name = 2103095829;
// The 1728255390 value is based on sha256(salt + "WindowTreeClient6").
constexpr uint32_t kWindowTreeClient_OnFrameSinkIdAllocated_Name = 1728255390;
// The 1140167998 value is based on sha256(salt + "WindowTreeClient7").
constexpr uint32_t kWindowTreeClient_OnTopLevelCreated_Name = 1140167998;
// The 815066204 value is based on sha256(salt + "WindowTreeClient8").
constexpr uint32_t kWindowTreeClient_OnWindowBoundsChanged_Name = 815066204;
// The 917731724 value is based on sha256(salt + "WindowTreeClient9").
constexpr uint32_t kWindowTreeClient_OnWindowTransformChanged_Name = 917731724;
// The 1037290067 value is based on sha256(salt + "WindowTreeClient10").
constexpr uint32_t kWindowTreeClient_OnClientAreaChanged_Name = 1037290067;
// The 1533758386 value is based on sha256(salt + "WindowTreeClient11").
constexpr uint32_t kWindowTreeClient_OnTransientWindowAdded_Name = 1533758386;
// The 1765708824 value is based on sha256(salt + "WindowTreeClient12").
constexpr uint32_t kWindowTreeClient_OnTransientWindowRemoved_Name = 1765708824;
// The 124324032 value is based on sha256(salt + "WindowTreeClient13").
constexpr uint32_t kWindowTreeClient_OnWindowHierarchyChanged_Name = 124324032;
// The 532981894 value is based on sha256(salt + "WindowTreeClient14").
constexpr uint32_t kWindowTreeClient_OnWindowReordered_Name = 532981894;
// The 161525347 value is based on sha256(salt + "WindowTreeClient15").
constexpr uint32_t kWindowTreeClient_OnWindowDeleted_Name = 161525347;
// The 2025779997 value is based on sha256(salt + "WindowTreeClient16").
constexpr uint32_t kWindowTreeClient_OnWindowVisibilityChanged_Name = 2025779997;
// The 1529759221 value is based on sha256(salt + "WindowTreeClient17").
constexpr uint32_t kWindowTreeClient_OnWindowOpacityChanged_Name = 1529759221;
// The 1388629881 value is based on sha256(salt + "WindowTreeClient18").
constexpr uint32_t kWindowTreeClient_OnWindowParentDrawnStateChanged_Name = 1388629881;
// The 1137560291 value is based on sha256(salt + "WindowTreeClient19").
constexpr uint32_t kWindowTreeClient_OnWindowSharedPropertyChanged_Name = 1137560291;
// The 2114300350 value is based on sha256(salt + "WindowTreeClient20").
constexpr uint32_t kWindowTreeClient_OnWindowInputEvent_Name = 2114300350;
// The 1648719096 value is based on sha256(salt + "WindowTreeClient21").
constexpr uint32_t kWindowTreeClient_OnPointerEventObserved_Name = 1648719096;
// The 1967451596 value is based on sha256(salt + "WindowTreeClient22").
constexpr uint32_t kWindowTreeClient_OnWindowFocused_Name = 1967451596;
// The 1092611961 value is based on sha256(salt + "WindowTreeClient23").
constexpr uint32_t kWindowTreeClient_OnWindowCursorChanged_Name = 1092611961;
// The 1393782147 value is based on sha256(salt + "WindowTreeClient24").
constexpr uint32_t kWindowTreeClient_OnWindowSurfaceChanged_Name = 1393782147;
// The 1514604938 value is based on sha256(salt + "WindowTreeClient25").
constexpr uint32_t kWindowTreeClient_OnDragDropStart_Name = 1514604938;
// The 1215735539 value is based on sha256(salt + "WindowTreeClient26").
constexpr uint32_t kWindowTreeClient_OnDragEnter_Name = 1215735539;
// The 744914662 value is based on sha256(salt + "WindowTreeClient27").
constexpr uint32_t kWindowTreeClient_OnDragOver_Name = 744914662;
// The 1140309394 value is based on sha256(salt + "WindowTreeClient28").
constexpr uint32_t kWindowTreeClient_OnDragLeave_Name = 1140309394;
// The 1220058214 value is based on sha256(salt + "WindowTreeClient29").
constexpr uint32_t kWindowTreeClient_OnCompleteDrop_Name = 1220058214;
// The 1211249454 value is based on sha256(salt + "WindowTreeClient30").
constexpr uint32_t kWindowTreeClient_OnPerformDragDropCompleted_Name = 1211249454;
// The 1814012005 value is based on sha256(salt + "WindowTreeClient31").
constexpr uint32_t kWindowTreeClient_OnDragDropDone_Name = 1814012005;
// The 1233089720 value is based on sha256(salt + "WindowTreeClient32").
constexpr uint32_t kWindowTreeClient_OnChangeCompleted_Name = 1233089720;
// The 234122451 value is based on sha256(salt + "WindowTreeClient33").
constexpr uint32_t kWindowTreeClient_RequestClose_Name = 234122451;
// The 613043260 value is based on sha256(salt + "WindowTreeClient34").
constexpr uint32_t kWindowTreeClient_GetWindowManager_Name = 613043260;
// The 1801904330 value is based on sha256(salt + "WindowTreeFactory1").
constexpr uint32_t kWindowTreeFactory_CreateWindowTree_Name = 1801904330;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_
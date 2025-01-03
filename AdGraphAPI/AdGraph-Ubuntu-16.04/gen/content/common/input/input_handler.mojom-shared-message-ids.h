// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1363612090 value is based on sha256(salt + "WidgetInputHandlerHost1").
constexpr uint32_t kWidgetInputHandlerHost_CancelTouchTimeout_Name = 1363612090;
// The 1855078617 value is based on sha256(salt + "WidgetInputHandlerHost2").
constexpr uint32_t kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name = 1855078617;
// The 1120071619 value is based on sha256(salt + "WidgetInputHandlerHost3").
constexpr uint32_t kWidgetInputHandlerHost_DidOverscroll_Name = 1120071619;
// The 481167471 value is based on sha256(salt + "WidgetInputHandlerHost4").
constexpr uint32_t kWidgetInputHandlerHost_DidStopFlinging_Name = 481167471;
// The 374382240 value is based on sha256(salt + "WidgetInputHandlerHost5").
constexpr uint32_t kWidgetInputHandlerHost_DidStartScrollingViewport_Name = 374382240;
// The 101200975 value is based on sha256(salt + "WidgetInputHandlerHost6").
constexpr uint32_t kWidgetInputHandlerHost_ImeCancelComposition_Name = 101200975;
// The 1191434960 value is based on sha256(salt + "WidgetInputHandlerHost7").
constexpr uint32_t kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name = 1191434960;
// The 344833781 value is based on sha256(salt + "WidgetInputHandler1").
constexpr uint32_t kWidgetInputHandler_SetFocus_Name = 344833781;
// The 576805990 value is based on sha256(salt + "WidgetInputHandler2").
constexpr uint32_t kWidgetInputHandler_MouseCaptureLost_Name = 576805990;
// The 1636237917 value is based on sha256(salt + "WidgetInputHandler3").
constexpr uint32_t kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name = 1636237917;
// The 292536066 value is based on sha256(salt + "WidgetInputHandler4").
constexpr uint32_t kWidgetInputHandler_CursorVisibilityChanged_Name = 292536066;
// The 746573975 value is based on sha256(salt + "WidgetInputHandler5").
constexpr uint32_t kWidgetInputHandler_ImeSetComposition_Name = 746573975;
// The 1640565420 value is based on sha256(salt + "WidgetInputHandler6").
constexpr uint32_t kWidgetInputHandler_ImeCommitText_Name = 1640565420;
// The 1317839388 value is based on sha256(salt + "WidgetInputHandler7").
constexpr uint32_t kWidgetInputHandler_ImeFinishComposingText_Name = 1317839388;
// The 232750075 value is based on sha256(salt + "WidgetInputHandler8").
constexpr uint32_t kWidgetInputHandler_RequestTextInputStateUpdate_Name = 232750075;
// The 1310987914 value is based on sha256(salt + "WidgetInputHandler9").
constexpr uint32_t kWidgetInputHandler_RequestCompositionUpdates_Name = 1310987914;
// The 152073011 value is based on sha256(salt + "WidgetInputHandler10").
constexpr uint32_t kWidgetInputHandler_DispatchEvent_Name = 152073011;
// The 946082215 value is based on sha256(salt + "WidgetInputHandler11").
constexpr uint32_t kWidgetInputHandler_DispatchNonBlockingEvent_Name = 946082215;
// The 508453052 value is based on sha256(salt + "WidgetInputHandler12").
constexpr uint32_t kWidgetInputHandler_AttachSynchronousCompositor_Name = 508453052;
// The 1905843189 value is based on sha256(salt + "FrameInputHandler1").
constexpr uint32_t kFrameInputHandler_SetCompositionFromExistingText_Name = 1905843189;
// The 1319472820 value is based on sha256(salt + "FrameInputHandler2").
constexpr uint32_t kFrameInputHandler_ExtendSelectionAndDelete_Name = 1319472820;
// The 188948026 value is based on sha256(salt + "FrameInputHandler3").
constexpr uint32_t kFrameInputHandler_DeleteSurroundingText_Name = 188948026;
// The 1284099676 value is based on sha256(salt + "FrameInputHandler4").
constexpr uint32_t kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name = 1284099676;
// The 223880070 value is based on sha256(salt + "FrameInputHandler5").
constexpr uint32_t kFrameInputHandler_SetEditableSelectionOffsets_Name = 223880070;
// The 409570272 value is based on sha256(salt + "FrameInputHandler6").
constexpr uint32_t kFrameInputHandler_ExecuteEditCommand_Name = 409570272;
// The 289977356 value is based on sha256(salt + "FrameInputHandler7").
constexpr uint32_t kFrameInputHandler_Undo_Name = 289977356;
// The 1413275758 value is based on sha256(salt + "FrameInputHandler8").
constexpr uint32_t kFrameInputHandler_Redo_Name = 1413275758;
// The 2026260662 value is based on sha256(salt + "FrameInputHandler9").
constexpr uint32_t kFrameInputHandler_Cut_Name = 2026260662;
// The 2075016960 value is based on sha256(salt + "FrameInputHandler10").
constexpr uint32_t kFrameInputHandler_Copy_Name = 2075016960;
// The 560922131 value is based on sha256(salt + "FrameInputHandler11").
constexpr uint32_t kFrameInputHandler_CopyToFindPboard_Name = 560922131;
// The 1601395863 value is based on sha256(salt + "FrameInputHandler12").
constexpr uint32_t kFrameInputHandler_Paste_Name = 1601395863;
// The 1183160414 value is based on sha256(salt + "FrameInputHandler13").
constexpr uint32_t kFrameInputHandler_PasteAndMatchStyle_Name = 1183160414;
// The 1464345136 value is based on sha256(salt + "FrameInputHandler14").
constexpr uint32_t kFrameInputHandler_Delete_Name = 1464345136;
// The 564082965 value is based on sha256(salt + "FrameInputHandler15").
constexpr uint32_t kFrameInputHandler_SelectAll_Name = 564082965;
// The 584820430 value is based on sha256(salt + "FrameInputHandler16").
constexpr uint32_t kFrameInputHandler_CollapseSelection_Name = 584820430;
// The 58866812 value is based on sha256(salt + "FrameInputHandler17").
constexpr uint32_t kFrameInputHandler_Replace_Name = 58866812;
// The 885174488 value is based on sha256(salt + "FrameInputHandler18").
constexpr uint32_t kFrameInputHandler_ReplaceMisspelling_Name = 885174488;
// The 849912490 value is based on sha256(salt + "FrameInputHandler19").
constexpr uint32_t kFrameInputHandler_SelectRange_Name = 849912490;
// The 1675633658 value is based on sha256(salt + "FrameInputHandler20").
constexpr uint32_t kFrameInputHandler_AdjustSelectionByCharacterOffset_Name = 1675633658;
// The 752469135 value is based on sha256(salt + "FrameInputHandler21").
constexpr uint32_t kFrameInputHandler_MoveRangeSelectionExtent_Name = 752469135;
// The 783660211 value is based on sha256(salt + "FrameInputHandler22").
constexpr uint32_t kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name = 783660211;
// The 360191822 value is based on sha256(salt + "FrameInputHandler23").
constexpr uint32_t kFrameInputHandler_MoveCaret_Name = 360191822;
// The 656937302 value is based on sha256(salt + "FrameInputHandler24").
constexpr uint32_t kFrameInputHandler_GetWidgetInputHandler_Name = 656937302;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
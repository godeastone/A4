// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.WidgetInputHandlerHostPtr = class {

  /**
   */
   cancelTouchTimeout() {}
  /**
   * @param { !content.mojom.TouchAction } touchAction
   * @param { !number } uniqueTouchEventId
   * @param { !content.mojom.InputEventAckState } state
   */
   setWhiteListedTouchAction(touchAction, uniqueTouchEventId, state) {}
  /**
   * @param { !content.mojom.DidOverscrollParams } params
   */
   didOverscroll(params) {}
  /**
   */
   didStopFlinging() {}
  /**
   */
   didStartScrollingViewport() {}
  /**
   */
   imeCancelComposition() {}
  /**
   * @param { !gfx.mojom.Range } range
   * @param { !Array<gfx.mojom.Rect> } bounds
   */
   imeCompositionRangeChanged(range, bounds) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.WidgetInputHandlerHost;
/** @implements {mojo.InterfacePtr} */
content.mojom.WidgetInputHandlerPtr = class {

  /**
   * @param { !boolean } focused
   */
   setFocus(focused) {}
  /**
   */
   mouseCaptureLost() {}
  /**
   * @param { !Array<content.mojom.EditCommand> } commands
   */
   setEditCommandsForNextKeyEvent(commands) {}
  /**
   * @param { !boolean } visible
   */
   cursorVisibilityChanged(visible) {}
  /**
   * @param { !mojoBase.mojom.String16 } text
   * @param { !Array<ui.mojom.ImeTextSpan> } imeTextSpans
   * @param { !gfx.mojom.Range } range
   * @param { !number } start
   * @param { !number } end
   */
   imeSetComposition(text, imeTextSpans, range, start, end) {}
  /**
   * @param { !mojoBase.mojom.String16 } text
   * @param { !Array<ui.mojom.ImeTextSpan> } imeTextSpans
   * @param { !gfx.mojom.Range } range
   * @param { !number } relativeCursorPosition
   */
   imeCommitText(text, imeTextSpans, range, relativeCursorPosition) {}
  /**
   * @param { !boolean } keepSelection
   */
   imeFinishComposingText(keepSelection) {}
  /**
   */
   requestTextInputStateUpdate() {}
  /**
   * @param { !boolean } immediateRequest
   * @param { !boolean } monitorRequest
   */
   requestCompositionUpdates(immediateRequest, monitorRequest) {}
  /**
   * @param { !content.mojom.Event } event
   * @return {Promise}
   */
   dispatchEvent(event) {}
  /**
   * @param { !content.mojom.Event } event
   */
   dispatchNonBlockingEvent(event) {}
  /**
   * @param { !content.mojom.SynchronousCompositorControlHostPtr } controlHost
   * @param { !mojo.AssociatedInterfacePtrInfo } host
   * @param { !mojo.AssociatedInterfaceRequest } compositorRequest
   */
   attachSynchronousCompositor(controlHost, host, compositorRequest) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.WidgetInputHandler;
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameInputHandlerPtr = class {

  /**
   * @param { !number } start
   * @param { !number } end
   * @param { !Array<ui.mojom.ImeTextSpan> } imeTextSpans
   */
   setCompositionFromExistingText(start, end, imeTextSpans) {}
  /**
   * @param { !number } before
   * @param { !number } after
   */
   extendSelectionAndDelete(before, after) {}
  /**
   * @param { !number } before
   * @param { !number } after
   */
   deleteSurroundingText(before, after) {}
  /**
   * @param { !number } before
   * @param { !number } after
   */
   deleteSurroundingTextInCodePoints(before, after) {}
  /**
   * @param { !number } start
   * @param { !number } end
   */
   setEditableSelectionOffsets(start, end) {}
  /**
   * @param { !string } command
   * @param { mojoBase.mojom.String16 } value
   */
   executeEditCommand(command, value) {}
  /**
   */
   undo() {}
  /**
   */
   redo() {}
  /**
   */
   cut() {}
  /**
   */
   copy() {}
  /**
   */
   copyToFindPboard() {}
  /**
   */
   paste() {}
  /**
   */
   pasteAndMatchStyle() {}
  /**
   */
   delete() {}
  /**
   */
   selectAll() {}
  /**
   */
   collapseSelection() {}
  /**
   * @param { !mojoBase.mojom.String16 } word
   */
   replace(word) {}
  /**
   * @param { !mojoBase.mojom.String16 } word
   */
   replaceMisspelling(word) {}
  /**
   * @param { !gfx.mojom.Point } base
   * @param { !gfx.mojom.Point } extent
   */
   selectRange(base, extent) {}
  /**
   * @param { !number } start
   * @param { !number } end
   * @param { !blink.mojom.SelectionMenuBehavior } behavior
   */
   adjustSelectionByCharacterOffset(start, end, behavior) {}
  /**
   * @param { !gfx.mojom.Point } extent
   */
   moveRangeSelectionExtent(extent) {}
  /**
   * @param { !gfx.mojom.Rect } rect
   */
   scrollFocusedEditableNodeIntoRect(rect) {}
  /**
   * @param { !gfx.mojom.Point } point
   */
   moveCaret(point) {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } interfaceRequest
   * @param { !content.mojom.WidgetInputHandlerHostPtr } host
   */
   getWidgetInputHandler(interfaceRequest, host) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameInputHandler;
content.mojom.KeyData = class {
  constructor() {
    /** @type { !number } */
    this.domKey;
    /** @type { !number } */
    this.domCode;
    /** @type { !number } */
    this.windowsKeyCode;
    /** @type { !number } */
    this.nativeKeyCode;
    /** @type { !boolean } */
    this.isSystemKey;
    /** @type { !boolean } */
    this.isBrowserShortcut;
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
    /** @type { !mojoBase.mojom.String16 } */
    this.unmodifiedText;
  }
};
content.mojom.PointerData = class {
  constructor() {
    /** @type { !number } */
    this.pointerId;
    /** @type { !number } */
    this.force;
    /** @type { !number } */
    this.tiltX;
    /** @type { !number } */
    this.tiltY;
    /** @type { !number } */
    this.tangentialPressure;
    /** @type { !number } */
    this.twist;
    /** @type { !content.mojom.Button } */
    this.button;
    /** @type { !content.mojom.PointerType } */
    this.pointerType;
    /** @type { !number } */
    this.movementX;
    /** @type { !number } */
    this.movementY;
    /** @type { !gfx.mojom.PointF } */
    this.widgetPosition;
    /** @type { !gfx.mojom.PointF } */
    this.screenPosition;
    /** @type { content.mojom.MouseData } */
    this.mouseData;
  }
};
content.mojom.WheelData = class {
  constructor() {
    /** @type { !number } */
    this.deltaX;
    /** @type { !number } */
    this.deltaY;
    /** @type { !number } */
    this.wheelTicksX;
    /** @type { !number } */
    this.wheelTicksY;
    /** @type { !number } */
    this.accelerationRatioX;
    /** @type { !number } */
    this.accelerationRatioY;
    /** @type { !number } */
    this.resendingPluginId;
    /** @type { !number } */
    this.phase;
    /** @type { !number } */
    this.momentumPhase;
    /** @type { !boolean } */
    this.scrollByPage;
    /** @type { !boolean } */
    this.hasPreciseScrollingDeltas;
    /** @type { !content.mojom.Cancelability } */
    this.cancelable;
  }
};
content.mojom.MouseData = class {
  constructor() {
    /** @type { !number } */
    this.clickCount;
    /** @type { content.mojom.WheelData } */
    this.wheelData;
  }
};
content.mojom.ScrollUpdate = class {
  constructor() {
    /** @type { !number } */
    this.velocityX;
    /** @type { !number } */
    this.velocityY;
    /** @type { !boolean } */
    this.previousUpdateInSequencePrevented;
  }
};
content.mojom.ScrollData = class {
  constructor() {
    /** @type { !number } */
    this.deltaX;
    /** @type { !number } */
    this.deltaY;
    /** @type { !content.mojom.ScrollUnits } */
    this.deltaUnits;
    /** @type { !boolean } */
    this.targetViewport;
    /** @type { !boolean } */
    this.synthetic;
    /** @type { !content.mojom.InertialPhaseState } */
    this.inertialPhase;
    /** @type { !number } */
    this.pointerCount;
    /** @type { content.mojom.ScrollUpdate } */
    this.updateDetails;
  }
};
content.mojom.PinchData = class {
  constructor() {
    /** @type { !boolean } */
    this.zoomDisabled;
    /** @type { !number } */
    this.scale;
  }
};
content.mojom.FlingData = class {
  constructor() {
    /** @type { !number } */
    this.velocityX;
    /** @type { !number } */
    this.velocityY;
    /** @type { !boolean } */
    this.targetViewport;
    /** @type { !boolean } */
    this.preventBoosting;
  }
};
content.mojom.TapData = class {
  constructor() {
    /** @type { !number } */
    this.tapCount;
  }
};
content.mojom.GestureData = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.screenPosition;
    /** @type { !gfx.mojom.PointF } */
    this.widgetPosition;
    /** @type { !content.mojom.GestureDevice } */
    this.sourceDevice;
    /** @type { !boolean } */
    this.isSourceTouchEventSetNonBlocking;
    /** @type { !content.mojom.PointerType } */
    this.primaryPointerType;
    /** @type { !number } */
    this.uniqueTouchEventId;
    /** @type { !number } */
    this.resendingPluginId;
    /** @type { gfx.mojom.Size } */
    this.contactSize;
    /** @type { content.mojom.ScrollData } */
    this.scrollData;
    /** @type { content.mojom.PinchData } */
    this.pinchData;
    /** @type { content.mojom.TapData } */
    this.tapData;
    /** @type { content.mojom.FlingData } */
    this.flingData;
  }
};
content.mojom.TouchPoint = class {
  constructor() {
    /** @type { !content.mojom.TouchState } */
    this.state;
    /** @type { !number } */
    this.radiusX;
    /** @type { !number } */
    this.radiusY;
    /** @type { !number } */
    this.rotationAngle;
    /** @type { !content.mojom.PointerData } */
    this.pointerData;
  }
};
content.mojom.TouchData = class {
  constructor() {
    /** @type { !content.mojom.Cancelability } */
    this.cancelable;
    /** @type { !boolean } */
    this.movedBeyondSlopRegion;
    /** @type { !boolean } */
    this.touchStartOrFirstMove;
    /** @type { !boolean } */
    this.hovering;
    /** @type { !number } */
    this.uniqueTouchEventId;
    /** @type { !Array<content.mojom.TouchPoint> } */
    this.touches;
  }
};
content.mojom.Event = class {
  constructor() {
    /** @type { !content.mojom.EventType } */
    this.type;
    /** @type { !number } */
    this.modifiers;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
    /** @type { !ui.mojom.LatencyInfo } */
    this.latency;
    /** @type { content.mojom.KeyData } */
    this.keyData;
    /** @type { content.mojom.PointerData } */
    this.pointerData;
    /** @type { content.mojom.GestureData } */
    this.gestureData;
    /** @type { content.mojom.TouchData } */
    this.touchData;
  }
};
content.mojom.TouchActionOptional = class {
  constructor() {
    /** @type { !content.mojom.TouchAction } */
    this.touchAction;
  }
};
content.mojom.WidgetInputHandlerHost_CancelTouchTimeout_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandlerHost_SetWhiteListedTouchAction_Params = class {
  constructor() {
    /** @type { !content.mojom.TouchAction } */
    this.touchAction;
    /** @type { !number } */
    this.uniqueTouchEventId;
    /** @type { !content.mojom.InputEventAckState } */
    this.state;
  }
};
content.mojom.WidgetInputHandlerHost_DidOverscroll_Params = class {
  constructor() {
    /** @type { !content.mojom.DidOverscrollParams } */
    this.params;
  }
};
content.mojom.WidgetInputHandlerHost_DidStopFlinging_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandlerHost_DidStartScrollingViewport_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandlerHost_ImeCancelComposition_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandlerHost_ImeCompositionRangeChanged_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Range } */
    this.range;
    /** @type { !Array<gfx.mojom.Rect> } */
    this.bounds;
  }
};
content.mojom.WidgetInputHandler_SetFocus_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.focused;
  }
};
content.mojom.WidgetInputHandler_MouseCaptureLost_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params = class {
  constructor() {
    /** @type { !Array<content.mojom.EditCommand> } */
    this.commands;
  }
};
content.mojom.WidgetInputHandler_CursorVisibilityChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.visible;
  }
};
content.mojom.WidgetInputHandler_ImeSetComposition_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
    /** @type { !Array<ui.mojom.ImeTextSpan> } */
    this.imeTextSpans;
    /** @type { !gfx.mojom.Range } */
    this.range;
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
  }
};
content.mojom.WidgetInputHandler_ImeCommitText_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
    /** @type { !Array<ui.mojom.ImeTextSpan> } */
    this.imeTextSpans;
    /** @type { !gfx.mojom.Range } */
    this.range;
    /** @type { !number } */
    this.relativeCursorPosition;
  }
};
content.mojom.WidgetInputHandler_ImeFinishComposingText_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.keepSelection;
  }
};
content.mojom.WidgetInputHandler_RequestTextInputStateUpdate_Params = class {
  constructor() {
  }
};
content.mojom.WidgetInputHandler_RequestCompositionUpdates_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.immediateRequest;
    /** @type { !boolean } */
    this.monitorRequest;
  }
};
content.mojom.WidgetInputHandler_DispatchEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.Event } */
    this.event;
  }
};
content.mojom.WidgetInputHandler_DispatchEvent_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.InputEventAckSource } */
    this.source;
    /** @type { !content.mojom.InputEventAckState } */
    this.state;
    /** @type { !ui.mojom.LatencyInfo } */
    this.updatedLatency;
    /** @type { content.mojom.DidOverscrollParams } */
    this.overscroll;
    /** @type { content.mojom.TouchActionOptional } */
    this.touchAction;
  }
};
content.mojom.WidgetInputHandler_DispatchNonBlockingEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.Event } */
    this.event;
  }
};
content.mojom.WidgetInputHandler_AttachSynchronousCompositor_Params = class {
  constructor() {
    /** @type { !content.mojom.SynchronousCompositorControlHostPtr } */
    this.controlHost;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.host;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.compositorRequest;
  }
};
content.mojom.FrameInputHandler_SetCompositionFromExistingText_Params = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
    /** @type { !Array<ui.mojom.ImeTextSpan> } */
    this.imeTextSpans;
  }
};
content.mojom.FrameInputHandler_ExtendSelectionAndDelete_Params = class {
  constructor() {
    /** @type { !number } */
    this.before;
    /** @type { !number } */
    this.after;
  }
};
content.mojom.FrameInputHandler_DeleteSurroundingText_Params = class {
  constructor() {
    /** @type { !number } */
    this.before;
    /** @type { !number } */
    this.after;
  }
};
content.mojom.FrameInputHandler_DeleteSurroundingTextInCodePoints_Params = class {
  constructor() {
    /** @type { !number } */
    this.before;
    /** @type { !number } */
    this.after;
  }
};
content.mojom.FrameInputHandler_SetEditableSelectionOffsets_Params = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
  }
};
content.mojom.FrameInputHandler_ExecuteEditCommand_Params = class {
  constructor() {
    /** @type { !string } */
    this.command;
    /** @type { mojoBase.mojom.String16 } */
    this.value;
  }
};
content.mojom.FrameInputHandler_Undo_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Redo_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Cut_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Copy_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_CopyToFindPboard_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Paste_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_PasteAndMatchStyle_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Delete_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_SelectAll_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_CollapseSelection_Params = class {
  constructor() {
  }
};
content.mojom.FrameInputHandler_Replace_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.word;
  }
};
content.mojom.FrameInputHandler_ReplaceMisspelling_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.word;
  }
};
content.mojom.FrameInputHandler_SelectRange_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.base;
    /** @type { !gfx.mojom.Point } */
    this.extent;
  }
};
content.mojom.FrameInputHandler_AdjustSelectionByCharacterOffset_Params = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
    /** @type { !blink.mojom.SelectionMenuBehavior } */
    this.behavior;
  }
};
content.mojom.FrameInputHandler_MoveRangeSelectionExtent_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.extent;
  }
};
content.mojom.FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.rect;
  }
};
content.mojom.FrameInputHandler_MoveCaret_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.point;
  }
};
content.mojom.FrameInputHandler_GetWidgetInputHandler_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.interfaceRequest;
    /** @type { !content.mojom.WidgetInputHandlerHostPtr } */
    this.host;
  }
};

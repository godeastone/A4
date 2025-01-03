// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowManagerPtr = class {

  /**
   */
   onConnect() {}
  /**
   * @param { !number } displayId
   * @param { !gpu.mojom.SurfaceHandle } surfaceHandle
   */
   wmOnAcceleratedWidgetForDisplay(displayId, surfaceHandle) {}
  /**
   * @param { !display.mojom.Display } display
   * @param { !ui.mojom.WindowData } root
   * @param { !boolean } parentDrawn
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   wmNewDisplayAdded(display, root, parentDrawn, localSurfaceId) {}
  /**
   * @param { !number } displayId
   */
   wmDisplayRemoved(displayId) {}
  /**
   * @param { !display.mojom.Display } display
   */
   wmDisplayModified(display) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !gfx.mojom.Rect } bounds
   */
   wmSetBounds(changeId, windowId, bounds) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !string } name
   * @param { Array<number> } value
   */
   wmSetProperty(changeId, windowId, name, value) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.ModalType } type
   */
   wmSetModalType(windowId, type) {}
  /**
   * @param { !number } windowId
   * @param { !boolean } canFocus
   */
   wmSetCanFocus(windowId, canFocus) {}
  /**
   * @param { !number } changeId
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !Map<string, Array<number>> } properties
   */
   wmCreateTopLevelWindow(changeId, frameSinkId, properties) {}
  /**
   * @param { !number } clientId
   * @param { !boolean } janky
   */
   wmClientJankinessChanged(clientId, janky) {}
  /**
   * @param { !gfx.mojom.Point } screenLocation
   * @param { skia.mojom.Bitmap } dragImage
   * @param { !gfx.mojom.Vector2d } dragImageOffset
   * @param { !ui.mojom.PointerKind } source
   */
   wmBuildDragImage(screenLocation, dragImage, dragImageOffset, source) {}
  /**
   * @param { !gfx.mojom.Point } screenLocation
   * @return {Promise}
   */
   wmMoveDragImage(screenLocation) {}
  /**
   */
   wmDestroyDragImage() {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !ui.mojom.MoveLoopSource } source
   * @param { !gfx.mojom.Point } cursorLocation
   */
   wmPerformMoveLoop(changeId, windowId, source, cursorLocation) {}
  /**
   * @param { !number } changeId
   */
   wmCancelMoveLoop(changeId) {}
  /**
   * @param { !number } windowId
   */
   wmDeactivateWindow(windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } aboveId
   * @param { !number } belowId
   */
   wmStackAbove(changeId, aboveId, belowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   wmStackAtTop(changeId, windowId) {}
  /**
   * @param { !number } windowId
   * @param { !string } action
   */
   wmPerformWmAction(windowId, action) {}
  /**
   * @param { !number } ackId
   * @param { !number } acceleratorId
   * @param { !ui.mojom.Event } event
   */
   onAccelerator(ackId, acceleratorId, event) {}
  /**
   * @param { !boolean } enabled
   */
   onCursorTouchVisibleChanged(enabled) {}
  /**
   * @param { !number } windowId
   */
   onEventBlockedByModalWindow(windowId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowManager;
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowManagerClientPtr = class {

  /**
   * @param { !number } windowId
   */
   addActivationParent(windowId) {}
  /**
   * @param { !number } windowId
   */
   removeActivationParent(windowId) {}
  /**
   * @param { !number } windowId
   * @param { !gfx.mojom.Insets } mouseInsets
   * @param { !gfx.mojom.Insets } touchInsets
   */
   setExtendedHitRegionForChildren(windowId, mouseInsets, touchInsets) {}
  /**
   * @param { !Array<ui.mojom.WmAccelerator> } accelerators
   * @return {Promise}
   */
   addAccelerators(accelerators) {}
  /**
   * @param { !number } id
   */
   removeAccelerator(id) {}
  /**
   * @param { !Array<ui.mojom.EventMatcher> } dontHideCursorList
   */
   setKeyEventsThatDontHideCursor(dontHideCursorList) {}
  /**
   * @param { !display.mojom.Display } display
   * @param { !ui.mojom.WmViewportMetrics } viewportMetrics
   * @param { !boolean } isPrimaryDisplay
   * @param { !number } windowId
   * @param { !Array<display.mojom.Display> } mirrors
   * @return {Promise}
   */
   setDisplayRoot(display, viewportMetrics, isPrimaryDisplay, windowId, mirrors) {}
  /**
   * @param { !Array<display.mojom.Display> } displays
   * @param { !Array<ui.mojom.WmViewportMetrics> } viewportMetrics
   * @param { !number } primaryDisplayId
   * @param { !number } internalDisplayId
   * @param { !Array<display.mojom.Display> } mirrors
   * @return {Promise}
   */
   setDisplayConfiguration(displays, viewportMetrics, primaryDisplayId, internalDisplayId, mirrors) {}
  /**
   * @param { !number } displayId1
   * @param { !number } displayId2
   * @return {Promise}
   */
   swapDisplayRoots(displayId1, displayId2) {}
  /**
   * @param { !Array<ui.mojom.BlockingContainers> } blockingContainers
   * @return {Promise}
   */
   setBlockingContainers(blockingContainers) {}
  /**
   * @param { !number } changeId
   * @param { !boolean } response
   */
   wmResponse(changeId, response) {}
  /**
   * @param { !number } changeId
   */
   wmSetBoundsResponse(changeId) {}
  /**
   * @param { !number } windowId
   */
   wmRequestClose(windowId) {}
  /**
   * @param { !ui.mojom.FrameDecorationValues } values
   */
   wmSetFrameDecorationValues(values) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.CursorData } cursor
   */
   wmSetNonClientCursor(windowId, cursor) {}
  /**
   */
   wmLockCursor() {}
  /**
   */
   wmUnlockCursor() {}
  /**
   * @param { !boolean } visible
   */
   wmSetCursorVisible(visible) {}
  /**
   * @param { !ui.mojom.CursorSize } cursorSize
   */
   wmSetCursorSize(cursorSize) {}
  /**
   * @param { ui.mojom.CursorData } cursor
   */
   wmSetGlobalOverrideCursor(cursor) {}
  /**
   * @param { !gfx.mojom.Point } displayPixels
   * @param { !number } displayId
   */
   wmMoveCursorToDisplayLocation(displayPixels, displayId) {}
  /**
   * @param { !gfx.mojom.Rect } boundsInPixels
   * @param { !number } displayId
   */
   wmConfineCursorToBounds(boundsInPixels, displayId) {}
  /**
   * @param { !boolean } enabled
   */
   wmSetCursorTouchVisible(enabled) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   onWmCreatedTopLevelWindow(changeId, windowId) {}
  /**
   * @param { !number } ackId
   * @param { !ui.mojom.EventResult } eventResult
   * @param { !Map<string, Array<number>> } properties
   */
   onAcceleratorAck(ackId, eventResult, properties) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowManagerClient;
ui.mojom.WmAccelerator = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !ui.mojom.EventMatcher } */
    this.eventMatcher;
  }
};
ui.mojom.WindowManager_OnConnect_Params = class {
  constructor() {
  }
};
ui.mojom.WindowManager_WmOnAcceleratedWidgetForDisplay_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !gpu.mojom.SurfaceHandle } */
    this.surfaceHandle;
  }
};
ui.mojom.WindowManager_WmNewDisplayAdded_Params = class {
  constructor() {
    /** @type { !display.mojom.Display } */
    this.display;
    /** @type { !ui.mojom.WindowData } */
    this.root;
    /** @type { !boolean } */
    this.parentDrawn;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowManager_WmDisplayRemoved_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
  }
};
ui.mojom.WindowManager_WmDisplayModified_Params = class {
  constructor() {
    /** @type { !display.mojom.Display } */
    this.display;
  }
};
ui.mojom.WindowManager_WmSetBounds_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Rect } */
    this.bounds;
  }
};
ui.mojom.WindowManager_WmSetProperty_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !string } */
    this.name;
    /** @type { Array<number> } */
    this.value;
  }
};
ui.mojom.WindowManager_WmSetModalType_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.ModalType } */
    this.type;
  }
};
ui.mojom.WindowManager_WmSetCanFocus_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !boolean } */
    this.canFocus;
  }
};
ui.mojom.WindowManager_WmCreateTopLevelWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !Map<string, Array<number>> } */
    this.properties;
  }
};
ui.mojom.WindowManager_WmClientJankinessChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.clientId;
    /** @type { !boolean } */
    this.janky;
  }
};
ui.mojom.WindowManager_WmBuildDragImage_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.screenLocation;
    /** @type { skia.mojom.Bitmap } */
    this.dragImage;
    /** @type { !gfx.mojom.Vector2d } */
    this.dragImageOffset;
    /** @type { !ui.mojom.PointerKind } */
    this.source;
  }
};
ui.mojom.WindowManager_WmMoveDragImage_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.screenLocation;
  }
};
ui.mojom.WindowManager_WmMoveDragImage_ResponseParams = class {
  constructor() {
  }
};
ui.mojom.WindowManager_WmDestroyDragImage_Params = class {
  constructor() {
  }
};
ui.mojom.WindowManager_WmPerformMoveLoop_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !ui.mojom.MoveLoopSource } */
    this.source;
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Point } */
    this.cursorLocation;
  }
};
ui.mojom.WindowManager_WmCancelMoveLoop_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
  }
};
ui.mojom.WindowManager_WmDeactivateWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManager_WmStackAbove_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.aboveId;
    /** @type { !number } */
    this.belowId;
  }
};
ui.mojom.WindowManager_WmStackAtTop_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManager_WmPerformWmAction_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !string } */
    this.action;
  }
};
ui.mojom.WindowManager_OnAccelerator_Params = class {
  constructor() {
    /** @type { !number } */
    this.ackId;
    /** @type { !number } */
    this.acceleratorId;
    /** @type { !ui.mojom.Event } */
    this.event;
  }
};
ui.mojom.WindowManager_OnCursorTouchVisibleChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
ui.mojom.WindowManager_OnEventBlockedByModalWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManagerClient_AddActivationParent_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManagerClient_RemoveActivationParent_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManagerClient_SetExtendedHitRegionForChildren_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Insets } */
    this.mouseInsets;
    /** @type { !gfx.mojom.Insets } */
    this.touchInsets;
  }
};
ui.mojom.WindowManagerClient_AddAccelerators_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.WmAccelerator> } */
    this.accelerators;
  }
};
ui.mojom.WindowManagerClient_AddAccelerators_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowManagerClient_RemoveAccelerator_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};
ui.mojom.WindowManagerClient_SetKeyEventsThatDontHideCursor_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.EventMatcher> } */
    this.dontHideCursorList;
  }
};
ui.mojom.WindowManagerClient_SetDisplayRoot_Params = class {
  constructor() {
    /** @type { !display.mojom.Display } */
    this.display;
    /** @type { !ui.mojom.WmViewportMetrics } */
    this.viewportMetrics;
    /** @type { !boolean } */
    this.isPrimaryDisplay;
    /** @type { !number } */
    this.windowId;
    /** @type { !Array<display.mojom.Display> } */
    this.mirrors;
  }
};
ui.mojom.WindowManagerClient_SetDisplayRoot_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowManagerClient_SetDisplayConfiguration_Params = class {
  constructor() {
    /** @type { !Array<display.mojom.Display> } */
    this.displays;
    /** @type { !Array<ui.mojom.WmViewportMetrics> } */
    this.viewportMetrics;
    /** @type { !number } */
    this.primaryDisplayId;
    /** @type { !number } */
    this.internalDisplayId;
    /** @type { !Array<display.mojom.Display> } */
    this.mirrors;
  }
};
ui.mojom.WindowManagerClient_SetDisplayConfiguration_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowManagerClient_SwapDisplayRoots_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId1;
    /** @type { !number } */
    this.displayId2;
  }
};
ui.mojom.WindowManagerClient_SwapDisplayRoots_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowManagerClient_SetBlockingContainers_Params = class {
  constructor() {
    /** @type { !Array<ui.mojom.BlockingContainers> } */
    this.blockingContainers;
  }
};
ui.mojom.WindowManagerClient_SetBlockingContainers_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowManagerClient_WmResponse_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !boolean } */
    this.response;
  }
};
ui.mojom.WindowManagerClient_WmSetBoundsResponse_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
  }
};
ui.mojom.WindowManagerClient_WmRequestClose_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManagerClient_WmSetFrameDecorationValues_Params = class {
  constructor() {
    /** @type { !ui.mojom.FrameDecorationValues } */
    this.values;
  }
};
ui.mojom.WindowManagerClient_WmSetNonClientCursor_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.CursorData } */
    this.cursor;
  }
};
ui.mojom.WindowManagerClient_WmLockCursor_Params = class {
  constructor() {
  }
};
ui.mojom.WindowManagerClient_WmUnlockCursor_Params = class {
  constructor() {
  }
};
ui.mojom.WindowManagerClient_WmSetCursorVisible_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.visible;
  }
};
ui.mojom.WindowManagerClient_WmSetCursorSize_Params = class {
  constructor() {
    /** @type { !ui.mojom.CursorSize } */
    this.cursorSize;
  }
};
ui.mojom.WindowManagerClient_WmSetGlobalOverrideCursor_Params = class {
  constructor() {
    /** @type { ui.mojom.CursorData } */
    this.cursor;
  }
};
ui.mojom.WindowManagerClient_WmMoveCursorToDisplayLocation_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.displayPixels;
    /** @type { !number } */
    this.displayId;
  }
};
ui.mojom.WindowManagerClient_WmConfineCursorToBounds_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.boundsInPixels;
    /** @type { !number } */
    this.displayId;
  }
};
ui.mojom.WindowManagerClient_WmSetCursorTouchVisible_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
ui.mojom.WindowManagerClient_OnWmCreatedTopLevelWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowManagerClient_OnAcceleratorAck_Params = class {
  constructor() {
    /** @type { !number } */
    this.ackId;
    /** @type { !ui.mojom.EventResult } */
    this.eventResult;
    /** @type { !Map<string, Array<number>> } */
    this.properties;
  }
};

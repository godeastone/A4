// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowTreePtr = class {

  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { Map<string, Array<number>> } properties
   */
   newWindow(changeId, windowId, properties) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !Map<string, Array<number>> } properties
   */
   newTopLevelWindow(changeId, windowId, properties) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   deleteWindow(changeId, windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   setCapture(changeId, windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   releaseCapture(changeId, windowId) {}
  /**
   * @param { !boolean } wantMoves
   */
   startPointerWatcher(wantMoves) {}
  /**
   */
   stopPointerWatcher() {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !gfx.mojom.Rect } bounds
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   setWindowBounds(changeId, windowId, bounds, localSurfaceId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !gfx.mojom.Transform } transform
   */
   setWindowTransform(changeId, windowId, transform) {}
  /**
   * @param { !number } windowId
   * @param { !gfx.mojom.Insets } insets
   * @param { Array<gfx.mojom.Rect> } additionalClientAreas
   */
   setClientArea(windowId, insets, additionalClientAreas) {}
  /**
   * @param { !number } windowId
   * @param { gfx.mojom.Rect } mask
   */
   setHitTestMask(windowId, mask) {}
  /**
   * @param { !number } windowId
   * @param { !boolean } acceptsDrops
   */
   setCanAcceptDrops(windowId, acceptsDrops) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !boolean } visible
   */
   setWindowVisibility(changeId, windowId, visible) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !string } name
   * @param { Array<number> } value
   */
   setWindowProperty(changeId, windowId, name, value) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !number } opacity
   */
   setWindowOpacity(changeId, windowId, opacity) {}
  /**
   * @param { !number } windowId
   * @param { !mojo.InterfaceRequest } compositorFrameSink
   * @param { !viz.mojom.CompositorFrameSinkClientPtr } client
   */
   attachCompositorFrameSink(windowId, compositorFrameSink, client) {}
  /**
   * @param { !number } changeId
   * @param { !number } parent
   * @param { !number } child
   */
   addWindow(changeId, parent, child) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   removeWindowFromParent(changeId, windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !number } transientWindowId
   */
   addTransientWindow(changeId, windowId, transientWindowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } transientWindowId
   */
   removeTransientWindowFromParent(changeId, transientWindowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !ui.mojom.ModalType } type
   */
   setModalType(changeId, windowId, type) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !number } parentWindowId
   */
   setChildModalParent(changeId, windowId, parentWindowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !number } relativeWindowId
   * @param { !ui.mojom.OrderDirection } direction
   */
   reorderWindow(changeId, windowId, relativeWindowId, direction) {}
  /**
   * @param { !number } windowId
   * @return {Promise}
   */
   getWindowTree(windowId) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.WindowTreeClientPtr } client
   * @param { !number } embedFlags
   * @return {Promise}
   */
   embed(windowId, client, embedFlags) {}
  /**
   * @param { !ui.mojom.WindowTreeClientPtr } client
   * @return {Promise}
   */
   scheduleEmbed(client) {}
  /**
   * @param { !number } windowId
   * @return {Promise}
   */
   scheduleEmbedForExistingClient(windowId) {}
  /**
   * @param { !number } windowId
   * @param { !mojoBase.mojom.UnguessableToken } token
   * @param { !number } embedFlags
   * @return {Promise}
   */
   embedUsingToken(windowId, token, embedFlags) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   setFocus(changeId, windowId) {}
  /**
   * @param { !number } windowId
   * @param { !boolean } canFocus
   */
   setCanFocus(windowId, canFocus) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !ui.mojom.CursorData } cursor
   */
   setCursor(changeId, windowId, cursor) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.TextInputState } state
   */
   setWindowTextInputState(windowId, state) {}
  /**
   * @param { !number } windowId
   * @param { !boolean } visible
   * @param { ui.mojom.TextInputState } state
   */
   setImeVisibility(windowId, visible, state) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.EventTargetingPolicy } policy
   */
   setEventTargetingPolicy(windowId, policy) {}
  /**
   * @param { !number } eventId
   * @param { !ui.mojom.EventResult } result
   */
   onWindowInputEventAck(eventId, result) {}
  /**
   * @param { !number } windowId
   */
   deactivateWindow(windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } aboveId
   * @param { !number } belowId
   */
   stackAbove(changeId, aboveId, belowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   */
   stackAtTop(changeId, windowId) {}
  /**
   * @param { !number } windowId
   * @param { !string } action
   */
   performWmAction(windowId, action) {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } internal
   */
   getWindowManagerClient(internal) {}
  /**
   * @return {Promise}
   */
   getCursorLocationMemory() {}
  /**
   * @param { !number } changeId
   * @param { !number } windowId
   * @param { !ui.mojom.MoveLoopSource } source
   * @param { !gfx.mojom.Point } cursor
   */
   performWindowMove(changeId, windowId, source, cursor) {}
  /**
   * @param { !number } windowId
   */
   cancelWindowMove(windowId) {}
  /**
   * @param { !number } changeId
   * @param { !number } sourceWindowId
   * @param { !gfx.mojom.Point } screenLocation
   * @param { !Map<string, Array<number>> } dragData
   * @param { skia.mojom.Bitmap } dragImage
   * @param { !gfx.mojom.Vector2d } dragImageOffset
   * @param { !number } dragOperation
   * @param { !ui.mojom.PointerKind } source
   */
   performDragDrop(changeId, sourceWindowId, screenLocation, dragData, dragImage, dragImageOffset, dragOperation, source) {}
  /**
   * @param { !number } windowId
   */
   cancelDragDrop(windowId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowTree;
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowTreeClientPtr = class {

  /**
   * @param { !ui.mojom.WindowData } root
   * @param { ui.mojom.WindowTreePtr } tree
   * @param { !number } displayId
   * @param { !number } focusedWindow
   * @param { !boolean } parentDrawn
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   onEmbed(root, tree, displayId, focusedWindow, parentDrawn, localSurfaceId) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } token
   * @param { !ui.mojom.WindowData } root
   * @param { !number } displayId
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   onEmbedFromToken(token, root, displayId, localSurfaceId) {}
  /**
   * @param { !number } window
   */
   onEmbeddedAppDisconnected(window) {}
  /**
   * @param { !number } window
   */
   onUnembed(window) {}
  /**
   * @param { !number } newCapture
   * @param { !number } oldCapture
   */
   onCaptureChanged(newCapture, oldCapture) {}
  /**
   * @param { !number } window
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   */
   onFrameSinkIdAllocated(window, frameSinkId) {}
  /**
   * @param { !number } changeId
   * @param { !ui.mojom.WindowData } data
   * @param { !number } displayId
   * @param { !boolean } parentDrawn
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   onTopLevelCreated(changeId, data, displayId, parentDrawn, localSurfaceId) {}
  /**
   * @param { !number } window
   * @param { !gfx.mojom.Rect } oldBounds
   * @param { !gfx.mojom.Rect } newBounds
   * @param { viz.mojom.LocalSurfaceId } localSurfaceId
   */
   onWindowBoundsChanged(window, oldBounds, newBounds, localSurfaceId) {}
  /**
   * @param { !number } window
   * @param { !gfx.mojom.Transform } oldTransform
   * @param { !gfx.mojom.Transform } newTransform
   */
   onWindowTransformChanged(window, oldTransform, newTransform) {}
  /**
   * @param { !number } windowId
   * @param { !gfx.mojom.Insets } newClientArea
   * @param { !Array<gfx.mojom.Rect> } newAdditionalClientAreas
   */
   onClientAreaChanged(windowId, newClientArea, newAdditionalClientAreas) {}
  /**
   * @param { !number } windowId
   * @param { !number } transientWindowId
   */
   onTransientWindowAdded(windowId, transientWindowId) {}
  /**
   * @param { !number } windowId
   * @param { !number } transientWindowId
   */
   onTransientWindowRemoved(windowId, transientWindowId) {}
  /**
   * @param { !number } window
   * @param { !number } oldParent
   * @param { !number } newParent
   * @param { !Array<ui.mojom.WindowData> } windows
   */
   onWindowHierarchyChanged(window, oldParent, newParent, windows) {}
  /**
   * @param { !number } windowId
   * @param { !number } relativeWindowId
   * @param { !ui.mojom.OrderDirection } direction
   */
   onWindowReordered(windowId, relativeWindowId, direction) {}
  /**
   * @param { !number } window
   */
   onWindowDeleted(window) {}
  /**
   * @param { !number } window
   * @param { !boolean } visible
   */
   onWindowVisibilityChanged(window, visible) {}
  /**
   * @param { !number } window
   * @param { !number } oldOpacity
   * @param { !number } newOpacity
   */
   onWindowOpacityChanged(window, oldOpacity, newOpacity) {}
  /**
   * @param { !number } window
   * @param { !boolean } drawn
   */
   onWindowParentDrawnStateChanged(window, drawn) {}
  /**
   * @param { !number } window
   * @param { !string } name
   * @param { Array<number> } newData
   */
   onWindowSharedPropertyChanged(window, name, newData) {}
  /**
   * @param { !number } eventId
   * @param { !number } window
   * @param { !number } displayId
   * @param { !number } displayRootWindow
   * @param { !gfx.mojom.PointF } eventLocationInScreenPixelLayout
   * @param { !ui.mojom.Event } event
   * @param { !boolean } matchesPointerWatcher
   */
   onWindowInputEvent(eventId, window, displayId, displayRootWindow, eventLocationInScreenPixelLayout, event, matchesPointerWatcher) {}
  /**
   * @param { !ui.mojom.Event } event
   * @param { !number } windowId
   * @param { !number } displayId
   */
   onPointerEventObserved(event, windowId, displayId) {}
  /**
   * @param { !number } focusedWindowId
   */
   onWindowFocused(focusedWindowId) {}
  /**
   * @param { !number } windowId
   * @param { !ui.mojom.CursorData } cursor
   */
   onWindowCursorChanged(windowId, cursor) {}
  /**
   * @param { !number } windowId
   * @param { !viz.mojom.SurfaceInfo } surfaceInfo
   */
   onWindowSurfaceChanged(windowId, surfaceInfo) {}
  /**
   * @param { !Map<string, Array<number>> } dragData
   */
   onDragDropStart(dragData) {}
  /**
   * @param { !number } window
   * @param { !number } keyState
   * @param { !gfx.mojom.Point } screenPosition
   * @param { !number } effectBitmask
   * @return {Promise}
   */
   onDragEnter(window, keyState, screenPosition, effectBitmask) {}
  /**
   * @param { !number } window
   * @param { !number } keyState
   * @param { !gfx.mojom.Point } screenPosition
   * @param { !number } effectBitmask
   * @return {Promise}
   */
   onDragOver(window, keyState, screenPosition, effectBitmask) {}
  /**
   * @param { !number } window
   */
   onDragLeave(window) {}
  /**
   * @param { !number } window
   * @param { !number } keyState
   * @param { !gfx.mojom.Point } screenPosition
   * @param { !number } effectBitmask
   * @return {Promise}
   */
   onCompleteDrop(window, keyState, screenPosition, effectBitmask) {}
  /**
   * @param { !number } changeId
   * @param { !boolean } success
   * @param { !number } actionTaken
   */
   onPerformDragDropCompleted(changeId, success, actionTaken) {}
  /**
   */
   onDragDropDone() {}
  /**
   * @param { !number } changeId
   * @param { !boolean } success
   */
   onChangeCompleted(changeId, success) {}
  /**
   * @param { !number } windowId
   */
   requestClose(windowId) {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } internal
   */
   getWindowManager(internal) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowTreeClient;
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowTreeFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } treeRequest
   * @param { !ui.mojom.WindowTreeClientPtr } client
   */
   createWindowTree(treeRequest, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowTreeFactory;
ui.mojom.WindowTree_NewWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { Map<string, Array<number>> } */
    this.properties;
  }
};
ui.mojom.WindowTree_NewTopLevelWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !Map<string, Array<number>> } */
    this.properties;
  }
};
ui.mojom.WindowTree_DeleteWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_SetCapture_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_ReleaseCapture_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_StartPointerWatcher_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.wantMoves;
  }
};
ui.mojom.WindowTree_StopPointerWatcher_Params = class {
  constructor() {
  }
};
ui.mojom.WindowTree_SetWindowBounds_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Rect } */
    this.bounds;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowTree_SetWindowTransform_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Transform } */
    this.transform;
  }
};
ui.mojom.WindowTree_SetClientArea_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Insets } */
    this.insets;
    /** @type { Array<gfx.mojom.Rect> } */
    this.additionalClientAreas;
  }
};
ui.mojom.WindowTree_SetHitTestMask_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { gfx.mojom.Rect } */
    this.mask;
  }
};
ui.mojom.WindowTree_SetCanAcceptDrops_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !boolean } */
    this.acceptsDrops;
  }
};
ui.mojom.WindowTree_SetWindowVisibility_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !boolean } */
    this.visible;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_SetWindowProperty_Params = class {
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
ui.mojom.WindowTree_SetWindowOpacity_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.opacity;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_AttachCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !mojo.InterfaceRequest } */
    this.compositorFrameSink;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.client;
  }
};
ui.mojom.WindowTree_AddWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.parent;
    /** @type { !number } */
    this.child;
  }
};
ui.mojom.WindowTree_RemoveWindowFromParent_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_AddTransientWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.transientWindowId;
  }
};
ui.mojom.WindowTree_RemoveTransientWindowFromParent_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.transientWindowId;
  }
};
ui.mojom.WindowTree_SetModalType_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !ui.mojom.ModalType } */
    this.type;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_SetChildModalParent_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.parentWindowId;
  }
};
ui.mojom.WindowTree_ReorderWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !ui.mojom.OrderDirection } */
    this.direction;
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.relativeWindowId;
  }
};
ui.mojom.WindowTree_GetWindowTree_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_GetWindowTree_ResponseParams = class {
  constructor() {
    /** @type { !Array<ui.mojom.WindowData> } */
    this.windows;
  }
};
ui.mojom.WindowTree_Embed_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.WindowTreeClientPtr } */
    this.client;
    /** @type { !number } */
    this.embedFlags;
  }
};
ui.mojom.WindowTree_Embed_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowTree_ScheduleEmbed_Params = class {
  constructor() {
    /** @type { !ui.mojom.WindowTreeClientPtr } */
    this.client;
  }
};
ui.mojom.WindowTree_ScheduleEmbed_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
  }
};
ui.mojom.WindowTree_ScheduleEmbedForExistingClient_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_ScheduleEmbedForExistingClient_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
  }
};
ui.mojom.WindowTree_EmbedUsingToken_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
    /** @type { !number } */
    this.embedFlags;
  }
};
ui.mojom.WindowTree_EmbedUsingToken_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowTree_SetFocus_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_SetCanFocus_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !boolean } */
    this.canFocus;
  }
};
ui.mojom.WindowTree_SetCursor_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.CursorData } */
    this.cursor;
  }
};
ui.mojom.WindowTree_SetWindowTextInputState_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.TextInputState } */
    this.state;
  }
};
ui.mojom.WindowTree_SetImeVisibility_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !boolean } */
    this.visible;
    /** @type { ui.mojom.TextInputState } */
    this.state;
  }
};
ui.mojom.WindowTree_SetEventTargetingPolicy_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.EventTargetingPolicy } */
    this.policy;
  }
};
ui.mojom.WindowTree_OnWindowInputEventAck_Params = class {
  constructor() {
    /** @type { !number } */
    this.eventId;
    /** @type { !ui.mojom.EventResult } */
    this.result;
  }
};
ui.mojom.WindowTree_DeactivateWindow_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_StackAbove_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.aboveId;
    /** @type { !number } */
    this.belowId;
  }
};
ui.mojom.WindowTree_StackAtTop_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_PerformWmAction_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !string } */
    this.action;
  }
};
ui.mojom.WindowTree_GetWindowManagerClient_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.internal;
  }
};
ui.mojom.WindowTree_GetCursorLocationMemory_Params = class {
  constructor() {
  }
};
ui.mojom.WindowTree_GetCursorLocationMemory_ResponseParams = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.cursorBuffer;
  }
};
ui.mojom.WindowTree_PerformWindowMove_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !ui.mojom.MoveLoopSource } */
    this.source;
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Point } */
    this.cursor;
  }
};
ui.mojom.WindowTree_CancelWindowMove_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTree_PerformDragDrop_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !number } */
    this.dragOperation;
    /** @type { !number } */
    this.sourceWindowId;
    /** @type { !gfx.mojom.Point } */
    this.screenLocation;
    /** @type { !Map<string, Array<number>> } */
    this.dragData;
    /** @type { skia.mojom.Bitmap } */
    this.dragImage;
    /** @type { !gfx.mojom.Vector2d } */
    this.dragImageOffset;
    /** @type { !ui.mojom.PointerKind } */
    this.source;
  }
};
ui.mojom.WindowTree_CancelDragDrop_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTreeClient_OnEmbed_Params = class {
  constructor() {
    /** @type { !ui.mojom.WindowData } */
    this.root;
    /** @type { ui.mojom.WindowTreePtr } */
    this.tree;
    /** @type { !number } */
    this.displayId;
    /** @type { !number } */
    this.focusedWindow;
    /** @type { !boolean } */
    this.parentDrawn;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowTreeClient_OnEmbedFromToken_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
    /** @type { !ui.mojom.WindowData } */
    this.root;
    /** @type { !number } */
    this.displayId;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowTreeClient_OnEmbeddedAppDisconnected_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
  }
};
ui.mojom.WindowTreeClient_OnUnembed_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
  }
};
ui.mojom.WindowTreeClient_OnCaptureChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.newCapture;
    /** @type { !number } */
    this.oldCapture;
  }
};
ui.mojom.WindowTreeClient_OnFrameSinkIdAllocated_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
  }
};
ui.mojom.WindowTreeClient_OnTopLevelCreated_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !boolean } */
    this.parentDrawn;
    /** @type { !ui.mojom.WindowData } */
    this.data;
    /** @type { !number } */
    this.displayId;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowTreeClient_OnWindowBoundsChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !gfx.mojom.Rect } */
    this.oldBounds;
    /** @type { !gfx.mojom.Rect } */
    this.newBounds;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
ui.mojom.WindowTreeClient_OnWindowTransformChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !gfx.mojom.Transform } */
    this.oldTransform;
    /** @type { !gfx.mojom.Transform } */
    this.newTransform;
  }
};
ui.mojom.WindowTreeClient_OnClientAreaChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !gfx.mojom.Insets } */
    this.newClientArea;
    /** @type { !Array<gfx.mojom.Rect> } */
    this.newAdditionalClientAreas;
  }
};
ui.mojom.WindowTreeClient_OnTransientWindowAdded_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.transientWindowId;
  }
};
ui.mojom.WindowTreeClient_OnTransientWindowRemoved_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.transientWindowId;
  }
};
ui.mojom.WindowTreeClient_OnWindowHierarchyChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.oldParent;
    /** @type { !number } */
    this.newParent;
    /** @type { !Array<ui.mojom.WindowData> } */
    this.windows;
  }
};
ui.mojom.WindowTreeClient_OnWindowReordered_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.relativeWindowId;
    /** @type { !ui.mojom.OrderDirection } */
    this.direction;
  }
};
ui.mojom.WindowTreeClient_OnWindowDeleted_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
  }
};
ui.mojom.WindowTreeClient_OnWindowVisibilityChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !boolean } */
    this.visible;
  }
};
ui.mojom.WindowTreeClient_OnWindowOpacityChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.oldOpacity;
    /** @type { !number } */
    this.newOpacity;
  }
};
ui.mojom.WindowTreeClient_OnWindowParentDrawnStateChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !boolean } */
    this.drawn;
  }
};
ui.mojom.WindowTreeClient_OnWindowSharedPropertyChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !string } */
    this.name;
    /** @type { Array<number> } */
    this.newData;
  }
};
ui.mojom.WindowTreeClient_OnWindowInputEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.eventId;
    /** @type { !boolean } */
    this.matchesPointerWatcher;
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.displayId;
    /** @type { !number } */
    this.displayRootWindow;
    /** @type { !gfx.mojom.PointF } */
    this.eventLocationInScreenPixelLayout;
    /** @type { !ui.mojom.Event } */
    this.event;
  }
};
ui.mojom.WindowTreeClient_OnPointerEventObserved_Params = class {
  constructor() {
    /** @type { !ui.mojom.Event } */
    this.event;
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.displayId;
  }
};
ui.mojom.WindowTreeClient_OnWindowFocused_Params = class {
  constructor() {
    /** @type { !number } */
    this.focusedWindowId;
  }
};
ui.mojom.WindowTreeClient_OnWindowCursorChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !ui.mojom.CursorData } */
    this.cursor;
  }
};
ui.mojom.WindowTreeClient_OnWindowSurfaceChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
    /** @type { !viz.mojom.SurfaceInfo } */
    this.surfaceInfo;
  }
};
ui.mojom.WindowTreeClient_OnDragDropStart_Params = class {
  constructor() {
    /** @type { !Map<string, Array<number>> } */
    this.dragData;
  }
};
ui.mojom.WindowTreeClient_OnDragEnter_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.keyState;
    /** @type { !number } */
    this.effectBitmask;
    /** @type { !gfx.mojom.Point } */
    this.screenPosition;
  }
};
ui.mojom.WindowTreeClient_OnDragEnter_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.supportedOpBitmask;
  }
};
ui.mojom.WindowTreeClient_OnDragOver_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.keyState;
    /** @type { !number } */
    this.effectBitmask;
    /** @type { !gfx.mojom.Point } */
    this.screenPosition;
  }
};
ui.mojom.WindowTreeClient_OnDragOver_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.supportedOpBitmask;
  }
};
ui.mojom.WindowTreeClient_OnDragLeave_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
  }
};
ui.mojom.WindowTreeClient_OnCompleteDrop_Params = class {
  constructor() {
    /** @type { !number } */
    this.window;
    /** @type { !number } */
    this.keyState;
    /** @type { !number } */
    this.effectBitmask;
    /** @type { !gfx.mojom.Point } */
    this.screenPosition;
  }
};
ui.mojom.WindowTreeClient_OnCompleteDrop_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.actionTaken;
  }
};
ui.mojom.WindowTreeClient_OnPerformDragDropCompleted_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.actionTaken;
  }
};
ui.mojom.WindowTreeClient_OnDragDropDone_Params = class {
  constructor() {
  }
};
ui.mojom.WindowTreeClient_OnChangeCompleted_Params = class {
  constructor() {
    /** @type { !number } */
    this.changeId;
    /** @type { !boolean } */
    this.success;
  }
};
ui.mojom.WindowTreeClient_RequestClose_Params = class {
  constructor() {
    /** @type { !number } */
    this.windowId;
  }
};
ui.mojom.WindowTreeClient_GetWindowManager_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.internal;
  }
};
ui.mojom.WindowTreeFactory_CreateWindowTree_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.treeRequest;
    /** @type { !ui.mojom.WindowTreeClientPtr } */
    this.client;
  }
};

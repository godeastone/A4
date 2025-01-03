// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameSinkProviderPtr = class {

  /**
   * @param { !number } widgetId
   * @param { !mojo.InterfaceRequest } compositorFrameSinkRequest
   * @param { !viz.mojom.CompositorFrameSinkClientPtr } compositorFrameSinkClient
   */
   createForWidget(widgetId, compositorFrameSinkRequest, compositorFrameSinkClient) {}
  /**
   * @param { !number } widgetId
   * @param { !mojo.InterfaceRequest } renderFrameMetadataObserverClientRequest
   * @param { !content.mojom.RenderFrameMetadataObserverPtr } renderFrameMetadataObserver
   */
   registerRenderFrameMetadataObserver(widgetId, renderFrameMetadataObserverClientRequest, renderFrameMetadataObserver) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameSinkProvider;
content.mojom.FrameSinkProvider_CreateForWidget_Params = class {
  constructor() {
    /** @type { !number } */
    this.widgetId;
    /** @type { !mojo.InterfaceRequest } */
    this.compositorFrameSinkRequest;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.compositorFrameSinkClient;
  }
};
content.mojom.FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params = class {
  constructor() {
    /** @type { !number } */
    this.widgetId;
    /** @type { !mojo.InterfaceRequest } */
    this.renderFrameMetadataObserverClientRequest;
    /** @type { !content.mojom.RenderFrameMetadataObserverPtr } */
    this.renderFrameMetadataObserver;
  }
};

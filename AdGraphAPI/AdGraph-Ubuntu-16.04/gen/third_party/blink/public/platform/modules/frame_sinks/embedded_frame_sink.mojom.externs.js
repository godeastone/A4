// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.EmbeddedFrameSinkClientPtr = class {

  /**
   * @param { !viz.mojom.SurfaceInfo } surfaceInfo
   */
   onFirstSurfaceActivation(surfaceInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.EmbeddedFrameSinkClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.EmbeddedFrameSinkProviderPtr = class {

  /**
   * @param { !viz.mojom.FrameSinkId } parentFrameSinkId
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !blink.mojom.EmbeddedFrameSinkClientPtr } client
   */
   registerEmbeddedFrameSink(parentFrameSinkId, frameSinkId, client) {}
  /**
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !viz.mojom.CompositorFrameSinkClientPtr } client
   * @param { !mojo.InterfaceRequest } sink
   */
   createCompositorFrameSink(frameSinkId, client, sink) {}
  /**
   * @param { !viz.mojom.FrameSinkId } parentFrameSinkId
   * @param { !viz.mojom.FrameSinkId } frameSinkId
   * @param { !blink.mojom.EmbeddedFrameSinkClientPtr } surfaceClient
   * @param { !viz.mojom.CompositorFrameSinkClientPtr } client
   * @param { !mojo.InterfaceRequest } sink
   */
   createSimpleCompositorFrameSink(parentFrameSinkId, frameSinkId, surfaceClient, client, sink) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.EmbeddedFrameSinkProvider;
blink.mojom.EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceInfo } */
    this.surfaceInfo;
  }
};
blink.mojom.EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.parentFrameSinkId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !blink.mojom.EmbeddedFrameSinkClientPtr } */
    this.client;
  }
};
blink.mojom.EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.client;
    /** @type { !mojo.InterfaceRequest } */
    this.sink;
  }
};
blink.mojom.EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.parentFrameSinkId;
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !blink.mojom.EmbeddedFrameSinkClientPtr } */
    this.surfaceClient;
    /** @type { !viz.mojom.CompositorFrameSinkClientPtr } */
    this.client;
    /** @type { !mojo.InterfaceRequest } */
    this.sink;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderWidgetWindowTreeClientPtr = class {

  /**
   * @param { !number } frameRoutingId
   * @param { !mojoBase.mojom.UnguessableToken } token
   */
   embed(frameRoutingId, token) {}
  /**
   * @param { !number } frameRoutingId
   */
   destroyFrame(frameRoutingId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderWidgetWindowTreeClient;
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderWidgetWindowTreeClientFactoryPtr = class {

  /**
   * @param { !number } renderWidgetHostRoutingId
   * @param { !mojo.InterfaceRequest } windowTreeClient
   * @param { !mojo.InterfaceRequest } renderWidgetWindowTreeClientRequest
   */
   createWindowTreeClientForRenderWidget(renderWidgetHostRoutingId, windowTreeClient, renderWidgetWindowTreeClientRequest) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderWidgetWindowTreeClientFactory;
content.mojom.RenderWidgetWindowTreeClient_Embed_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameRoutingId;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
  }
};
content.mojom.RenderWidgetWindowTreeClient_DestroyFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameRoutingId;
  }
};
content.mojom.RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderWidgetHostRoutingId;
    /** @type { !mojo.InterfaceRequest } */
    this.windowTreeClient;
    /** @type { !mojo.InterfaceRequest } */
    this.renderWidgetWindowTreeClientRequest;
  }
};

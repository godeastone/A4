// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.MediaSessionClientPtr = class {

  /**
   * @param { !blink.mojom.MediaSessionAction } action
   */
   didReceiveAction(action) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MediaSessionClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.MediaSessionServicePtr = class {

  /**
   * @param { !blink.mojom.MediaSessionClientPtr } client
   */
   setClient(client) {}
  /**
   * @param { !blink.mojom.MediaSessionPlaybackState } state
   */
   setPlaybackState(state) {}
  /**
   * @param { blink.mojom.MediaMetadata } metadata
   */
   setMetadata(metadata) {}
  /**
   * @param { !blink.mojom.MediaSessionAction } action
   */
   enableAction(action) {}
  /**
   * @param { !blink.mojom.MediaSessionAction } action
   */
   disableAction(action) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MediaSessionService;
blink.mojom.MediaImage = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.src;
    /** @type { !mojoBase.mojom.String16 } */
    this.type;
    /** @type { !Array<gfx.mojom.Size> } */
    this.sizes;
  }
};
blink.mojom.MediaMetadata = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.title;
    /** @type { !mojoBase.mojom.String16 } */
    this.artist;
    /** @type { !mojoBase.mojom.String16 } */
    this.album;
    /** @type { !Array<blink.mojom.MediaImage> } */
    this.artwork;
  }
};
blink.mojom.MediaSessionClient_DidReceiveAction_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaSessionAction } */
    this.action;
  }
};
blink.mojom.MediaSessionService_SetClient_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaSessionClientPtr } */
    this.client;
  }
};
blink.mojom.MediaSessionService_SetPlaybackState_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaSessionPlaybackState } */
    this.state;
  }
};
blink.mojom.MediaSessionService_SetMetadata_Params = class {
  constructor() {
    /** @type { blink.mojom.MediaMetadata } */
    this.metadata;
  }
};
blink.mojom.MediaSessionService_EnableAction_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaSessionAction } */
    this.action;
  }
};
blink.mojom.MediaSessionService_DisableAction_Params = class {
  constructor() {
    /** @type { !blink.mojom.MediaSessionAction } */
    this.action;
  }
};

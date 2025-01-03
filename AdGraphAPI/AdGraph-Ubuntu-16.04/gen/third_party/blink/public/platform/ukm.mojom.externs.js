// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.UkmSourceIdFrameHostPtr = class {

  /**
   * @param { !number } sourceId
   */
   setDocumentSourceId(sourceId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.UkmSourceIdFrameHost;
blink.mojom.UkmSourceIdFrameHost_SetDocumentSourceId_Params = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
  }
};

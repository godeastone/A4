// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojo = {};
/** @const */
mojo.pipeControl = {};
mojo.pipeControl.RunOrClosePipeMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};
mojo.pipeControl.DisconnectReason = class {
  constructor() {
    /** @type { !number } */
    this.customReason;
    /** @type { !string } */
    this.description;
  }
};
mojo.pipeControl.PeerAssociatedEndpointClosedEvent = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { mojo.pipeControl.DisconnectReason } */
    this.disconnectReason;
  }
};

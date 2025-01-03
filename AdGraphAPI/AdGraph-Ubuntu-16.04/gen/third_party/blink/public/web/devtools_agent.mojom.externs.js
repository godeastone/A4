// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.DevToolsAgentPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } host
   * @param { !mojo.AssociatedInterfaceRequest } session
   * @param { !mojo.InterfaceRequest } ioSession
   * @param { string } reattachState
   */
   attachDevToolsSession(host, session, ioSession, reattachState) {}
  /**
   * @param { !gfx.mojom.Point } point
   */
   inspectElement(point) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DevToolsAgent;
/** @implements {mojo.InterfacePtr} */
blink.mojom.DevToolsSessionPtr = class {

  /**
   * @param { !number } callId
   * @param { !string } method
   * @param { !string } message
   */
   dispatchProtocolCommand(callId, method, message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DevToolsSession;
/** @implements {mojo.InterfacePtr} */
blink.mojom.DevToolsSessionHostPtr = class {

  /**
   * @param { !mojoBase.mojom.BigString } message
   * @param { !number } callId
   * @param { string } state
   */
   dispatchProtocolResponse(message, callId, state) {}
  /**
   * @param { !mojoBase.mojom.BigString } message
   * @param { string } state
   */
   dispatchProtocolNotification(message, state) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DevToolsSessionHost;
blink.mojom.DevToolsAgent_AttachDevToolsSession_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.host;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.session;
    /** @type { !mojo.InterfaceRequest } */
    this.ioSession;
    /** @type { string } */
    this.reattachState;
  }
};
blink.mojom.DevToolsAgent_InspectElement_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.point;
  }
};
blink.mojom.DevToolsSession_DispatchProtocolCommand_Params = class {
  constructor() {
    /** @type { !number } */
    this.callId;
    /** @type { !string } */
    this.method;
    /** @type { !string } */
    this.message;
  }
};
blink.mojom.DevToolsSessionHost_DispatchProtocolResponse_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.BigString } */
    this.message;
    /** @type { !number } */
    this.callId;
    /** @type { string } */
    this.state;
  }
};
blink.mojom.DevToolsSessionHost_DispatchProtocolNotification_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.BigString } */
    this.message;
    /** @type { string } */
    this.state;
  }
};

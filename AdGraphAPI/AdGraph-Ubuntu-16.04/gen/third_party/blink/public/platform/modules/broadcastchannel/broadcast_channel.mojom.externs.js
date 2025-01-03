// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BroadcastChannelClientPtr = class {

  /**
   * @param { !blink.mojom.CloneableMessage } message
   */
   onMessage(message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BroadcastChannelClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.BroadcastChannelProviderPtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !string } name
   * @param { !mojo.AssociatedInterfacePtrInfo } receiver
   * @param { !mojo.AssociatedInterfaceRequest } sender
   */
   connectToChannel(origin, name, receiver, sender) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BroadcastChannelProvider;
blink.mojom.BroadcastChannelClient_OnMessage_Params = class {
  constructor() {
    /** @type { !blink.mojom.CloneableMessage } */
    this.message;
  }
};
blink.mojom.BroadcastChannelProvider_ConnectToChannel_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !string } */
    this.name;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.receiver;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.sender;
  }
};

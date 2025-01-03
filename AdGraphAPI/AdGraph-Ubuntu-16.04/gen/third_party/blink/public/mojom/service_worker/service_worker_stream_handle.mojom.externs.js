// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerStreamCallbackPtr = class {

  /**
   */
   onCompleted() {}
  /**
   */
   onAborted() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerStreamCallback;
blink.mojom.ServiceWorkerStreamHandle = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.stream;
    /** @type { !mojo.InterfaceRequest } */
    this.callbackRequest;
  }
};
blink.mojom.ServiceWorkerStreamCallback_OnCompleted_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerStreamCallback_OnAborted_Params = class {
  constructor() {
  }
};

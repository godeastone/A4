// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.RemoteObjectPtr = class {

  /**
   * @param { !string } name
   * @return {Promise}
   */
   hasMethod(name) {}
  /**
   * @return {Promise}
   */
   getMethods() {}
  /**
   * @param { !string } name
   * @param { !Array<Object> } arguments_
   * @return {Promise}
   */
   invokeMethod(name, arguments_) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.RemoteObject;
blink.mojom.RemoteInvocationResult = class {
  constructor() {
    /** @type { !blink.mojom.RemoteInvocationError } */
    this.error;
    /** @type { Object } */
    this.value;
  }
};
blink.mojom.RemoteObject_HasMethod_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
  }
};
blink.mojom.RemoteObject_HasMethod_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.methodExists;
  }
};
blink.mojom.RemoteObject_GetMethods_Params = class {
  constructor() {
  }
};
blink.mojom.RemoteObject_GetMethods_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.methodNames;
  }
};
blink.mojom.RemoteObject_InvokeMethod_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !Array<Object> } */
    this.arguments;
  }
};
blink.mojom.RemoteObject_InvokeMethod_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.RemoteInvocationResult } */
    this.result;
  }
};

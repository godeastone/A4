// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.InsecureInputServicePtr = class {

  /**
   */
   passwordFieldVisibleInInsecureContext() {}
  /**
   */
   allPasswordFieldsInInsecureContextInvisible() {}
  /**
   */
   didEditFieldInInsecureContext() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.InsecureInputService;
blink.mojom.InsecureInputService_PasswordFieldVisibleInInsecureContext_Params = class {
  constructor() {
  }
};
blink.mojom.InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params = class {
  constructor() {
  }
};
blink.mojom.InsecureInputService_DidEditFieldInInsecureContext_Params = class {
  constructor() {
  }
};

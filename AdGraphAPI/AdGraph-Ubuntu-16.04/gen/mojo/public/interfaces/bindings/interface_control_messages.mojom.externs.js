// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojo = {};
/** @const */
mojo.interfaceControl = {};
mojo.interfaceControl.RunMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};
mojo.interfaceControl.RunResponseMessageParams = class {
  constructor() {
    /** @type { Object } */
    this.output;
  }
};
mojo.interfaceControl.QueryVersion = class {
  constructor() {
  }
};
mojo.interfaceControl.QueryVersionResult = class {
  constructor() {
    /** @type { !number } */
    this.version;
  }
};
mojo.interfaceControl.FlushForTesting = class {
  constructor() {
  }
};
mojo.interfaceControl.RunOrClosePipeMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};
mojo.interfaceControl.RequireVersion = class {
  constructor() {
    /** @type { !number } */
    this.version;
  }
};

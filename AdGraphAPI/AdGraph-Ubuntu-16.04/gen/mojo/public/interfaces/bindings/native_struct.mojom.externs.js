// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojo = {};
/** @const */
mojo.native = {};
mojo.native.SerializedHandle = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.theHandle;
    /** @type { !mojo.native.Type } */
    this.type;
  }
};
mojo.native.NativeStruct = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
    /** @type { Array<mojo.native.SerializedHandle> } */
    this.handles;
  }
};

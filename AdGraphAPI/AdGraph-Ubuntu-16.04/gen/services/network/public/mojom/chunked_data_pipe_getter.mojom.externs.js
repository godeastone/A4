// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.ChunkedDataPipeGetterPtr = class {

  /**
   * @return {Promise}
   */
   getSize() {}
  /**
   * @param { !mojo.MojoHandle } pipe
   */
   startReading(pipe) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.ChunkedDataPipeGetter;
network.mojom.ChunkedDataPipeGetter_GetSize_Params = class {
  constructor() {
  }
};
network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.status;
    /** @type { !number } */
    this.size;
  }
};
network.mojom.ChunkedDataPipeGetter_StartReading_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.pipe;
  }
};

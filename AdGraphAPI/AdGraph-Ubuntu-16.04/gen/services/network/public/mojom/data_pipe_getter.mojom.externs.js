// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.DataPipeGetterPtr = class {

  /**
   * @param { !mojo.MojoHandle } pipe
   * @return {Promise}
   */
   read(pipe) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   clone(request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.DataPipeGetter;
network.mojom.DataPipeGetter_Read_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.pipe;
  }
};
network.mojom.DataPipeGetter_Read_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.status;
    /** @type { !number } */
    this.size;
  }
};
network.mojom.DataPipeGetter_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};

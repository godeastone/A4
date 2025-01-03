// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let download = {};
/** @const */
download.mojom = {};
/** @implements {mojo.InterfacePtr} */
download.mojom.DownloadStreamClientPtr = class {

  /**
   * @param { !download.mojom.NetworkRequestStatus } status
   */
   onStreamCompleted(status) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
download.mojom.DownloadStreamClient;
download.mojom.DownloadStreamHandle = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.stream;
    /** @type { !mojo.InterfaceRequest } */
    this.clientRequest;
  }
};
download.mojom.DownloadStreamClient_OnStreamCompleted_Params = class {
  constructor() {
    /** @type { !download.mojom.NetworkRequestStatus } */
    this.status;
  }
};

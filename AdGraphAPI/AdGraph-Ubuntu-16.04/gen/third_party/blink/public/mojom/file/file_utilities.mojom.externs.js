// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.FileUtilitiesHostPtr = class {

  /**
   * @param { !mojoBase.mojom.FilePath } path
   * @return {Promise}
   */
   getFileInfo(path) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.FileUtilitiesHost;
blink.mojom.FileUtilitiesHost_GetFileInfo_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.path;
  }
};
blink.mojom.FileUtilitiesHost_GetFileInfo_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.FileInfo } */
    this.result;
  }
};

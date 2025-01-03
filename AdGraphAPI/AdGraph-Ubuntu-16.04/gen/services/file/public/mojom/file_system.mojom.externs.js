// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let file = {};
/** @const */
file.mojom = {};
/** @implements {mojo.InterfacePtr} */
file.mojom.FileSystemPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } dir
   * @return {Promise}
   */
   getDirectory(dir) {}
  /**
   * @param { !string } dirPath
   * @param { !mojo.InterfaceRequest } dir
   * @return {Promise}
   */
   getSubDirectory(dirPath, dir) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
file.mojom.FileSystem;
file.mojom.FileSystem_GetDirectory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.dir;
  }
};
file.mojom.FileSystem_GetDirectory_ResponseParams = class {
  constructor() {
  }
};
file.mojom.FileSystem_GetSubDirectory_Params = class {
  constructor() {
    /** @type { !string } */
    this.dirPath;
    /** @type { !mojo.InterfaceRequest } */
    this.dir;
  }
};
file.mojom.FileSystem_GetSubDirectory_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.err;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let filesystem = {};
/** @const */
filesystem.mojom = {};
/** @implements {mojo.InterfacePtr} */
filesystem.mojom.FileSystemPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } directory
   * @return {Promise}
   */
   openTempDirectory(directory) {}
  /**
   * @param { !mojo.InterfaceRequest } directory
   * @return {Promise}
   */
   openPersistentFileSystem(directory) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
filesystem.mojom.FileSystem;
filesystem.mojom.FileSystem_OpenTempDirectory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.directory;
  }
};
filesystem.mojom.FileSystem_OpenTempDirectory_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.FileSystem_OpenPersistentFileSystem_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.directory;
  }
};
filesystem.mojom.FileSystem_OpenPersistentFileSystem_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};

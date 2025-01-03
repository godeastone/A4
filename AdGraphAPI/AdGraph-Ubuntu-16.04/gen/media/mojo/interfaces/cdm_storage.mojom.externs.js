// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmStoragePtr = class {

  /**
   * @param { !string } fileName
   * @return {Promise}
   */
   open(fileName) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmStorage;
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmFilePtr = class {

  /**
   * @return {Promise}
   */
   openFileForWriting() {}
  /**
   * @return {Promise}
   */
   commitWrite() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmFile;
media.mojom.CdmStorage_Open_Params = class {
  constructor() {
    /** @type { !string } */
    this.fileName;
  }
};
media.mojom.CdmStorage_Open_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { mojoBase.mojom.File } */
    this.fileForReading;
    /** @type { mojo.AssociatedInterfacePtrInfo } */
    this.cdmFile;
  }
};
media.mojom.CdmFile_OpenFileForWriting_Params = class {
  constructor() {
  }
};
media.mojom.CdmFile_OpenFileForWriting_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.fileForWriting;
  }
};
media.mojom.CdmFile_CommitWrite_Params = class {
  constructor() {
  }
};
media.mojom.CdmFile_CommitWrite_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.updatedFileForReading;
  }
};

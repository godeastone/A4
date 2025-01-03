// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.WebDatabasePtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } name
   * @param { !number } size
   */
   updateSize(origin, name, size) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } name
   */
   closeImmediately(origin, name) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WebDatabase;
/** @implements {mojo.InterfacePtr} */
blink.mojom.WebDatabaseHostPtr = class {

  /**
   * @param { !mojoBase.mojom.String16 } vfsFileName
   * @param { !number } desiredFlags
   * @return {Promise}
   */
   openFile(vfsFileName, desiredFlags) {}
  /**
   * @param { !mojoBase.mojom.String16 } vfsFileName
   * @param { !boolean } syncDir
   * @return {Promise}
   */
   deleteFile(vfsFileName, syncDir) {}
  /**
   * @param { !mojoBase.mojom.String16 } vfsFileName
   * @return {Promise}
   */
   getFileAttributes(vfsFileName) {}
  /**
   * @param { !mojoBase.mojom.String16 } vfsFileName
   * @return {Promise}
   */
   getFileSize(vfsFileName) {}
  /**
   * @param { !mojoBase.mojom.String16 } vfsFileName
   * @param { !number } expectedSize
   * @return {Promise}
   */
   setFileSize(vfsFileName, expectedSize) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @return {Promise}
   */
   getSpaceAvailable(origin) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } databaseName
   * @param { !mojoBase.mojom.String16 } databaseDescription
   * @param { !number } estimatedSize
   */
   opened(origin, databaseName, databaseDescription, estimatedSize) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } databaseName
   */
   modified(origin, databaseName) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } databaseName
   */
   closed(origin, databaseName) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } databaseName
   * @param { !number } error
   */
   handleSqliteError(origin, databaseName, error) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WebDatabaseHost;
blink.mojom.WebDatabase_UpdateSize_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !number } */
    this.size;
  }
};
blink.mojom.WebDatabase_CloseImmediately_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
  }
};
blink.mojom.WebDatabaseHost_OpenFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.vfsFileName;
    /** @type { !number } */
    this.desiredFlags;
  }
};
blink.mojom.WebDatabaseHost_OpenFile_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.file;
  }
};
blink.mojom.WebDatabaseHost_DeleteFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.vfsFileName;
    /** @type { !boolean } */
    this.syncDir;
  }
};
blink.mojom.WebDatabaseHost_DeleteFile_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.sqliteErrorCode;
  }
};
blink.mojom.WebDatabaseHost_GetFileAttributes_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.vfsFileName;
  }
};
blink.mojom.WebDatabaseHost_GetFileAttributes_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.attributes;
  }
};
blink.mojom.WebDatabaseHost_GetFileSize_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.vfsFileName;
  }
};
blink.mojom.WebDatabaseHost_GetFileSize_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.size;
  }
};
blink.mojom.WebDatabaseHost_SetFileSize_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.vfsFileName;
    /** @type { !number } */
    this.expectedSize;
  }
};
blink.mojom.WebDatabaseHost_SetFileSize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
blink.mojom.WebDatabaseHost_GetSpaceAvailable_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
  }
};
blink.mojom.WebDatabaseHost_GetSpaceAvailable_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.spaceAvailable;
  }
};
blink.mojom.WebDatabaseHost_Opened_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.databaseName;
    /** @type { !mojoBase.mojom.String16 } */
    this.databaseDescription;
    /** @type { !number } */
    this.estimatedSize;
  }
};
blink.mojom.WebDatabaseHost_Modified_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.databaseName;
  }
};
blink.mojom.WebDatabaseHost_Closed_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.databaseName;
  }
};
blink.mojom.WebDatabaseHost_HandleSqliteError_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.databaseName;
    /** @type { !number } */
    this.error;
  }
};

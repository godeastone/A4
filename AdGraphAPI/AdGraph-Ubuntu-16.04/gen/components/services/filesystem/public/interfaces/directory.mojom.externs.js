// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let filesystem = {};
/** @const */
filesystem.mojom = {};
/** @implements {mojo.InterfacePtr} */
filesystem.mojom.DirectoryPtr = class {

  /**
   * @return {Promise}
   */
   read() {}
  /**
   * @param { !string } path
   * @param { mojo.InterfaceRequest } file
   * @param { !number } openFlags
   * @return {Promise}
   */
   openFile(path, file, openFlags) {}
  /**
   * @param { !string } path
   * @param { !number } openFlags
   * @return {Promise}
   */
   openFileHandle(path, openFlags) {}
  /**
   * @param { !Array<filesystem.mojom.FileOpenDetails> } files
   * @return {Promise}
   */
   openFileHandles(files) {}
  /**
   * @param { !string } path
   * @param { mojo.InterfaceRequest } directory
   * @param { !number } openFlags
   * @return {Promise}
   */
   openDirectory(path, directory, openFlags) {}
  /**
   * @param { !string } path
   * @param { !string } newPath
   * @return {Promise}
   */
   rename(path, newPath) {}
  /**
   * @param { !string } path
   * @param { !string } newPath
   * @return {Promise}
   */
   replace(path, newPath) {}
  /**
   * @param { !string } path
   * @param { !number } deleteFlags
   * @return {Promise}
   */
   delete(path, deleteFlags) {}
  /**
   * @param { !string } path
   * @return {Promise}
   */
   exists(path) {}
  /**
   * @param { !string } path
   * @return {Promise}
   */
   isWritable(path) {}
  /**
   * @return {Promise}
   */
   flush() {}
  /**
   * @param { !string } path
   * @return {Promise}
   */
   statFile(path) {}
  /**
   * @param { !mojo.InterfaceRequest } directory
   */
   clone(directory) {}
  /**
   * @param { !string } path
   * @return {Promise}
   */
   readEntireFile(path) {}
  /**
   * @param { !string } path
   * @param { !Array<number> } data
   * @return {Promise}
   */
   writeFile(path, data) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
filesystem.mojom.Directory;
filesystem.mojom.FileOpenDetails = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !number } */
    this.openFlags;
  }
};
filesystem.mojom.FileOpenResult = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { mojoBase.mojom.File } */
    this.fileHandle;
  }
};
filesystem.mojom.Directory_Read_Params = class {
  constructor() {
  }
};
filesystem.mojom.Directory_Read_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { Array<filesystem.mojom.DirectoryEntry> } */
    this.directoryContents;
  }
};
filesystem.mojom.Directory_OpenFile_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { mojo.InterfaceRequest } */
    this.file;
    /** @type { !number } */
    this.openFlags;
  }
};
filesystem.mojom.Directory_OpenFile_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_OpenFileHandle_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !number } */
    this.openFlags;
  }
};
filesystem.mojom.Directory_OpenFileHandle_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { mojoBase.mojom.File } */
    this.fileHandle;
  }
};
filesystem.mojom.Directory_OpenFileHandles_Params = class {
  constructor() {
    /** @type { !Array<filesystem.mojom.FileOpenDetails> } */
    this.files;
  }
};
filesystem.mojom.Directory_OpenFileHandles_ResponseParams = class {
  constructor() {
    /** @type { !Array<filesystem.mojom.FileOpenResult> } */
    this.results;
  }
};
filesystem.mojom.Directory_OpenDirectory_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { mojo.InterfaceRequest } */
    this.directory;
    /** @type { !number } */
    this.openFlags;
  }
};
filesystem.mojom.Directory_OpenDirectory_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_Rename_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !string } */
    this.newPath;
  }
};
filesystem.mojom.Directory_Rename_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_Replace_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !string } */
    this.newPath;
  }
};
filesystem.mojom.Directory_Replace_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_Delete_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !number } */
    this.deleteFlags;
  }
};
filesystem.mojom.Directory_Delete_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_Exists_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
  }
};
filesystem.mojom.Directory_Exists_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !boolean } */
    this.exists;
  }
};
filesystem.mojom.Directory_IsWritable_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
  }
};
filesystem.mojom.Directory_IsWritable_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !boolean } */
    this.isWritable;
  }
};
filesystem.mojom.Directory_Flush_Params = class {
  constructor() {
  }
};
filesystem.mojom.Directory_Flush_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.Directory_StatFile_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
  }
};
filesystem.mojom.Directory_StatFile_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { filesystem.mojom.FileInformation } */
    this.fileInformation;
  }
};
filesystem.mojom.Directory_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.directory;
  }
};
filesystem.mojom.Directory_ReadEntireFile_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
  }
};
filesystem.mojom.Directory_ReadEntireFile_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !Array<number> } */
    this.data;
  }
};
filesystem.mojom.Directory_WriteFile_Params = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !Array<number> } */
    this.data;
  }
};
filesystem.mojom.Directory_WriteFile_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};

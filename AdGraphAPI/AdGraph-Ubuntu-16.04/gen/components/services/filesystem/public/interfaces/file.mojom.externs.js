// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let filesystem = {};
/** @const */
filesystem.mojom = {};
/** @implements {mojo.InterfacePtr} */
filesystem.mojom.FilePtr = class {

  /**
   * @return {Promise}
   */
   close() {}
  /**
   * @param { !number } numBytesToRead
   * @param { !number } offset
   * @param { !filesystem.mojom.Whence } whence
   * @return {Promise}
   */
   read(numBytesToRead, offset, whence) {}
  /**
   * @param { !Array<number> } bytesToWrite
   * @param { !number } offset
   * @param { !filesystem.mojom.Whence } whence
   * @return {Promise}
   */
   write(bytesToWrite, offset, whence) {}
  /**
   * @return {Promise}
   */
   tell() {}
  /**
   * @param { !number } offset
   * @param { !filesystem.mojom.Whence } whence
   * @return {Promise}
   */
   seek(offset, whence) {}
  /**
   * @return {Promise}
   */
   stat() {}
  /**
   * @param { !number } size
   * @return {Promise}
   */
   truncate(size) {}
  /**
   * @param { filesystem.mojom.TimespecOrNow } atime
   * @param { filesystem.mojom.TimespecOrNow } mtime
   * @return {Promise}
   */
   touch(atime, mtime) {}
  /**
   * @param { !mojo.InterfaceRequest } file
   * @return {Promise}
   */
   dup(file) {}
  /**
   * @return {Promise}
   */
   flush() {}
  /**
   * @return {Promise}
   */
   lock() {}
  /**
   * @return {Promise}
   */
   unlock() {}
  /**
   * @return {Promise}
   */
   asHandle() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
filesystem.mojom.File;
filesystem.mojom.File_Close_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Close_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.err;
  }
};
filesystem.mojom.File_Read_Params = class {
  constructor() {
    /** @type { !number } */
    this.numBytesToRead;
    /** @type { !filesystem.mojom.Whence } */
    this.whence;
    /** @type { !number } */
    this.offset;
  }
};
filesystem.mojom.File_Read_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { Array<number> } */
    this.bytesRead;
  }
};
filesystem.mojom.File_Write_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.bytesToWrite;
    /** @type { !number } */
    this.offset;
    /** @type { !filesystem.mojom.Whence } */
    this.whence;
  }
};
filesystem.mojom.File_Write_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !number } */
    this.numBytesWritten;
  }
};
filesystem.mojom.File_Tell_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Tell_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !number } */
    this.position;
  }
};
filesystem.mojom.File_Seek_Params = class {
  constructor() {
    /** @type { !number } */
    this.offset;
    /** @type { !filesystem.mojom.Whence } */
    this.whence;
  }
};
filesystem.mojom.File_Seek_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { !number } */
    this.position;
  }
};
filesystem.mojom.File_Stat_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Stat_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { filesystem.mojom.FileInformation } */
    this.fileInformation;
  }
};
filesystem.mojom.File_Truncate_Params = class {
  constructor() {
    /** @type { !number } */
    this.size;
  }
};
filesystem.mojom.File_Truncate_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_Touch_Params = class {
  constructor() {
    /** @type { filesystem.mojom.TimespecOrNow } */
    this.atime;
    /** @type { filesystem.mojom.TimespecOrNow } */
    this.mtime;
  }
};
filesystem.mojom.File_Touch_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_Dup_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.file;
  }
};
filesystem.mojom.File_Dup_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_Flush_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Flush_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_Lock_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Lock_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_Unlock_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_Unlock_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
  }
};
filesystem.mojom.File_AsHandle_Params = class {
  constructor() {
  }
};
filesystem.mojom.File_AsHandle_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.FileError } */
    this.error;
    /** @type { mojoBase.mojom.File } */
    this.fileHandle;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BlobReaderClientPtr = class {

  /**
   * @param { !number } totalSize
   * @param { !number } expectedContentSize
   */
   onCalculatedSize(totalSize, expectedContentSize) {}
  /**
   * @param { !number } status
   * @param { !number } dataLength
   */
   onComplete(status, dataLength) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BlobReaderClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.BlobPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } blob
   */
   clone(blob) {}
  /**
   * @param { !mojo.InterfaceRequest } dataPipeGetter
   */
   asDataPipeGetter(dataPipeGetter) {}
  /**
   * @param { !mojo.MojoHandle } pipe
   * @param { blink.mojom.BlobReaderClientPtr } client
   */
   readAll(pipe, client) {}
  /**
   * @param { !number } offset
   * @param { !number } length
   * @param { !mojo.MojoHandle } pipe
   * @param { blink.mojom.BlobReaderClientPtr } client
   */
   readRange(offset, length, pipe, client) {}
  /**
   * @return {Promise}
   */
   readSideData() {}
  /**
   * @return {Promise}
   */
   getInternalUUID() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.Blob;
blink.mojom.BlobReaderClient_OnCalculatedSize_Params = class {
  constructor() {
    /** @type { !number } */
    this.totalSize;
    /** @type { !number } */
    this.expectedContentSize;
  }
};
blink.mojom.BlobReaderClient_OnComplete_Params = class {
  constructor() {
    /** @type { !number } */
    this.status;
    /** @type { !number } */
    this.dataLength;
  }
};
blink.mojom.Blob_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.blob;
  }
};
blink.mojom.Blob_AsDataPipeGetter_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.dataPipeGetter;
  }
};
blink.mojom.Blob_ReadAll_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.pipe;
    /** @type { blink.mojom.BlobReaderClientPtr } */
    this.client;
  }
};
blink.mojom.Blob_ReadRange_Params = class {
  constructor() {
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
    /** @type { !mojo.MojoHandle } */
    this.pipe;
    /** @type { blink.mojom.BlobReaderClientPtr } */
    this.client;
  }
};
blink.mojom.Blob_ReadSideData_Params = class {
  constructor() {
  }
};
blink.mojom.Blob_ReadSideData_ResponseParams = class {
  constructor() {
    /** @type { Array<number> } */
    this.data;
  }
};
blink.mojom.Blob_GetInternalUUID_Params = class {
  constructor() {
  }
};
blink.mojom.Blob_GetInternalUUID_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.uuid;
  }
};

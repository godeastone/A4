// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BytesProviderPtr = class {

  /**
   * @return {Promise}
   */
   requestAsReply() {}
  /**
   * @param { !mojo.MojoHandle } pipe
   */
   requestAsStream(pipe) {}
  /**
   * @param { !number } sourceOffset
   * @param { !number } sourceSize
   * @param { !mojoBase.mojom.File } file
   * @param { !number } fileOffset
   * @return {Promise}
   */
   requestAsFile(sourceOffset, sourceSize, file, fileOffset) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BytesProvider;
blink.mojom.DataElementBytes = class {
  constructor() {
    /** @type { !number } */
    this.length;
    /** @type { Array<number> } */
    this.embeddedData;
    /** @type { !blink.mojom.BytesProviderPtr } */
    this.data;
  }
};
blink.mojom.DataElementFile = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.path;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
    /** @type { mojoBase.mojom.Time } */
    this.expectedModificationTime;
  }
};
blink.mojom.DataElementFilesystemURL = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
    /** @type { mojoBase.mojom.Time } */
    this.expectedModificationTime;
  }
};
blink.mojom.DataElementBlob = class {
  constructor() {
    /** @type { !blink.mojom.BlobPtr } */
    this.blob;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
  }
};
blink.mojom.BytesProvider_RequestAsReply_Params = class {
  constructor() {
  }
};
blink.mojom.BytesProvider_RequestAsReply_ResponseParams = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
  }
};
blink.mojom.BytesProvider_RequestAsStream_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.pipe;
  }
};
blink.mojom.BytesProvider_RequestAsFile_Params = class {
  constructor() {
    /** @type { !number } */
    this.sourceOffset;
    /** @type { !number } */
    this.sourceSize;
    /** @type { !mojoBase.mojom.File } */
    this.file;
    /** @type { !number } */
    this.fileOffset;
  }
};
blink.mojom.BytesProvider_RequestAsFile_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.Time } */
    this.timeFileModified;
  }
};

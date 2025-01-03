// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.RemovableStorageWriterPtr = class {

  /**
   * @param { !mojoBase.mojom.FilePath } source
   * @param { !mojoBase.mojom.FilePath } target
   * @param { !chrome.mojom.RemovableStorageWriterClientPtr } client
   */
   write(source, target, client) {}
  /**
   * @param { !mojoBase.mojom.FilePath } source
   * @param { !mojoBase.mojom.FilePath } target
   * @param { !chrome.mojom.RemovableStorageWriterClientPtr } client
   */
   verify(source, target, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.RemovableStorageWriter;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.RemovableStorageWriterClientPtr = class {

  /**
   * @param { !number } progress
   */
   progress(progress) {}
  /**
   * @param { string } error
   */
   complete(error) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.RemovableStorageWriterClient;
chrome.mojom.RemovableStorageWriter_Write_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.source;
    /** @type { !mojoBase.mojom.FilePath } */
    this.target;
    /** @type { !chrome.mojom.RemovableStorageWriterClientPtr } */
    this.client;
  }
};
chrome.mojom.RemovableStorageWriter_Verify_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.source;
    /** @type { !mojoBase.mojom.FilePath } */
    this.target;
    /** @type { !chrome.mojom.RemovableStorageWriterClientPtr } */
    this.client;
  }
};
chrome.mojom.RemovableStorageWriterClient_Progress_Params = class {
  constructor() {
    /** @type { !number } */
    this.progress;
  }
};
chrome.mojom.RemovableStorageWriterClient_Complete_Params = class {
  constructor() {
    /** @type { string } */
    this.error;
  }
};

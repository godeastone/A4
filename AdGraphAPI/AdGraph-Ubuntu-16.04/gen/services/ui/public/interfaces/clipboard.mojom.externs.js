// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.ClipboardPtr = class {

  /**
   * @param { !ui.mojom.Type } clipboardType
   * @return {Promise}
   */
   getSequenceNumber(clipboardType) {}
  /**
   * @param { !ui.mojom.Type } clipboardTypes
   * @return {Promise}
   */
   getAvailableMimeTypes(clipboardTypes) {}
  /**
   * @param { !ui.mojom.Type } clipboardType
   * @param { !string } mimeType
   * @return {Promise}
   */
   readClipboardData(clipboardType, mimeType) {}
  /**
   * @param { !ui.mojom.Type } clipboardType
   * @param { Map<string, Array<number>> } data
   * @return {Promise}
   */
   writeClipboardData(clipboardType, data) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.Clipboard;
ui.mojom.Clipboard_GetSequenceNumber_Params = class {
  constructor() {
    /** @type { !ui.mojom.Type } */
    this.clipboardType;
  }
};
ui.mojom.Clipboard_GetSequenceNumber_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.sequence;
  }
};
ui.mojom.Clipboard_GetAvailableMimeTypes_Params = class {
  constructor() {
    /** @type { !ui.mojom.Type } */
    this.clipboardTypes;
  }
};
ui.mojom.Clipboard_GetAvailableMimeTypes_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.sequence;
    /** @type { !Array<string> } */
    this.types;
  }
};
ui.mojom.Clipboard_ReadClipboardData_Params = class {
  constructor() {
    /** @type { !ui.mojom.Type } */
    this.clipboardType;
    /** @type { !string } */
    this.mimeType;
  }
};
ui.mojom.Clipboard_ReadClipboardData_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.sequence;
    /** @type { Array<number> } */
    this.data;
  }
};
ui.mojom.Clipboard_WriteClipboardData_Params = class {
  constructor() {
    /** @type { !ui.mojom.Type } */
    this.clipboardType;
    /** @type { Map<string, Array<number>> } */
    this.data;
  }
};
ui.mojom.Clipboard_WriteClipboardData_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.sequence;
  }
};

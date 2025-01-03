// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ClipboardHostPtr = class {

  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   getSequenceNumber(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardFormat } format
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   isFormatAvailable(format, buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   readAvailableTypes(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   readText(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   readHtml(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   readRtf(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @return {Promise}
   */
   readImage(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !mojoBase.mojom.String16 } type
   * @return {Promise}
   */
   readCustomData(buffer, type) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !mojoBase.mojom.BigString16 } text
   */
   writeText(buffer, text) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !mojoBase.mojom.BigString16 } markup
   * @param { !url.mojom.Url } url
   */
   writeHtml(buffer, markup, url) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   */
   writeSmartPasteMarker(buffer) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !Map<mojoBase.mojom.String16, mojoBase.mojom.BigString16> } data
   */
   writeCustomData(buffer, data) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !string } url
   * @param { !mojoBase.mojom.String16 } title
   */
   writeBookmark(buffer, url, title) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   * @param { !gfx.mojom.Size } sizeInPixels
   * @param { !mojo.MojoHandle } sharedBufferHandle
   */
   writeImage(buffer, sizeInPixels, sharedBufferHandle) {}
  /**
   * @param { !blink.mojom.ClipboardBuffer } buffer
   */
   commitWrite(buffer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ClipboardHost;
blink.mojom.ClipboardHost_GetSequenceNumber_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_GetSequenceNumber_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
blink.mojom.ClipboardHost_IsFormatAvailable_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardFormat } */
    this.format;
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_IsFormatAvailable_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
blink.mojom.ClipboardHost_ReadAvailableTypes_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_ReadAvailableTypes_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.types;
    /** @type { !boolean } */
    this.result;
  }
};
blink.mojom.ClipboardHost_ReadText_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_ReadText_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.BigString16 } */
    this.result;
  }
};
blink.mojom.ClipboardHost_ReadHtml_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_ReadHtml_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.BigString16 } */
    this.markup;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.fragmentStart;
    /** @type { !number } */
    this.fragmentEnd;
  }
};
blink.mojom.ClipboardHost_ReadRtf_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_ReadRtf_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.result;
  }
};
blink.mojom.ClipboardHost_ReadImage_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_ReadImage_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.SerializedBlob } */
    this.blob;
  }
};
blink.mojom.ClipboardHost_ReadCustomData_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !mojoBase.mojom.String16 } */
    this.type;
  }
};
blink.mojom.ClipboardHost_ReadCustomData_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.BigString16 } */
    this.result;
  }
};
blink.mojom.ClipboardHost_WriteText_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !mojoBase.mojom.BigString16 } */
    this.text;
  }
};
blink.mojom.ClipboardHost_WriteHtml_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !mojoBase.mojom.BigString16 } */
    this.markup;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ClipboardHost_WriteSmartPasteMarker_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};
blink.mojom.ClipboardHost_WriteCustomData_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !Map<mojoBase.mojom.String16, mojoBase.mojom.BigString16> } */
    this.data;
  }
};
blink.mojom.ClipboardHost_WriteBookmark_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !string } */
    this.url;
    /** @type { !mojoBase.mojom.String16 } */
    this.title;
  }
};
blink.mojom.ClipboardHost_WriteImage_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
    /** @type { !mojo.MojoHandle } */
    this.sharedBufferHandle;
    /** @type { !gfx.mojom.Size } */
    this.sizeInPixels;
  }
};
blink.mojom.ClipboardHost_CommitWrite_Params = class {
  constructor() {
    /** @type { !blink.mojom.ClipboardBuffer } */
    this.buffer;
  }
};

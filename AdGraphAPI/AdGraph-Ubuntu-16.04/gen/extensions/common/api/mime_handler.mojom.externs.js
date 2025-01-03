// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let extensions = {};
/** @const */
extensions.mimeHandler = {};
/** @implements {mojo.InterfacePtr} */
extensions.mimeHandler.MimeHandlerServicePtr = class {

  /**
   * @return {Promise}
   */
   getStreamInfo() {}
  /**
   * @return {Promise}
   */
   abortStream() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
extensions.mimeHandler.MimeHandlerService;
extensions.mimeHandler.StreamInfo = class {
  constructor() {
    /** @type { !string } */
    this.mimeType;
    /** @type { !string } */
    this.originalUrl;
    /** @type { !string } */
    this.streamUrl;
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.embedded;
    /** @type { !Map<string, string> } */
    this.responseHeaders;
  }
};
extensions.mimeHandler.MimeHandlerService_GetStreamInfo_Params = class {
  constructor() {
  }
};
extensions.mimeHandler.MimeHandlerService_GetStreamInfo_ResponseParams = class {
  constructor() {
    /** @type { extensions.mimeHandler.StreamInfo } */
    this.streamInfo;
  }
};
extensions.mimeHandler.MimeHandlerService_AbortStream_Params = class {
  constructor() {
  }
};
extensions.mimeHandler.MimeHandlerService_AbortStream_ResponseParams = class {
  constructor() {
  }
};

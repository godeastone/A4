// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.NFCPtr = class {

  /**
   * @param { !device.mojom.NFCClientPtr } client
   */
   setClient(client) {}
  /**
   * @param { !device.mojom.NFCMessage } message
   * @param { device.mojom.NFCPushOptions } options
   * @return {Promise}
   */
   push(message, options) {}
  /**
   * @param { !device.mojom.NFCPushTarget } target
   * @return {Promise}
   */
   cancelPush(target) {}
  /**
   * @param { !device.mojom.NFCWatchOptions } options
   * @return {Promise}
   */
   watch(options) {}
  /**
   * @param { !number } id
   * @return {Promise}
   */
   cancelWatch(id) {}
  /**
   * @return {Promise}
   */
   cancelAllWatches() {}
  /**
   */
   suspendNFCOperations() {}
  /**
   */
   resumeNFCOperations() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.NFC;
/** @implements {mojo.InterfacePtr} */
device.mojom.NFCClientPtr = class {

  /**
   * @param { !Array<number> } watchIds
   * @param { !device.mojom.NFCMessage } message
   */
   onWatch(watchIds, message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.NFCClient;
device.mojom.NFCError = class {
  constructor() {
    /** @type { !device.mojom.NFCErrorType } */
    this.errorType;
  }
};
device.mojom.NFCRecord = class {
  constructor() {
    /** @type { !device.mojom.NFCRecordType } */
    this.recordType;
    /** @type { string } */
    this.mediaType;
    /** @type { !Array<number> } */
    this.data;
  }
};
device.mojom.NFCMessage = class {
  constructor() {
    /** @type { !Array<device.mojom.NFCRecord> } */
    this.data;
    /** @type { string } */
    this.url;
  }
};
device.mojom.NFCPushOptions = class {
  constructor() {
    /** @type { !device.mojom.NFCPushTarget } */
    this.target;
    /** @type { !boolean } */
    this.ignoreRead;
    /** @type { !number } */
    this.timeout;
  }
};
device.mojom.NFCRecordTypeFilter = class {
  constructor() {
    /** @type { !device.mojom.NFCRecordType } */
    this.recordType;
  }
};
device.mojom.NFCWatchOptions = class {
  constructor() {
    /** @type { string } */
    this.url;
    /** @type { device.mojom.NFCRecordTypeFilter } */
    this.recordFilter;
    /** @type { string } */
    this.mediaType;
    /** @type { !device.mojom.NFCWatchMode } */
    this.mode;
  }
};
device.mojom.NFC_SetClient_Params = class {
  constructor() {
    /** @type { !device.mojom.NFCClientPtr } */
    this.client;
  }
};
device.mojom.NFC_Push_Params = class {
  constructor() {
    /** @type { !device.mojom.NFCMessage } */
    this.message;
    /** @type { device.mojom.NFCPushOptions } */
    this.options;
  }
};
device.mojom.NFC_Push_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.NFCError } */
    this.error;
  }
};
device.mojom.NFC_CancelPush_Params = class {
  constructor() {
    /** @type { !device.mojom.NFCPushTarget } */
    this.target;
  }
};
device.mojom.NFC_CancelPush_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.NFCError } */
    this.error;
  }
};
device.mojom.NFC_Watch_Params = class {
  constructor() {
    /** @type { !device.mojom.NFCWatchOptions } */
    this.options;
  }
};
device.mojom.NFC_Watch_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { device.mojom.NFCError } */
    this.error;
  }
};
device.mojom.NFC_CancelWatch_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};
device.mojom.NFC_CancelWatch_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.NFCError } */
    this.error;
  }
};
device.mojom.NFC_CancelAllWatches_Params = class {
  constructor() {
  }
};
device.mojom.NFC_CancelAllWatches_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.NFCError } */
    this.error;
  }
};
device.mojom.NFC_SuspendNFCOperations_Params = class {
  constructor() {
  }
};
device.mojom.NFC_ResumeNFCOperations_Params = class {
  constructor() {
  }
};
device.mojom.NFCClient_OnWatch_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.watchIds;
    /** @type { !device.mojom.NFCMessage } */
    this.message;
  }
};

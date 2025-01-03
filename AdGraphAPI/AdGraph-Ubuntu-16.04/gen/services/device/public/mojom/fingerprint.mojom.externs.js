// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.FingerprintObserverPtr = class {

  /**
   */
   onRestarted() {}
  /**
   * @param { !number } scanResult
   * @param { !boolean } isComplete
   * @param { !number } percentComplete
   */
   onEnrollScanDone(scanResult, isComplete, percentComplete) {}
  /**
   * @param { !number } scanResult
   * @param { !Map<string, Array<string>> } matches
   */
   onAuthScanDone(scanResult, matches) {}
  /**
   */
   onSessionFailed() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.FingerprintObserver;
/** @implements {mojo.InterfacePtr} */
device.mojom.FingerprintPtr = class {

  /**
   * @param { !string } userId
   * @return {Promise}
   */
   getRecordsForUser(userId) {}
  /**
   * @param { !string } userId
   * @param { !string } label
   */
   startEnrollSession(userId, label) {}
  /**
   * @return {Promise}
   */
   cancelCurrentEnrollSession() {}
  /**
   * @param { !string } recordPath
   * @return {Promise}
   */
   requestRecordLabel(recordPath) {}
  /**
   * @param { !string } recordPath
   * @param { !string } newLabel
   * @return {Promise}
   */
   setRecordLabel(recordPath, newLabel) {}
  /**
   * @param { !string } recordPath
   * @return {Promise}
   */
   removeRecord(recordPath) {}
  /**
   */
   startAuthSession() {}
  /**
   * @return {Promise}
   */
   endCurrentAuthSession() {}
  /**
   * @return {Promise}
   */
   destroyAllRecords() {}
  /**
   * @param { !device.mojom.FingerprintObserverPtr } observer
   */
   addFingerprintObserver(observer) {}
  /**
   * @return {Promise}
   */
   requestType() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.Fingerprint;
device.mojom.FingerprintObserver_OnRestarted_Params = class {
  constructor() {
  }
};
device.mojom.FingerprintObserver_OnEnrollScanDone_Params = class {
  constructor() {
    /** @type { !number } */
    this.scanResult;
    /** @type { !boolean } */
    this.isComplete;
    /** @type { !number } */
    this.percentComplete;
  }
};
device.mojom.FingerprintObserver_OnAuthScanDone_Params = class {
  constructor() {
    /** @type { !number } */
    this.scanResult;
    /** @type { !Map<string, Array<string>> } */
    this.matches;
  }
};
device.mojom.FingerprintObserver_OnSessionFailed_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_GetRecordsForUser_Params = class {
  constructor() {
    /** @type { !string } */
    this.userId;
  }
};
device.mojom.Fingerprint_GetRecordsForUser_ResponseParams = class {
  constructor() {
    /** @type { !Map<string, string> } */
    this.records;
  }
};
device.mojom.Fingerprint_StartEnrollSession_Params = class {
  constructor() {
    /** @type { !string } */
    this.userId;
    /** @type { !string } */
    this.label;
  }
};
device.mojom.Fingerprint_CancelCurrentEnrollSession_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_CancelCurrentEnrollSession_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Fingerprint_RequestRecordLabel_Params = class {
  constructor() {
    /** @type { !string } */
    this.recordPath;
  }
};
device.mojom.Fingerprint_RequestRecordLabel_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.label;
  }
};
device.mojom.Fingerprint_SetRecordLabel_Params = class {
  constructor() {
    /** @type { !string } */
    this.recordPath;
    /** @type { !string } */
    this.newLabel;
  }
};
device.mojom.Fingerprint_SetRecordLabel_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Fingerprint_RemoveRecord_Params = class {
  constructor() {
    /** @type { !string } */
    this.recordPath;
  }
};
device.mojom.Fingerprint_RemoveRecord_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Fingerprint_StartAuthSession_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_EndCurrentAuthSession_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_EndCurrentAuthSession_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Fingerprint_DestroyAllRecords_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_DestroyAllRecords_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.Fingerprint_AddFingerprintObserver_Params = class {
  constructor() {
    /** @type { !device.mojom.FingerprintObserverPtr } */
    this.observer;
  }
};
device.mojom.Fingerprint_RequestType_Params = class {
  constructor() {
  }
};
device.mojom.Fingerprint_RequestType_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.type;
  }
};

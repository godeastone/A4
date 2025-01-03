// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioLogPtr = class {

  /**
   * @param { !media.mojom.AudioParameters } params
   * @param { !string } deviceId
   */
   onCreated(params, deviceId) {}
  /**
   */
   onStarted() {}
  /**
   */
   onStopped() {}
  /**
   */
   onClosed() {}
  /**
   */
   onError() {}
  /**
   * @param { !number } volume
   */
   onSetVolume(volume) {}
  /**
   * @param { !string } message
   */
   onLogMessage(message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioLog;
media.mojom.AudioLog_OnCreated_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !string } */
    this.deviceId;
  }
};
media.mojom.AudioLog_OnStarted_Params = class {
  constructor() {
  }
};
media.mojom.AudioLog_OnStopped_Params = class {
  constructor() {
  }
};
media.mojom.AudioLog_OnClosed_Params = class {
  constructor() {
  }
};
media.mojom.AudioLog_OnError_Params = class {
  constructor() {
  }
};
media.mojom.AudioLog_OnSetVolume_Params = class {
  constructor() {
    /** @type { !number } */
    this.volume;
  }
};
media.mojom.AudioLog_OnLogMessage_Params = class {
  constructor() {
    /** @type { !string } */
    this.message;
  }
};

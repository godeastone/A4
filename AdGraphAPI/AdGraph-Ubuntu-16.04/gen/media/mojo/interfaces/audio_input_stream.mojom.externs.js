// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioInputStreamPtr = class {

  /**
   */
   record() {}
  /**
   * @param { !number } volume
   */
   setVolume(volume) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioInputStream;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioInputStreamClientPtr = class {

  /**
   */
   onError() {}
  /**
   * @param { !boolean } isMuted
   */
   onMutedStateChanged(isMuted) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioInputStreamClient;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioInputStreamObserverPtr = class {

  /**
   */
   didStartRecording() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioInputStreamObserver;
media.mojom.AudioInputStream_Record_Params = class {
  constructor() {
  }
};
media.mojom.AudioInputStream_SetVolume_Params = class {
  constructor() {
    /** @type { !number } */
    this.volume;
  }
};
media.mojom.AudioInputStreamClient_OnError_Params = class {
  constructor() {
  }
};
media.mojom.AudioInputStreamClient_OnMutedStateChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isMuted;
  }
};
media.mojom.AudioInputStreamObserver_DidStartRecording_Params = class {
  constructor() {
  }
};

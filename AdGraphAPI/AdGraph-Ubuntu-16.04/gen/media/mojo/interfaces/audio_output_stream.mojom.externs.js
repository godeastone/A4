// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioOutputStreamPtr = class {

  /**
   */
   play() {}
  /**
   */
   pause() {}
  /**
   * @param { !number } volume
   */
   setVolume(volume) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioOutputStream;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioOutputStreamObserverPtr = class {

  /**
   */
   didStartPlaying() {}
  /**
   */
   didStopPlaying() {}
  /**
   * @param { !boolean } isAudible
   */
   didChangeAudibleState(isAudible) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioOutputStreamObserver;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioOutputStreamProviderPtr = class {

  /**
   * @param { !media.mojom.AudioParameters } params
   * @param { !media.mojom.AudioOutputStreamProviderClientPtr } client
   */
   acquire(params, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioOutputStreamProvider;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioOutputStreamProviderClientPtr = class {

  /**
   * @param { !media.mojom.AudioOutputStreamPtr } stream
   * @param { !media.mojom.AudioDataPipe } dataPipe
   */
   created(stream, dataPipe) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioOutputStreamProviderClient;
media.mojom.AudioOutputStream_Play_Params = class {
  constructor() {
  }
};
media.mojom.AudioOutputStream_Pause_Params = class {
  constructor() {
  }
};
media.mojom.AudioOutputStream_SetVolume_Params = class {
  constructor() {
    /** @type { !number } */
    this.volume;
  }
};
media.mojom.AudioOutputStreamObserver_DidStartPlaying_Params = class {
  constructor() {
  }
};
media.mojom.AudioOutputStreamObserver_DidStopPlaying_Params = class {
  constructor() {
  }
};
media.mojom.AudioOutputStreamObserver_DidChangeAudibleState_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isAudible;
  }
};
media.mojom.AudioOutputStreamProvider_Acquire_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !media.mojom.AudioOutputStreamProviderClientPtr } */
    this.client;
  }
};
media.mojom.AudioOutputStreamProviderClient_Created_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioOutputStreamPtr } */
    this.stream;
    /** @type { !media.mojom.AudioDataPipe } */
    this.dataPipe;
  }
};

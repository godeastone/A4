// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let audio = {};
/** @const */
audio.mojom = {};
/** @implements {mojo.InterfacePtr} */
audio.mojom.LocalMuterPtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.LocalMuter;
/** @implements {mojo.InterfacePtr} */
audio.mojom.StreamFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } stream
   * @param { !media.mojom.AudioInputStreamClientPtr } client
   * @param { media.mojom.AudioInputStreamObserverPtr } observer
   * @param { media.mojom.AudioLogPtr } log
   * @param { !string } deviceId
   * @param { !media.mojom.AudioParameters } params
   * @param { !number } sharedMemoryCount
   * @param { !boolean } enableAgc
   * @param { mojo.MojoHandle } keyPressCountBuffer
   * @return {Promise}
   */
   createInputStream(stream, client, observer, log, deviceId, params, sharedMemoryCount, enableAgc, keyPressCountBuffer) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } inputStreamId
   * @param { !string } outputDeviceId
   */
   associateInputAndOutputForAec(inputStreamId, outputDeviceId) {}
  /**
   * @param { !mojo.InterfaceRequest } stream
   * @param { !mojo.AssociatedInterfacePtrInfo } observer
   * @param { !media.mojom.AudioLogPtr } log
   * @param { !string } deviceId
   * @param { !media.mojom.AudioParameters } params
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   * @return {Promise}
   */
   createOutputStream(stream, observer, log, deviceId, params, groupId) {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } request
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   */
   bindMuter(request, groupId) {}
  /**
   * @param { !mojo.InterfaceRequest } stream
   * @param { !media.mojom.AudioInputStreamClientPtr } client
   * @param { !media.mojom.AudioInputStreamObserverPtr } observer
   * @param { !media.mojom.AudioParameters } params
   * @param { !number } sharedMemoryCount
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   * @return {Promise}
   */
   createLoopbackStream(stream, client, observer, params, sharedMemoryCount, groupId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.StreamFactory;
audio.mojom.StreamFactory_CreateInputStream_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.stream;
    /** @type { !media.mojom.AudioInputStreamClientPtr } */
    this.client;
    /** @type { media.mojom.AudioInputStreamObserverPtr } */
    this.observer;
    /** @type { media.mojom.AudioLogPtr } */
    this.log;
    /** @type { !number } */
    this.sharedMemoryCount;
    /** @type { !string } */
    this.deviceId;
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !boolean } */
    this.enableAgc;
    /** @type { mojo.MojoHandle } */
    this.keyPressCountBuffer;
  }
};
audio.mojom.StreamFactory_CreateInputStream_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioDataPipe } */
    this.dataPipe;
    /** @type { !boolean } */
    this.initiallyMuted;
    /** @type { mojoBase.mojom.UnguessableToken } */
    this.streamId;
  }
};
audio.mojom.StreamFactory_AssociateInputAndOutputForAec_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.inputStreamId;
    /** @type { !string } */
    this.outputDeviceId;
  }
};
audio.mojom.StreamFactory_CreateOutputStream_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.stream;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.observer;
    /** @type { !media.mojom.AudioLogPtr } */
    this.log;
    /** @type { !string } */
    this.deviceId;
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};
audio.mojom.StreamFactory_CreateOutputStream_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioDataPipe } */
    this.dataPipe;
  }
};
audio.mojom.StreamFactory_BindMuter_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};
audio.mojom.StreamFactory_CreateLoopbackStream_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.stream;
    /** @type { !media.mojom.AudioInputStreamClientPtr } */
    this.client;
    /** @type { !media.mojom.AudioInputStreamObserverPtr } */
    this.observer;
    /** @type { !number } */
    this.sharedMemoryCount;
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};
audio.mojom.StreamFactory_CreateLoopbackStream_ResponseParams = class {
  constructor() {
    /** @type { media.mojom.AudioDataPipe } */
    this.dataPipe;
  }
};

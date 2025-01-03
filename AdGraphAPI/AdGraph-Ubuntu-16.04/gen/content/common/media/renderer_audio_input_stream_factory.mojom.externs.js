// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RendererAudioInputStreamFactoryPtr = class {

  /**
   * @param { !content.mojom.RendererAudioInputStreamFactoryClientPtr } client
   * @param { !number } sessionId
   * @param { !media.mojom.AudioParameters } params
   * @param { !boolean } automaticGainControl
   * @param { !number } sharedMemoryCount
   */
   createStream(client, sessionId, params, automaticGainControl, sharedMemoryCount) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } inputStreamId
   * @param { !string } outputDeviceId
   */
   associateInputAndOutputForAec(inputStreamId, outputDeviceId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RendererAudioInputStreamFactory;
/** @implements {mojo.InterfacePtr} */
content.mojom.RendererAudioInputStreamFactoryClientPtr = class {

  /**
   * @param { !media.mojom.AudioInputStreamPtr } stream
   * @param { !mojo.InterfaceRequest } clientRequest
   * @param { !media.mojom.AudioDataPipe } dataPipe
   * @param { !boolean } initiallyMuted
   * @param { mojoBase.mojom.UnguessableToken } streamId
   */
   streamCreated(stream, clientRequest, dataPipe, initiallyMuted, streamId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RendererAudioInputStreamFactoryClient;
content.mojom.RendererAudioInputStreamFactory_CreateStream_Params = class {
  constructor() {
    /** @type { !content.mojom.RendererAudioInputStreamFactoryClientPtr } */
    this.client;
    /** @type { !number } */
    this.sessionId;
    /** @type { !boolean } */
    this.automaticGainControl;
    /** @type { !media.mojom.AudioParameters } */
    this.params;
    /** @type { !number } */
    this.sharedMemoryCount;
  }
};
content.mojom.RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.inputStreamId;
    /** @type { !string } */
    this.outputDeviceId;
  }
};
content.mojom.RendererAudioInputStreamFactoryClient_StreamCreated_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioInputStreamPtr } */
    this.stream;
    /** @type { !mojo.InterfaceRequest } */
    this.clientRequest;
    /** @type { !boolean } */
    this.initiallyMuted;
    /** @type { !media.mojom.AudioDataPipe } */
    this.dataPipe;
    /** @type { mojoBase.mojom.UnguessableToken } */
    this.streamId;
  }
};

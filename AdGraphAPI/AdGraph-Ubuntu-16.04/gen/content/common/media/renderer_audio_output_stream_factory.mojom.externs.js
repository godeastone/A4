// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RendererAudioOutputStreamFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } streamProviderRequest
   * @param { !number } sessionId
   * @param { !string } deviceId
   * @return {Promise}
   */
   requestDeviceAuthorization(streamProviderRequest, sessionId, deviceId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RendererAudioOutputStreamFactory;
content.mojom.RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.streamProviderRequest;
    /** @type { !number } */
    this.sessionId;
    /** @type { !string } */
    this.deviceId;
  }
};
content.mojom.RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.OutputDeviceStatus } */
    this.state;
    /** @type { !media.mojom.AudioParameters } */
    this.outputParams;
    /** @type { !string } */
    this.matchedDeviceId;
  }
};

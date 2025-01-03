// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.InterfaceFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } audioDecoder
   */
   createAudioDecoder(audioDecoder) {}
  /**
   * @param { !mojo.InterfaceRequest } videoDecoder
   */
   createVideoDecoder(videoDecoder) {}
  /**
   * @param { !media.mojom.HostedRendererType } type
   * @param { !string } typeSpecificId
   * @param { !mojo.InterfaceRequest } renderer
   */
   createRenderer(type, typeSpecificId, renderer) {}
  /**
   * @param { !string } keySystem
   * @param { !mojo.InterfaceRequest } cdm
   */
   createCdm(keySystem, cdm) {}
  /**
   * @param { !number } cdmId
   * @param { !mojo.InterfaceRequest } decryptor
   */
   createDecryptor(cdmId, decryptor) {}
  /**
   * @param { !string } cdmGuid
   * @param { !mojo.InterfaceRequest } cdmProxy
   */
   createCdmProxy(cdmGuid, cdmProxy) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.InterfaceFactory;
media.mojom.InterfaceFactory_CreateAudioDecoder_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.audioDecoder;
  }
};
media.mojom.InterfaceFactory_CreateVideoDecoder_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.videoDecoder;
  }
};
media.mojom.InterfaceFactory_CreateRenderer_Params = class {
  constructor() {
    /** @type { !media.mojom.HostedRendererType } */
    this.type;
    /** @type { !mojo.InterfaceRequest } */
    this.renderer;
    /** @type { !string } */
    this.typeSpecificId;
  }
};
media.mojom.InterfaceFactory_CreateCdm_Params = class {
  constructor() {
    /** @type { !string } */
    this.keySystem;
    /** @type { !mojo.InterfaceRequest } */
    this.cdm;
  }
};
media.mojom.InterfaceFactory_CreateDecryptor_Params = class {
  constructor() {
    /** @type { !number } */
    this.cdmId;
    /** @type { !mojo.InterfaceRequest } */
    this.decryptor;
  }
};
media.mojom.InterfaceFactory_CreateCdmProxy_Params = class {
  constructor() {
    /** @type { !string } */
    this.cdmGuid;
    /** @type { !mojo.InterfaceRequest } */
    this.cdmProxy;
  }
};

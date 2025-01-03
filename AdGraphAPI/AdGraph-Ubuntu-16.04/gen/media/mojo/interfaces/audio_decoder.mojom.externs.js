// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioDecoderPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   */
   construct(client) {}
  /**
   * @param { !media.mojom.AudioDecoderConfig } config
   * @param { !number } cdmId
   * @return {Promise}
   */
   initialize(config, cdmId) {}
  /**
   * @param { !mojo.MojoHandle } receivePipe
   */
   setDataSource(receivePipe) {}
  /**
   * @param { !media.mojom.DecoderBuffer } buffer
   * @return {Promise}
   */
   decode(buffer) {}
  /**
   * @return {Promise}
   */
   reset() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioDecoder;
/** @implements {mojo.InterfacePtr} */
media.mojom.AudioDecoderClientPtr = class {

  /**
   * @param { !media.mojom.AudioBuffer } buffer
   */
   onBufferDecoded(buffer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.AudioDecoderClient;
media.mojom.AudioDecoder_Construct_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
media.mojom.AudioDecoder_Initialize_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioDecoderConfig } */
    this.config;
    /** @type { !number } */
    this.cdmId;
  }
};
media.mojom.AudioDecoder_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !boolean } */
    this.needsBitstreamConversion;
  }
};
media.mojom.AudioDecoder_SetDataSource_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.receivePipe;
  }
};
media.mojom.AudioDecoder_Decode_Params = class {
  constructor() {
    /** @type { !media.mojom.DecoderBuffer } */
    this.buffer;
  }
};
media.mojom.AudioDecoder_Decode_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.DecodeStatus } */
    this.status;
  }
};
media.mojom.AudioDecoder_Reset_Params = class {
  constructor() {
  }
};
media.mojom.AudioDecoder_Reset_ResponseParams = class {
  constructor() {
  }
};
media.mojom.AudioDecoderClient_OnBufferDecoded_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioBuffer } */
    this.buffer;
  }
};

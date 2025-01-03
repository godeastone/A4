// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.DemuxerStreamPtr = class {

  /**
   * @return {Promise}
   */
   initialize() {}
  /**
   * @return {Promise}
   */
   read() {}
  /**
   */
   enableBitstreamConverter() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.DemuxerStream;
media.mojom.DemuxerStream_Initialize_Params = class {
  constructor() {
  }
};
media.mojom.DemuxerStream_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Type } */
    this.type;
    /** @type { !mojo.MojoHandle } */
    this.pipe;
    /** @type { media.mojom.AudioDecoderConfig } */
    this.audioConfig;
    /** @type { media.mojom.VideoDecoderConfig } */
    this.videoConfig;
  }
};
media.mojom.DemuxerStream_Read_Params = class {
  constructor() {
  }
};
media.mojom.DemuxerStream_Read_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { media.mojom.DecoderBuffer } */
    this.buffer;
    /** @type { media.mojom.AudioDecoderConfig } */
    this.audioConfig;
    /** @type { media.mojom.VideoDecoderConfig } */
    this.videoConfig;
  }
};
media.mojom.DemuxerStream_EnableBitstreamConverter_Params = class {
  constructor() {
  }
};

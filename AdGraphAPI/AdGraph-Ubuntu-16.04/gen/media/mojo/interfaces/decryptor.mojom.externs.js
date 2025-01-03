// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.DecryptorPtr = class {

  /**
   * @param { !mojo.MojoHandle } audioPipe
   * @param { !mojo.MojoHandle } videoPipe
   * @param { !mojo.MojoHandle } decryptPipe
   * @param { !mojo.MojoHandle } decryptedPipe
   */
   initialize(audioPipe, videoPipe, decryptPipe, decryptedPipe) {}
  /**
   * @param { !media.mojom.StreamType } streamType
   * @param { !media.mojom.DecoderBuffer } encrypted
   * @return {Promise}
   */
   decrypt(streamType, encrypted) {}
  /**
   * @param { !media.mojom.StreamType } streamType
   */
   cancelDecrypt(streamType) {}
  /**
   * @param { !media.mojom.AudioDecoderConfig } config
   * @return {Promise}
   */
   initializeAudioDecoder(config) {}
  /**
   * @param { !media.mojom.VideoDecoderConfig } config
   * @return {Promise}
   */
   initializeVideoDecoder(config) {}
  /**
   * @param { !media.mojom.DecoderBuffer } encrypted
   * @return {Promise}
   */
   decryptAndDecodeAudio(encrypted) {}
  /**
   * @param { !media.mojom.DecoderBuffer } encrypted
   * @return {Promise}
   */
   decryptAndDecodeVideo(encrypted) {}
  /**
   * @param { !media.mojom.StreamType } streamType
   */
   resetDecoder(streamType) {}
  /**
   * @param { !media.mojom.StreamType } streamType
   */
   deinitializeDecoder(streamType) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.Decryptor;
/** @implements {mojo.InterfacePtr} */
media.mojom.FrameResourceReleaserPtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.FrameResourceReleaser;
media.mojom.Decryptor_Initialize_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.audioPipe;
    /** @type { !mojo.MojoHandle } */
    this.videoPipe;
    /** @type { !mojo.MojoHandle } */
    this.decryptPipe;
    /** @type { !mojo.MojoHandle } */
    this.decryptedPipe;
  }
};
media.mojom.Decryptor_Decrypt_Params = class {
  constructor() {
    /** @type { !media.mojom.StreamType } */
    this.streamType;
    /** @type { !media.mojom.DecoderBuffer } */
    this.encrypted;
  }
};
media.mojom.Decryptor_Decrypt_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { media.mojom.DecoderBuffer } */
    this.buffer;
  }
};
media.mojom.Decryptor_CancelDecrypt_Params = class {
  constructor() {
    /** @type { !media.mojom.StreamType } */
    this.streamType;
  }
};
media.mojom.Decryptor_InitializeAudioDecoder_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioDecoderConfig } */
    this.config;
  }
};
media.mojom.Decryptor_InitializeAudioDecoder_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.Decryptor_InitializeVideoDecoder_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoDecoderConfig } */
    this.config;
  }
};
media.mojom.Decryptor_InitializeVideoDecoder_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.Decryptor_DecryptAndDecodeAudio_Params = class {
  constructor() {
    /** @type { !media.mojom.DecoderBuffer } */
    this.encrypted;
  }
};
media.mojom.Decryptor_DecryptAndDecodeAudio_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { !Array<media.mojom.AudioBuffer> } */
    this.audioBuffers;
  }
};
media.mojom.Decryptor_DecryptAndDecodeVideo_Params = class {
  constructor() {
    /** @type { !media.mojom.DecoderBuffer } */
    this.encrypted;
  }
};
media.mojom.Decryptor_DecryptAndDecodeVideo_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.Status } */
    this.status;
    /** @type { media.mojom.VideoFrame } */
    this.videoFrame;
    /** @type { media.mojom.FrameResourceReleaserPtr } */
    this.releaser;
  }
};
media.mojom.Decryptor_ResetDecoder_Params = class {
  constructor() {
    /** @type { !media.mojom.StreamType } */
    this.streamType;
  }
};
media.mojom.Decryptor_DeinitializeDecoder_Params = class {
  constructor() {
    /** @type { !media.mojom.StreamType } */
    this.streamType;
  }
};

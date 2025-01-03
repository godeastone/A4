// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoFrameHandleReleaserPtr = class {

  /**
   * @param { !mojoBase.mojom.UnguessableToken } releaseToken
   * @param { !gpu.mojom.SyncToken } releaseSyncToken
   */
   releaseVideoFrame(releaseToken, releaseSyncToken) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoFrameHandleReleaser;
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoDecoderPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @param { !mojo.AssociatedInterfacePtrInfo } mediaLog
   * @param { !mojo.InterfaceRequest } videoFrameHandleReleaser
   * @param { !mojo.MojoHandle } decoderBufferPipe
   * @param { media.mojom.CommandBufferId } commandBufferId
   * @param { !gfx.mojom.ColorSpace } targetColorSpace
   */
   construct(client, mediaLog, videoFrameHandleReleaser, decoderBufferPipe, commandBufferId, targetColorSpace) {}
  /**
   * @param { !media.mojom.VideoDecoderConfig } config
   * @param { !boolean } lowDelay
   * @param { !number } cdmId
   * @return {Promise}
   */
   initialize(config, lowDelay, cdmId) {}
  /**
   * @param { !media.mojom.DecoderBuffer } buffer
   * @return {Promise}
   */
   decode(buffer) {}
  /**
   * @return {Promise}
   */
   reset() {}
  /**
   * @param { !media.mojom.OverlayInfo } overlayInfo
   */
   onOverlayInfoChanged(overlayInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoDecoder;
/** @implements {mojo.InterfacePtr} */
media.mojom.VideoDecoderClientPtr = class {

  /**
   * @param { !media.mojom.VideoFrame } frame
   * @param { !boolean } canReadWithoutStalling
   * @param { mojoBase.mojom.UnguessableToken } releaseToken
   */
   onVideoFrameDecoded(frame, canReadWithoutStalling, releaseToken) {}
  /**
   * @param { !boolean } restartForTransitions
   */
   requestOverlayInfo(restartForTransitions) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.VideoDecoderClient;
media.mojom.CommandBufferId = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.channelToken;
    /** @type { !number } */
    this.routeId;
  }
};
media.mojom.OverlayInfo = class {
  constructor() {
  }
};
media.mojom.VideoFrameHandleReleaser_ReleaseVideoFrame_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.releaseToken;
    /** @type { !gpu.mojom.SyncToken } */
    this.releaseSyncToken;
  }
};
media.mojom.VideoDecoder_Construct_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.mediaLog;
    /** @type { !mojo.InterfaceRequest } */
    this.videoFrameHandleReleaser;
    /** @type { !mojo.MojoHandle } */
    this.decoderBufferPipe;
    /** @type { media.mojom.CommandBufferId } */
    this.commandBufferId;
    /** @type { !gfx.mojom.ColorSpace } */
    this.targetColorSpace;
  }
};
media.mojom.VideoDecoder_Initialize_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoDecoderConfig } */
    this.config;
    /** @type { !boolean } */
    this.lowDelay;
    /** @type { !number } */
    this.cdmId;
  }
};
media.mojom.VideoDecoder_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !boolean } */
    this.needsBitstreamConversion;
    /** @type { !number } */
    this.maxDecodeRequests;
  }
};
media.mojom.VideoDecoder_Decode_Params = class {
  constructor() {
    /** @type { !media.mojom.DecoderBuffer } */
    this.buffer;
  }
};
media.mojom.VideoDecoder_Decode_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.DecodeStatus } */
    this.status;
  }
};
media.mojom.VideoDecoder_Reset_Params = class {
  constructor() {
  }
};
media.mojom.VideoDecoder_Reset_ResponseParams = class {
  constructor() {
  }
};
media.mojom.VideoDecoder_OnOverlayInfoChanged_Params = class {
  constructor() {
    /** @type { !media.mojom.OverlayInfo } */
    this.overlayInfo;
  }
};
media.mojom.VideoDecoderClient_OnVideoFrameDecoded_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoFrame } */
    this.frame;
    /** @type { !boolean } */
    this.canReadWithoutStalling;
    /** @type { mojoBase.mojom.UnguessableToken } */
    this.releaseToken;
  }
};
media.mojom.VideoDecoderClient_RequestOverlayInfo_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.restartForTransitions;
  }
};

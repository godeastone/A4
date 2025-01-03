// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.RendererPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @param { Array<media.mojom.DemuxerStreamPtr> } streams
   * @param { url.mojom.Url } mediaUrl
   * @param { url.mojom.Url } firstPartyForCookies
   * @return {Promise}
   */
   initialize(client, streams, mediaUrl, firstPartyForCookies) {}
  /**
   * @return {Promise}
   */
   flush() {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } time
   */
   startPlayingFrom(time) {}
  /**
   * @param { !number } playbackRate
   */
   setPlaybackRate(playbackRate) {}
  /**
   * @param { !number } volume
   */
   setVolume(volume) {}
  /**
   * @param { !number } cdmId
   * @return {Promise}
   */
   setCdm(cdmId) {}
  /**
   * @return {Promise}
   */
   initiateScopedSurfaceRequest() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.Renderer;
/** @implements {mojo.InterfacePtr} */
media.mojom.RendererClientPtr = class {

  /**
   * @param { !mojoBase.mojom.TimeDelta } time
   * @param { !mojoBase.mojom.TimeDelta } maxTime
   * @param { !mojoBase.mojom.TimeTicks } captureTime
   */
   onTimeUpdate(time, maxTime, captureTime) {}
  /**
   * @param { !media.mojom.BufferingState } state
   */
   onBufferingStateChange(state) {}
  /**
   */
   onEnded() {}
  /**
   */
   onError() {}
  /**
   * @param { !media.mojom.AudioDecoderConfig } config
   */
   onAudioConfigChange(config) {}
  /**
   * @param { !media.mojom.VideoDecoderConfig } config
   */
   onVideoConfigChange(config) {}
  /**
   * @param { !gfx.mojom.Size } size
   */
   onVideoNaturalSizeChange(size) {}
  /**
   * @param { !boolean } opaque
   */
   onVideoOpacityChange(opaque) {}
  /**
   * @param { !media.mojom.PipelineStatistics } stats
   */
   onStatisticsUpdate(stats) {}
  /**
   */
   onWaitingForDecryptionKey() {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } duration
   */
   onDurationChange(duration) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.RendererClient;
media.mojom.Renderer_Initialize_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
    /** @type { Array<media.mojom.DemuxerStreamPtr> } */
    this.streams;
    /** @type { url.mojom.Url } */
    this.mediaUrl;
    /** @type { url.mojom.Url } */
    this.firstPartyForCookies;
  }
};
media.mojom.Renderer_Initialize_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.Renderer_Flush_Params = class {
  constructor() {
  }
};
media.mojom.Renderer_Flush_ResponseParams = class {
  constructor() {
  }
};
media.mojom.Renderer_StartPlayingFrom_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.time;
  }
};
media.mojom.Renderer_SetPlaybackRate_Params = class {
  constructor() {
    /** @type { !number } */
    this.playbackRate;
  }
};
media.mojom.Renderer_SetVolume_Params = class {
  constructor() {
    /** @type { !number } */
    this.volume;
  }
};
media.mojom.Renderer_SetCdm_Params = class {
  constructor() {
    /** @type { !number } */
    this.cdmId;
  }
};
media.mojom.Renderer_SetCdm_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
media.mojom.Renderer_InitiateScopedSurfaceRequest_Params = class {
  constructor() {
  }
};
media.mojom.Renderer_InitiateScopedSurfaceRequest_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.requestToken;
  }
};
media.mojom.RendererClient_OnTimeUpdate_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.time;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.maxTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.captureTime;
  }
};
media.mojom.RendererClient_OnBufferingStateChange_Params = class {
  constructor() {
    /** @type { !media.mojom.BufferingState } */
    this.state;
  }
};
media.mojom.RendererClient_OnEnded_Params = class {
  constructor() {
  }
};
media.mojom.RendererClient_OnError_Params = class {
  constructor() {
  }
};
media.mojom.RendererClient_OnAudioConfigChange_Params = class {
  constructor() {
    /** @type { !media.mojom.AudioDecoderConfig } */
    this.config;
  }
};
media.mojom.RendererClient_OnVideoConfigChange_Params = class {
  constructor() {
    /** @type { !media.mojom.VideoDecoderConfig } */
    this.config;
  }
};
media.mojom.RendererClient_OnVideoNaturalSizeChange_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.size;
  }
};
media.mojom.RendererClient_OnVideoOpacityChange_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.opaque;
  }
};
media.mojom.RendererClient_OnStatisticsUpdate_Params = class {
  constructor() {
    /** @type { !media.mojom.PipelineStatistics } */
    this.stats;
  }
};
media.mojom.RendererClient_OnWaitingForDecryptionKey_Params = class {
  constructor() {
  }
};
media.mojom.RendererClient_OnDurationChange_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
  }
};

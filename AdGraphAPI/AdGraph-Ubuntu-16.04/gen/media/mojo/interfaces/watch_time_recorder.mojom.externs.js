// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.WatchTimeRecorderPtr = class {

  /**
   * @param { !media.mojom.WatchTimeKey } key
   * @param { !mojoBase.mojom.TimeDelta } watchTime
   */
   recordWatchTime(key, watchTime) {}
  /**
   * @param { !Array<media.mojom.WatchTimeKey> } watchTimeKeys
   */
   finalizeWatchTime(watchTimeKeys) {}
  /**
   * @param { !media.mojom.PipelineStatus } status
   */
   onError(status) {}
  /**
   * @param { !string } name
   */
   setAudioDecoderName(name) {}
  /**
   * @param { !string } name
   */
   setVideoDecoderName(name) {}
  /**
   * @param { !boolean } value
   */
   setAutoplayInitiated(value) {}
  /**
   * @param { !number } count
   */
   updateUnderflowCount(count) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.WatchTimeRecorder;
media.mojom.PlaybackProperties = class {
  constructor() {
    /** @type { !media.mojom.AudioCodec } */
    this.audioCodec;
    /** @type { !media.mojom.VideoCodec } */
    this.videoCodec;
    /** @type { !boolean } */
    this.hasAudio;
    /** @type { !boolean } */
    this.hasVideo;
    /** @type { !boolean } */
    this.isBackground;
    /** @type { !boolean } */
    this.isMuted;
    /** @type { !boolean } */
    this.isMse;
    /** @type { !boolean } */
    this.isEme;
    /** @type { !boolean } */
    this.isEmbeddedMediaExperience;
    /** @type { !gfx.mojom.Size } */
    this.naturalSize;
  }
};
media.mojom.WatchTimeRecorder_RecordWatchTime_Params = class {
  constructor() {
    /** @type { !media.mojom.WatchTimeKey } */
    this.key;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.watchTime;
  }
};
media.mojom.WatchTimeRecorder_FinalizeWatchTime_Params = class {
  constructor() {
    /** @type { !Array<media.mojom.WatchTimeKey> } */
    this.watchTimeKeys;
  }
};
media.mojom.WatchTimeRecorder_OnError_Params = class {
  constructor() {
    /** @type { !media.mojom.PipelineStatus } */
    this.status;
  }
};
media.mojom.WatchTimeRecorder_SetAudioDecoderName_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
  }
};
media.mojom.WatchTimeRecorder_SetVideoDecoderName_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
  }
};
media.mojom.WatchTimeRecorder_SetAutoplayInitiated_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.value;
  }
};
media.mojom.WatchTimeRecorder_UpdateUnderflowCount_Params = class {
  constructor() {
    /** @type { !number } */
    this.count;
  }
};

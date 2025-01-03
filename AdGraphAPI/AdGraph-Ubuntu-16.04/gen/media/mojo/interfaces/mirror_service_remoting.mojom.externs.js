// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.MirrorServiceRemoterPtr = class {

  /**
   */
   start() {}
  /**
   * @param { !boolean } hasAudio
   * @param { !boolean } hasVideo
   * @return {Promise}
   */
   startDataStreams(hasAudio, hasVideo) {}
  /**
   * @param { !media.mojom.RemotingStopReason } reason
   */
   stop(reason) {}
  /**
   * @param { !Array<number> } message
   */
   sendMessageToSink(message) {}
  /**
   * @return {Promise}
   */
   estimateTransmissionCapacity() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.MirrorServiceRemoter;
/** @implements {mojo.InterfacePtr} */
media.mojom.MirrorServiceRemotingSourcePtr = class {

  /**
   * @param { !media.mojom.RemotingSinkMetadata } metadata
   */
   onSinkAvailable(metadata) {}
  /**
   * @param { !Array<number> } message
   */
   onMessageFromSink(message) {}
  /**
   * @param { !media.mojom.RemotingStopReason } reason
   */
   onStopped(reason) {}
  /**
   */
   onError() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.MirrorServiceRemotingSource;
media.mojom.MirrorServiceRemoter_Start_Params = class {
  constructor() {
  }
};
media.mojom.MirrorServiceRemoter_StartDataStreams_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.hasAudio;
    /** @type { !boolean } */
    this.hasVideo;
  }
};
media.mojom.MirrorServiceRemoter_StartDataStreams_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.audioStreamId;
    /** @type { !number } */
    this.videoStreamId;
  }
};
media.mojom.MirrorServiceRemoter_Stop_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingStopReason } */
    this.reason;
  }
};
media.mojom.MirrorServiceRemoter_SendMessageToSink_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.message;
  }
};
media.mojom.MirrorServiceRemoter_EstimateTransmissionCapacity_Params = class {
  constructor() {
  }
};
media.mojom.MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.rate;
  }
};
media.mojom.MirrorServiceRemotingSource_OnSinkAvailable_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingSinkMetadata } */
    this.metadata;
  }
};
media.mojom.MirrorServiceRemotingSource_OnMessageFromSink_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.message;
  }
};
media.mojom.MirrorServiceRemotingSource_OnStopped_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingStopReason } */
    this.reason;
  }
};
media.mojom.MirrorServiceRemotingSource_OnError_Params = class {
  constructor() {
  }
};

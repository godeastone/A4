// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.RemoterFactoryPtr = class {

  /**
   * @param { !media.mojom.RemotingSourcePtr } source
   * @param { !mojo.InterfaceRequest } remoter
   */
   create(source, remoter) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.RemoterFactory;
/** @implements {mojo.InterfacePtr} */
media.mojom.RemotingDataStreamSenderPtr = class {

  /**
   * @param { !number } frameSize
   */
   sendFrame(frameSize) {}
  /**
   */
   cancelInFlightData() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.RemotingDataStreamSender;
/** @implements {mojo.InterfacePtr} */
media.mojom.RemoterPtr = class {

  /**
   */
   start() {}
  /**
   * @param { mojo.MojoHandle } audioPipe
   * @param { mojo.MojoHandle } videoPipe
   * @param { mojo.InterfaceRequest } audioSender
   * @param { mojo.InterfaceRequest } videoSender
   */
   startDataStreams(audioPipe, videoPipe, audioSender, videoSender) {}
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
media.mojom.Remoter;
/** @implements {mojo.InterfacePtr} */
media.mojom.RemotingSourcePtr = class {

  /**
   * @param { !media.mojom.RemotingSinkMetadata } metadata
   */
   onSinkAvailable(metadata) {}
  /**
   */
   onSinkGone() {}
  /**
   */
   onStarted() {}
  /**
   * @param { !media.mojom.RemotingStartFailReason } reason
   */
   onStartFailed(reason) {}
  /**
   * @param { !Array<number> } message
   */
   onMessageFromSink(message) {}
  /**
   * @param { !media.mojom.RemotingStopReason } reason
   */
   onStopped(reason) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.RemotingSource;
media.mojom.RemoterFactory_Create_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingSourcePtr } */
    this.source;
    /** @type { !mojo.InterfaceRequest } */
    this.remoter;
  }
};
media.mojom.RemotingDataStreamSender_SendFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameSize;
  }
};
media.mojom.RemotingDataStreamSender_CancelInFlightData_Params = class {
  constructor() {
  }
};
media.mojom.Remoter_Start_Params = class {
  constructor() {
  }
};
media.mojom.Remoter_StartDataStreams_Params = class {
  constructor() {
    /** @type { mojo.MojoHandle } */
    this.audioPipe;
    /** @type { mojo.MojoHandle } */
    this.videoPipe;
    /** @type { mojo.InterfaceRequest } */
    this.audioSender;
    /** @type { mojo.InterfaceRequest } */
    this.videoSender;
  }
};
media.mojom.Remoter_Stop_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingStopReason } */
    this.reason;
  }
};
media.mojom.Remoter_SendMessageToSink_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.message;
  }
};
media.mojom.Remoter_EstimateTransmissionCapacity_Params = class {
  constructor() {
  }
};
media.mojom.Remoter_EstimateTransmissionCapacity_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.rate;
  }
};
media.mojom.RemotingSource_OnSinkAvailable_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingSinkMetadata } */
    this.metadata;
  }
};
media.mojom.RemotingSource_OnSinkGone_Params = class {
  constructor() {
  }
};
media.mojom.RemotingSource_OnStarted_Params = class {
  constructor() {
  }
};
media.mojom.RemotingSource_OnStartFailed_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingStartFailReason } */
    this.reason;
  }
};
media.mojom.RemotingSource_OnMessageFromSink_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.message;
  }
};
media.mojom.RemotingSource_OnStopped_Params = class {
  constructor() {
    /** @type { !media.mojom.RemotingStopReason } */
    this.reason;
  }
};

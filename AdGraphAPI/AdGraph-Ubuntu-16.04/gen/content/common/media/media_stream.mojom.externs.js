// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.MediaStreamDeviceObserverPtr = class {

  /**
   * @param { !string } label
   * @param { !content.mojom.MediaStreamDevice } device
   */
   onDeviceStopped(label, device) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.MediaStreamDeviceObserver;
/** @implements {mojo.InterfacePtr} */
content.mojom.MediaStreamDispatcherHostPtr = class {

  /**
   * @param { !number } requestId
   * @param { !content.mojom.StreamControls } controls
   * @param { !boolean } userGesture
   * @return {Promise}
   */
   generateStream(requestId, controls, userGesture) {}
  /**
   * @param { !number } requestId
   */
   cancelRequest(requestId) {}
  /**
   * @param { !string } deviceId
   * @param { !number } sessionId
   */
   stopStreamDevice(deviceId, sessionId) {}
  /**
   * @param { !number } requestId
   * @param { !string } deviceId
   * @param { !content.mojom.MediaStreamType } type
   * @return {Promise}
   */
   openDevice(requestId, deviceId, type) {}
  /**
   * @param { !string } label
   */
   closeDevice(label) {}
  /**
   * @param { !number } sessionId
   * @param { !content.mojom.MediaStreamType } type
   * @param { !boolean } isSecure
   */
   setCapturingLinkSecured(sessionId, type, isSecure) {}
  /**
   * @param { !string } label
   */
   onStreamStarted(label) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.MediaStreamDispatcherHost;
/** @implements {mojo.InterfacePtr} */
content.mojom.MediaStreamTrackMetricsHostPtr = class {

  /**
   * @param { !number } id
   * @param { !boolean } isAudio
   * @param { !boolean } isRemote
   */
   addTrack(id, isAudio, isRemote) {}
  /**
   * @param { !number } id
   */
   removeTrack(id) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.MediaStreamTrackMetricsHost;
content.mojom.MediaStreamDevice = class {
  constructor() {
  }
};
content.mojom.TrackControls = class {
  constructor() {
    /** @type { !boolean } */
    this.requested;
    /** @type { !string } */
    this.streamSource;
    /** @type { !string } */
    this.deviceId;
  }
};
content.mojom.StreamControls = class {
  constructor() {
    /** @type { !content.mojom.TrackControls } */
    this.audio;
    /** @type { !content.mojom.TrackControls } */
    this.video;
    /** @type { !boolean } */
    this.hotwordEnabled;
    /** @type { !boolean } */
    this.disableLocalEcho;
  }
};
content.mojom.MediaStreamDeviceObserver_OnDeviceStopped_Params = class {
  constructor() {
    /** @type { !string } */
    this.label;
    /** @type { !content.mojom.MediaStreamDevice } */
    this.device;
  }
};
content.mojom.MediaStreamDispatcherHost_GenerateStream_Params = class {
  constructor() {
    /** @type { !number } */
    this.requestId;
    /** @type { !boolean } */
    this.userGesture;
    /** @type { !content.mojom.StreamControls } */
    this.controls;
  }
};
content.mojom.MediaStreamDispatcherHost_GenerateStream_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.MediaStreamRequestResult } */
    this.result;
    /** @type { !string } */
    this.label;
    /** @type { !Array<content.mojom.MediaStreamDevice> } */
    this.audioDevices;
    /** @type { !Array<content.mojom.MediaStreamDevice> } */
    this.videoDevices;
  }
};
content.mojom.MediaStreamDispatcherHost_CancelRequest_Params = class {
  constructor() {
    /** @type { !number } */
    this.requestId;
  }
};
content.mojom.MediaStreamDispatcherHost_StopStreamDevice_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
    /** @type { !number } */
    this.sessionId;
  }
};
content.mojom.MediaStreamDispatcherHost_OpenDevice_Params = class {
  constructor() {
    /** @type { !number } */
    this.requestId;
    /** @type { !content.mojom.MediaStreamType } */
    this.type;
    /** @type { !string } */
    this.deviceId;
  }
};
content.mojom.MediaStreamDispatcherHost_OpenDevice_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !string } */
    this.label;
    /** @type { !content.mojom.MediaStreamDevice } */
    this.device;
  }
};
content.mojom.MediaStreamDispatcherHost_CloseDevice_Params = class {
  constructor() {
    /** @type { !string } */
    this.label;
  }
};
content.mojom.MediaStreamDispatcherHost_SetCapturingLinkSecured_Params = class {
  constructor() {
    /** @type { !number } */
    this.sessionId;
    /** @type { !content.mojom.MediaStreamType } */
    this.type;
    /** @type { !boolean } */
    this.isSecure;
  }
};
content.mojom.MediaStreamDispatcherHost_OnStreamStarted_Params = class {
  constructor() {
    /** @type { !string } */
    this.label;
  }
};
content.mojom.MediaStreamTrackMetricsHost_AddTrack_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !boolean } */
    this.isAudio;
    /** @type { !boolean } */
    this.isRemote;
  }
};
content.mojom.MediaStreamTrackMetricsHost_RemoveTrack_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
  }
};

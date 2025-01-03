// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.PeerConnectionTrackerHostPtr = class {

  /**
   * @param { !number } lid
   */
   removePeerConnection(lid) {}
  /**
   * @param { !number } lid
   * @param { !string } type
   * @param { !string } value
   */
   updatePeerConnection(lid, type, value) {}
  /**
   * @param { !string } origin
   * @param { !boolean } audio
   * @param { !boolean } video
   * @param { !string } audioConstraints
   * @param { !string } videoConstraints
   */
   getUserMedia(origin, audio, video, audioConstraints, videoConstraints) {}
  /**
   * @param { !number } lid
   * @param { !string } output
   */
   webRtcEventLogWrite(lid, output) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.PeerConnectionTrackerHost;
content.mojom.PeerConnectionTrackerHost_RemovePeerConnection_Params = class {
  constructor() {
    /** @type { !number } */
    this.lid;
  }
};
content.mojom.PeerConnectionTrackerHost_UpdatePeerConnection_Params = class {
  constructor() {
    /** @type { !number } */
    this.lid;
    /** @type { !string } */
    this.type;
    /** @type { !string } */
    this.value;
  }
};
content.mojom.PeerConnectionTrackerHost_GetUserMedia_Params = class {
  constructor() {
    /** @type { !string } */
    this.origin;
    /** @type { !boolean } */
    this.audio;
    /** @type { !boolean } */
    this.video;
    /** @type { !string } */
    this.audioConstraints;
    /** @type { !string } */
    this.videoConstraints;
  }
};
content.mojom.PeerConnectionTrackerHost_WebRtcEventLogWrite_Params = class {
  constructor() {
    /** @type { !number } */
    this.lid;
    /** @type { !string } */
    this.output;
  }
};

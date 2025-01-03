// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
media.mojom.RemotingSinkMetadata = class {
  constructor() {
    /** @type { !Array<media.mojom.RemotingSinkFeature> } */
    this.features;
    /** @type { !Array<media.mojom.RemotingSinkAudioCapability> } */
    this.audioCapabilities;
    /** @type { !Array<media.mojom.RemotingSinkVideoCapability> } */
    this.videoCapabilities;
    /** @type { !string } */
    this.friendlyName;
  }
};

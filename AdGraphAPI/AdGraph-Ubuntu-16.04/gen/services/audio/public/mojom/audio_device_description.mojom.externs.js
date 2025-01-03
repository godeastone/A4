// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let audio = {};
/** @const */
audio.mojom = {};
audio.mojom.AudioDeviceDescription = class {
  constructor() {
    /** @type { !string } */
    this.deviceName;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !string } */
    this.groupId;
  }
};

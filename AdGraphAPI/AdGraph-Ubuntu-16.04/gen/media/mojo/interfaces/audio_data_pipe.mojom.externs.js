// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
media.mojom.AudioDataPipe = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.sharedMemory;
    /** @type { !mojo.MojoHandle } */
    this.socket;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.SerializedBlob = class {
  constructor() {
    /** @type { !string } */
    this.uuid;
    /** @type { !string } */
    this.contentType;
    /** @type { !number } */
    this.size;
    /** @type { !blink.mojom.BlobPtr } */
    this.blob;
  }
};

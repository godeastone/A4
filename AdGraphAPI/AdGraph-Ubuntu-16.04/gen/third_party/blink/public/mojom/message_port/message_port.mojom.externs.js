// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.CloneableMessage = class {
  constructor() {
    /** @type { !Object } */
    this.encodedMessage;
    /** @type { !Array<blink.mojom.SerializedBlob> } */
    this.blobs;
    /** @type { !number } */
    this.stackTraceId;
    /** @type { !number } */
    this.stackTraceDebuggerIdFirst;
    /** @type { !number } */
    this.stackTraceDebuggerIdSecond;
  }
};
blink.mojom.TransferableMessage = class {
  constructor() {
    /** @type { !blink.mojom.CloneableMessage } */
    this.message;
    /** @type { !Array<mojo.MojoHandle> } */
    this.ports;
    /** @type { !Array<blink.mojom.SerializedArrayBufferContents> } */
    this.arrayBufferContentsArray;
    /** @type { !Array<skia.mojom.Bitmap> } */
    this.imageBitmapContentsArray;
    /** @type { !boolean } */
    this.hasUserGesture;
  }
};

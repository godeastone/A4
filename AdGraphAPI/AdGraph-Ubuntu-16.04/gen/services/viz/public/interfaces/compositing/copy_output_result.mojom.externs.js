// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.CopyOutputResult = class {
  constructor() {
    /** @type { !viz.mojom.CopyOutputResultFormat } */
    this.format;
    /** @type { !gfx.mojom.Rect } */
    this.rect;
    /** @type { skia.mojom.Bitmap } */
    this.bitmap;
    /** @type { gpu.mojom.Mailbox } */
    this.mailbox;
    /** @type { gpu.mojom.SyncToken } */
    this.syncToken;
    /** @type { gfx.mojom.ColorSpace } */
    this.colorSpace;
    /** @type { viz.mojom.TextureReleaserPtr } */
    this.releaser;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.TransferableResource = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !viz.mojom.ResourceFormat } */
    this.format;
    /** @type { !gfx.mojom.BufferFormat } */
    this.bufferFormat;
    /** @type { !number } */
    this.filter;
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !gpu.mojom.MailboxHolder } */
    this.mailboxHolder;
    /** @type { !boolean } */
    this.readLockFencesEnabled;
    /** @type { !boolean } */
    this.isSoftware;
    /** @type { !boolean } */
    this.isOverlayCandidate;
    /** @type { !boolean } */
    this.isBackedBySurfaceTexture;
    /** @type { !boolean } */
    this.wantsPromotionHint;
    /** @type { !gfx.mojom.ColorSpace } */
    this.colorSpace;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.TextInputState = class {
  constructor() {
    /** @type { !ui.mojom.TextInputType } */
    this.type;
    /** @type { !number } */
    this.flags;
    /** @type { string } */
    this.text;
    /** @type { !number } */
    this.selectionStart;
    /** @type { !number } */
    this.selectionEnd;
    /** @type { !number } */
    this.compositionStart;
    /** @type { !number } */
    this.compositionEnd;
    /** @type { !boolean } */
    this.canComposeInline;
  }
};

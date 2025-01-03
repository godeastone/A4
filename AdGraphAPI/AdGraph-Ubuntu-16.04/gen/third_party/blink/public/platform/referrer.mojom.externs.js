// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.Referrer = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !blink.mojom.ReferrerPolicy } */
    this.policy;
  }
};

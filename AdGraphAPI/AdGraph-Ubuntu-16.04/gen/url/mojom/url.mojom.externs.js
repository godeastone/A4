// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let url = {};
/** @const */
url.mojom = {};
url.mojom.Url = class {
  constructor() {
    /** @type { !string } */
    this.url;
  }
};

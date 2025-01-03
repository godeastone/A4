// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
network.mojom.HttpRequestHeaderKeyValuePair = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !string } */
    this.value;
  }
};
network.mojom.HttpRequestHeaders = class {
  constructor() {
    /** @type { !Array<network.mojom.HttpRequestHeaderKeyValuePair> } */
    this.headers;
  }
};

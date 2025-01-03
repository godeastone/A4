// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.URLLoaderFactoryBundle = class {
  constructor() {
    /** @type { !network.mojom.URLLoaderFactoryPtr } */
    this.defaultFactory;
    /** @type { !Map<string, network.mojom.URLLoaderFactoryPtr> } */
    this.factories;
  }
};

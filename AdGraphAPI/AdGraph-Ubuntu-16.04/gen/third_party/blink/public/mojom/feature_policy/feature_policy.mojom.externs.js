// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.ParsedFeaturePolicyDeclaration = class {
  constructor() {
    /** @type { !blink.mojom.FeaturePolicyFeature } */
    this.feature;
    /** @type { !boolean } */
    this.matchesAllOrigins;
    /** @type { !Array<url.mojom.Origin> } */
    this.origins;
  }
};

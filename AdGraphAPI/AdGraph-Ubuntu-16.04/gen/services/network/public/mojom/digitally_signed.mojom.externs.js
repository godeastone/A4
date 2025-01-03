// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
network.mojom.DigitallySigned = class {
  constructor() {
    /** @type { !network.mojom.HashAlgorithm } */
    this.hashAlgorithm;
    /** @type { !network.mojom.SignatureAlgorithm } */
    this.signatureAlgorithm;
    /** @type { !Array<number> } */
    this.signature;
  }
};

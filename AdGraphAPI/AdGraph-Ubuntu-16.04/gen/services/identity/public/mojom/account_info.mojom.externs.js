// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let identity = {};
/** @const */
identity.mojom = {};
identity.mojom.AccountInfo = class {
  constructor() {
    /** @type { !string } */
    this.accountId;
    /** @type { !string } */
    this.gaia;
    /** @type { !string } */
    this.email;
    /** @type { !string } */
    this.fullName;
    /** @type { !string } */
    this.givenName;
    /** @type { !string } */
    this.hostedDomain;
    /** @type { !string } */
    this.locale;
    /** @type { !string } */
    this.pictureUrl;
    /** @type { !boolean } */
    this.isChildAccount;
  }
};

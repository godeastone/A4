// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let identity = {};
/** @const */
identity.mojom = {};
identity.mojom.Captcha = class {
  constructor() {
    /** @type { !string } */
    this.token;
    /** @type { !url.mojom.Url } */
    this.audioUrl;
    /** @type { !url.mojom.Url } */
    this.imageUrl;
    /** @type { !url.mojom.Url } */
    this.unlockUrl;
    /** @type { !number } */
    this.imageWidth;
    /** @type { !number } */
    this.imageHeight;
  }
};
identity.mojom.SecondFactor = class {
  constructor() {
    /** @type { !string } */
    this.token;
    /** @type { !string } */
    this.promptText;
    /** @type { !string } */
    this.alternateText;
    /** @type { !number } */
    this.fieldLength;
  }
};
identity.mojom.GoogleServiceAuthError = class {
  constructor() {
    /** @type { !number } */
    this.state;
    /** @type { !number } */
    this.networkError;
    /** @type { !identity.mojom.Captcha } */
    this.captcha;
    /** @type { !identity.mojom.SecondFactor } */
    this.secondFactor;
    /** @type { !string } */
    this.errorMessage;
  }
};

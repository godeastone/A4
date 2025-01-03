// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ShareServicePtr = class {

  /**
   * @param { !string } title
   * @param { !string } text
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   share(title, text, url) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ShareService;
blink.mojom.ShareService_Share_Params = class {
  constructor() {
    /** @type { !string } */
    this.title;
    /** @type { !string } */
    this.text;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ShareService_Share_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ShareError } */
    this.error;
  }
};

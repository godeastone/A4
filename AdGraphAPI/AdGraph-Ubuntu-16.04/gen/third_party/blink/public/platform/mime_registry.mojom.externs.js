// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.MimeRegistryPtr = class {

  /**
   * @param { !string } extension
   * @return {Promise}
   */
   getMimeTypeFromExtension(extension) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.MimeRegistry;
blink.mojom.MimeRegistry_GetMimeTypeFromExtension_Params = class {
  constructor() {
    /** @type { !string } */
    this.extension;
  }
};
blink.mojom.MimeRegistry_GetMimeTypeFromExtension_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.mimeType;
  }
};

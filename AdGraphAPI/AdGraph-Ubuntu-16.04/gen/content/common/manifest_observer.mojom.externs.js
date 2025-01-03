// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ManifestUrlChangeObserverPtr = class {

  /**
   * @param { url.mojom.Url } manifestUrl
   */
   manifestUrlChanged(manifestUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ManifestUrlChangeObserver;
content.mojom.ManifestUrlChangeObserver_ManifestUrlChanged_Params = class {
  constructor() {
    /** @type { url.mojom.Url } */
    this.manifestUrl;
  }
};

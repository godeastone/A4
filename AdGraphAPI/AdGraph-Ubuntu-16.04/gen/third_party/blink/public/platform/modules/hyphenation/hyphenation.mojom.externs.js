// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.HyphenationPtr = class {

  /**
   * @param { !string } locale
   * @return {Promise}
   */
   openDictionary(locale) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.Hyphenation;
blink.mojom.Hyphenation_OpenDictionary_Params = class {
  constructor() {
    /** @type { !string } */
    this.locale;
  }
};
blink.mojom.Hyphenation_OpenDictionary_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.hyphenationDictionaryHandle;
  }
};

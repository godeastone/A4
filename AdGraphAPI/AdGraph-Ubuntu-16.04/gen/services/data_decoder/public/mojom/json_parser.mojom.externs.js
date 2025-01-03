// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let dataDecoder = {};
/** @const */
dataDecoder.mojom = {};
/** @implements {mojo.InterfacePtr} */
dataDecoder.mojom.JsonParserPtr = class {

  /**
   * @param { !string } json
   * @return {Promise}
   */
   parse(json) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
dataDecoder.mojom.JsonParser;
dataDecoder.mojom.JsonParser_Parse_Params = class {
  constructor() {
    /** @type { !string } */
    this.json;
  }
};
dataDecoder.mojom.JsonParser_Parse_ResponseParams = class {
  constructor() {
    /** @type { Object } */
    this.result;
    /** @type { string } */
    this.error;
  }
};

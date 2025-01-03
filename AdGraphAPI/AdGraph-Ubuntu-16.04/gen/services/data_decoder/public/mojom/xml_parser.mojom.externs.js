// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let dataDecoder = {};
/** @const */
dataDecoder.mojom = {};
/** @implements {mojo.InterfacePtr} */
dataDecoder.mojom.XmlParserPtr = class {

  /**
   * @param { !string } xml
   * @return {Promise}
   */
   parse(xml) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
dataDecoder.mojom.XmlParser;
dataDecoder.mojom.XmlParser_Parse_Params = class {
  constructor() {
    /** @type { !string } */
    this.xml;
  }
};
dataDecoder.mojom.XmlParser_Parse_ResponseParams = class {
  constructor() {
    /** @type { Object } */
    this.result;
    /** @type { string } */
    this.error;
  }
};

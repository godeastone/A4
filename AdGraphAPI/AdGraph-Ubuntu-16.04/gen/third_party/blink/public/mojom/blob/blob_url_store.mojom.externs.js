// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BlobURLStorePtr = class {

  /**
   * @param { !blink.mojom.BlobPtr } blob
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   register(blob, url) {}
  /**
   * @param { !url.mojom.Url } url
   */
   revoke(url) {}
  /**
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   resolve(url) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !mojo.InterfaceRequest } factory
   */
   resolveAsURLLoaderFactory(url, factory) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !mojo.InterfaceRequest } token
   */
   resolveForNavigation(url, token) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BlobURLStore;
/** @implements {mojo.InterfacePtr} */
blink.mojom.BlobURLTokenPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } token
   */
   clone(token) {}
  /**
   * @return {Promise}
   */
   getToken() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BlobURLToken;
blink.mojom.BlobURLStore_Register_Params = class {
  constructor() {
    /** @type { !blink.mojom.BlobPtr } */
    this.blob;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.BlobURLStore_Register_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.BlobURLStore_Revoke_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.BlobURLStore_Resolve_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.BlobURLStore_Resolve_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.BlobPtr } */
    this.blob;
  }
};
blink.mojom.BlobURLStore_ResolveAsURLLoaderFactory_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !mojo.InterfaceRequest } */
    this.factory;
  }
};
blink.mojom.BlobURLStore_ResolveForNavigation_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !mojo.InterfaceRequest } */
    this.token;
  }
};
blink.mojom.BlobURLToken_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.token;
  }
};
blink.mojom.BlobURLToken_GetToken_Params = class {
  constructor() {
  }
};
blink.mojom.BlobURLToken_GetToken_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.token;
  }
};

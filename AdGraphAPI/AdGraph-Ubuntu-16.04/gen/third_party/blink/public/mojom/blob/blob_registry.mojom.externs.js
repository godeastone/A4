// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ProgressClientPtr = class {

  /**
   * @param { !number } delta
   */
   onProgress(delta) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ProgressClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.BlobRegistryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } blob
   * @param { !string } uuid
   * @param { !string } contentType
   * @param { !string } contentDisposition
   * @param { !Array<Object> } elements
   * @return {Promise}
   */
   register(blob, uuid, contentType, contentDisposition, elements) {}
  /**
   * @param { !string } contentType
   * @param { !string } contentDisposition
   * @param { !number } lengthHint
   * @param { !mojo.MojoHandle } data
   * @param { mojo.AssociatedInterfacePtrInfo } progressClient
   * @return {Promise}
   */
   registerFromStream(contentType, contentDisposition, lengthHint, data, progressClient) {}
  /**
   * @param { !mojo.InterfaceRequest } blob
   * @param { !string } uuid
   * @return {Promise}
   */
   getBlobFromUUID(blob, uuid) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojo.AssociatedInterfaceRequest } urlStore
   */
   uRLStoreForOrigin(origin, urlStore) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BlobRegistry;
blink.mojom.ProgressClient_OnProgress_Params = class {
  constructor() {
    /** @type { !number } */
    this.delta;
  }
};
blink.mojom.BlobRegistry_Register_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.blob;
    /** @type { !string } */
    this.uuid;
    /** @type { !string } */
    this.contentType;
    /** @type { !string } */
    this.contentDisposition;
    /** @type { !Array<Object> } */
    this.elements;
  }
};
blink.mojom.BlobRegistry_Register_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.BlobRegistry_RegisterFromStream_Params = class {
  constructor() {
    /** @type { !string } */
    this.contentType;
    /** @type { !string } */
    this.contentDisposition;
    /** @type { !number } */
    this.lengthHint;
    /** @type { !mojo.MojoHandle } */
    this.data;
    /** @type { mojo.AssociatedInterfacePtrInfo } */
    this.progressClient;
  }
};
blink.mojom.BlobRegistry_RegisterFromStream_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.SerializedBlob } */
    this.blob;
  }
};
blink.mojom.BlobRegistry_GetBlobFromUUID_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.blob;
    /** @type { !string } */
    this.uuid;
  }
};
blink.mojom.BlobRegistry_GetBlobFromUUID_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.BlobRegistry_URLStoreForOrigin_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.urlStore;
  }
};

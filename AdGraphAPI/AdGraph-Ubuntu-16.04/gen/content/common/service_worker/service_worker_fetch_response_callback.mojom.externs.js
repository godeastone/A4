// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerFetchResponseCallbackPtr = class {

  /**
   * @param { !content.mojom.ServiceWorkerResponse } response
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponse(response, dispatchEventTime) {}
  /**
   * @param { !content.mojom.ServiceWorkerResponse } response
   * @param { !blink.mojom.BlobPtr } bodyAsBlob
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponseBlob(response, bodyAsBlob, dispatchEventTime) {}
  /**
   * @param { !content.mojom.ServiceWorkerResponse } response
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   * @return {Promise}
   */
   onResponseLegacyBlob(response, dispatchEventTime) {}
  /**
   * @param { !content.mojom.ServiceWorkerResponse } response
   * @param { !blink.mojom.ServiceWorkerStreamHandle } bodyAsStream
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponseStream(response, bodyAsStream, dispatchEventTime) {}
  /**
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onFallback(dispatchEventTime) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerFetchResponseCallback;
content.mojom.ServiceWorkerResponse = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnResponse_Params = class {
  constructor() {
    /** @type { !content.mojom.ServiceWorkerResponse } */
    this.response;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnResponseBlob_Params = class {
  constructor() {
    /** @type { !content.mojom.ServiceWorkerResponse } */
    this.response;
    /** @type { !blink.mojom.BlobPtr } */
    this.bodyAsBlob;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params = class {
  constructor() {
    /** @type { !content.mojom.ServiceWorkerResponse } */
    this.response;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnResponseStream_Params = class {
  constructor() {
    /** @type { !content.mojom.ServiceWorkerResponse } */
    this.response;
    /** @type { !blink.mojom.ServiceWorkerStreamHandle } */
    this.bodyAsStream;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ServiceWorkerFetchResponseCallback_OnFallback_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};

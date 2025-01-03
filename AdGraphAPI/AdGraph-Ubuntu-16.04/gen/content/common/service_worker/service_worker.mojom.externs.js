// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerDispatcherHostPtr = class {

  /**
   * @param { !content.mojom.ServiceWorkerProviderHostInfo } providerInfo
   */
   onProviderCreated(providerInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerDispatcherHost;
content.mojom.ServiceWorkerDispatcherHost_OnProviderCreated_Params = class {
  constructor() {
    /** @type { !content.mojom.ServiceWorkerProviderHostInfo } */
    this.providerInfo;
  }
};

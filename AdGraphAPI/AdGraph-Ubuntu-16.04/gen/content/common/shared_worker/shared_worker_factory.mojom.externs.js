// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SharedWorkerFactoryPtr = class {

  /**
   * @param { !content.mojom.SharedWorkerInfo } info
   * @param { !boolean } pauseOnStart
   * @param { !mojoBase.mojom.UnguessableToken } devtoolsWorkerToken
   * @param { !blink.mojom.WorkerContentSettingsProxyPtr } contentSettings
   * @param { content.mojom.ServiceWorkerProviderInfoForSharedWorker } serviceWorkerProviderInfo
   * @param { mojo.AssociatedInterfacePtrInfo } scriptLoaderFactoryPtrInfo
   * @param { !content.mojom.SharedWorkerHostPtr } host
   * @param { !mojo.InterfaceRequest } sharedWorker
   * @param { !serviceManager.mojom.InterfaceProviderPtr } interfaceProvider
   */
   createSharedWorker(info, pauseOnStart, devtoolsWorkerToken, contentSettings, serviceWorkerProviderInfo, scriptLoaderFactoryPtrInfo, host, sharedWorker, interfaceProvider) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SharedWorkerFactory;
content.mojom.SharedWorkerFactory_CreateSharedWorker_Params = class {
  constructor() {
    /** @type { !content.mojom.SharedWorkerInfo } */
    this.info;
    /** @type { !boolean } */
    this.pauseOnStart;
    /** @type { !mojo.InterfaceRequest } */
    this.sharedWorker;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsWorkerToken;
    /** @type { !blink.mojom.WorkerContentSettingsProxyPtr } */
    this.contentSettings;
    /** @type { content.mojom.ServiceWorkerProviderInfoForSharedWorker } */
    this.serviceWorkerProviderInfo;
    /** @type { mojo.AssociatedInterfacePtrInfo } */
    this.scriptLoaderFactoryPtrInfo;
    /** @type { !content.mojom.SharedWorkerHostPtr } */
    this.host;
    /** @type { !serviceManager.mojom.InterfaceProviderPtr } */
    this.interfaceProvider;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.URLLoaderFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } loader
   * @param { !number } routingId
   * @param { !number } requestId
   * @param { !number } options
   * @param { !network.mojom.URLRequest } request
   * @param { !network.mojom.URLLoaderClientPtr } client
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   */
   createLoaderAndStart(loader, routingId, requestId, options, request, client, trafficAnnotation) {}
  /**
   * @param { !mojo.InterfaceRequest } factory
   */
   clone(factory) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.URLLoaderFactory;
network.mojom.URLLoaderFactory_CreateLoaderAndStart_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.loader;
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.requestId;
    /** @type { !number } */
    this.options;
    /** @type { !network.mojom.URLRequest } */
    this.request;
    /** @type { !network.mojom.URLLoaderClientPtr } */
    this.client;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
  }
};
network.mojom.URLLoaderFactory_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.factory;
  }
};

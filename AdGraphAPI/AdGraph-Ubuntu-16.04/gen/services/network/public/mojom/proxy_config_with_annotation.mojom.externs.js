// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.ProxyConfigClientPtr = class {

  /**
   * @param { !network.mojom.ProxyConfigWithAnnotation } proxyConfig
   */
   onProxyConfigUpdated(proxyConfig) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.ProxyConfigClient;
/** @implements {mojo.InterfacePtr} */
network.mojom.ProxyConfigPollerClientPtr = class {

  /**
   */
   onLazyProxyConfigPoll() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.ProxyConfigPollerClient;
network.mojom.ProxyConfigWithAnnotation = class {
  constructor() {
    /** @type { !network.mojom.ProxyConfig } */
    this.value;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
  }
};
network.mojom.ProxyConfigClient_OnProxyConfigUpdated_Params = class {
  constructor() {
    /** @type { !network.mojom.ProxyConfigWithAnnotation } */
    this.proxyConfig;
  }
};
network.mojom.ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params = class {
  constructor() {
  }
};

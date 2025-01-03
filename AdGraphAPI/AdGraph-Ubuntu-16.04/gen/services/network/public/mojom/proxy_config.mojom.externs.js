// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
network.mojom.ProxyBypassRules = class {
  constructor() {
    /** @type { !Array<string> } */
    this.rules;
  }
};
network.mojom.ProxyList = class {
  constructor() {
    /** @type { !Array<string> } */
    this.proxies;
  }
};
network.mojom.ProxyRules = class {
  constructor() {
    /** @type { !network.mojom.ProxyBypassRules } */
    this.bypassRules;
    /** @type { !boolean } */
    this.reverseBypass;
    /** @type { !network.mojom.ProxyRulesType } */
    this.type;
    /** @type { !network.mojom.ProxyList } */
    this.singleProxies;
    /** @type { !network.mojom.ProxyList } */
    this.proxiesForHttp;
    /** @type { !network.mojom.ProxyList } */
    this.proxiesForHttps;
    /** @type { !network.mojom.ProxyList } */
    this.proxiesForFtp;
    /** @type { !network.mojom.ProxyList } */
    this.fallbackProxies;
  }
};
network.mojom.ProxyConfig = class {
  constructor() {
    /** @type { !boolean } */
    this.autoDetect;
    /** @type { !boolean } */
    this.pacMandatory;
    /** @type { !url.mojom.Url } */
    this.pacUrl;
    /** @type { !network.mojom.ProxyRules } */
    this.proxyRules;
  }
};

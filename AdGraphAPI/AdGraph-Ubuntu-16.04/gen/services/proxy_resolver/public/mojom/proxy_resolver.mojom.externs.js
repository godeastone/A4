// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let proxyResolver = {};
/** @const */
proxyResolver.mojom = {};
/** @implements {mojo.InterfacePtr} */
proxyResolver.mojom.ProxyResolverPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !proxyResolver.mojom.ProxyResolverRequestClientPtr } client
   */
   getProxyForUrl(url, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
proxyResolver.mojom.ProxyResolver;
/** @implements {mojo.InterfacePtr} */
proxyResolver.mojom.ProxyResolverRequestClientPtr = class {

  /**
   * @param { !number } error
   * @param { !proxyResolver.mojom.ProxyInfo } proxyInfo
   */
   reportResult(error, proxyInfo) {}
  /**
   * @param { !string } error
   */
   alert(error) {}
  /**
   * @param { !number } lineNumber
   * @param { !string } error
   */
   onError(lineNumber, error) {}
  /**
   * @param { !net.interfaces.HostResolverRequestInfo } requestInfo
   * @param { !net.interfaces.HostResolverRequestClientPtr } client
   */
   resolveDns(requestInfo, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
proxyResolver.mojom.ProxyResolverRequestClient;
/** @implements {mojo.InterfacePtr} */
proxyResolver.mojom.ProxyResolverFactoryPtr = class {

  /**
   * @param { !string } pacScript
   * @param { !mojo.InterfaceRequest } resolver
   * @param { !proxyResolver.mojom.ProxyResolverFactoryRequestClientPtr } client
   */
   createResolver(pacScript, resolver, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
proxyResolver.mojom.ProxyResolverFactory;
/** @implements {mojo.InterfacePtr} */
proxyResolver.mojom.ProxyResolverFactoryRequestClientPtr = class {

  /**
   * @param { !number } error
   */
   reportResult(error) {}
  /**
   * @param { !string } error
   */
   alert(error) {}
  /**
   * @param { !number } lineNumber
   * @param { !string } error
   */
   onError(lineNumber, error) {}
  /**
   * @param { !net.interfaces.HostResolverRequestInfo } requestInfo
   * @param { !net.interfaces.HostResolverRequestClientPtr } client
   */
   resolveDns(requestInfo, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
proxyResolver.mojom.ProxyResolverFactoryRequestClient;
proxyResolver.mojom.ProxyServer = class {
  constructor() {
    /** @type { !proxyResolver.mojom.ProxyScheme } */
    this.scheme;
    /** @type { !number } */
    this.port;
    /** @type { !string } */
    this.host;
  }
};
proxyResolver.mojom.ProxyInfo = class {
  constructor() {
    /** @type { !Array<proxyResolver.mojom.ProxyServer> } */
    this.proxyServers;
  }
};
proxyResolver.mojom.ProxyResolver_GetProxyForUrl_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !proxyResolver.mojom.ProxyResolverRequestClientPtr } */
    this.client;
  }
};
proxyResolver.mojom.ProxyResolverRequestClient_ReportResult_Params = class {
  constructor() {
    /** @type { !number } */
    this.error;
    /** @type { !proxyResolver.mojom.ProxyInfo } */
    this.proxyInfo;
  }
};
proxyResolver.mojom.ProxyResolverRequestClient_Alert_Params = class {
  constructor() {
    /** @type { !string } */
    this.error;
  }
};
proxyResolver.mojom.ProxyResolverRequestClient_OnError_Params = class {
  constructor() {
    /** @type { !number } */
    this.lineNumber;
    /** @type { !string } */
    this.error;
  }
};
proxyResolver.mojom.ProxyResolverRequestClient_ResolveDns_Params = class {
  constructor() {
    /** @type { !net.interfaces.HostResolverRequestInfo } */
    this.requestInfo;
    /** @type { !net.interfaces.HostResolverRequestClientPtr } */
    this.client;
  }
};
proxyResolver.mojom.ProxyResolverFactory_CreateResolver_Params = class {
  constructor() {
    /** @type { !string } */
    this.pacScript;
    /** @type { !mojo.InterfaceRequest } */
    this.resolver;
    /** @type { !proxyResolver.mojom.ProxyResolverFactoryRequestClientPtr } */
    this.client;
  }
};
proxyResolver.mojom.ProxyResolverFactoryRequestClient_ReportResult_Params = class {
  constructor() {
    /** @type { !number } */
    this.error;
  }
};
proxyResolver.mojom.ProxyResolverFactoryRequestClient_Alert_Params = class {
  constructor() {
    /** @type { !string } */
    this.error;
  }
};
proxyResolver.mojom.ProxyResolverFactoryRequestClient_OnError_Params = class {
  constructor() {
    /** @type { !number } */
    this.lineNumber;
    /** @type { !string } */
    this.error;
  }
};
proxyResolver.mojom.ProxyResolverFactoryRequestClient_ResolveDns_Params = class {
  constructor() {
    /** @type { !net.interfaces.HostResolverRequestInfo } */
    this.requestInfo;
    /** @type { !net.interfaces.HostResolverRequestClientPtr } */
    this.client;
  }
};

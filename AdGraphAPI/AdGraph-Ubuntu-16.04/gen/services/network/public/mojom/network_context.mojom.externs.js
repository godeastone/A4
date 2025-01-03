// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.NetLogExporterPtr = class {

  /**
   * @param { !mojoBase.mojom.File } destination
   * @param { !mojoBase.mojom.DictionaryValue } extraConstants
   * @param { !network.mojom.CaptureMode } captureMode
   * @param { !number } maxFileSize
   * @return {Promise}
   */
   start(destination, extraConstants, captureMode, maxFileSize) {}
  /**
   * @param { !mojoBase.mojom.DictionaryValue } polledValues
   * @return {Promise}
   */
   stop(polledValues) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetLogExporter;
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkContextPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } urlLoaderFactory
   * @param { !network.mojom.URLLoaderFactoryParams } params
   */
   createURLLoaderFactory(urlLoaderFactory, params) {}
  /**
   * @param { !mojo.InterfaceRequest } cookieManager
   */
   getCookieManager(cookieManager) {}
  /**
   * @param { !mojo.InterfaceRequest } restrictedCookieManager
   * @param { !number } renderProcessId
   * @param { !number } renderFrameId
   */
   getRestrictedCookieManager(restrictedCookieManager, renderProcessId, renderFrameId) {}
  /**
   * @param { !mojoBase.mojom.Time } startTime
   * @return {Promise}
   */
   clearNetworkingHistorySince(startTime) {}
  /**
   * @param { !mojoBase.mojom.Time } startTime
   * @param { !mojoBase.mojom.Time } endTime
   * @param { network.mojom.ClearDataFilter } filter
   * @return {Promise}
   */
   clearHttpCache(startTime, endTime, filter) {}
  /**
   * @param { !mojoBase.mojom.Time } startTime
   * @param { !mojoBase.mojom.Time } endTime
   * @param { network.mojom.ClearDataFilter } filter
   * @return {Promise}
   */
   clearChannelIds(startTime, endTime, filter) {}
  /**
   * @param { !mojoBase.mojom.Time } startTime
   * @return {Promise}
   */
   clearHttpAuthCache(startTime) {}
  /**
   * @param { network.mojom.ClearDataFilter } filter
   * @return {Promise}
   */
   clearReportingCacheReports(filter) {}
  /**
   * @param { network.mojom.ClearDataFilter } filter
   * @return {Promise}
   */
   clearReportingCacheClients(filter) {}
  /**
   * @param { network.mojom.ClearDataFilter } filter
   * @return {Promise}
   */
   clearNetworkErrorLogging(filter) {}
  /**
   * @param { !string } profileId
   * @param { network.mojom.NetworkConditions } conditions
   */
   setNetworkConditions(profileId, conditions) {}
  /**
   * @param { !string } newAcceptLanguage
   */
   setAcceptLanguage(newAcceptLanguage) {}
  /**
   * @param { !Array<string> } requiredHosts
   * @param { !Array<string> } excludedHosts
   * @param { !Array<string> } excludedSpkis
   * @param { !Array<string> } excludedLegacySpkis
   */
   setCTPolicy(requiredHosts, excludedHosts, excludedSpkis, excludedLegacySpkis) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { network.mojom.UDPSocketReceiverPtr } receiver
   */
   createUDPSocket(request, receiver) {}
  /**
   * @param { !net.interfaces.IPEndPoint } localAddr
   * @param { !number } backlog
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   * @param { !mojo.InterfaceRequest } socket
   * @return {Promise}
   */
   createTCPServerSocket(localAddr, backlog, trafficAnnotation, socket) {}
  /**
   * @param { net.interfaces.IPEndPoint } localAddr
   * @param { !net.interfaces.AddressList } remoteAddrList
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   * @param { !mojo.InterfaceRequest } socket
   * @param { network.mojom.SocketObserverPtr } observer
   * @return {Promise}
   */
   createTCPConnectedSocket(localAddr, remoteAddrList, trafficAnnotation, socket, observer) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !number } processId
   * @param { !number } renderFrameId
   * @param { !url.mojom.Origin } origin
   */
   createWebSocket(request, processId, renderFrameId, origin) {}
  /**
   * @param { !mojo.InterfaceRequest } exporter
   */
   createNetLogExporter(exporter) {}
  /**
   * @param { !boolean } block
   */
   blockThirdPartyCookies(block) {}
  /**
   * @param { !string } host
   * @param { !mojoBase.mojom.Time } expiry
   * @param { !boolean } includeSubdomains
   * @return {Promise}
   */
   addHSTSForTesting(host, expiry, includeSubdomains) {}
  /**
   * @param { !number } rv
   * @return {Promise}
   */
   setFailingHttpTransactionForTesting(rv) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkContext;
network.mojom.NetworkContextParams = class {
  constructor() {
    /** @type { string } */
    this.contextName;
    /** @type { !string } */
    this.userAgent;
    /** @type { !string } */
    this.acceptLanguage;
    /** @type { !boolean } */
    this.enableBrotli;
    /** @type { !boolean } */
    this.restoreOldSessionCookies;
    /** @type { !boolean } */
    this.persistSessionCookies;
    /** @type { !boolean } */
    this.httpCacheEnabled;
    /** @type { !boolean } */
    this.enableDataUrlSupport;
    /** @type { !boolean } */
    this.enableFileUrlSupport;
    /** @type { !boolean } */
    this.enableFtpUrlSupport;
    /** @type { !boolean } */
    this.enforceChromeCtPolicy;
    /** @type { !boolean } */
    this.http09OnNonDefaultPortsEnabled;
    /** @type { !boolean } */
    this.pacQuickCheckEnabled;
    /** @type { !boolean } */
    this.dangerouslyAllowPacAccessToSecureUrls;
    /** @type { !boolean } */
    this.allowGssapiLibraryLoad;
    /** @type { !boolean } */
    this.enableCertificateReporting;
    /** @type { !number } */
    this.httpCacheMaxSize;
    /** @type { !string } */
    this.quicUserAgentId;
    /** @type { proxyResolver.mojom.ProxyResolverFactoryPtr } */
    this.proxyResolverFactory;
    /** @type { mojoBase.mojom.FilePath } */
    this.cookiePath;
    /** @type { mojoBase.mojom.FilePath } */
    this.channelIdPath;
    /** @type { mojoBase.mojom.FilePath } */
    this.httpCachePath;
    /** @type { mojoBase.mojom.FilePath } */
    this.httpServerPropertiesPath;
    /** @type { mojoBase.mojom.FilePath } */
    this.transportSecurityPersisterPath;
    /** @type { network.mojom.SSLConfig } */
    this.initialSslConfig;
    /** @type { mojo.InterfaceRequest } */
    this.sslConfigClientRequest;
    /** @type { mojo.InterfaceRequest } */
    this.proxyConfigClientRequest;
    /** @type { network.mojom.ProxyConfigWithAnnotation } */
    this.initialProxyConfig;
    /** @type { network.mojom.ProxyConfigPollerClientPtr } */
    this.proxyConfigPollerClient;
    /** @type { !string } */
    this.gssapiLibraryName;
    /** @type { !Array<network.mojom.CTLogInfo> } */
    this.ctLogs;
  }
};
network.mojom.NetworkConditions = class {
  constructor() {
    /** @type { !boolean } */
    this.offline;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.latency;
    /** @type { !number } */
    this.downloadThroughput;
    /** @type { !number } */
    this.uploadThroughput;
  }
};
network.mojom.ClearDataFilter = class {
  constructor() {
    /** @type { !network.mojom.Type } */
    this.type;
    /** @type { !Array<string> } */
    this.domains;
    /** @type { !Array<url.mojom.Origin> } */
    this.origins;
  }
};
network.mojom.NetworkUsage = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.totalBytesReceived;
    /** @type { !number } */
    this.totalBytesSent;
  }
};
network.mojom.URLLoaderFactoryParams = class {
  constructor() {
    /** @type { !number } */
    this.processId;
    /** @type { !boolean } */
    this.isCorbEnabled;
    /** @type { !string } */
    this.corbExcludedInitiatorScheme;
  }
};
network.mojom.NetLogExporter_Start_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.destination;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.extraConstants;
    /** @type { !network.mojom.CaptureMode } */
    this.captureMode;
    /** @type { !number } */
    this.maxFileSize;
  }
};
network.mojom.NetLogExporter_Start_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
  }
};
network.mojom.NetLogExporter_Stop_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.polledValues;
  }
};
network.mojom.NetLogExporter_Stop_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
  }
};
network.mojom.NetworkContext_CreateURLLoaderFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.urlLoaderFactory;
    /** @type { !network.mojom.URLLoaderFactoryParams } */
    this.params;
  }
};
network.mojom.NetworkContext_GetCookieManager_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.cookieManager;
  }
};
network.mojom.NetworkContext_GetRestrictedCookieManager_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.restrictedCookieManager;
    /** @type { !number } */
    this.renderProcessId;
    /** @type { !number } */
    this.renderFrameId;
  }
};
network.mojom.NetworkContext_ClearNetworkingHistorySince_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.startTime;
  }
};
network.mojom.NetworkContext_ClearNetworkingHistorySince_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearHttpCache_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.startTime;
    /** @type { !mojoBase.mojom.Time } */
    this.endTime;
    /** @type { network.mojom.ClearDataFilter } */
    this.filter;
  }
};
network.mojom.NetworkContext_ClearHttpCache_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearChannelIds_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.startTime;
    /** @type { !mojoBase.mojom.Time } */
    this.endTime;
    /** @type { network.mojom.ClearDataFilter } */
    this.filter;
  }
};
network.mojom.NetworkContext_ClearChannelIds_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearHttpAuthCache_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.startTime;
  }
};
network.mojom.NetworkContext_ClearHttpAuthCache_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearReportingCacheReports_Params = class {
  constructor() {
    /** @type { network.mojom.ClearDataFilter } */
    this.filter;
  }
};
network.mojom.NetworkContext_ClearReportingCacheReports_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearReportingCacheClients_Params = class {
  constructor() {
    /** @type { network.mojom.ClearDataFilter } */
    this.filter;
  }
};
network.mojom.NetworkContext_ClearReportingCacheClients_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_ClearNetworkErrorLogging_Params = class {
  constructor() {
    /** @type { network.mojom.ClearDataFilter } */
    this.filter;
  }
};
network.mojom.NetworkContext_ClearNetworkErrorLogging_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_SetNetworkConditions_Params = class {
  constructor() {
    /** @type { !string } */
    this.profileId;
    /** @type { network.mojom.NetworkConditions } */
    this.conditions;
  }
};
network.mojom.NetworkContext_SetAcceptLanguage_Params = class {
  constructor() {
    /** @type { !string } */
    this.newAcceptLanguage;
  }
};
network.mojom.NetworkContext_SetCTPolicy_Params = class {
  constructor() {
    /** @type { !Array<string> } */
    this.requiredHosts;
    /** @type { !Array<string> } */
    this.excludedHosts;
    /** @type { !Array<string> } */
    this.excludedSpkis;
    /** @type { !Array<string> } */
    this.excludedLegacySpkis;
  }
};
network.mojom.NetworkContext_CreateUDPSocket_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { network.mojom.UDPSocketReceiverPtr } */
    this.receiver;
  }
};
network.mojom.NetworkContext_CreateTCPServerSocket_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPEndPoint } */
    this.localAddr;
    /** @type { !number } */
    this.backlog;
    /** @type { !mojo.InterfaceRequest } */
    this.socket;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
  }
};
network.mojom.NetworkContext_CreateTCPServerSocket_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddrOut;
  }
};
network.mojom.NetworkContext_CreateTCPConnectedSocket_Params = class {
  constructor() {
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddr;
    /** @type { !net.interfaces.AddressList } */
    this.remoteAddrList;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
    /** @type { !mojo.InterfaceRequest } */
    this.socket;
    /** @type { network.mojom.SocketObserverPtr } */
    this.observer;
  }
};
network.mojom.NetworkContext_CreateTCPConnectedSocket_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
    /** @type { mojo.MojoHandle } */
    this.receiveStream;
    /** @type { mojo.MojoHandle } */
    this.sendStream;
  }
};
network.mojom.NetworkContext_CreateWebSocket_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !number } */
    this.processId;
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !url.mojom.Origin } */
    this.origin;
  }
};
network.mojom.NetworkContext_CreateNetLogExporter_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.exporter;
  }
};
network.mojom.NetworkContext_BlockThirdPartyCookies_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.block;
  }
};
network.mojom.NetworkContext_AddHSTSForTesting_Params = class {
  constructor() {
    /** @type { !string } */
    this.host;
    /** @type { !mojoBase.mojom.Time } */
    this.expiry;
    /** @type { !boolean } */
    this.includeSubdomains;
  }
};
network.mojom.NetworkContext_AddHSTSForTesting_ResponseParams = class {
  constructor() {
  }
};
network.mojom.NetworkContext_SetFailingHttpTransactionForTesting_Params = class {
  constructor() {
    /** @type { !number } */
    this.rv;
  }
};
network.mojom.NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams = class {
  constructor() {
  }
};

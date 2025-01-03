// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.AppCacheBackendPtr = class {

  /**
   * @param { !number } hostId
   */
   registerHost(hostId) {}
  /**
   * @param { !number } hostId
   */
   unregisterHost(hostId) {}
  /**
   * @param { !number } hostId
   * @param { !number } spawningHostId
   */
   setSpawningHostId(hostId, spawningHostId) {}
  /**
   * @param { !number } hostId
   * @param { !url.mojom.Url } documentUrl
   * @param { !number } appcacheDocumentWasLoadedFrom
   * @param { !url.mojom.Url } optManifestUrl
   */
   selectCache(hostId, documentUrl, appcacheDocumentWasLoadedFrom, optManifestUrl) {}
  /**
   * @param { !number } hostId
   * @param { !number } appcacheId
   */
   selectCacheForSharedWorker(hostId, appcacheId) {}
  /**
   * @param { !number } hostId
   * @param { !url.mojom.Url } documentUrl
   * @param { !number } appcacheDocumentWasLoadedFrom
   */
   markAsForeignEntry(hostId, documentUrl, appcacheDocumentWasLoadedFrom) {}
  /**
   * @param { !number } hostId
   * @return {Promise}
   */
   getStatus(hostId) {}
  /**
   * @param { !number } hostId
   * @return {Promise}
   */
   startUpdate(hostId) {}
  /**
   * @param { !number } hostId
   * @return {Promise}
   */
   swapCache(hostId) {}
  /**
   * @param { !number } hostId
   * @return {Promise}
   */
   getResourceList(hostId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.AppCacheBackend;
/** @implements {mojo.InterfacePtr} */
content.mojom.AppCacheFrontendPtr = class {

  /**
   * @param { !number } hostId
   * @param { !content.mojom.AppCacheInfo } info
   */
   cacheSelected(hostId, info) {}
  /**
   * @param { !Array<number> } hostIds
   * @param { !content.mojom.AppCacheStatus } status
   */
   statusChanged(hostIds, status) {}
  /**
   * @param { !Array<number> } hostIds
   * @param { !content.mojom.AppCacheEventID } eventId
   */
   eventRaised(hostIds, eventId) {}
  /**
   * @param { !Array<number> } hostIds
   * @param { !url.mojom.Url } url
   * @param { !number } total
   * @param { !number } complete
   */
   progressEventRaised(hostIds, url, total, complete) {}
  /**
   * @param { !Array<number> } hostIds
   * @param { !content.mojom.AppCacheErrorDetails } errorDetails
   */
   errorEventRaised(hostIds, errorDetails) {}
  /**
   * @param { !number } hostId
   * @param { !number } logLevel
   * @param { !string } message
   */
   logMessage(hostId, logLevel, message) {}
  /**
   * @param { !number } hostId
   * @param { !url.mojom.Url } manifestUrl
   */
   contentBlocked(hostId, manifestUrl) {}
  /**
   * @param { !number } hostId
   * @param { !network.mojom.URLLoaderFactoryPtr } urlLoaderFactory
   */
   setSubresourceFactory(hostId, urlLoaderFactory) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.AppCacheFrontend;
content.mojom.AppCacheResourceInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.size;
    /** @type { !boolean } */
    this.isMaster;
    /** @type { !boolean } */
    this.isManifest;
    /** @type { !boolean } */
    this.isIntercept;
    /** @type { !boolean } */
    this.isFallback;
    /** @type { !boolean } */
    this.isForeign;
    /** @type { !boolean } */
    this.isExplicit;
    /** @type { !number } */
    this.responseId;
  }
};
content.mojom.AppCacheErrorDetails = class {
  constructor() {
    /** @type { !string } */
    this.message;
    /** @type { !content.mojom.AppCacheErrorReason } */
    this.reason;
    /** @type { !number } */
    this.status;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !boolean } */
    this.isCrossOrigin;
  }
};
content.mojom.AppCacheBackend_RegisterHost_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_UnregisterHost_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_SetSpawningHostId_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !number } */
    this.spawningHostId;
  }
};
content.mojom.AppCacheBackend_SelectCache_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !url.mojom.Url } */
    this.documentUrl;
    /** @type { !number } */
    this.appcacheDocumentWasLoadedFrom;
    /** @type { !url.mojom.Url } */
    this.optManifestUrl;
  }
};
content.mojom.AppCacheBackend_SelectCacheForSharedWorker_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !number } */
    this.appcacheId;
  }
};
content.mojom.AppCacheBackend_MarkAsForeignEntry_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !url.mojom.Url } */
    this.documentUrl;
    /** @type { !number } */
    this.appcacheDocumentWasLoadedFrom;
  }
};
content.mojom.AppCacheBackend_GetStatus_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_GetStatus_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.AppCacheStatus } */
    this.status;
  }
};
content.mojom.AppCacheBackend_StartUpdate_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_StartUpdate_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.AppCacheBackend_SwapCache_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_SwapCache_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.AppCacheBackend_GetResourceList_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
  }
};
content.mojom.AppCacheBackend_GetResourceList_ResponseParams = class {
  constructor() {
    /** @type { !Array<content.mojom.AppCacheResourceInfo> } */
    this.resources;
  }
};
content.mojom.AppCacheFrontend_CacheSelected_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !content.mojom.AppCacheInfo } */
    this.info;
  }
};
content.mojom.AppCacheFrontend_StatusChanged_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.hostIds;
    /** @type { !content.mojom.AppCacheStatus } */
    this.status;
  }
};
content.mojom.AppCacheFrontend_EventRaised_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.hostIds;
    /** @type { !content.mojom.AppCacheEventID } */
    this.eventId;
  }
};
content.mojom.AppCacheFrontend_ProgressEventRaised_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.hostIds;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.total;
    /** @type { !number } */
    this.complete;
  }
};
content.mojom.AppCacheFrontend_ErrorEventRaised_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.hostIds;
    /** @type { !content.mojom.AppCacheErrorDetails } */
    this.errorDetails;
  }
};
content.mojom.AppCacheFrontend_LogMessage_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !number } */
    this.logLevel;
    /** @type { !string } */
    this.message;
  }
};
content.mojom.AppCacheFrontend_ContentBlocked_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !url.mojom.Url } */
    this.manifestUrl;
  }
};
content.mojom.AppCacheFrontend_SetSubresourceFactory_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !network.mojom.URLLoaderFactoryPtr } */
    this.urlLoaderFactory;
  }
};

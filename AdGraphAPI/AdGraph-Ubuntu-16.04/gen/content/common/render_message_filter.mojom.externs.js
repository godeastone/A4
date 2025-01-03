// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderMessageFilterPtr = class {

  /**
   * @return {Promise}
   */
   generateRoutingID() {}
  /**
   * @param { !number } openerId
   * @param { !content.mojom.WebPopupType } popupType
   * @param { !content.mojom.WidgetPtr } widget
   * @return {Promise}
   */
   createNewWidget(openerId, popupType, widget) {}
  /**
   * @param { !number } openerId
   * @param { !content.mojom.WidgetPtr } widget
   * @return {Promise}
   */
   createFullscreenWidget(openerId, widget) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !mojoBase.mojom.Time } expectedResponseTime
   * @param { !Array<number> } data
   */
   didGenerateCacheableMetadata(url, expectedResponseTime, data) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !mojoBase.mojom.Time } expectedResponseTime
   * @param { !Array<number> } data
   * @param { !url.mojom.Origin } cacheStorageOrigin
   * @param { !string } cacheStorageCacheName
   */
   didGenerateCacheableMetadataInCacheStorage(url, expectedResponseTime, data, cacheStorageOrigin, cacheStorageCacheName) {}
  /**
   * @return {Promise}
   */
   hasGpuProcess() {}
  /**
   * @param { !number } platformThreadId
   * @param { !mojoBase.mojom.ThreadPriority } threadPriority
   */
   setThreadPriority(platformThreadId, threadPriority) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderMessageFilter;
content.mojom.RenderMessageFilter_GenerateRoutingID_Params = class {
  constructor() {
  }
};
content.mojom.RenderMessageFilter_GenerateRoutingID_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.routingId;
  }
};
content.mojom.RenderMessageFilter_CreateNewWidget_Params = class {
  constructor() {
    /** @type { !number } */
    this.openerId;
    /** @type { !content.mojom.WebPopupType } */
    this.popupType;
    /** @type { !content.mojom.WidgetPtr } */
    this.widget;
  }
};
content.mojom.RenderMessageFilter_CreateNewWidget_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.routeId;
  }
};
content.mojom.RenderMessageFilter_CreateFullscreenWidget_Params = class {
  constructor() {
    /** @type { !number } */
    this.openerId;
    /** @type { !content.mojom.WidgetPtr } */
    this.widget;
  }
};
content.mojom.RenderMessageFilter_CreateFullscreenWidget_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.routeId;
  }
};
content.mojom.RenderMessageFilter_DidGenerateCacheableMetadata_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !mojoBase.mojom.Time } */
    this.expectedResponseTime;
    /** @type { !Array<number> } */
    this.data;
  }
};
content.mojom.RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !mojoBase.mojom.Time } */
    this.expectedResponseTime;
    /** @type { !Array<number> } */
    this.data;
    /** @type { !url.mojom.Origin } */
    this.cacheStorageOrigin;
    /** @type { !string } */
    this.cacheStorageCacheName;
  }
};
content.mojom.RenderMessageFilter_HasGpuProcess_Params = class {
  constructor() {
  }
};
content.mojom.RenderMessageFilter_HasGpuProcess_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.hasGpuProcess;
  }
};
content.mojom.RenderMessageFilter_SetThreadPriority_Params = class {
  constructor() {
    /** @type { !number } */
    this.platformThreadId;
    /** @type { !mojoBase.mojom.ThreadPriority } */
    this.threadPriority;
  }
};

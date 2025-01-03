// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PluginHostPtr = class {

  /**
   */
   showFlashPermissionBubble() {}
  /**
   * @param { !mojoBase.mojom.FilePath } filePath
   */
   couldNotLoadPlugin(filePath) {}
  /**
   * @param { !chrome.mojom.PluginRendererPtr } pluginRenderer
   * @param { !string } groupId
   */
   blockedOutdatedPlugin(pluginRenderer, groupId) {}
  /**
   * @param { !chrome.mojom.PluginRendererPtr } pluginRenderer
   * @param { !string } groupId
   */
   blockedComponentUpdatedPlugin(pluginRenderer, groupId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PluginHost;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PluginAuthHostPtr = class {

  /**
   * @param { !mojoBase.mojom.String16 } name
   * @param { !string } groupId
   */
   blockedUnauthorizedPlugin(name, groupId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PluginAuthHost;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PluginInfoHostPtr = class {

  /**
   * @param { !number } renderFrameId
   * @param { !url.mojom.Url } url
   * @param { !url.mojom.Origin } origin
   * @param { !string } mimeType
   * @return {Promise}
   */
   getPluginInfo(renderFrameId, url, origin, mimeType) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PluginInfoHost;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PluginRendererPtr = class {

  /**
   */
   finishedDownloading() {}
  /**
   */
   updateSuccess() {}
  /**
   */
   updateFailure() {}
  /**
   */
   updateDownloading() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PluginRenderer;
chrome.mojom.PluginInfo = class {
  constructor() {
    /** @type { !chrome.mojom.PluginStatus } */
    this.status;
    /** @type { !content.mojom.WebPluginInfo } */
    this.plugin;
    /** @type { !string } */
    this.actualMimeType;
    /** @type { !string } */
    this.groupIdentifier;
    /** @type { !mojoBase.mojom.String16 } */
    this.groupName;
  }
};
chrome.mojom.PluginParam = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
  }
};
chrome.mojom.PluginHost_ShowFlashPermissionBubble_Params = class {
  constructor() {
  }
};
chrome.mojom.PluginHost_CouldNotLoadPlugin_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.filePath;
  }
};
chrome.mojom.PluginHost_BlockedOutdatedPlugin_Params = class {
  constructor() {
    /** @type { !chrome.mojom.PluginRendererPtr } */
    this.pluginRenderer;
    /** @type { !string } */
    this.groupId;
  }
};
chrome.mojom.PluginHost_BlockedComponentUpdatedPlugin_Params = class {
  constructor() {
    /** @type { !chrome.mojom.PluginRendererPtr } */
    this.pluginRenderer;
    /** @type { !string } */
    this.groupId;
  }
};
chrome.mojom.PluginAuthHost_BlockedUnauthorizedPlugin_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !string } */
    this.groupId;
  }
};
chrome.mojom.PluginInfoHost_GetPluginInfo_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !string } */
    this.mimeType;
  }
};
chrome.mojom.PluginInfoHost_GetPluginInfo_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.PluginInfo } */
    this.pluginInfo;
  }
};
chrome.mojom.PluginRenderer_FinishedDownloading_Params = class {
  constructor() {
  }
};
chrome.mojom.PluginRenderer_UpdateSuccess_Params = class {
  constructor() {
  }
};
chrome.mojom.PluginRenderer_UpdateFailure_Params = class {
  constructor() {
  }
};
chrome.mojom.PluginRenderer_UpdateDownloading_Params = class {
  constructor() {
  }
};

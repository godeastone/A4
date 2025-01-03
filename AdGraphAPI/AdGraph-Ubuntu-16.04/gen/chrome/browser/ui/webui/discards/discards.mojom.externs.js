// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.DiscardsDetailsProviderPtr = class {

  /**
   * @return {Promise}
   */
   getTabDiscardsInfo() {}
  /**
   * @param { !number } tabId
   * @param { !boolean } isAutoDiscardable
   * @return {Promise}
   */
   setAutoDiscardable(tabId, isAutoDiscardable) {}
  /**
   * @param { !number } tabId
   * @param { !boolean } urgent
   * @return {Promise}
   */
   discardById(tabId, urgent) {}
  /**
   * @param { !number } tabId
   */
   freezeById(tabId) {}
  /**
   * @param { !boolean } urgent
   * @return {Promise}
   */
   discard(urgent) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.DiscardsDetailsProvider;
mojom.TabDiscardsInfo = class {
  constructor() {
    /** @type { !string } */
    this.tabUrl;
    /** @type { !string } */
    this.title;
    /** @type { !mojom.LifecycleUnitVisibility } */
    this.visibility;
    /** @type { !boolean } */
    this.isMedia;
    /** @type { !boolean } */
    this.isDiscarded;
    /** @type { !boolean } */
    this.isFrozen;
    /** @type { !boolean } */
    this.isAutoDiscardable;
    /** @type { !boolean } */
    this.hasReactivationScore;
    /** @type { !number } */
    this.discardCount;
    /** @type { !number } */
    this.utilityRank;
    /** @type { !number } */
    this.lastActiveSeconds;
    /** @type { !number } */
    this.id;
    /** @type { !number } */
    this.reactivationScore;
  }
};
mojom.DiscardsDetailsProvider_GetTabDiscardsInfo_Params = class {
  constructor() {
  }
};
mojom.DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojom.TabDiscardsInfo> } */
    this.infos;
  }
};
mojom.DiscardsDetailsProvider_SetAutoDiscardable_Params = class {
  constructor() {
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.isAutoDiscardable;
  }
};
mojom.DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams = class {
  constructor() {
  }
};
mojom.DiscardsDetailsProvider_DiscardById_Params = class {
  constructor() {
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.urgent;
  }
};
mojom.DiscardsDetailsProvider_DiscardById_ResponseParams = class {
  constructor() {
  }
};
mojom.DiscardsDetailsProvider_FreezeById_Params = class {
  constructor() {
    /** @type { !number } */
    this.tabId;
  }
};
mojom.DiscardsDetailsProvider_Discard_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.urgent;
  }
};
mojom.DiscardsDetailsProvider_Discard_ResponseParams = class {
  constructor() {
  }
};

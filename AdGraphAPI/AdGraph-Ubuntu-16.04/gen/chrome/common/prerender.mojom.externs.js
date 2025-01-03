// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PrerenderCancelerPtr = class {

  /**
   */
   cancelPrerenderForPrinting() {}
  /**
   */
   cancelPrerenderForUnsupportedMethod() {}
  /**
   * @param { !url.mojom.Url } url
   */
   cancelPrerenderForUnsupportedScheme(url) {}
  /**
   */
   cancelPrerenderForSyncDeferredRedirect() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PrerenderCanceler;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.PrerenderDispatcherPtr = class {

  /**
   * @param { !number } prerenderId
   */
   prerenderStart(prerenderId) {}
  /**
   * @param { !number } prerenderId
   */
   prerenderStopLoading(prerenderId) {}
  /**
   * @param { !number } prerenderId
   */
   prerenderDomContentLoaded(prerenderId) {}
  /**
   * @param { !url.mojom.Url } alias
   */
   prerenderAddAlias(alias) {}
  /**
   * @param { !Array<url.mojom.Url> } aliases
   */
   prerenderRemoveAliases(aliases) {}
  /**
   * @param { !number } prerenderId
   */
   prerenderStop(prerenderId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.PrerenderDispatcher;
chrome.mojom.PrerenderCanceler_CancelPrerenderForPrinting_Params = class {
  constructor() {
  }
};
chrome.mojom.PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params = class {
  constructor() {
  }
};
chrome.mojom.PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
chrome.mojom.PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params = class {
  constructor() {
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderStart_Params = class {
  constructor() {
    /** @type { !number } */
    this.prerenderId;
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderStopLoading_Params = class {
  constructor() {
    /** @type { !number } */
    this.prerenderId;
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderDomContentLoaded_Params = class {
  constructor() {
    /** @type { !number } */
    this.prerenderId;
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderAddAlias_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.alias;
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderRemoveAliases_Params = class {
  constructor() {
    /** @type { !Array<url.mojom.Url> } */
    this.aliases;
  }
};
chrome.mojom.PrerenderDispatcher_PrerenderStop_Params = class {
  constructor() {
    /** @type { !number } */
    this.prerenderId;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.EmbeddedSearchConnectorPtr = class {

  /**
   * @param { !mojo.AssociatedInterfaceRequest } embeddedSearch
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   */
   connect(embeddedSearch, client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.EmbeddedSearchConnector;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.EmbeddedSearchPtr = class {

  /**
   * @param { !number } pageSeqNo
   * @param { !chrome.mojom.OmniboxFocusState } state
   */
   focusOmnibox(pageSeqNo, state) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !url.mojom.Url } url
   */
   deleteMostVisitedItem(pageSeqNo, url) {}
  /**
   * @param { !number } pageSeqNo
   */
   undoAllMostVisitedDeletions(pageSeqNo) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !url.mojom.Url } url
   */
   undoMostVisitedDeletion(pageSeqNo, url) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !chrome.mojom.NTPLoggingEventType } event
   * @param { !mojoBase.mojom.TimeDelta } time
   */
   logEvent(pageSeqNo, event, time) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !chrome.mojom.NTPTileImpression } impression
   */
   logMostVisitedImpression(pageSeqNo, impression) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !chrome.mojom.NTPTileImpression } impression
   */
   logMostVisitedNavigation(pageSeqNo, impression) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !mojoBase.mojom.String16 } textToBePasted
   */
   pasteAndOpenDropdown(pageSeqNo, textToBePasted) {}
  /**
   * @param { !number } pageSeqNo
   * @return {Promise}
   */
   historySyncCheck(pageSeqNo) {}
  /**
   * @param { !number } pageSeqNo
   * @param { !mojoBase.mojom.String16 } identity
   * @return {Promise}
   */
   chromeIdentityCheck(pageSeqNo, identity) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.EmbeddedSearch;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.EmbeddedSearchClientPtr = class {

  /**
   * @param { !number } pageSeqNo
   */
   setPageSequenceNumber(pageSeqNo) {}
  /**
   * @param { !chrome.mojom.OmniboxFocusState } newFocusState
   * @param { !chrome.mojom.OmniboxFocusChangeReason } reason
   */
   focusChanged(newFocusState, reason) {}
  /**
   * @param { !Array<chrome.mojom.InstantMostVisitedItem> } items
   */
   mostVisitedChanged(items) {}
  /**
   * @param { !boolean } inputInProgress
   */
   setInputInProgress(inputInProgress) {}
  /**
   * @param { !chrome.mojom.ThemeBackgroundInfo } value
   */
   themeChanged(value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.EmbeddedSearchClient;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.SearchBouncerPtr = class {

  /**
   * @param { !url.mojom.Url } newTabPageUrl
   */
   setNewTabPageURL(newTabPageUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.SearchBouncer;
chrome.mojom.NTPTileImpression = class {
  constructor() {
  }
};
chrome.mojom.InstantMostVisitedItem = class {
  constructor() {
  }
};
chrome.mojom.ThemeBackgroundInfo = class {
  constructor() {
  }
};
chrome.mojom.EmbeddedSearchConnector_Connect_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.embeddedSearch;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
chrome.mojom.EmbeddedSearch_FocusOmnibox_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !chrome.mojom.OmniboxFocusState } */
    this.state;
  }
};
chrome.mojom.EmbeddedSearch_DeleteMostVisitedItem_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
chrome.mojom.EmbeddedSearch_UndoAllMostVisitedDeletions_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
  }
};
chrome.mojom.EmbeddedSearch_UndoMostVisitedDeletion_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
chrome.mojom.EmbeddedSearch_LogEvent_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !chrome.mojom.NTPLoggingEventType } */
    this.event;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.time;
  }
};
chrome.mojom.EmbeddedSearch_LogMostVisitedImpression_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !chrome.mojom.NTPTileImpression } */
    this.impression;
  }
};
chrome.mojom.EmbeddedSearch_LogMostVisitedNavigation_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !chrome.mojom.NTPTileImpression } */
    this.impression;
  }
};
chrome.mojom.EmbeddedSearch_PasteAndOpenDropdown_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !mojoBase.mojom.String16 } */
    this.textToBePasted;
  }
};
chrome.mojom.EmbeddedSearch_HistorySyncCheck_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
  }
};
chrome.mojom.EmbeddedSearch_HistorySyncCheck_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.syncHistory;
  }
};
chrome.mojom.EmbeddedSearch_ChromeIdentityCheck_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
    /** @type { !mojoBase.mojom.String16 } */
    this.identity;
  }
};
chrome.mojom.EmbeddedSearch_ChromeIdentityCheck_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.identityMatch;
  }
};
chrome.mojom.EmbeddedSearchClient_SetPageSequenceNumber_Params = class {
  constructor() {
    /** @type { !number } */
    this.pageSeqNo;
  }
};
chrome.mojom.EmbeddedSearchClient_FocusChanged_Params = class {
  constructor() {
    /** @type { !chrome.mojom.OmniboxFocusState } */
    this.newFocusState;
    /** @type { !chrome.mojom.OmniboxFocusChangeReason } */
    this.reason;
  }
};
chrome.mojom.EmbeddedSearchClient_MostVisitedChanged_Params = class {
  constructor() {
    /** @type { !Array<chrome.mojom.InstantMostVisitedItem> } */
    this.items;
  }
};
chrome.mojom.EmbeddedSearchClient_SetInputInProgress_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.inputInProgress;
  }
};
chrome.mojom.EmbeddedSearchClient_ThemeChanged_Params = class {
  constructor() {
    /** @type { !chrome.mojom.ThemeBackgroundInfo } */
    this.value;
  }
};
chrome.mojom.SearchBouncer_SetNewTabPageURL_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.newTabPageUrl;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.ProfileImportObserverPtr = class {

  /**
   */
   onImportStart() {}
  /**
   * @param { !boolean } succeeded
   * @param { !string } errorMsg
   */
   onImportFinished(succeeded, errorMsg) {}
  /**
   * @param { !chrome.mojom.ImportItem } item
   */
   onImportItemStart(item) {}
  /**
   * @param { !chrome.mojom.ImportItem } item
   */
   onImportItemFinished(item) {}
  /**
   * @param { !number } totalHistoryRowsCount
   */
   onHistoryImportStart(totalHistoryRowsCount) {}
  /**
   * @param { !Array<chrome.mojom.ImporterURLRow> } historyRowsGroup
   * @param { !number } visitSource
   */
   onHistoryImportGroup(historyRowsGroup, visitSource) {}
  /**
   * @param { !url.mojom.Url } homePage
   */
   onHomePageImportReady(homePage) {}
  /**
   * @param { !mojoBase.mojom.String16 } firstFolderName
   * @param { !number } totalBookmarksCount
   */
   onBookmarksImportStart(firstFolderName, totalBookmarksCount) {}
  /**
   * @param { !Array<chrome.mojom.ImportedBookmarkEntry> } bookmarksGroup
   */
   onBookmarksImportGroup(bookmarksGroup) {}
  /**
   * @param { !number } totalFaviconsCount
   */
   onFaviconsImportStart(totalFaviconsCount) {}
  /**
   * @param { !chrome.mojom.FaviconUsageDataList } faviconsGroup
   */
   onFaviconsImportGroup(faviconsGroup) {}
  /**
   * @param { !autofill.mojom.PasswordForm } form
   */
   onPasswordFormImportReady(form) {}
  /**
   * @param { !Array<chrome.mojom.SearchEngineInfo> } searchEngines
   * @param { !boolean } uniqueOnHostAndPath
   */
   onKeywordsImportReady(searchEngines, uniqueOnHostAndPath) {}
  /**
   * @param { !Array<string> } searchEngineData
   */
   onFirefoxSearchEngineDataReceived(searchEngineData) {}
  /**
   * @param { !number } totalAutofillFormDataEntryCount
   */
   onAutofillFormDataImportStart(totalAutofillFormDataEntryCount) {}
  /**
   * @param { !Array<chrome.mojom.ImporterAutofillFormDataEntry> } autofillFormDataEntryGroup
   */
   onAutofillFormDataImportGroup(autofillFormDataEntryGroup) {}
  /**
   * @param { !chrome.mojom.ImporterIE7PasswordInfo } importerPasswordInfo
   */
   onIE7PasswordReceived(importerPasswordInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.ProfileImportObserver;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.ProfileImportPtr = class {

  /**
   * @param { !chrome.mojom.SourceProfile } sourceProfile
   * @param { !number } items
   * @param { !Map<number, string> } localizedStrings
   * @param { !chrome.mojom.ProfileImportObserverPtr } observer
   */
   startImport(sourceProfile, items, localizedStrings, observer) {}
  /**
   */
   cancelImport() {}
  /**
   * @param { !chrome.mojom.ImportItem } item
   */
   reportImportItemFinished(item) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.ProfileImport;
chrome.mojom.ImportedBookmarkEntry = class {
  constructor() {
  }
};
chrome.mojom.ImporterAutofillFormDataEntry = class {
  constructor() {
  }
};
chrome.mojom.SearchEngineInfo = class {
  constructor() {
  }
};
chrome.mojom.ImporterURLRow = class {
  constructor() {
  }
};
chrome.mojom.SourceProfile = class {
  constructor() {
  }
};
chrome.mojom.FaviconUsageDataList = class {
  constructor() {
  }
};
chrome.mojom.ImporterIE7PasswordInfo = class {
  constructor() {
  }
};
chrome.mojom.ProfileImportObserver_OnImportStart_Params = class {
  constructor() {
  }
};
chrome.mojom.ProfileImportObserver_OnImportFinished_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.succeeded;
    /** @type { !string } */
    this.errorMsg;
  }
};
chrome.mojom.ProfileImportObserver_OnImportItemStart_Params = class {
  constructor() {
    /** @type { !chrome.mojom.ImportItem } */
    this.item;
  }
};
chrome.mojom.ProfileImportObserver_OnImportItemFinished_Params = class {
  constructor() {
    /** @type { !chrome.mojom.ImportItem } */
    this.item;
  }
};
chrome.mojom.ProfileImportObserver_OnHistoryImportStart_Params = class {
  constructor() {
    /** @type { !number } */
    this.totalHistoryRowsCount;
  }
};
chrome.mojom.ProfileImportObserver_OnHistoryImportGroup_Params = class {
  constructor() {
    /** @type { !Array<chrome.mojom.ImporterURLRow> } */
    this.historyRowsGroup;
    /** @type { !number } */
    this.visitSource;
  }
};
chrome.mojom.ProfileImportObserver_OnHomePageImportReady_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.homePage;
  }
};
chrome.mojom.ProfileImportObserver_OnBookmarksImportStart_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.firstFolderName;
    /** @type { !number } */
    this.totalBookmarksCount;
  }
};
chrome.mojom.ProfileImportObserver_OnBookmarksImportGroup_Params = class {
  constructor() {
    /** @type { !Array<chrome.mojom.ImportedBookmarkEntry> } */
    this.bookmarksGroup;
  }
};
chrome.mojom.ProfileImportObserver_OnFaviconsImportStart_Params = class {
  constructor() {
    /** @type { !number } */
    this.totalFaviconsCount;
  }
};
chrome.mojom.ProfileImportObserver_OnFaviconsImportGroup_Params = class {
  constructor() {
    /** @type { !chrome.mojom.FaviconUsageDataList } */
    this.faviconsGroup;
  }
};
chrome.mojom.ProfileImportObserver_OnPasswordFormImportReady_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.form;
  }
};
chrome.mojom.ProfileImportObserver_OnKeywordsImportReady_Params = class {
  constructor() {
    /** @type { !Array<chrome.mojom.SearchEngineInfo> } */
    this.searchEngines;
    /** @type { !boolean } */
    this.uniqueOnHostAndPath;
  }
};
chrome.mojom.ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params = class {
  constructor() {
    /** @type { !Array<string> } */
    this.searchEngineData;
  }
};
chrome.mojom.ProfileImportObserver_OnAutofillFormDataImportStart_Params = class {
  constructor() {
    /** @type { !number } */
    this.totalAutofillFormDataEntryCount;
  }
};
chrome.mojom.ProfileImportObserver_OnAutofillFormDataImportGroup_Params = class {
  constructor() {
    /** @type { !Array<chrome.mojom.ImporterAutofillFormDataEntry> } */
    this.autofillFormDataEntryGroup;
  }
};
chrome.mojom.ProfileImportObserver_OnIE7PasswordReceived_Params = class {
  constructor() {
    /** @type { !chrome.mojom.ImporterIE7PasswordInfo } */
    this.importerPasswordInfo;
  }
};
chrome.mojom.ProfileImport_StartImport_Params = class {
  constructor() {
    /** @type { !chrome.mojom.SourceProfile } */
    this.sourceProfile;
    /** @type { !number } */
    this.items;
    /** @type { !Map<number, string> } */
    this.localizedStrings;
    /** @type { !chrome.mojom.ProfileImportObserverPtr } */
    this.observer;
  }
};
chrome.mojom.ProfileImport_CancelImport_Params = class {
  constructor() {
  }
};
chrome.mojom.ProfileImport_ReportImportItemFinished_Params = class {
  constructor() {
    /** @type { !chrome.mojom.ImportItem } */
    this.item;
  }
};

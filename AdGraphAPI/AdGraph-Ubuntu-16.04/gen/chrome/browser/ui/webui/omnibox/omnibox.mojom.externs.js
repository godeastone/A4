// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.OmniboxPageHandlerPtr = class {

  /**
   * @param { !mojom.OmniboxPagePtr } page
   */
   setClientPage(page) {}
  /**
   * @param { !string } inputString
   * @param { !number } cursorPosition
   * @param { !boolean } preventInlineAutocomplete
   * @param { !boolean } preferKeyword
   * @param { !number } pageClassification
   */
   startOmniboxQuery(inputString, cursorPosition, preventInlineAutocomplete, preferKeyword, pageClassification) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.OmniboxPageHandler;
/** @implements {mojo.InterfacePtr} */
mojom.OmniboxPagePtr = class {

  /**
   * @param { !mojom.OmniboxResult } result
   */
   handleNewAutocompleteResult(result) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.OmniboxPage;
mojom.AutocompleteAdditionalInfo = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !string } */
    this.value;
  }
};
mojom.AutocompleteMatch = class {
  constructor() {
    /** @type { string } */
    this.providerName;
    /** @type { !boolean } */
    this.providerDone;
    /** @type { !boolean } */
    this.deletable;
    /** @type { !boolean } */
    this.allowedToBeDefaultMatch;
    /** @type { !boolean } */
    this.hasTabMatch;
    /** @type { !boolean } */
    this.starred;
    /** @type { !boolean } */
    this.fromPrevious;
    /** @type { !number } */
    this.relevance;
    /** @type { !string } */
    this.fillIntoEdit;
    /** @type { !string } */
    this.inlineAutocompletion;
    /** @type { !string } */
    this.destinationUrl;
    /** @type { !string } */
    this.contents;
    /** @type { !string } */
    this.description;
    /** @type { !number } */
    this.transition;
    /** @type { !number } */
    this.duplicates;
    /** @type { !string } */
    this.type;
    /** @type { string } */
    this.associatedKeyword;
    /** @type { !string } */
    this.keyword;
    /** @type { !Array<mojom.AutocompleteAdditionalInfo> } */
    this.additionalInfo;
  }
};
mojom.AutocompleteResultsForProvider = class {
  constructor() {
    /** @type { !string } */
    this.providerName;
    /** @type { !Array<mojom.AutocompleteMatch> } */
    this.results;
  }
};
mojom.OmniboxResult = class {
  constructor() {
    /** @type { !boolean } */
    this.done;
    /** @type { !boolean } */
    this.isTypedHost;
    /** @type { !number } */
    this.timeSinceOmniboxStartedMs;
    /** @type { !string } */
    this.host;
    /** @type { !Array<mojom.AutocompleteMatch> } */
    this.combinedResults;
    /** @type { !Array<mojom.AutocompleteResultsForProvider> } */
    this.resultsByProvider;
  }
};
mojom.OmniboxPageHandler_SetClientPage_Params = class {
  constructor() {
    /** @type { !mojom.OmniboxPagePtr } */
    this.page;
  }
};
mojom.OmniboxPageHandler_StartOmniboxQuery_Params = class {
  constructor() {
    /** @type { !string } */
    this.inputString;
    /** @type { !number } */
    this.cursorPosition;
    /** @type { !boolean } */
    this.preventInlineAutocomplete;
    /** @type { !boolean } */
    this.preferKeyword;
    /** @type { !number } */
    this.pageClassification;
  }
};
mojom.OmniboxPage_HandleNewAutocompleteResult_Params = class {
  constructor() {
    /** @type { !mojom.OmniboxResult } */
    this.result;
  }
};

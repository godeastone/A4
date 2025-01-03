// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.TextSuggestionBackendPtr = class {

  /**
   * @param { !string } suggestion
   */
   applySpellCheckSuggestion(suggestion) {}
  /**
   * @param { !number } markerTag
   * @param { !number } suggestionIndex
   */
   applyTextSuggestion(markerTag, suggestionIndex) {}
  /**
   */
   deleteActiveSuggestionRange() {}
  /**
   * @param { !string } suggestion
   */
   onNewWordAddedToDictionary(suggestion) {}
  /**
   */
   onSuggestionMenuClosed() {}
  /**
   * @param { !number } maxNumberOfSuggestions
   */
   suggestionMenuTimeoutCallback(maxNumberOfSuggestions) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.TextSuggestionBackend;
blink.mojom.TextSuggestionBackend_ApplySpellCheckSuggestion_Params = class {
  constructor() {
    /** @type { !string } */
    this.suggestion;
  }
};
blink.mojom.TextSuggestionBackend_ApplyTextSuggestion_Params = class {
  constructor() {
    /** @type { !number } */
    this.markerTag;
    /** @type { !number } */
    this.suggestionIndex;
  }
};
blink.mojom.TextSuggestionBackend_DeleteActiveSuggestionRange_Params = class {
  constructor() {
  }
};
blink.mojom.TextSuggestionBackend_OnNewWordAddedToDictionary_Params = class {
  constructor() {
    /** @type { !string } */
    this.suggestion;
  }
};
blink.mojom.TextSuggestionBackend_OnSuggestionMenuClosed_Params = class {
  constructor() {
  }
};
blink.mojom.TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params = class {
  constructor() {
    /** @type { !number } */
    this.maxNumberOfSuggestions;
  }
};

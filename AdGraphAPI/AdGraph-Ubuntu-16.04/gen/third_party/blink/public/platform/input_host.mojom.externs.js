// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.TextSuggestionHostPtr = class {

  /**
   */
   startSuggestionMenuTimer() {}
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<blink.mojom.SpellCheckSuggestion> } suggestions
   */
   showSpellCheckSuggestionMenu(caretX, caretY, markedText, suggestions) {}
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<blink.mojom.TextSuggestion> } suggestions
   */
   showTextSuggestionMenu(caretX, caretY, markedText, suggestions) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.TextSuggestionHost;
blink.mojom.SpellCheckSuggestion = class {
  constructor() {
    /** @type { !string } */
    this.suggestion;
  }
};
blink.mojom.TextSuggestion = class {
  constructor() {
    /** @type { !number } */
    this.markerTag;
    /** @type { !number } */
    this.suggestionIndex;
    /** @type { !string } */
    this.prefix;
    /** @type { !string } */
    this.suggestion;
    /** @type { !string } */
    this.suffix;
  }
};
blink.mojom.TextSuggestionHost_StartSuggestionMenuTimer_Params = class {
  constructor() {
  }
};
blink.mojom.TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params = class {
  constructor() {
    /** @type { !number } */
    this.caretX;
    /** @type { !number } */
    this.caretY;
    /** @type { !string } */
    this.markedText;
    /** @type { !Array<blink.mojom.SpellCheckSuggestion> } */
    this.suggestions;
  }
};
blink.mojom.TextSuggestionHost_ShowTextSuggestionMenu_Params = class {
  constructor() {
    /** @type { !number } */
    this.caretX;
    /** @type { !number } */
    this.caretY;
    /** @type { !string } */
    this.markedText;
    /** @type { !Array<blink.mojom.TextSuggestion> } */
    this.suggestions;
  }
};

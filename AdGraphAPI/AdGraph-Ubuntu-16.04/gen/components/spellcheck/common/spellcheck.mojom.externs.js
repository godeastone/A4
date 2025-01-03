// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let spellcheck = {};
/** @const */
spellcheck.mojom = {};
/** @implements {mojo.InterfacePtr} */
spellcheck.mojom.SpellCheckerPtr = class {

  /**
   * @param { !Array<spellcheck.mojom.SpellCheckBDictLanguage> } dictionaries
   * @param { !Array<string> } customWords
   * @param { !boolean } enable
   */
   initialize(dictionaries, customWords, enable) {}
  /**
   * @param { !Array<string> } wordsAdded
   * @param { !Array<string> } wordsRemoved
   */
   customDictionaryChanged(wordsAdded, wordsRemoved) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
spellcheck.mojom.SpellChecker;
/** @implements {mojo.InterfacePtr} */
spellcheck.mojom.SpellCheckHostPtr = class {

  /**
   */
   requestDictionary() {}
  /**
   * @param { !mojoBase.mojom.String16 } word
   * @param { !boolean } misspelled
   */
   notifyChecked(word, misspelled) {}
  /**
   * @param { !mojoBase.mojom.String16 } text
   * @return {Promise}
   */
   callSpellingService(text) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
spellcheck.mojom.SpellCheckHost;
spellcheck.mojom.SpellCheckBDictLanguage = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.file;
    /** @type { !string } */
    this.language;
  }
};
spellcheck.mojom.SpellCheckResult = class {
  constructor() {
    /** @type { !spellcheck.mojom.Decoration } */
    this.decoration;
    /** @type { !number } */
    this.location;
    /** @type { !number } */
    this.length;
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.replacements;
  }
};
spellcheck.mojom.SpellChecker_Initialize_Params = class {
  constructor() {
    /** @type { !Array<spellcheck.mojom.SpellCheckBDictLanguage> } */
    this.dictionaries;
    /** @type { !Array<string> } */
    this.customWords;
    /** @type { !boolean } */
    this.enable;
  }
};
spellcheck.mojom.SpellChecker_CustomDictionaryChanged_Params = class {
  constructor() {
    /** @type { !Array<string> } */
    this.wordsAdded;
    /** @type { !Array<string> } */
    this.wordsRemoved;
  }
};
spellcheck.mojom.SpellCheckHost_RequestDictionary_Params = class {
  constructor() {
  }
};
spellcheck.mojom.SpellCheckHost_NotifyChecked_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.word;
    /** @type { !boolean } */
    this.misspelled;
  }
};
spellcheck.mojom.SpellCheckHost_CallSpellingService_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
  }
};
spellcheck.mojom.SpellCheckHost_CallSpellingService_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !Array<spellcheck.mojom.SpellCheckResult> } */
    this.results;
  }
};

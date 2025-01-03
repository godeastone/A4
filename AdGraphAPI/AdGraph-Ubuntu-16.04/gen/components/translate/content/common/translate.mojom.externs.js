// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let translate = {};
/** @const */
translate.mojom = {};
/** @implements {mojo.InterfacePtr} */
translate.mojom.PagePtr = class {

  /**
   * @param { !string } translateScript
   * @param { !string } sourceLang
   * @param { !string } targetLang
   * @return {Promise}
   */
   translate(translateScript, sourceLang, targetLang) {}
  /**
   */
   revertTranslation() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
translate.mojom.Page;
/** @implements {mojo.InterfacePtr} */
translate.mojom.ContentTranslateDriverPtr = class {

  /**
   * @param { !translate.mojom.PagePtr } page
   * @param { !translate.mojom.LanguageDetectionDetails } details
   * @param { !boolean } pageNeedsTranslation
   */
   registerPage(page, details, pageNeedsTranslation) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
translate.mojom.ContentTranslateDriver;
translate.mojom.LanguageDetectionDetails = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.time;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.contentLanguage;
    /** @type { !string } */
    this.cldLanguage;
    /** @type { !boolean } */
    this.isCldReliable;
    /** @type { !boolean } */
    this.hasNotranslate;
    /** @type { !string } */
    this.htmlRootLanguage;
    /** @type { !string } */
    this.adoptedLanguage;
    /** @type { !mojoBase.mojom.String16 } */
    this.contents;
  }
};
translate.mojom.Page_Translate_Params = class {
  constructor() {
    /** @type { !string } */
    this.translateScript;
    /** @type { !string } */
    this.sourceLang;
    /** @type { !string } */
    this.targetLang;
  }
};
translate.mojom.Page_Translate_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.cancelled;
    /** @type { !translate.mojom.TranslateError } */
    this.error;
    /** @type { !string } */
    this.originalLang;
    /** @type { !string } */
    this.translatedLang;
  }
};
translate.mojom.Page_RevertTranslation_Params = class {
  constructor() {
  }
};
translate.mojom.ContentTranslateDriver_RegisterPage_Params = class {
  constructor() {
    /** @type { !translate.mojom.PagePtr } */
    this.page;
    /** @type { !translate.mojom.LanguageDetectionDetails } */
    this.details;
    /** @type { !boolean } */
    this.pageNeedsTranslation;
  }
};

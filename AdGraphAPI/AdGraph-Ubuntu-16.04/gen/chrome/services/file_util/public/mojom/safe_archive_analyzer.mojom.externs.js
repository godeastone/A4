// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.SafeArchiveAnalyzerPtr = class {

  /**
   * @param { !mojoBase.mojom.File } zipFile
   * @param { !mojoBase.mojom.File } temporaryFile
   * @return {Promise}
   */
   analyzeZipFile(zipFile, temporaryFile) {}
  /**
   * @param { !mojoBase.mojom.File } dmgFile
   * @return {Promise}
   */
   analyzeDmgFile(dmgFile) {}
  /**
   * @param { !mojoBase.mojom.FilePath } rarFile
   * @return {Promise}
   */
   analyzeRarFile(rarFile) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.SafeArchiveAnalyzer;
chrome.mojom.SafeArchiveAnalyzerResults = class {
  constructor() {
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeZipFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.zipFile;
    /** @type { !mojoBase.mojom.File } */
    this.temporaryFile;
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.SafeArchiveAnalyzerResults } */
    this.results;
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeDmgFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.dmgFile;
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.SafeArchiveAnalyzerResults } */
    this.results;
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeRarFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.rarFile;
  }
};
chrome.mojom.SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.SafeArchiveAnalyzerResults } */
    this.results;
  }
};

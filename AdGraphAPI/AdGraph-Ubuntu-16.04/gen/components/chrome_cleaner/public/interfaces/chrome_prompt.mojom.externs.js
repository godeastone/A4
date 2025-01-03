// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chromeCleaner = {};
/** @const */
chromeCleaner.mojom = {};
/** @implements {mojo.InterfacePtr} */
chromeCleaner.mojom.ChromePromptPtr = class {

  /**
   * @param { !Array<chromeCleaner.mojom.FilePath> } filesToDelete
   * @param { Array<chromeCleaner.mojom.RegistryKey> } registryKeys
   * @return {Promise}
   */
   promptUser(filesToDelete, registryKeys) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chromeCleaner.mojom.ChromePrompt;
chromeCleaner.mojom.FilePath = class {
  constructor() {
    /** @type { !Array<number> } */
    this.value;
  }
};
chromeCleaner.mojom.RegistryKey = class {
  constructor() {
    /** @type { !Array<number> } */
    this.value;
  }
};
chromeCleaner.mojom.ChromePrompt_PromptUser_Params = class {
  constructor() {
    /** @type { !Array<chromeCleaner.mojom.FilePath> } */
    this.filesToDelete;
    /** @type { Array<chromeCleaner.mojom.RegistryKey> } */
    this.registryKeys;
  }
};
chromeCleaner.mojom.ChromePrompt_PromptUser_ResponseParams = class {
  constructor() {
    /** @type { !chromeCleaner.mojom.PromptAcceptance } */
    this.promptAcceptance;
  }
};

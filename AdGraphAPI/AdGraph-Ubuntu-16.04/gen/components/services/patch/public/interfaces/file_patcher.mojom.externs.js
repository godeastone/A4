// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let patch = {};
/** @const */
patch.mojom = {};
/** @implements {mojo.InterfacePtr} */
patch.mojom.FilePatcherPtr = class {

  /**
   * @param { !mojoBase.mojom.File } inputFile
   * @param { !mojoBase.mojom.File } patchFile
   * @param { !mojoBase.mojom.File } outputFile
   * @return {Promise}
   */
   patchFileBsdiff(inputFile, patchFile, outputFile) {}
  /**
   * @param { !mojoBase.mojom.File } inputFile
   * @param { !mojoBase.mojom.File } patchFile
   * @param { !mojoBase.mojom.File } outputFile
   * @return {Promise}
   */
   patchFileCourgette(inputFile, patchFile, outputFile) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
patch.mojom.FilePatcher;
patch.mojom.FilePatcher_PatchFileBsdiff_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.inputFile;
    /** @type { !mojoBase.mojom.File } */
    this.patchFile;
    /** @type { !mojoBase.mojom.File } */
    this.outputFile;
  }
};
patch.mojom.FilePatcher_PatchFileBsdiff_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
patch.mojom.FilePatcher_PatchFileCourgette_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.inputFile;
    /** @type { !mojoBase.mojom.File } */
    this.patchFile;
    /** @type { !mojoBase.mojom.File } */
    this.outputFile;
  }
};
patch.mojom.FilePatcher_PatchFileCourgette_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};

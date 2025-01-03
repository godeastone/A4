// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let unzip = {};
/** @const */
unzip.mojom = {};
/** @implements {mojo.InterfacePtr} */
unzip.mojom.UnzipFilterPtr = class {

  /**
   * @param { !mojoBase.mojom.FilePath } path
   * @return {Promise}
   */
   shouldUnzipFile(path) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
unzip.mojom.UnzipFilter;
/** @implements {mojo.InterfacePtr} */
unzip.mojom.UnzipperPtr = class {

  /**
   * @param { !mojoBase.mojom.File } zipFile
   * @param { !filesystem.mojom.DirectoryPtr } outputDir
   * @return {Promise}
   */
   unzip(zipFile, outputDir) {}
  /**
   * @param { !mojoBase.mojom.File } zipFile
   * @param { !filesystem.mojom.DirectoryPtr } outputDir
   * @param { !unzip.mojom.UnzipFilterPtr } filter
   * @return {Promise}
   */
   unzipWithFilter(zipFile, outputDir, filter) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
unzip.mojom.Unzipper;
unzip.mojom.UnzipFilter_ShouldUnzipFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.path;
  }
};
unzip.mojom.UnzipFilter_ShouldUnzipFile_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
unzip.mojom.Unzipper_Unzip_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.zipFile;
    /** @type { !filesystem.mojom.DirectoryPtr } */
    this.outputDir;
  }
};
unzip.mojom.Unzipper_Unzip_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
unzip.mojom.Unzipper_UnzipWithFilter_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.File } */
    this.zipFile;
    /** @type { !filesystem.mojom.DirectoryPtr } */
    this.outputDir;
    /** @type { !unzip.mojom.UnzipFilterPtr } */
    this.filter;
  }
};
unzip.mojom.Unzipper_UnzipWithFilter_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let extensions = {};
/** @const */
extensions.mojom = {};
/** @implements {mojo.InterfacePtr} */
extensions.mojom.InlineInstallProgressListenerPtr = class {

  /**
   * @param { !extensions.mojom.WebstoreInstallStage } stage
   */
   inlineInstallStageChanged(stage) {}
  /**
   * @param { !number } percentDownloaded
   */
   inlineInstallDownloadProgress(percentDownloaded) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
extensions.mojom.InlineInstallProgressListener;
/** @implements {mojo.InterfacePtr} */
extensions.mojom.InlineInstallerPtr = class {

  /**
   * @param { !string } webstoreItemId
   * @param { !number } listenersMask
   * @param { !extensions.mojom.InlineInstallProgressListenerPtr } installProgressListener
   * @return {Promise}
   */
   doInlineInstall(webstoreItemId, listenersMask, installProgressListener) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
extensions.mojom.InlineInstaller;
extensions.mojom.InlineInstallProgressListener_InlineInstallStageChanged_Params = class {
  constructor() {
    /** @type { !extensions.mojom.WebstoreInstallStage } */
    this.stage;
  }
};
extensions.mojom.InlineInstallProgressListener_InlineInstallDownloadProgress_Params = class {
  constructor() {
    /** @type { !number } */
    this.percentDownloaded;
  }
};
extensions.mojom.InlineInstaller_DoInlineInstall_Params = class {
  constructor() {
    /** @type { !string } */
    this.webstoreItemId;
    /** @type { !number } */
    this.listenersMask;
    /** @type { !extensions.mojom.InlineInstallProgressListenerPtr } */
    this.installProgressListener;
  }
};
extensions.mojom.InlineInstaller_DoInlineInstall_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !extensions.mojom.WebstoreInstallResult } */
    this.result;
    /** @type { !string } */
    this.error;
  }
};

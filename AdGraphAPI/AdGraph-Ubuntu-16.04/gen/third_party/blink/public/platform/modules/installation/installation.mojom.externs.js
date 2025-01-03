// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.InstallationServicePtr = class {

  /**
   */
   onInstall() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.InstallationService;
blink.mojom.InstallationService_OnInstall_Params = class {
  constructor() {
  }
};

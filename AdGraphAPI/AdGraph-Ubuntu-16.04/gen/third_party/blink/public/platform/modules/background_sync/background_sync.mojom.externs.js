// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BackgroundSyncServicePtr = class {

  /**
   * @param { !blink.mojom.SyncRegistration } options
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   register(options, serviceWorkerRegistrationId) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   getRegistrations(serviceWorkerRegistrationId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BackgroundSyncService;
blink.mojom.SyncRegistration = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !string } */
    this.tag;
    /** @type { !blink.mojom.BackgroundSyncNetworkState } */
    this.networkState;
  }
};
blink.mojom.BackgroundSyncService_Register_Params = class {
  constructor() {
    /** @type { !blink.mojom.SyncRegistration } */
    this.options;
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
blink.mojom.BackgroundSyncService_Register_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @type { !blink.mojom.SyncRegistration } */
    this.options;
  }
};
blink.mojom.BackgroundSyncService_GetRegistrations_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
blink.mojom.BackgroundSyncService_GetRegistrations_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @type { !Array<blink.mojom.SyncRegistration> } */
    this.registrations;
  }
};

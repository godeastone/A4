// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BackgroundFetchRegistrationObserverPtr = class {

  /**
   * @param { !number } uploadTotal
   * @param { !number } uploaded
   * @param { !number } downloadTotal
   * @param { !number } downloaded
   */
   onProgress(uploadTotal, uploaded, downloadTotal, downloaded) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BackgroundFetchRegistrationObserver;
/** @implements {mojo.InterfacePtr} */
blink.mojom.BackgroundFetchServicePtr = class {

  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !string } developerId
   * @param { !Array<blink.mojom.FetchAPIRequest> } requests
   * @param { !blink.mojom.BackgroundFetchOptions } options
   * @param { skia.mojom.Bitmap } icon
   * @return {Promise}
   */
   fetch(serviceWorkerRegistrationId, developerId, requests, options, icon) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !string } developerId
   * @param { !string } uniqueId
   * @param { !string } title
   * @return {Promise}
   */
   updateUI(serviceWorkerRegistrationId, developerId, uniqueId, title) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !string } developerId
   * @param { !string } uniqueId
   * @return {Promise}
   */
   abort(serviceWorkerRegistrationId, developerId, uniqueId) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @param { !string } developerId
   * @return {Promise}
   */
   getRegistration(serviceWorkerRegistrationId, developerId) {}
  /**
   * @param { !number } serviceWorkerRegistrationId
   * @return {Promise}
   */
   getDeveloperIds(serviceWorkerRegistrationId) {}
  /**
   * @return {Promise}
   */
   getIconDisplaySize() {}
  /**
   * @param { !string } uniqueId
   * @param { !blink.mojom.BackgroundFetchRegistrationObserverPtr } observer
   */
   addRegistrationObserver(uniqueId, observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BackgroundFetchService;
blink.mojom.IconDefinition = class {
  constructor() {
    /** @type { !string } */
    this.src;
    /** @type { !string } */
    this.sizes;
    /** @type { !string } */
    this.type;
  }
};
blink.mojom.BackgroundFetchOptions = class {
  constructor() {
    /** @type { !Array<blink.mojom.IconDefinition> } */
    this.icons;
    /** @type { !number } */
    this.downloadTotal;
    /** @type { !string } */
    this.title;
  }
};
blink.mojom.BackgroundFetchRegistration = class {
  constructor() {
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !number } */
    this.uploadTotal;
    /** @type { !number } */
    this.uploaded;
    /** @type { !number } */
    this.downloadTotal;
    /** @type { !number } */
    this.downloaded;
  }
};
blink.mojom.BackgroundFetchRegistrationObserver_OnProgress_Params = class {
  constructor() {
    /** @type { !number } */
    this.uploadTotal;
    /** @type { !number } */
    this.uploaded;
    /** @type { !number } */
    this.downloadTotal;
    /** @type { !number } */
    this.downloaded;
  }
};
blink.mojom.BackgroundFetchService_Fetch_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !string } */
    this.developerId;
    /** @type { !Array<blink.mojom.FetchAPIRequest> } */
    this.requests;
    /** @type { !blink.mojom.BackgroundFetchOptions } */
    this.options;
    /** @type { skia.mojom.Bitmap } */
    this.icon;
  }
};
blink.mojom.BackgroundFetchService_Fetch_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundFetchError } */
    this.error;
    /** @type { blink.mojom.BackgroundFetchRegistration } */
    this.registration;
  }
};
blink.mojom.BackgroundFetchService_UpdateUI_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
    /** @type { !string } */
    this.title;
  }
};
blink.mojom.BackgroundFetchService_UpdateUI_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundFetchError } */
    this.error;
  }
};
blink.mojom.BackgroundFetchService_Abort_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !string } */
    this.developerId;
    /** @type { !string } */
    this.uniqueId;
  }
};
blink.mojom.BackgroundFetchService_Abort_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundFetchError } */
    this.error;
  }
};
blink.mojom.BackgroundFetchService_GetRegistration_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
    /** @type { !string } */
    this.developerId;
  }
};
blink.mojom.BackgroundFetchService_GetRegistration_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundFetchError } */
    this.error;
    /** @type { blink.mojom.BackgroundFetchRegistration } */
    this.registration;
  }
};
blink.mojom.BackgroundFetchService_GetDeveloperIds_Params = class {
  constructor() {
    /** @type { !number } */
    this.serviceWorkerRegistrationId;
  }
};
blink.mojom.BackgroundFetchService_GetDeveloperIds_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BackgroundFetchError } */
    this.error;
    /** @type { !Array<string> } */
    this.developerIds;
  }
};
blink.mojom.BackgroundFetchService_GetIconDisplaySize_Params = class {
  constructor() {
  }
};
blink.mojom.BackgroundFetchService_GetIconDisplaySize_ResponseParams = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.iconSizePixels;
  }
};
blink.mojom.BackgroundFetchService_AddRegistrationObserver_Params = class {
  constructor() {
    /** @type { !string } */
    this.uniqueId;
    /** @type { !blink.mojom.BackgroundFetchRegistrationObserverPtr } */
    this.observer;
  }
};

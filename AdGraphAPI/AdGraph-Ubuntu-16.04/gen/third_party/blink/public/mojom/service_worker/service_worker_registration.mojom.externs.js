// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerRegistrationObjectHostPtr = class {

  /**
   * @return {Promise}
   */
   update() {}
  /**
   * @return {Promise}
   */
   unregister() {}
  /**
   * @param { !boolean } enable
   * @return {Promise}
   */
   enableNavigationPreload(enable) {}
  /**
   * @return {Promise}
   */
   getNavigationPreloadState() {}
  /**
   * @param { !string } value
   * @return {Promise}
   */
   setNavigationPreloadHeader(value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerRegistrationObjectHost;
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerRegistrationObjectPtr = class {

  /**
   * @param { !number } changedMask
   * @param { blink.mojom.ServiceWorkerObjectInfo } installing
   * @param { blink.mojom.ServiceWorkerObjectInfo } waiting
   * @param { blink.mojom.ServiceWorkerObjectInfo } active
   */
   setVersionAttributes(changedMask, installing, waiting, active) {}
  /**
   * @param { !blink.mojom.ServiceWorkerUpdateViaCache } updateViaCache
   */
   setUpdateViaCache(updateViaCache) {}
  /**
   */
   updateFound() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerRegistrationObject;
blink.mojom.ServiceWorkerRegistrationOptions = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.scope;
    /** @type { !blink.mojom.ServiceWorkerUpdateViaCache } */
    this.updateViaCache;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectInfo = class {
  constructor() {
    /** @type { !number } */
    this.registrationId;
    /** @type { !blink.mojom.ServiceWorkerRegistrationOptions } */
    this.options;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.hostPtrInfo;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.installing;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.waiting;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.active;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_Update_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_Update_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_Unregister_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enable;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
    /** @type { blink.mojom.NavigationPreloadState } */
    this.state;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params = class {
  constructor() {
    /** @type { !string } */
    this.value;
  }
};
blink.mojom.ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerRegistrationObject_SetVersionAttributes_Params = class {
  constructor() {
    /** @type { !number } */
    this.changedMask;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.installing;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.waiting;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.active;
  }
};
blink.mojom.ServiceWorkerRegistrationObject_SetUpdateViaCache_Params = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerUpdateViaCache } */
    this.updateViaCache;
  }
};
blink.mojom.ServiceWorkerRegistrationObject_UpdateFound_Params = class {
  constructor() {
  }
};

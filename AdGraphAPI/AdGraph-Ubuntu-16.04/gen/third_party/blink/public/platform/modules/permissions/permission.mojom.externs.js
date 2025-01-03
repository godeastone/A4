// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.PermissionObserverPtr = class {

  /**
   * @param { !blink.mojom.PermissionStatus } status
   */
   onPermissionStatusChange(status) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PermissionObserver;
/** @implements {mojo.InterfacePtr} */
blink.mojom.PermissionServicePtr = class {

  /**
   * @param { !blink.mojom.PermissionDescriptor } permission
   * @return {Promise}
   */
   hasPermission(permission) {}
  /**
   * @param { !blink.mojom.PermissionDescriptor } permission
   * @param { !boolean } userGesture
   * @return {Promise}
   */
   requestPermission(permission, userGesture) {}
  /**
   * @param { !Array<blink.mojom.PermissionDescriptor> } permission
   * @param { !boolean } userGesture
   * @return {Promise}
   */
   requestPermissions(permission, userGesture) {}
  /**
   * @param { !blink.mojom.PermissionDescriptor } permission
   * @return {Promise}
   */
   revokePermission(permission) {}
  /**
   * @param { !blink.mojom.PermissionDescriptor } permission
   * @param { !blink.mojom.PermissionStatus } lastKnownStatus
   * @param { !blink.mojom.PermissionObserverPtr } observer
   */
   addPermissionObserver(permission, lastKnownStatus, observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PermissionService;
blink.mojom.MidiPermissionDescriptor = class {
  constructor() {
    /** @type { !boolean } */
    this.sysex;
  }
};
blink.mojom.ClipboardPermissionDescriptor = class {
  constructor() {
    /** @type { !boolean } */
    this.allowWithoutGesture;
  }
};
blink.mojom.PermissionDescriptor = class {
  constructor() {
    /** @type { !blink.mojom.PermissionName } */
    this.name;
    /** @type { Object } */
    this.extension;
  }
};
blink.mojom.PermissionObserver_OnPermissionStatusChange_Params = class {
  constructor() {
    /** @type { !blink.mojom.PermissionStatus } */
    this.status;
  }
};
blink.mojom.PermissionService_HasPermission_Params = class {
  constructor() {
    /** @type { !blink.mojom.PermissionDescriptor } */
    this.permission;
  }
};
blink.mojom.PermissionService_HasPermission_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.PermissionStatus } */
    this.status;
  }
};
blink.mojom.PermissionService_RequestPermission_Params = class {
  constructor() {
    /** @type { !blink.mojom.PermissionDescriptor } */
    this.permission;
    /** @type { !boolean } */
    this.userGesture;
  }
};
blink.mojom.PermissionService_RequestPermission_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.PermissionStatus } */
    this.status;
  }
};
blink.mojom.PermissionService_RequestPermissions_Params = class {
  constructor() {
    /** @type { !Array<blink.mojom.PermissionDescriptor> } */
    this.permission;
    /** @type { !boolean } */
    this.userGesture;
  }
};
blink.mojom.PermissionService_RequestPermissions_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.PermissionStatus> } */
    this.statuses;
  }
};
blink.mojom.PermissionService_RevokePermission_Params = class {
  constructor() {
    /** @type { !blink.mojom.PermissionDescriptor } */
    this.permission;
  }
};
blink.mojom.PermissionService_RevokePermission_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.PermissionStatus } */
    this.status;
  }
};
blink.mojom.PermissionService_AddPermissionObserver_Params = class {
  constructor() {
    /** @type { !blink.mojom.PermissionDescriptor } */
    this.permission;
    /** @type { !blink.mojom.PermissionStatus } */
    this.lastKnownStatus;
    /** @type { !blink.mojom.PermissionObserverPtr } */
    this.observer;
  }
};

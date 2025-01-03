// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SessionStorageNamespacePtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojo.AssociatedInterfaceRequest } database
   */
   openArea(origin, database) {}
  /**
   * @param { !string } cloneToNamespace
   */
   clone(cloneToNamespace) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SessionStorageNamespace;
/** @implements {mojo.InterfacePtr} */
content.mojom.StoragePartitionServicePtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojo.InterfaceRequest } database
   */
   openLocalStorage(origin, database) {}
  /**
   * @param { !string } namespaceId
   * @param { !mojo.InterfaceRequest } sessionNamespace
   */
   openSessionStorage(namespaceId, sessionNamespace) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.StoragePartitionService;
content.mojom.SessionStorageNamespace_OpenArea_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.database;
  }
};
content.mojom.SessionStorageNamespace_Clone_Params = class {
  constructor() {
    /** @type { !string } */
    this.cloneToNamespace;
  }
};
content.mojom.StoragePartitionService_OpenLocalStorage_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojo.InterfaceRequest } */
    this.database;
  }
};
content.mojom.StoragePartitionService_OpenSessionStorage_Params = class {
  constructor() {
    /** @type { !string } */
    this.namespaceId;
    /** @type { !mojo.InterfaceRequest } */
    this.sessionNamespace;
  }
};

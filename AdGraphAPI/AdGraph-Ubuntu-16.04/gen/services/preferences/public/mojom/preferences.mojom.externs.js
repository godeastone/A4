// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let prefs = {};
/** @const */
prefs.mojom = {};
/** @implements {mojo.InterfacePtr} */
prefs.mojom.PrefStoreObserverPtr = class {

  /**
   * @param { !Array<prefs.mojom.PrefUpdate> } updates
   */
   onPrefsChanged(updates) {}
  /**
   * @param { !boolean } succeeded
   */
   onInitializationCompleted(succeeded) {}
  /**
   */
   onPrefChangeAck() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
prefs.mojom.PrefStoreObserver;
/** @implements {mojo.InterfacePtr} */
prefs.mojom.PrefStoreConnectorPtr = class {

  /**
   * @param { !prefs.mojom.PrefRegistry } prefRegistry
   * @return {Promise}
   */
   connect(prefRegistry) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
prefs.mojom.PrefStoreConnector;
/** @implements {mojo.InterfacePtr} */
prefs.mojom.PersistentPrefStorePtr = class {

  /**
   * @param { !Array<prefs.mojom.PrefUpdate> } updates
   */
   setValues(updates) {}
  /**
   * @param { !string } key
   * @param { !Array<string> } subPrefPath
   */
   requestValue(key, subPrefPath) {}
  /**
   * @return {Promise}
   */
   commitPendingWrite() {}
  /**
   */
   schedulePendingLossyWrites() {}
  /**
   */
   clearMutableValues() {}
  /**
   */
   onStoreDeletionFromDisk() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
prefs.mojom.PersistentPrefStore;
/** @implements {mojo.InterfacePtr} */
prefs.mojom.ResetOnLoadObserverPtr = class {

  /**
   */
   onResetOnLoad() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
prefs.mojom.ResetOnLoadObserver;
prefs.mojom.PrefStoreConnection = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.observer;
    /** @type { !boolean } */
    this.isInitialized;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.initialPrefs;
  }
};
prefs.mojom.PersistentPrefStoreConnection = class {
  constructor() {
    /** @type { prefs.mojom.PrefStoreConnection } */
    this.prefStoreConnection;
    /** @type { prefs.mojom.PersistentPrefStorePtr } */
    this.prefStore;
    /** @type { !prefs.mojom.ReadError } */
    this.readError;
    /** @type { !boolean } */
    this.readOnly;
  }
};
prefs.mojom.IncognitoPersistentPrefStoreConnection = class {
  constructor() {
    /** @type { !prefs.mojom.PersistentPrefStoreConnection } */
    this.prefStoreConnection;
    /** @type { !Array<string> } */
    this.overlayPrefNames;
  }
};
prefs.mojom.SubPrefUpdate = class {
  constructor() {
    /** @type { !Array<string> } */
    this.path;
    /** @type { Object } */
    this.value;
  }
};
prefs.mojom.PrefUpdate = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !Object } */
    this.value;
    /** @type { !number } */
    this.flags;
  }
};
prefs.mojom.PrefRegistry = class {
  constructor() {
    /** @type { !Array<string> } */
    this.privateRegistrations;
    /** @type { !Array<string> } */
    this.foreignRegistrations;
    /** @type { !Array<prefs.mojom.PrefRegistration> } */
    this.publicRegistrations;
  }
};
prefs.mojom.PrefRegistration = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !Object } */
    this.defaultValue;
    /** @type { !number } */
    this.flags;
  }
};
prefs.mojom.TrackedPersistentPrefStoreConfiguration = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.unprotectedPrefFilename;
    /** @type { !mojoBase.mojom.FilePath } */
    this.protectedPrefFilename;
    /** @type { !Array<prefs.mojom.TrackedPreferenceMetadata> } */
    this.trackingConfiguration;
    /** @type { !number } */
    this.reportingIdsCount;
    /** @type { !string } */
    this.seed;
    /** @type { !string } */
    this.legacyDeviceId;
    /** @type { !string } */
    this.registrySeed;
    /** @type { !mojoBase.mojom.String16 } */
    this.registryPath;
    /** @type { prefs.mojom.TrackedPreferenceValidationDelegatePtr } */
    this.validationDelegate;
    /** @type { prefs.mojom.ResetOnLoadObserverPtr } */
    this.resetOnLoadObserver;
  }
};
prefs.mojom.TrackedPreferenceMetadata = class {
  constructor() {
    /** @type { !number } */
    this.reportingId;
    /** @type { !string } */
    this.name;
    /** @type { !prefs.mojom.EnforcementLevel } */
    this.enforcementLevel;
    /** @type { !prefs.mojom.PrefTrackingStrategy } */
    this.strategy;
    /** @type { !prefs.mojom.ValueType } */
    this.valueType;
  }
};
prefs.mojom.PrefStoreObserver_OnPrefsChanged_Params = class {
  constructor() {
    /** @type { !Array<prefs.mojom.PrefUpdate> } */
    this.updates;
  }
};
prefs.mojom.PrefStoreObserver_OnInitializationCompleted_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.succeeded;
  }
};
prefs.mojom.PrefStoreObserver_OnPrefChangeAck_Params = class {
  constructor() {
  }
};
prefs.mojom.PrefStoreConnector_Connect_Params = class {
  constructor() {
    /** @type { !prefs.mojom.PrefRegistry } */
    this.prefRegistry;
  }
};
prefs.mojom.PrefStoreConnector_Connect_ResponseParams = class {
  constructor() {
    /** @type { !prefs.mojom.PersistentPrefStoreConnection } */
    this.connection;
    /** @type { prefs.mojom.IncognitoPersistentPrefStoreConnection } */
    this.underlay;
    /** @type { !Array<prefs.mojom.PrefRegistration> } */
    this.remoteDefaults;
    /** @type { !Map<prefs.mojom.PrefStoreType, prefs.mojom.PrefStoreConnection> } */
    this.connections;
  }
};
prefs.mojom.PersistentPrefStore_SetValues_Params = class {
  constructor() {
    /** @type { !Array<prefs.mojom.PrefUpdate> } */
    this.updates;
  }
};
prefs.mojom.PersistentPrefStore_RequestValue_Params = class {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !Array<string> } */
    this.subPrefPath;
  }
};
prefs.mojom.PersistentPrefStore_CommitPendingWrite_Params = class {
  constructor() {
  }
};
prefs.mojom.PersistentPrefStore_CommitPendingWrite_ResponseParams = class {
  constructor() {
  }
};
prefs.mojom.PersistentPrefStore_SchedulePendingLossyWrites_Params = class {
  constructor() {
  }
};
prefs.mojom.PersistentPrefStore_ClearMutableValues_Params = class {
  constructor() {
  }
};
prefs.mojom.PersistentPrefStore_OnStoreDeletionFromDisk_Params = class {
  constructor() {
  }
};
prefs.mojom.ResetOnLoadObserver_OnResetOnLoad_Params = class {
  constructor() {
  }
};

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let indexedDb = {};
/** @const */
indexedDb.mojom = {};
/** @implements {mojo.InterfacePtr} */
indexedDb.mojom.CallbacksPtr = class {

  /**
   * @param { !number } code
   * @param { !mojoBase.mojom.String16 } message
   */
   error(code, message) {}
  /**
   * @param { !Array<mojoBase.mojom.String16> } value
   */
   successStringList(value) {}
  /**
   * @param { !number } existingVersion
   */
   blocked(existingVersion) {}
  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } database
   * @param { !number } oldVersion
   * @param { !indexedDb.mojom.DataLoss } dataLoss
   * @param { !string } dataLossMessage
   * @param { !indexedDb.mojom.DatabaseMetadata } dbMetadata
   */
   upgradeNeeded(database, oldVersion, dataLoss, dataLossMessage, dbMetadata) {}
  /**
   * @param { mojo.AssociatedInterfacePtrInfo } database
   * @param { !indexedDb.mojom.DatabaseMetadata } metadata
   */
   successDatabase(database, metadata) {}
  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } cursor
   * @param { !indexedDb.mojom.Key } key
   * @param { !indexedDb.mojom.Key } primaryKey
   * @param { indexedDb.mojom.Value } value
   */
   successCursor(cursor, key, primaryKey, value) {}
  /**
   * @param { indexedDb.mojom.ReturnValue } value
   */
   successValue(value) {}
  /**
   * @param { !indexedDb.mojom.Key } key
   * @param { !indexedDb.mojom.Key } primaryKey
   * @param { indexedDb.mojom.Value } value
   */
   successCursorContinue(key, primaryKey, value) {}
  /**
   * @param { !Array<indexedDb.mojom.Key> } keys
   * @param { !Array<indexedDb.mojom.Key> } primaryKeys
   * @param { !Array<indexedDb.mojom.Value> } values
   */
   successCursorPrefetch(keys, primaryKeys, values) {}
  /**
   * @param { !Array<indexedDb.mojom.ReturnValue> } values
   */
   successArray(values) {}
  /**
   * @param { !indexedDb.mojom.Key } key
   */
   successKey(key) {}
  /**
   * @param { !number } value
   */
   successInteger(value) {}
  /**
   */
   success() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
indexedDb.mojom.Callbacks;
/** @implements {mojo.InterfacePtr} */
indexedDb.mojom.DatabaseCallbacksPtr = class {

  /**
   */
   forcedClose() {}
  /**
   * @param { !number } oldVersion
   * @param { !number } newVersion
   */
   versionChange(oldVersion, newVersion) {}
  /**
   * @param { !number } transactionId
   * @param { !number } code
   * @param { !mojoBase.mojom.String16 } message
   */
   abort(transactionId, code, message) {}
  /**
   * @param { !number } transactionId
   */
   complete(transactionId) {}
  /**
   * @param { !indexedDb.mojom.ObserverChanges } changes
   */
   changes(changes) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
indexedDb.mojom.DatabaseCallbacks;
/** @implements {mojo.InterfacePtr} */
indexedDb.mojom.CursorPtr = class {

  /**
   * @param { !number } count
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   advance(count, callbacks) {}
  /**
   * @param { !indexedDb.mojom.Key } key
   * @param { !indexedDb.mojom.Key } primaryKey
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   continue(key, primaryKey, callbacks) {}
  /**
   * @param { !number } count
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   prefetch(count, callbacks) {}
  /**
   * @param { !number } usedPrefetches
   * @param { !number } unusedPrefetches
   */
   prefetchReset(usedPrefetches, unusedPrefetches) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
indexedDb.mojom.Cursor;
/** @implements {mojo.InterfacePtr} */
indexedDb.mojom.DatabasePtr = class {

  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !mojoBase.mojom.String16 } name
   * @param { !indexedDb.mojom.KeyPath } keyPath
   * @param { !boolean } autoIncrement
   */
   createObjectStore(transactionId, objectStoreId, name, keyPath, autoIncrement) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   */
   deleteObjectStore(transactionId, objectStoreId) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !mojoBase.mojom.String16 } newName
   */
   renameObjectStore(transactionId, objectStoreId, newName) {}
  /**
   * @param { !number } transactionId
   * @param { !Array<number> } objectStoreIds
   * @param { !indexedDb.mojom.TransactionMode } mode
   */
   createTransaction(transactionId, objectStoreIds, mode) {}
  /**
   */
   close() {}
  /**
   */
   versionChangeIgnored() {}
  /**
   * @param { !number } transactionId
   * @param { !number } observerId
   * @param { !boolean } includeTransaction
   * @param { !boolean } noRecords
   * @param { !boolean } values
   * @param { !number } operationTypes
   */
   addObserver(transactionId, observerId, includeTransaction, noRecords, values, operationTypes) {}
  /**
   * @param { !Array<number> } observers
   */
   removeObservers(observers) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !indexedDb.mojom.KeyRange } keyRange
   * @param { !boolean } keyOnly
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   get(transactionId, objectStoreId, indexId, keyRange, keyOnly, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !indexedDb.mojom.KeyRange } keyRange
   * @param { !boolean } keyOnly
   * @param { !number } maxCount
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   getAll(transactionId, objectStoreId, indexId, keyRange, keyOnly, maxCount, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !indexedDb.mojom.Value } value
   * @param { !indexedDb.mojom.Key } key
   * @param { !indexedDb.mojom.PutMode } mode
   * @param { !Array<indexedDb.mojom.IndexKeys> } indexKeys
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   put(transactionId, objectStoreId, value, key, mode, indexKeys, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !indexedDb.mojom.Key } primaryKey
   * @param { !Array<indexedDb.mojom.IndexKeys> } indexKeys
   */
   setIndexKeys(transactionId, objectStoreId, primaryKey, indexKeys) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !Array<number> } indexIds
   */
   setIndexesReady(transactionId, objectStoreId, indexIds) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !indexedDb.mojom.KeyRange } keyRange
   * @param { !indexedDb.mojom.CursorDirection } direction
   * @param { !boolean } keyOnly
   * @param { !indexedDb.mojom.TaskType } taskType
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   openCursor(transactionId, objectStoreId, indexId, keyRange, direction, keyOnly, taskType, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !indexedDb.mojom.KeyRange } keyRange
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   count(transactionId, objectStoreId, indexId, keyRange, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !indexedDb.mojom.KeyRange } keyRange
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   deleteRange(transactionId, objectStoreId, keyRange, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   */
   clear(transactionId, objectStoreId, callbacks) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !mojoBase.mojom.String16 } name
   * @param { !indexedDb.mojom.KeyPath } keyPath
   * @param { !boolean } unique
   * @param { !boolean } multiEntry
   */
   createIndex(transactionId, objectStoreId, indexId, name, keyPath, unique, multiEntry) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   */
   deleteIndex(transactionId, objectStoreId, indexId) {}
  /**
   * @param { !number } transactionId
   * @param { !number } objectStoreId
   * @param { !number } indexId
   * @param { !mojoBase.mojom.String16 } newName
   */
   renameIndex(transactionId, objectStoreId, indexId, newName) {}
  /**
   * @param { !number } transactionId
   */
   abort(transactionId) {}
  /**
   * @param { !number } transactionId
   */
   commit(transactionId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
indexedDb.mojom.Database;
/** @implements {mojo.InterfacePtr} */
indexedDb.mojom.FactoryPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   * @param { !url.mojom.Origin } origin
   */
   getDatabaseNames(callbacks, origin) {}
  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   * @param { !mojo.AssociatedInterfacePtrInfo } databaseCallbacks
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } name
   * @param { !number } version
   * @param { !number } transactionId
   */
   open(callbacks, databaseCallbacks, origin, name, version, transactionId) {}
  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } callbacks
   * @param { !url.mojom.Origin } origin
   * @param { !mojoBase.mojom.String16 } name
   * @param { !boolean } forceClose
   */
   deleteDatabase(callbacks, origin, name, forceClose) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @return {Promise}
   */
   abortTransactionsAndCompactDatabase(origin) {}
  /**
   * @param { !url.mojom.Origin } origin
   * @return {Promise}
   */
   abortTransactionsForDatabase(origin) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
indexedDb.mojom.Factory;
indexedDb.mojom.Key = class {
  constructor() {
    /** @type { !Object } */
    this.data;
  }
};
indexedDb.mojom.KeyPath = class {
  constructor() {
    /** @type { Object } */
    this.data;
  }
};
indexedDb.mojom.KeyRange = class {
  constructor() {
    /** @type { !indexedDb.mojom.Key } */
    this.lower;
    /** @type { !indexedDb.mojom.Key } */
    this.upper;
    /** @type { !boolean } */
    this.lowerOpen;
    /** @type { !boolean } */
    this.upperOpen;
  }
};
indexedDb.mojom.IndexMetadata = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !indexedDb.mojom.KeyPath } */
    this.keyPath;
    /** @type { !boolean } */
    this.unique;
    /** @type { !boolean } */
    this.multiEntry;
  }
};
indexedDb.mojom.ObjectStoreMetadata = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !indexedDb.mojom.KeyPath } */
    this.keyPath;
    /** @type { !boolean } */
    this.autoIncrement;
    /** @type { !number } */
    this.maxIndexId;
    /** @type { !Array<indexedDb.mojom.IndexMetadata> } */
    this.indexes;
  }
};
indexedDb.mojom.DatabaseMetadata = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !number } */
    this.version;
    /** @type { !number } */
    this.maxObjectStoreId;
    /** @type { !Array<indexedDb.mojom.ObjectStoreMetadata> } */
    this.objectStores;
  }
};
indexedDb.mojom.IndexKeys = class {
  constructor() {
    /** @type { !number } */
    this.indexId;
    /** @type { !Array<indexedDb.mojom.Key> } */
    this.indexKeys;
  }
};
indexedDb.mojom.FileInfo = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.path;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !mojoBase.mojom.Time } */
    this.lastModified;
  }
};
indexedDb.mojom.BlobInfo = class {
  constructor() {
    /** @type { !blink.mojom.BlobPtr } */
    this.blob;
    /** @type { !string } */
    this.uuid;
    /** @type { !mojoBase.mojom.String16 } */
    this.mimeType;
    /** @type { !number } */
    this.size;
    /** @type { indexedDb.mojom.FileInfo } */
    this.file;
  }
};
indexedDb.mojom.Value = class {
  constructor() {
    /** @type { !string } */
    this.bits;
    /** @type { !Array<indexedDb.mojom.BlobInfo> } */
    this.blobOrFileInfo;
  }
};
indexedDb.mojom.ReturnValue = class {
  constructor() {
    /** @type { !indexedDb.mojom.Value } */
    this.value;
    /** @type { !indexedDb.mojom.Key } */
    this.primaryKey;
    /** @type { !indexedDb.mojom.KeyPath } */
    this.keyPath;
  }
};
indexedDb.mojom.Observation = class {
  constructor() {
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !indexedDb.mojom.OperationType } */
    this.type;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { indexedDb.mojom.Value } */
    this.value;
  }
};
indexedDb.mojom.ObserverTransaction = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !Array<number> } */
    this.scope;
  }
};
indexedDb.mojom.ObserverChanges = class {
  constructor() {
    /** @type { !Map<number, Array<number>> } */
    this.observationIndexMap;
    /** @type { !Map<number, indexedDb.mojom.ObserverTransaction> } */
    this.transactionMap;
    /** @type { !Array<indexedDb.mojom.Observation> } */
    this.observations;
  }
};
indexedDb.mojom.Callbacks_Error_Params = class {
  constructor() {
    /** @type { !number } */
    this.code;
    /** @type { !mojoBase.mojom.String16 } */
    this.message;
  }
};
indexedDb.mojom.Callbacks_SuccessStringList_Params = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.value;
  }
};
indexedDb.mojom.Callbacks_Blocked_Params = class {
  constructor() {
    /** @type { !number } */
    this.existingVersion;
  }
};
indexedDb.mojom.Callbacks_UpgradeNeeded_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.database;
    /** @type { !number } */
    this.oldVersion;
    /** @type { !indexedDb.mojom.DataLoss } */
    this.dataLoss;
    /** @type { !string } */
    this.dataLossMessage;
    /** @type { !indexedDb.mojom.DatabaseMetadata } */
    this.dbMetadata;
  }
};
indexedDb.mojom.Callbacks_SuccessDatabase_Params = class {
  constructor() {
    /** @type { mojo.AssociatedInterfacePtrInfo } */
    this.database;
    /** @type { !indexedDb.mojom.DatabaseMetadata } */
    this.metadata;
  }
};
indexedDb.mojom.Callbacks_SuccessCursor_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.cursor;
    /** @type { !indexedDb.mojom.Key } */
    this.key;
    /** @type { !indexedDb.mojom.Key } */
    this.primaryKey;
    /** @type { indexedDb.mojom.Value } */
    this.value;
  }
};
indexedDb.mojom.Callbacks_SuccessValue_Params = class {
  constructor() {
    /** @type { indexedDb.mojom.ReturnValue } */
    this.value;
  }
};
indexedDb.mojom.Callbacks_SuccessCursorContinue_Params = class {
  constructor() {
    /** @type { !indexedDb.mojom.Key } */
    this.key;
    /** @type { !indexedDb.mojom.Key } */
    this.primaryKey;
    /** @type { indexedDb.mojom.Value } */
    this.value;
  }
};
indexedDb.mojom.Callbacks_SuccessCursorPrefetch_Params = class {
  constructor() {
    /** @type { !Array<indexedDb.mojom.Key> } */
    this.keys;
    /** @type { !Array<indexedDb.mojom.Key> } */
    this.primaryKeys;
    /** @type { !Array<indexedDb.mojom.Value> } */
    this.values;
  }
};
indexedDb.mojom.Callbacks_SuccessArray_Params = class {
  constructor() {
    /** @type { !Array<indexedDb.mojom.ReturnValue> } */
    this.values;
  }
};
indexedDb.mojom.Callbacks_SuccessKey_Params = class {
  constructor() {
    /** @type { !indexedDb.mojom.Key } */
    this.key;
  }
};
indexedDb.mojom.Callbacks_SuccessInteger_Params = class {
  constructor() {
    /** @type { !number } */
    this.value;
  }
};
indexedDb.mojom.Callbacks_Success_Params = class {
  constructor() {
  }
};
indexedDb.mojom.DatabaseCallbacks_ForcedClose_Params = class {
  constructor() {
  }
};
indexedDb.mojom.DatabaseCallbacks_VersionChange_Params = class {
  constructor() {
    /** @type { !number } */
    this.oldVersion;
    /** @type { !number } */
    this.newVersion;
  }
};
indexedDb.mojom.DatabaseCallbacks_Abort_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.code;
    /** @type { !mojoBase.mojom.String16 } */
    this.message;
  }
};
indexedDb.mojom.DatabaseCallbacks_Complete_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
  }
};
indexedDb.mojom.DatabaseCallbacks_Changes_Params = class {
  constructor() {
    /** @type { !indexedDb.mojom.ObserverChanges } */
    this.changes;
  }
};
indexedDb.mojom.Cursor_Advance_Params = class {
  constructor() {
    /** @type { !number } */
    this.count;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Cursor_Continue_Params = class {
  constructor() {
    /** @type { !indexedDb.mojom.Key } */
    this.key;
    /** @type { !indexedDb.mojom.Key } */
    this.primaryKey;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Cursor_Prefetch_Params = class {
  constructor() {
    /** @type { !number } */
    this.count;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Cursor_PrefetchReset_Params = class {
  constructor() {
    /** @type { !number } */
    this.usedPrefetches;
    /** @type { !number } */
    this.unusedPrefetches;
  }
};
indexedDb.mojom.Database_CreateObjectStore_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !indexedDb.mojom.KeyPath } */
    this.keyPath;
    /** @type { !boolean } */
    this.autoIncrement;
  }
};
indexedDb.mojom.Database_DeleteObjectStore_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
  }
};
indexedDb.mojom.Database_RenameObjectStore_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !mojoBase.mojom.String16 } */
    this.newName;
  }
};
indexedDb.mojom.Database_CreateTransaction_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !Array<number> } */
    this.objectStoreIds;
    /** @type { !indexedDb.mojom.TransactionMode } */
    this.mode;
  }
};
indexedDb.mojom.Database_Close_Params = class {
  constructor() {
  }
};
indexedDb.mojom.Database_VersionChangeIgnored_Params = class {
  constructor() {
  }
};
indexedDb.mojom.Database_AddObserver_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.observerId;
    /** @type { !boolean } */
    this.includeTransaction;
    /** @type { !boolean } */
    this.noRecords;
    /** @type { !boolean } */
    this.values;
    /** @type { !number } */
    this.operationTypes;
  }
};
indexedDb.mojom.Database_RemoveObservers_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.observers;
  }
};
indexedDb.mojom.Database_Get_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { !boolean } */
    this.keyOnly;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_GetAll_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { !boolean } */
    this.keyOnly;
    /** @type { !number } */
    this.maxCount;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_Put_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !indexedDb.mojom.Value } */
    this.value;
    /** @type { !indexedDb.mojom.Key } */
    this.key;
    /** @type { !indexedDb.mojom.PutMode } */
    this.mode;
    /** @type { !Array<indexedDb.mojom.IndexKeys> } */
    this.indexKeys;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_SetIndexKeys_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !indexedDb.mojom.Key } */
    this.primaryKey;
    /** @type { !Array<indexedDb.mojom.IndexKeys> } */
    this.indexKeys;
  }
};
indexedDb.mojom.Database_SetIndexesReady_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !Array<number> } */
    this.indexIds;
  }
};
indexedDb.mojom.Database_OpenCursor_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { !indexedDb.mojom.CursorDirection } */
    this.direction;
    /** @type { !boolean } */
    this.keyOnly;
    /** @type { !indexedDb.mojom.TaskType } */
    this.taskType;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_Count_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_DeleteRange_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !indexedDb.mojom.KeyRange } */
    this.keyRange;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_Clear_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
  }
};
indexedDb.mojom.Database_CreateIndex_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !indexedDb.mojom.KeyPath } */
    this.keyPath;
    /** @type { !boolean } */
    this.unique;
    /** @type { !boolean } */
    this.multiEntry;
  }
};
indexedDb.mojom.Database_DeleteIndex_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
  }
};
indexedDb.mojom.Database_RenameIndex_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
    /** @type { !number } */
    this.objectStoreId;
    /** @type { !number } */
    this.indexId;
    /** @type { !mojoBase.mojom.String16 } */
    this.newName;
  }
};
indexedDb.mojom.Database_Abort_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
  }
};
indexedDb.mojom.Database_Commit_Params = class {
  constructor() {
    /** @type { !number } */
    this.transactionId;
  }
};
indexedDb.mojom.Factory_GetDatabaseNames_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
    /** @type { !url.mojom.Origin } */
    this.origin;
  }
};
indexedDb.mojom.Factory_Open_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.databaseCallbacks;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !number } */
    this.version;
    /** @type { !number } */
    this.transactionId;
  }
};
indexedDb.mojom.Factory_DeleteDatabase_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.callbacks;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !boolean } */
    this.forceClose;
  }
};
indexedDb.mojom.Factory_AbortTransactionsAndCompactDatabase_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
  }
};
indexedDb.mojom.Factory_AbortTransactionsAndCompactDatabase_ResponseParams = class {
  constructor() {
    /** @type { !indexedDb.mojom.Status } */
    this.status;
  }
};
indexedDb.mojom.Factory_AbortTransactionsForDatabase_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
  }
};
indexedDb.mojom.Factory_AbortTransactionsForDatabase_ResponseParams = class {
  constructor() {
    /** @type { !indexedDb.mojom.Status } */
    this.status;
  }
};

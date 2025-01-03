// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let leveldb = {};
/** @const */
leveldb.mojom = {};
/** @implements {mojo.InterfacePtr} */
leveldb.mojom.LevelDBServicePtr = class {

  /**
   * @param { !filesystem.mojom.DirectoryPtr } directory
   * @param { !string } dbname
   * @param { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } memoryDumpId
   * @param { !mojo.AssociatedInterfaceRequest } database
   * @return {Promise}
   */
   open(directory, dbname, memoryDumpId, database) {}
  /**
   * @param { !leveldb.mojom.OpenOptions } options
   * @param { !filesystem.mojom.DirectoryPtr } directory
   * @param { !string } dbname
   * @param { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } memoryDumpId
   * @param { !mojo.AssociatedInterfaceRequest } database
   * @return {Promise}
   */
   openWithOptions(options, directory, dbname, memoryDumpId, database) {}
  /**
   * @param { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } memoryDumpId
   * @param { !string } trackingName
   * @param { !mojo.AssociatedInterfaceRequest } database
   * @return {Promise}
   */
   openInMemory(memoryDumpId, trackingName, database) {}
  /**
   * @param { !filesystem.mojom.DirectoryPtr } directory
   * @param { !string } dbname
   * @return {Promise}
   */
   destroy(directory, dbname) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
leveldb.mojom.LevelDBService;
/** @implements {mojo.InterfacePtr} */
leveldb.mojom.LevelDBDatabasePtr = class {

  /**
   * @param { !Array<number> } key
   * @param { !Array<number> } value
   * @return {Promise}
   */
   put(key, value) {}
  /**
   * @param { !Array<number> } key
   * @return {Promise}
   */
   delete(key) {}
  /**
   * @param { !Array<number> } keyPrefix
   * @return {Promise}
   */
   deletePrefixed(keyPrefix) {}
  /**
   * @param { !Array<leveldb.mojom.BatchedOperation> } operations
   * @return {Promise}
   */
   write(operations) {}
  /**
   * @param { !Array<number> } key
   * @return {Promise}
   */
   get(key) {}
  /**
   * @param { !Array<number> } keyPrefix
   * @return {Promise}
   */
   getPrefixed(keyPrefix) {}
  /**
   * @param { !Array<number> } sourceKeyPrefix
   * @param { !Array<number> } destinationKeyPrefix
   * @return {Promise}
   */
   copyPrefixed(sourceKeyPrefix, destinationKeyPrefix) {}
  /**
   * @return {Promise}
   */
   getSnapshot() {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } snapshot
   */
   releaseSnapshot(snapshot) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } snapshot
   * @param { !Array<number> } key
   * @return {Promise}
   */
   getFromSnapshot(snapshot, key) {}
  /**
   * @return {Promise}
   */
   newIterator() {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } snapshot
   * @return {Promise}
   */
   newIteratorFromSnapshot(snapshot) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   */
   releaseIterator(iterator) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   * @return {Promise}
   */
   iteratorSeekToFirst(iterator) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   * @return {Promise}
   */
   iteratorSeekToLast(iterator) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   * @param { !Array<number> } target
   * @return {Promise}
   */
   iteratorSeek(iterator, target) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   * @return {Promise}
   */
   iteratorNext(iterator) {}
  /**
   * @param { !mojoBase.mojom.UnguessableToken } iterator
   * @return {Promise}
   */
   iteratorPrev(iterator) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
leveldb.mojom.LevelDBDatabase;
leveldb.mojom.BatchedOperation = class {
  constructor() {
    /** @type { !leveldb.mojom.BatchOperationType } */
    this.type;
    /** @type { !Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};
leveldb.mojom.KeyValue = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.value;
  }
};
leveldb.mojom.OpenOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.createIfMissing;
    /** @type { !boolean } */
    this.errorIfExists;
    /** @type { !boolean } */
    this.paranoidChecks;
    /** @type { !number } */
    this.maxOpenFiles;
    /** @type { !number } */
    this.writeBufferSize;
    /** @type { !leveldb.mojom.SharedReadCache } */
    this.sharedBlockReadCache;
  }
};
leveldb.mojom.LevelDBService_Open_Params = class {
  constructor() {
    /** @type { !filesystem.mojom.DirectoryPtr } */
    this.directory;
    /** @type { !string } */
    this.dbname;
    /** @type { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } */
    this.memoryDumpId;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.database;
  }
};
leveldb.mojom.LevelDBService_Open_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBService_OpenWithOptions_Params = class {
  constructor() {
    /** @type { !leveldb.mojom.OpenOptions } */
    this.options;
    /** @type { !filesystem.mojom.DirectoryPtr } */
    this.directory;
    /** @type { !string } */
    this.dbname;
    /** @type { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } */
    this.memoryDumpId;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.database;
  }
};
leveldb.mojom.LevelDBService_OpenWithOptions_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBService_OpenInMemory_Params = class {
  constructor() {
    /** @type { mojoBase.mojom.MemoryAllocatorDumpCrossProcessUid } */
    this.memoryDumpId;
    /** @type { !string } */
    this.trackingName;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.database;
  }
};
leveldb.mojom.LevelDBService_OpenInMemory_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBService_Destroy_Params = class {
  constructor() {
    /** @type { !filesystem.mojom.DirectoryPtr } */
    this.directory;
    /** @type { !string } */
    this.dbname;
  }
};
leveldb.mojom.LevelDBService_Destroy_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_Put_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_Put_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_Delete_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
  }
};
leveldb.mojom.LevelDBDatabase_Delete_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_DeletePrefixed_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.keyPrefix;
  }
};
leveldb.mojom.LevelDBDatabase_DeletePrefixed_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_Write_Params = class {
  constructor() {
    /** @type { !Array<leveldb.mojom.BatchedOperation> } */
    this.operations;
  }
};
leveldb.mojom.LevelDBDatabase_Write_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_Get_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
  }
};
leveldb.mojom.LevelDBDatabase_Get_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { !Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_GetPrefixed_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.keyPrefix;
  }
};
leveldb.mojom.LevelDBDatabase_GetPrefixed_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { !Array<leveldb.mojom.KeyValue> } */
    this.data;
  }
};
leveldb.mojom.LevelDBDatabase_CopyPrefixed_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.sourceKeyPrefix;
    /** @type { !Array<number> } */
    this.destinationKeyPrefix;
  }
};
leveldb.mojom.LevelDBDatabase_CopyPrefixed_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
  }
};
leveldb.mojom.LevelDBDatabase_GetSnapshot_Params = class {
  constructor() {
  }
};
leveldb.mojom.LevelDBDatabase_GetSnapshot_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.snapshot;
  }
};
leveldb.mojom.LevelDBDatabase_ReleaseSnapshot_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.snapshot;
  }
};
leveldb.mojom.LevelDBDatabase_GetFromSnapshot_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.snapshot;
    /** @type { !Array<number> } */
    this.key;
  }
};
leveldb.mojom.LevelDBDatabase_GetFromSnapshot_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { !Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_NewIterator_Params = class {
  constructor() {
  }
};
leveldb.mojom.LevelDBDatabase_NewIterator_ResponseParams = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_NewIteratorFromSnapshot_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.snapshot;
  }
};
leveldb.mojom.LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_ReleaseIterator_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeekToFirst_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeekToFirst_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeekToLast_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeekToLast_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeek_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
    /** @type { !Array<number> } */
    this.target;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorSeek_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorNext_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorNext_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorPrev_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.iterator;
  }
};
leveldb.mojom.LevelDBDatabase_IteratorPrev_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.value;
  }
};

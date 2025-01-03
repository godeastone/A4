// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the IndexedDB DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalIndexedDB = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalIndexedDB.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the IndexedDB DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.IndexedDB = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalIndexedDB} */
chromium.DevTools.IndexedDB.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.IndexedDB.prototype.removeEventListener = function(id) {};

/**
 * Key type.
 *
 * @enum {string}
 */
chromium.DevTools.IndexedDB.KeyType = {
    NUMBER: "number",
    STRING: "string",
    DATE: "date",
    ARRAY: "array"
};

/**
 * Key path type.
 *
 * @enum {string}
 */
chromium.DevTools.IndexedDB.KeyPathType = {
    NONE: "null",
    STRING: "string",
    ARRAY: "array"
};


/**
 * Database with an array of object stores.
 *
 * name: Database name.
 * version: Database version.
 * objectStores: Object stores in this database.
 *
 * @typedef {{
 *   name: string,
 *   version: number,
 *   objectStores: !Array.<!chromium.DevTools.IndexedDB.ObjectStore>
 * }}
 */
chromium.DevTools.IndexedDB.DatabaseWithObjectStores;

/**
 * Object store.
 *
 * name: Object store name.
 * keyPath: Object store key path.
 * autoIncrement: If true, object store has auto increment flag set.
 * indexes: Indexes in this object store.
 *
 * @typedef {{
 *   name: string,
 *   keyPath: !chromium.DevTools.IndexedDB.KeyPath,
 *   autoIncrement: boolean,
 *   indexes: !Array.<!chromium.DevTools.IndexedDB.ObjectStoreIndex>
 * }}
 */
chromium.DevTools.IndexedDB.ObjectStore;

/**
 * Object store index.
 *
 * name: Index name.
 * keyPath: Index key path.
 * unique: If true, index is unique.
 * multiEntry: If true, index allows multiple entries for a key.
 *
 * @typedef {{
 *   name: string,
 *   keyPath: !chromium.DevTools.IndexedDB.KeyPath,
 *   unique: boolean,
 *   multiEntry: boolean
 * }}
 */
chromium.DevTools.IndexedDB.ObjectStoreIndex;

/**
 * Key.
 *
 * type: Key type.
 * number: Number value.
 * string: String value.
 * date: Date value.
 * array: Array value.
 *
 * @typedef {{
 *   type: !chromium.DevTools.IndexedDB.KeyType,
 *   number: (number|undefined),
 *   string: (string|undefined),
 *   date: (number|undefined),
 *   array: (!Array.<!chromium.DevTools.IndexedDB.Key>|undefined)
 * }}
 */
chromium.DevTools.IndexedDB.Key;

/**
 * Key range.
 *
 * lower: Lower bound.
 * upper: Upper bound.
 * lowerOpen: If true lower bound is open.
 * upperOpen: If true upper bound is open.
 *
 * @typedef {{
 *   lower: (!chromium.DevTools.IndexedDB.Key|undefined),
 *   upper: (!chromium.DevTools.IndexedDB.Key|undefined),
 *   lowerOpen: boolean,
 *   upperOpen: boolean
 * }}
 */
chromium.DevTools.IndexedDB.KeyRange;

/**
 * Data entry.
 *
 * key: Key object.
 * primaryKey: Primary key object.
 * value: Value object.
 *
 * @typedef {{
 *   key: !chromium.DevTools.Runtime.RemoteObject,
 *   primaryKey: !chromium.DevTools.Runtime.RemoteObject,
 *   value: !chromium.DevTools.Runtime.RemoteObject
 * }}
 */
chromium.DevTools.IndexedDB.DataEntry;

/**
 * Key path.
 *
 * type: Key path type.
 * string: String value.
 * array: Array value.
 *
 * @typedef {{
 *   type: !chromium.DevTools.IndexedDB.KeyPathType,
 *   string: (string|undefined),
 *   array: (!Array.<string>|undefined)
 * }}
 */
chromium.DevTools.IndexedDB.KeyPath;

/**
 * Parameters for the ClearObjectStore command.
 *
 * securityOrigin: Security origin.
 * databaseName: Database name.
 * objectStoreName: Object store name.
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string,
 *   objectStoreName: string
 * }}
 */
chromium.DevTools.IndexedDB.ClearObjectStoreParams;

/**
 * Result for the ClearObjectStore command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.ClearObjectStoreResult;

/**
 * Parameters for the DeleteDatabase command.
 *
 * securityOrigin: Security origin.
 * databaseName: Database name.
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string
 * }}
 */
chromium.DevTools.IndexedDB.DeleteDatabaseParams;

/**
 * Result for the DeleteDatabase command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.DeleteDatabaseResult;

/**
 * Parameters for the DeleteObjectStoreEntries command.
 *
 * keyRange: Range of entry keys to delete
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string,
 *   objectStoreName: string,
 *   keyRange: !chromium.DevTools.IndexedDB.KeyRange
 * }}
 */
chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesParams;

/**
 * Result for the DeleteObjectStoreEntries command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IndexedDB.EnableResult;

/**
 * Parameters for the RequestData command.
 *
 * securityOrigin: Security origin.
 * databaseName: Database name.
 * objectStoreName: Object store name.
 * indexName: Index name, empty string for object store data requests.
 * skipCount: Number of records to skip.
 * pageSize: Number of records to fetch.
 * keyRange: Key range.
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string,
 *   objectStoreName: string,
 *   indexName: string,
 *   skipCount: number,
 *   pageSize: number,
 *   keyRange: (!chromium.DevTools.IndexedDB.KeyRange|undefined)
 * }}
 */
chromium.DevTools.IndexedDB.RequestDataParams;

/**
 * Result for the RequestData command.
 *
 * objectStoreDataEntries: Array of object store data entries.
 * hasMore: If true, there are more entries to fetch in the given range.
 *
 * @typedef {{
 *   objectStoreDataEntries: !Array.<!chromium.DevTools.IndexedDB.DataEntry>,
 *   hasMore: boolean
 * }}
 */
chromium.DevTools.IndexedDB.RequestDataResult;

/**
 * Parameters for the RequestDatabase command.
 *
 * securityOrigin: Security origin.
 * databaseName: Database name.
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string
 * }}
 */
chromium.DevTools.IndexedDB.RequestDatabaseParams;

/**
 * Result for the RequestDatabase command.
 *
 * databaseWithObjectStores: Database with an array of object stores.
 *
 * @typedef {{
 *   databaseWithObjectStores: !chromium.DevTools.IndexedDB.DatabaseWithObjectStores
 * }}
 */
chromium.DevTools.IndexedDB.RequestDatabaseResult;

/**
 * Parameters for the RequestDatabaseNames command.
 *
 * securityOrigin: Security origin.
 *
 * @typedef {{
 *   securityOrigin: string
 * }}
 */
chromium.DevTools.IndexedDB.RequestDatabaseNamesParams;

/**
 * Result for the RequestDatabaseNames command.
 *
 * databaseNames: Database names for origin.
 *
 * @typedef {{
 *   databaseNames: !Array.<string>
 * }}
 */
chromium.DevTools.IndexedDB.RequestDatabaseNamesResult;



/**
  * Clears all entries from an object store.
  *
  * @param {chromium.DevTools.IndexedDB.ClearObjectStoreParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.ClearObjectStoreResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.clearObjectStore = function(params) {};

/**
  * Deletes a database.
  *
  * @param {chromium.DevTools.IndexedDB.DeleteDatabaseParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.DeleteDatabaseResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.deleteDatabase = function(params) {};

/**
  * Delete a range of entries from an object store
  *
  * @param {chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.deleteObjectStoreEntries = function(params) {};

/**
  * Disables events from backend.
  *
  * @return {!Promise<chromium.DevTools.IndexedDB.DisableResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.disable = function() {};

/**
  * Enables events from backend.
  *
  * @return {!Promise<chromium.DevTools.IndexedDB.EnableResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.enable = function() {};

/**
  * Requests data from object store or index.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDataParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDataResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.requestData = function(params) {};

/**
  * Requests database with given name in given frame.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDatabaseParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDatabaseResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.requestDatabase = function(params) {};

/**
  * Requests database names for given security origin.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDatabaseNamesParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDatabaseNamesResult>}
  */
chromium.DevTools.ExperimentalIndexedDB.prototype.requestDatabaseNames = function(params) {};




/**
  * Clears all entries from an object store.
  *
  * @param {chromium.DevTools.IndexedDB.ClearObjectStoreParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.ClearObjectStoreResult>}
  */
chromium.DevTools.IndexedDB.prototype.clearObjectStore = function(params) {};

/**
  * Deletes a database.
  *
  * @param {chromium.DevTools.IndexedDB.DeleteDatabaseParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.DeleteDatabaseResult>}
  */
chromium.DevTools.IndexedDB.prototype.deleteDatabase = function(params) {};

/**
  * Delete a range of entries from an object store
  *
  * @param {chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.DeleteObjectStoreEntriesResult>}
  */
chromium.DevTools.IndexedDB.prototype.deleteObjectStoreEntries = function(params) {};

/**
  * Disables events from backend.
  *
  * @return {!Promise<chromium.DevTools.IndexedDB.DisableResult>}
  */
chromium.DevTools.IndexedDB.prototype.disable = function() {};

/**
  * Enables events from backend.
  *
  * @return {!Promise<chromium.DevTools.IndexedDB.EnableResult>}
  */
chromium.DevTools.IndexedDB.prototype.enable = function() {};

/**
  * Requests data from object store or index.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDataParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDataResult>}
  */
chromium.DevTools.IndexedDB.prototype.requestData = function(params) {};

/**
  * Requests database with given name in given frame.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDatabaseParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDatabaseResult>}
  */
chromium.DevTools.IndexedDB.prototype.requestDatabase = function(params) {};

/**
  * Requests database names for given security origin.
  *
  * @param {chromium.DevTools.IndexedDB.RequestDatabaseNamesParams} params
  * @return {!Promise<chromium.DevTools.IndexedDB.RequestDatabaseNamesResult>}
  */
chromium.DevTools.IndexedDB.prototype.requestDatabaseNames = function(params) {};


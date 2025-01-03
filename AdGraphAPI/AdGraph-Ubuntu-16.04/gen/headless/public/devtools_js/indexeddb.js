// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the IndexedDB Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalIndexedDB');
goog.provide('chromium.DevTools.IndexedDB');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the IndexedDB DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalIndexedDB = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalIndexedDB = chromium.DevTools.ExperimentalIndexedDB;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalIndexedDB.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the IndexedDB DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.IndexedDB = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalIndexedDB} */
  this.experimental = new ExperimentalIndexedDB(connection);
}

const IndexedDB = chromium.DevTools.IndexedDB;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
IndexedDB.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Key type.
 *
 * @enum {string}
 */
IndexedDB.KeyType = {
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
IndexedDB.KeyPathType = {
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
 *   objectStores: !Array.<!IndexedDB.ObjectStore>
 * }}
 */
IndexedDB.DatabaseWithObjectStores;

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
 *   keyPath: !IndexedDB.KeyPath,
 *   autoIncrement: boolean,
 *   indexes: !Array.<!IndexedDB.ObjectStoreIndex>
 * }}
 */
IndexedDB.ObjectStore;

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
 *   keyPath: !IndexedDB.KeyPath,
 *   unique: boolean,
 *   multiEntry: boolean
 * }}
 */
IndexedDB.ObjectStoreIndex;

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
 *   type: !IndexedDB.KeyType,
 *   number: (number|undefined),
 *   string: (string|undefined),
 *   date: (number|undefined),
 *   array: (!Array.<!IndexedDB.Key>|undefined)
 * }}
 */
IndexedDB.Key;

/**
 * Key range.
 *
 * lower: Lower bound.
 * upper: Upper bound.
 * lowerOpen: If true lower bound is open.
 * upperOpen: If true upper bound is open.
 *
 * @typedef {{
 *   lower: (!IndexedDB.Key|undefined),
 *   upper: (!IndexedDB.Key|undefined),
 *   lowerOpen: boolean,
 *   upperOpen: boolean
 * }}
 */
IndexedDB.KeyRange;

/**
 * Data entry.
 *
 * key: Key object.
 * primaryKey: Primary key object.
 * value: Value object.
 *
 * @typedef {{
 *   key: !Runtime.RemoteObject,
 *   primaryKey: !Runtime.RemoteObject,
 *   value: !Runtime.RemoteObject
 * }}
 */
IndexedDB.DataEntry;

/**
 * Key path.
 *
 * type: Key path type.
 * string: String value.
 * array: Array value.
 *
 * @typedef {{
 *   type: !IndexedDB.KeyPathType,
 *   string: (string|undefined),
 *   array: (!Array.<string>|undefined)
 * }}
 */
IndexedDB.KeyPath;

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
IndexedDB.ClearObjectStoreParams;

/**
 * Result for the ClearObjectStore command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.ClearObjectStoreResult;

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
IndexedDB.DeleteDatabaseParams;

/**
 * Result for the DeleteDatabase command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.DeleteDatabaseResult;

/**
 * Parameters for the DeleteObjectStoreEntries command.
 *
 * keyRange: Range of entry keys to delete
 *
 * @typedef {{
 *   securityOrigin: string,
 *   databaseName: string,
 *   objectStoreName: string,
 *   keyRange: !IndexedDB.KeyRange
 * }}
 */
IndexedDB.DeleteObjectStoreEntriesParams;

/**
 * Result for the DeleteObjectStoreEntries command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.DeleteObjectStoreEntriesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
IndexedDB.EnableResult;

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
 *   keyRange: (!IndexedDB.KeyRange|undefined)
 * }}
 */
IndexedDB.RequestDataParams;

/**
 * Result for the RequestData command.
 *
 * objectStoreDataEntries: Array of object store data entries.
 * hasMore: If true, there are more entries to fetch in the given range.
 *
 * @typedef {{
 *   objectStoreDataEntries: !Array.<!IndexedDB.DataEntry>,
 *   hasMore: boolean
 * }}
 */
IndexedDB.RequestDataResult;

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
IndexedDB.RequestDatabaseParams;

/**
 * Result for the RequestDatabase command.
 *
 * databaseWithObjectStores: Database with an array of object stores.
 *
 * @typedef {{
 *   databaseWithObjectStores: !IndexedDB.DatabaseWithObjectStores
 * }}
 */
IndexedDB.RequestDatabaseResult;

/**
 * Parameters for the RequestDatabaseNames command.
 *
 * securityOrigin: Security origin.
 *
 * @typedef {{
 *   securityOrigin: string
 * }}
 */
IndexedDB.RequestDatabaseNamesParams;

/**
 * Result for the RequestDatabaseNames command.
 *
 * databaseNames: Database names for origin.
 *
 * @typedef {{
 *   databaseNames: !Array.<string>
 * }}
 */
IndexedDB.RequestDatabaseNamesResult;



/**
  * Clears all entries from an object store.
  *
  * @param {IndexedDB.ClearObjectStoreParams} params
  * @return {!Promise<IndexedDB.ClearObjectStoreResult>}
  */
ExperimentalIndexedDB.prototype.clearObjectStore = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.clearObjectStore', params);
};

/**
  * Deletes a database.
  *
  * @param {IndexedDB.DeleteDatabaseParams} params
  * @return {!Promise<IndexedDB.DeleteDatabaseResult>}
  */
ExperimentalIndexedDB.prototype.deleteDatabase = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.deleteDatabase', params);
};

/**
  * Delete a range of entries from an object store
  *
  * @param {IndexedDB.DeleteObjectStoreEntriesParams} params
  * @return {!Promise<IndexedDB.DeleteObjectStoreEntriesResult>}
  */
ExperimentalIndexedDB.prototype.deleteObjectStoreEntries = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.deleteObjectStoreEntries', params);
};

/**
  * Disables events from backend.
  *
  * @return {!Promise<IndexedDB.DisableResult>}
  */
ExperimentalIndexedDB.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('IndexedDB.disable', {});
};

/**
  * Enables events from backend.
  *
  * @return {!Promise<IndexedDB.EnableResult>}
  */
ExperimentalIndexedDB.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('IndexedDB.enable', {});
};

/**
  * Requests data from object store or index.
  *
  * @param {IndexedDB.RequestDataParams} params
  * @return {!Promise<IndexedDB.RequestDataResult>}
  */
ExperimentalIndexedDB.prototype.requestData = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestData', params);
};

/**
  * Requests database with given name in given frame.
  *
  * @param {IndexedDB.RequestDatabaseParams} params
  * @return {!Promise<IndexedDB.RequestDatabaseResult>}
  */
ExperimentalIndexedDB.prototype.requestDatabase = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestDatabase', params);
};

/**
  * Requests database names for given security origin.
  *
  * @param {IndexedDB.RequestDatabaseNamesParams} params
  * @return {!Promise<IndexedDB.RequestDatabaseNamesResult>}
  */
ExperimentalIndexedDB.prototype.requestDatabaseNames = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestDatabaseNames', params);
};




/**
  * Clears all entries from an object store.
  *
  * @param {IndexedDB.ClearObjectStoreParams} params
  * @return {!Promise<IndexedDB.ClearObjectStoreResult>}
  */
IndexedDB.prototype.clearObjectStore = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.clearObjectStore', params);
};

/**
  * Deletes a database.
  *
  * @param {IndexedDB.DeleteDatabaseParams} params
  * @return {!Promise<IndexedDB.DeleteDatabaseResult>}
  */
IndexedDB.prototype.deleteDatabase = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.deleteDatabase', params);
};

/**
  * Delete a range of entries from an object store
  *
  * @param {IndexedDB.DeleteObjectStoreEntriesParams} params
  * @return {!Promise<IndexedDB.DeleteObjectStoreEntriesResult>}
  */
IndexedDB.prototype.deleteObjectStoreEntries = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.deleteObjectStoreEntries', params);
};

/**
  * Disables events from backend.
  *
  * @return {!Promise<IndexedDB.DisableResult>}
  */
IndexedDB.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('IndexedDB.disable', {});
};

/**
  * Enables events from backend.
  *
  * @return {!Promise<IndexedDB.EnableResult>}
  */
IndexedDB.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('IndexedDB.enable', {});
};

/**
  * Requests data from object store or index.
  *
  * @param {IndexedDB.RequestDataParams} params
  * @return {!Promise<IndexedDB.RequestDataResult>}
  */
IndexedDB.prototype.requestData = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestData', params);
};

/**
  * Requests database with given name in given frame.
  *
  * @param {IndexedDB.RequestDatabaseParams} params
  * @return {!Promise<IndexedDB.RequestDatabaseResult>}
  */
IndexedDB.prototype.requestDatabase = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestDatabase', params);
};

/**
  * Requests database names for given security origin.
  *
  * @param {IndexedDB.RequestDatabaseNamesParams} params
  * @return {!Promise<IndexedDB.RequestDatabaseNamesResult>}
  */
IndexedDB.prototype.requestDatabaseNames = function(params) {
  return this.connection_.sendDevToolsMessage('IndexedDB.requestDatabaseNames', params);
};


});  // goog.scope


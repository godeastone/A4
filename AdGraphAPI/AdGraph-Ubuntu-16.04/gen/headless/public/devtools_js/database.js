// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Database Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDatabase');
goog.provide('chromium.DevTools.Database');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Database DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDatabase = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDatabase = chromium.DevTools.ExperimentalDatabase;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDatabase.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Database DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Database = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDatabase} */
  this.experimental = new ExperimentalDatabase(connection);
}

const Database = chromium.DevTools.Database;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Database.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Database object.
 *
 * id: Database ID.
 * domain: Database domain.
 * name: Database name.
 * version: Database version.
 *
 * @typedef {{
 *   id: string,
 *   domain: string,
 *   name: string,
 *   version: string
 * }}
 */
Database.Database;

/**
 * Database error.
 *
 * message: Error message.
 * code: Error code.
 *
 * @typedef {{
 *   message: string,
 *   code: number
 * }}
 */
Database.Error;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Database.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Database.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Database.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Database.EnableResult;

/**
 * Parameters for the ExecuteSQL command.
 *
 *
 * @typedef {{
 *   databaseId: string,
 *   query: string
 * }}
 */
Database.ExecuteSQLParams;

/**
 * Result for the ExecuteSQL command.
 *
 *
 * @typedef {{
 *   columnNames: (!Array.<string>|undefined),
 *   values: (!Array.<*>|undefined),
 *   sqlError: (!Database.Error|undefined)
 * }}
 */
Database.ExecuteSQLResult;

/**
 * Parameters for the GetDatabaseTableNames command.
 *
 *
 * @typedef {{
 *   databaseId: string
 * }}
 */
Database.GetDatabaseTableNamesParams;

/**
 * Result for the GetDatabaseTableNames command.
 *
 *
 * @typedef {{
 *   tableNames: !Array.<string>
 * }}
 */
Database.GetDatabaseTableNamesResult;

/**
 * Parameters for the AddDatabase event.
 *
 *
 * @typedef {{
 *   database: !Database.Database
 * }}
 */
Database.AddDatabaseParams;



/**
  * Disables database tracking, prevents database events from being sent to the client.
  *
  * @return {!Promise<Database.DisableResult>}
  */
ExperimentalDatabase.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Database.disable', {});
};

/**
  * Enables database tracking, database events will now be delivered to the client.
  *
  * @return {!Promise<Database.EnableResult>}
  */
ExperimentalDatabase.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Database.enable', {});
};

/**
  * @param {Database.ExecuteSQLParams} params
  * @return {!Promise<Database.ExecuteSQLResult>}
  */
ExperimentalDatabase.prototype.executeSQL = function(params) {
  return this.connection_.sendDevToolsMessage('Database.executeSQL', params);
};

/**
  * @param {Database.GetDatabaseTableNamesParams} params
  * @return {!Promise<Database.GetDatabaseTableNamesResult>}
  */
ExperimentalDatabase.prototype.getDatabaseTableNames = function(params) {
  return this.connection_.sendDevToolsMessage('Database.getDatabaseTableNames', params);
};


/**
  * @param {!function(!Database.AddDatabaseParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDatabase.prototype.onAddDatabase = function(listener) {
  return this.connection_.addEventListener(
      'Database.addDatabase', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disables database tracking, prevents database events from being sent to the client.
  *
  * @return {!Promise<Database.DisableResult>}
  */
Database.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Database.disable', {});
};

/**
  * Enables database tracking, database events will now be delivered to the client.
  *
  * @return {!Promise<Database.EnableResult>}
  */
Database.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Database.enable', {});
};

/**
  * @param {Database.ExecuteSQLParams} params
  * @return {!Promise<Database.ExecuteSQLResult>}
  */
Database.prototype.executeSQL = function(params) {
  return this.connection_.sendDevToolsMessage('Database.executeSQL', params);
};

/**
  * @param {Database.GetDatabaseTableNamesParams} params
  * @return {!Promise<Database.GetDatabaseTableNamesResult>}
  */
Database.prototype.getDatabaseTableNames = function(params) {
  return this.connection_.sendDevToolsMessage('Database.getDatabaseTableNames', params);
};


/**
  * @param {!function(!Database.AddDatabaseParams)} listener
  * @return {number} The id of this event listener.
  */
Database.prototype.onAddDatabase = function(listener) {
  return this.connection_.addEventListener(
      'Database.addDatabase', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope


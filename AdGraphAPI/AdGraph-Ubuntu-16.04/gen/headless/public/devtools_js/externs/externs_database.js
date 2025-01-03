// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Database DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDatabase = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDatabase.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Database DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Database = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDatabase} */
chromium.DevTools.Database.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Database.prototype.removeEventListener = function(id) {};


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
chromium.DevTools.Database.Database;

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
chromium.DevTools.Database.Error;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Database.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Database.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Database.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Database.EnableResult;

/**
 * Parameters for the ExecuteSQL command.
 *
 *
 * @typedef {{
 *   databaseId: string,
 *   query: string
 * }}
 */
chromium.DevTools.Database.ExecuteSQLParams;

/**
 * Result for the ExecuteSQL command.
 *
 *
 * @typedef {{
 *   columnNames: (!Array.<string>|undefined),
 *   values: (!Array.<*>|undefined),
 *   sqlError: (!chromium.DevTools.Database.Error|undefined)
 * }}
 */
chromium.DevTools.Database.ExecuteSQLResult;

/**
 * Parameters for the GetDatabaseTableNames command.
 *
 *
 * @typedef {{
 *   databaseId: string
 * }}
 */
chromium.DevTools.Database.GetDatabaseTableNamesParams;

/**
 * Result for the GetDatabaseTableNames command.
 *
 *
 * @typedef {{
 *   tableNames: !Array.<string>
 * }}
 */
chromium.DevTools.Database.GetDatabaseTableNamesResult;

/**
 * Parameters for the AddDatabase event.
 *
 *
 * @typedef {{
 *   database: !chromium.DevTools.Database.Database
 * }}
 */
chromium.DevTools.Database.AddDatabaseParams;



/**
  * Disables database tracking, prevents database events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.Database.DisableResult>}
  */
chromium.DevTools.ExperimentalDatabase.prototype.disable = function() {};

/**
  * Enables database tracking, database events will now be delivered to the client.
  *
  * @return {!Promise<chromium.DevTools.Database.EnableResult>}
  */
chromium.DevTools.ExperimentalDatabase.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.Database.ExecuteSQLParams} params
  * @return {!Promise<chromium.DevTools.Database.ExecuteSQLResult>}
  */
chromium.DevTools.ExperimentalDatabase.prototype.executeSQL = function(params) {};

/**
  * @param {chromium.DevTools.Database.GetDatabaseTableNamesParams} params
  * @return {!Promise<chromium.DevTools.Database.GetDatabaseTableNamesResult>}
  */
chromium.DevTools.ExperimentalDatabase.prototype.getDatabaseTableNames = function(params) {};


/**
  * @param {!function(!chromium.DevTools.Database.AddDatabaseParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDatabase.prototype.onAddDatabase = function(listener) {};



/**
  * Disables database tracking, prevents database events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.Database.DisableResult>}
  */
chromium.DevTools.Database.prototype.disable = function() {};

/**
  * Enables database tracking, database events will now be delivered to the client.
  *
  * @return {!Promise<chromium.DevTools.Database.EnableResult>}
  */
chromium.DevTools.Database.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.Database.ExecuteSQLParams} params
  * @return {!Promise<chromium.DevTools.Database.ExecuteSQLResult>}
  */
chromium.DevTools.Database.prototype.executeSQL = function(params) {};

/**
  * @param {chromium.DevTools.Database.GetDatabaseTableNamesParams} params
  * @return {!Promise<chromium.DevTools.Database.GetDatabaseTableNamesResult>}
  */
chromium.DevTools.Database.prototype.getDatabaseTableNames = function(params) {};


/**
  * @param {!function(!chromium.DevTools.Database.AddDatabaseParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Database.prototype.onAddDatabase = function(listener) {};

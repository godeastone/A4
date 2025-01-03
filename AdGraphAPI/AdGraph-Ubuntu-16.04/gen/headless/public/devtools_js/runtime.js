// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Runtime Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalRuntime');
goog.provide('chromium.DevTools.Runtime');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Runtime DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalRuntime = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalRuntime = chromium.DevTools.ExperimentalRuntime;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalRuntime.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Runtime DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Runtime = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalRuntime} */
  this.experimental = new ExperimentalRuntime(connection);
}

const Runtime = chromium.DevTools.Runtime;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Runtime.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Object type.
 *
 * @enum {string}
 */
Runtime.RemoteObjectType = {
    OBJECT: "object",
    FUNCTION: "function",
    UNDEFINED: "undefined",
    STRING: "string",
    NUMBER: "number",
    BOOLEAN: "boolean",
    SYMBOL: "symbol",
    BIGINT: "bigint"
};

/**
 * Object subtype hint. Specified for `object` type values only.
 *
 * @enum {string}
 */
Runtime.RemoteObjectSubtype = {
    ARRAY: "array",
    NONE: "null",
    NODE: "node",
    REGEXP: "regexp",
    DATE: "date",
    MAP: "map",
    SET: "set",
    WEAKMAP: "weakmap",
    WEAKSET: "weakset",
    ITERATOR: "iterator",
    GENERATOR: "generator",
    ERR: "error",
    PROXY: "proxy",
    PROMISE: "promise",
    TYPEDARRAY: "typedarray"
};

/**
 * Object type.
 *
 * @enum {string}
 */
Runtime.ObjectPreviewType = {
    OBJECT: "object",
    FUNCTION: "function",
    UNDEFINED: "undefined",
    STRING: "string",
    NUMBER: "number",
    BOOLEAN: "boolean",
    SYMBOL: "symbol",
    BIGINT: "bigint"
};

/**
 * Object subtype hint. Specified for `object` type values only.
 *
 * @enum {string}
 */
Runtime.ObjectPreviewSubtype = {
    ARRAY: "array",
    NONE: "null",
    NODE: "node",
    REGEXP: "regexp",
    DATE: "date",
    MAP: "map",
    SET: "set",
    WEAKMAP: "weakmap",
    WEAKSET: "weakset",
    ITERATOR: "iterator",
    GENERATOR: "generator",
    ERR: "error"
};

/**
 * Object type. Accessor means that the property itself is an accessor property.
 *
 * @enum {string}
 */
Runtime.PropertyPreviewType = {
    OBJECT: "object",
    FUNCTION: "function",
    UNDEFINED: "undefined",
    STRING: "string",
    NUMBER: "number",
    BOOLEAN: "boolean",
    SYMBOL: "symbol",
    ACCESSOR: "accessor",
    BIGINT: "bigint"
};

/**
 * Object subtype hint. Specified for `object` type values only.
 *
 * @enum {string}
 */
Runtime.PropertyPreviewSubtype = {
    ARRAY: "array",
    NONE: "null",
    NODE: "node",
    REGEXP: "regexp",
    DATE: "date",
    MAP: "map",
    SET: "set",
    WEAKMAP: "weakmap",
    WEAKSET: "weakset",
    ITERATOR: "iterator",
    GENERATOR: "generator",
    ERR: "error"
};

/**
 * Type of the call.
 *
 * @enum {string}
 */
Runtime.ConsoleAPICalledType = {
    LOG: "log",
    DEBUG: "debug",
    INFO: "info",
    ERR: "error",
    WARNING: "warning",
    DIR: "dir",
    DIRXML: "dirxml",
    TABLE: "table",
    TRACE: "trace",
    CLEAR: "clear",
    START_GROUP: "startGroup",
    START_GROUP_COLLAPSED: "startGroupCollapsed",
    END_GROUP: "endGroup",
    ASSERT: "assert",
    PROFILE: "profile",
    PROFILE_END: "profileEnd",
    COUNT: "count",
    TIME_END: "timeEnd"
};


/**
 * Mirror object referencing original JavaScript object.
 *
 * type: Object type.
 * subtype: Object subtype hint. Specified for `object` type values only.
 * className: Object class (constructor) name. Specified for `object` type values only.
 * value: Remote object value in case of primitive values or JSON values (if it was requested).
 * unserializableValue: Primitive value which can not be JSON-stringified does not have `value`, but gets this
 *   property.
 * description: String representation of the object.
 * objectId: Unique object identifier (for non-primitive values).
 * preview: Preview containing abbreviated property values. Specified for `object` type values only.
 *
 * @typedef {{
 *   type: !Runtime.RemoteObjectType,
 *   subtype: (!Runtime.RemoteObjectSubtype|undefined),
 *   className: (string|undefined),
 *   value: (*|undefined),
 *   unserializableValue: (string|undefined),
 *   description: (string|undefined),
 *   objectId: (string|undefined),
 *   preview: (!Runtime.ObjectPreview|undefined),
 *   customPreview: (!Runtime.CustomPreview|undefined)
 * }}
 */
Runtime.RemoteObject;

/**
 *
 * @typedef {{
 *   header: string,
 *   hasBody: boolean,
 *   formatterObjectId: string,
 *   bindRemoteObjectFunctionId: string,
 *   configObjectId: (string|undefined)
 * }}
 */
Runtime.CustomPreview;

/**
 * Object containing abbreviated remote object value.
 *
 * type: Object type.
 * subtype: Object subtype hint. Specified for `object` type values only.
 * description: String representation of the object.
 * overflow: True iff some of the properties or entries of the original object did not fit.
 * properties: List of the properties.
 * entries: List of the entries. Specified for `map` and `set` subtype values only.
 *
 * @typedef {{
 *   type: !Runtime.ObjectPreviewType,
 *   subtype: (!Runtime.ObjectPreviewSubtype|undefined),
 *   description: (string|undefined),
 *   overflow: boolean,
 *   properties: !Array.<!Runtime.PropertyPreview>,
 *   entries: (!Array.<!Runtime.EntryPreview>|undefined)
 * }}
 */
Runtime.ObjectPreview;

/**
 * name: Property name.
 * type: Object type. Accessor means that the property itself is an accessor property.
 * value: User-friendly property value string.
 * valuePreview: Nested value preview.
 * subtype: Object subtype hint. Specified for `object` type values only.
 *
 * @typedef {{
 *   name: string,
 *   type: !Runtime.PropertyPreviewType,
 *   value: (string|undefined),
 *   valuePreview: (!Runtime.ObjectPreview|undefined),
 *   subtype: (!Runtime.PropertyPreviewSubtype|undefined)
 * }}
 */
Runtime.PropertyPreview;

/**
 * key: Preview of the key. Specified for map-like collection entries.
 * value: Preview of the value.
 *
 * @typedef {{
 *   key: (!Runtime.ObjectPreview|undefined),
 *   value: !Runtime.ObjectPreview
 * }}
 */
Runtime.EntryPreview;

/**
 * Object property descriptor.
 *
 * name: Property name or symbol description.
 * value: The value associated with the property.
 * writable: True if the value associated with the property may be changed (data descriptors only).
 * get: A function which serves as a getter for the property, or `undefined` if there is no getter
 *   (accessor descriptors only).
 * set: A function which serves as a setter for the property, or `undefined` if there is no setter
 *   (accessor descriptors only).
 * configurable: True if the type of this property descriptor may be changed and if the property may be
 *   deleted from the corresponding object.
 * enumerable: True if this property shows up during enumeration of the properties on the corresponding
 *   object.
 * wasThrown: True if the result was thrown during the evaluation.
 * isOwn: True if the property is owned for the object.
 * symbol: Property symbol object, if the property is of the `symbol` type.
 *
 * @typedef {{
 *   name: string,
 *   value: (!Runtime.RemoteObject|undefined),
 *   writable: (boolean|undefined),
 *   get: (!Runtime.RemoteObject|undefined),
 *   set: (!Runtime.RemoteObject|undefined),
 *   configurable: boolean,
 *   enumerable: boolean,
 *   wasThrown: (boolean|undefined),
 *   isOwn: (boolean|undefined),
 *   symbol: (!Runtime.RemoteObject|undefined)
 * }}
 */
Runtime.PropertyDescriptor;

/**
 * Object internal property descriptor. This property isn't normally visible in JavaScript code.
 *
 * name: Conventional property name.
 * value: The value associated with the property.
 *
 * @typedef {{
 *   name: string,
 *   value: (!Runtime.RemoteObject|undefined)
 * }}
 */
Runtime.InternalPropertyDescriptor;

/**
 * Represents function call argument. Either remote object id `objectId`, primitive `value`,
 * unserializable primitive value or neither of (for undefined) them should be specified.
 *
 * value: Primitive value or serializable javascript object.
 * unserializableValue: Primitive value which can not be JSON-stringified.
 * objectId: Remote object handle.
 *
 * @typedef {{
 *   value: (*|undefined),
 *   unserializableValue: (string|undefined),
 *   objectId: (string|undefined)
 * }}
 */
Runtime.CallArgument;

/**
 * Description of an isolated world.
 *
 * id: Unique id of the execution context. It can be used to specify in which execution context
 *   script evaluation should be performed.
 * origin: Execution context origin.
 * name: Human readable name describing given context.
 * auxData: Embedder-specific auxiliary data.
 *
 * @typedef {{
 *   id: number,
 *   origin: string,
 *   name: string,
 *   auxData: (!Object|undefined)
 * }}
 */
Runtime.ExecutionContextDescription;

/**
 * Detailed information about exception (or error) that was thrown during script compilation or
 * execution.
 *
 * exceptionId: Exception id.
 * text: Exception text, which should be used together with exception object when available.
 * lineNumber: Line number of the exception location (0-based).
 * columnNumber: Column number of the exception location (0-based).
 * scriptId: Script ID of the exception location.
 * url: URL of the exception location, to be used when the script was not reported.
 * stackTrace: JavaScript stack trace if available.
 * exception: Exception object if available.
 * executionContextId: Identifier of the context where exception happened.
 *
 * @typedef {{
 *   exceptionId: number,
 *   text: string,
 *   lineNumber: number,
 *   columnNumber: number,
 *   scriptId: (string|undefined),
 *   url: (string|undefined),
 *   stackTrace: (!Runtime.StackTrace|undefined),
 *   exception: (!Runtime.RemoteObject|undefined),
 *   executionContextId: (number|undefined)
 * }}
 */
Runtime.ExceptionDetails;

/**
 * Stack entry for runtime errors and assertions.
 *
 * functionName: JavaScript function name.
 * scriptId: JavaScript script id.
 * url: JavaScript script name or url.
 * lineNumber: JavaScript script line number (0-based).
 * columnNumber: JavaScript script column number (0-based).
 *
 * @typedef {{
 *   functionName: string,
 *   scriptId: string,
 *   url: string,
 *   lineNumber: number,
 *   columnNumber: number
 * }}
 */
Runtime.CallFrame;

/**
 * Call frames for assertions or error messages.
 *
 * description: String label of this stack trace. For async traces this may be a name of the function that
 *   initiated the async call.
 * callFrames: JavaScript function name.
 * parent: Asynchronous JavaScript stack trace that preceded this stack, if available.
 * parentId: Asynchronous JavaScript stack trace that preceded this stack, if available.
 *
 * @typedef {{
 *   description: (string|undefined),
 *   callFrames: !Array.<!Runtime.CallFrame>,
 *   parent: (!Runtime.StackTrace|undefined),
 *   parentId: (!Runtime.StackTraceId|undefined)
 * }}
 */
Runtime.StackTrace;

/**
 * If `debuggerId` is set stack trace comes from another debugger and can be resolved there. This
 * allows to track cross-debugger calls. See `Runtime.StackTrace` and `Debugger.paused` for usages.
 *
 *
 * @typedef {{
 *   id: string,
 *   debuggerId: (string|undefined)
 * }}
 */
Runtime.StackTraceId;

/**
 * Parameters for the AwaitPromise command.
 *
 * promiseObjectId: Identifier of the promise.
 * returnByValue: Whether the result is expected to be a JSON object that should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 *
 * @typedef {{
 *   promiseObjectId: string,
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined)
 * }}
 */
Runtime.AwaitPromiseParams;

/**
 * Result for the AwaitPromise command.
 *
 * result: Promise result. Will contain rejected value if promise was rejected.
 * exceptionDetails: Exception details if stack strace is available.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject,
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.AwaitPromiseResult;

/**
 * Parameters for the CallFunctionOn command.
 *
 * functionDeclaration: Declaration of the function to call.
 * objectId: Identifier of the object to call function on. Either objectId or executionContextId should
 *   be specified.
 * arguments: Call arguments. All call arguments must belong to the same JavaScript world as the target
 *   object.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *   execution. Overrides `setPauseOnException` state.
 * returnByValue: Whether the result is expected to be a JSON object which should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * userGesture: Whether execution should be treated as initiated by user in the UI.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *   resolved.
 * executionContextId: Specifies execution context which global object will be used to call function on. Either
 *   executionContextId or objectId should be specified.
 * objectGroup: Symbolic group name that can be used to release multiple objects. If objectGroup is not
 *   specified and objectId is, objectGroup will be inherited from object.
 *
 * @typedef {{
 *   functionDeclaration: string,
 *   objectId: (string|undefined),
 *   arguments: (!Array.<!Runtime.CallArgument>|undefined),
 *   silent: (boolean|undefined),
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined),
 *   userGesture: (boolean|undefined),
 *   awaitPromise: (boolean|undefined),
 *   executionContextId: (number|undefined),
 *   objectGroup: (string|undefined)
 * }}
 */
Runtime.CallFunctionOnParams;

/**
 * Result for the CallFunctionOn command.
 *
 * result: Call result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject,
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.CallFunctionOnResult;

/**
 * Parameters for the CompileScript command.
 *
 * expression: Expression to compile.
 * sourceURL: Source url to be set for the script.
 * persistScript: Specifies whether the compiled script should be persisted.
 * executionContextId: Specifies in which execution context to perform script run. If the parameter is omitted the
 *   evaluation will be performed in the context of the inspected page.
 *
 * @typedef {{
 *   expression: string,
 *   sourceURL: string,
 *   persistScript: boolean,
 *   executionContextId: (number|undefined)
 * }}
 */
Runtime.CompileScriptParams;

/**
 * Result for the CompileScript command.
 *
 * scriptId: Id of the script.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   scriptId: (string|undefined),
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.CompileScriptResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Runtime.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Runtime.DisableResult;

/**
 * Parameters for the DiscardConsoleEntries command.
 *
 *
 * @typedef {undefined}
 */
Runtime.DiscardConsoleEntriesParams;

/**
 * Result for the DiscardConsoleEntries command.
 *
 *
 * @typedef {undefined}
 */
Runtime.DiscardConsoleEntriesResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Runtime.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Runtime.EnableResult;

/**
 * Parameters for the Evaluate command.
 *
 * expression: Expression to evaluate.
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 * includeCommandLineAPI: Determines whether Command Line API should be available during the evaluation.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *   execution. Overrides `setPauseOnException` state.
 * contextId: Specifies in which execution context to perform evaluation. If the parameter is omitted the
 *   evaluation will be performed in the context of the inspected page.
 * returnByValue: Whether the result is expected to be a JSON object that should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * userGesture: Whether execution should be treated as initiated by user in the UI.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *   resolved.
 * throwOnSideEffect: Whether to throw an exception if side effect cannot be ruled out during evaluation.
 * timeout: Terminate execution after timing out (number of milliseconds).
 *
 * @typedef {{
 *   expression: string,
 *   objectGroup: (string|undefined),
 *   includeCommandLineAPI: (boolean|undefined),
 *   silent: (boolean|undefined),
 *   contextId: (number|undefined),
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined),
 *   userGesture: (boolean|undefined),
 *   awaitPromise: (boolean|undefined),
 *   throwOnSideEffect: (boolean|undefined),
 *   timeout: (number|undefined)
 * }}
 */
Runtime.EvaluateParams;

/**
 * Result for the Evaluate command.
 *
 * result: Evaluation result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject,
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.EvaluateResult;

/**
 * Parameters for the GetIsolateId command.
 *
 *
 * @typedef {undefined}
 */
Runtime.GetIsolateIdParams;

/**
 * Result for the GetIsolateId command.
 *
 * id: The isolate id.
 *
 * @typedef {{
 *   id: string
 * }}
 */
Runtime.GetIsolateIdResult;

/**
 * Parameters for the GetHeapUsage command.
 *
 *
 * @typedef {undefined}
 */
Runtime.GetHeapUsageParams;

/**
 * Result for the GetHeapUsage command.
 *
 * usedSize: Used heap size in bytes.
 * totalSize: Allocated heap size in bytes.
 *
 * @typedef {{
 *   usedSize: number,
 *   totalSize: number
 * }}
 */
Runtime.GetHeapUsageResult;

/**
 * Parameters for the GetProperties command.
 *
 * objectId: Identifier of the object to return properties for.
 * ownProperties: If true, returns properties belonging only to the element itself, not to its prototype
 *   chain.
 * accessorPropertiesOnly: If true, returns accessor properties (with getter/setter) only; internal properties are not
 *   returned either.
 * generatePreview: Whether preview should be generated for the results.
 *
 * @typedef {{
 *   objectId: string,
 *   ownProperties: (boolean|undefined),
 *   accessorPropertiesOnly: (boolean|undefined),
 *   generatePreview: (boolean|undefined)
 * }}
 */
Runtime.GetPropertiesParams;

/**
 * Result for the GetProperties command.
 *
 * result: Object properties.
 * internalProperties: Internal object properties (only of the element itself).
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Array.<!Runtime.PropertyDescriptor>,
 *   internalProperties: (!Array.<!Runtime.InternalPropertyDescriptor>|undefined),
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.GetPropertiesResult;

/**
 * Parameters for the GlobalLexicalScopeNames command.
 *
 * executionContextId: Specifies in which execution context to lookup global scope variables.
 *
 * @typedef {{
 *   executionContextId: (number|undefined)
 * }}
 */
Runtime.GlobalLexicalScopeNamesParams;

/**
 * Result for the GlobalLexicalScopeNames command.
 *
 *
 * @typedef {{
 *   names: !Array.<string>
 * }}
 */
Runtime.GlobalLexicalScopeNamesResult;

/**
 * Parameters for the QueryObjects command.
 *
 * prototypeObjectId: Identifier of the prototype to return objects for.
 * objectGroup: Symbolic group name that can be used to release the results.
 *
 * @typedef {{
 *   prototypeObjectId: string,
 *   objectGroup: (string|undefined)
 * }}
 */
Runtime.QueryObjectsParams;

/**
 * Result for the QueryObjects command.
 *
 * objects: Array with objects.
 *
 * @typedef {{
 *   objects: !Runtime.RemoteObject
 * }}
 */
Runtime.QueryObjectsResult;

/**
 * Parameters for the ReleaseObject command.
 *
 * objectId: Identifier of the object to release.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
Runtime.ReleaseObjectParams;

/**
 * Result for the ReleaseObject command.
 *
 *
 * @typedef {undefined}
 */
Runtime.ReleaseObjectResult;

/**
 * Parameters for the ReleaseObjectGroup command.
 *
 * objectGroup: Symbolic object group name.
 *
 * @typedef {{
 *   objectGroup: string
 * }}
 */
Runtime.ReleaseObjectGroupParams;

/**
 * Result for the ReleaseObjectGroup command.
 *
 *
 * @typedef {undefined}
 */
Runtime.ReleaseObjectGroupResult;

/**
 * Parameters for the RunIfWaitingForDebugger command.
 *
 *
 * @typedef {undefined}
 */
Runtime.RunIfWaitingForDebuggerParams;

/**
 * Result for the RunIfWaitingForDebugger command.
 *
 *
 * @typedef {undefined}
 */
Runtime.RunIfWaitingForDebuggerResult;

/**
 * Parameters for the RunScript command.
 *
 * scriptId: Id of the script to run.
 * executionContextId: Specifies in which execution context to perform script run. If the parameter is omitted the
 *   evaluation will be performed in the context of the inspected page.
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *   execution. Overrides `setPauseOnException` state.
 * includeCommandLineAPI: Determines whether Command Line API should be available during the evaluation.
 * returnByValue: Whether the result is expected to be a JSON object which should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *   resolved.
 *
 * @typedef {{
 *   scriptId: string,
 *   executionContextId: (number|undefined),
 *   objectGroup: (string|undefined),
 *   silent: (boolean|undefined),
 *   includeCommandLineAPI: (boolean|undefined),
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined),
 *   awaitPromise: (boolean|undefined)
 * }}
 */
Runtime.RunScriptParams;

/**
 * Result for the RunScript command.
 *
 * result: Run result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject,
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Runtime.RunScriptResult;

/**
 * Parameters for the SetCustomObjectFormatterEnabled command.
 *
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
Runtime.SetCustomObjectFormatterEnabledParams;

/**
 * Result for the SetCustomObjectFormatterEnabled command.
 *
 *
 * @typedef {undefined}
 */
Runtime.SetCustomObjectFormatterEnabledResult;

/**
 * Parameters for the TerminateExecution command.
 *
 *
 * @typedef {undefined}
 */
Runtime.TerminateExecutionParams;

/**
 * Result for the TerminateExecution command.
 *
 *
 * @typedef {undefined}
 */
Runtime.TerminateExecutionResult;

/**
 * Parameters for the ConsoleAPICalled event.
 *
 * type: Type of the call.
 * args: Call arguments.
 * executionContextId: Identifier of the context where the call was made.
 * timestamp: Call timestamp.
 * stackTrace: Stack trace captured when the call was made.
 * context: Console context descriptor for calls on non-default console context (not console.*):
 *   'anonymous#unique-logger-id' for call on unnamed context, 'name#unique-logger-id' for call
 *   on named context.
 *
 * @typedef {{
 *   type: !Runtime.ConsoleAPICalledType,
 *   args: !Array.<!Runtime.RemoteObject>,
 *   executionContextId: number,
 *   timestamp: number,
 *   stackTrace: (!Runtime.StackTrace|undefined),
 *   context: (string|undefined)
 * }}
 */
Runtime.ConsoleAPICalledParams;

/**
 * Parameters for the ExceptionRevoked event.
 *
 * reason: Reason describing why exception was revoked.
 * exceptionId: The id of revoked exception, as reported in `exceptionThrown`.
 *
 * @typedef {{
 *   reason: string,
 *   exceptionId: number
 * }}
 */
Runtime.ExceptionRevokedParams;

/**
 * Parameters for the ExceptionThrown event.
 *
 * timestamp: Timestamp of the exception.
 *
 * @typedef {{
 *   timestamp: number,
 *   exceptionDetails: !Runtime.ExceptionDetails
 * }}
 */
Runtime.ExceptionThrownParams;

/**
 * Parameters for the ExecutionContextCreated event.
 *
 * context: A newly created execution context.
 *
 * @typedef {{
 *   context: !Runtime.ExecutionContextDescription
 * }}
 */
Runtime.ExecutionContextCreatedParams;

/**
 * Parameters for the ExecutionContextDestroyed event.
 *
 * executionContextId: Id of the destroyed context
 *
 * @typedef {{
 *   executionContextId: number
 * }}
 */
Runtime.ExecutionContextDestroyedParams;

/**
 * Parameters for the ExecutionContextsCleared event.
 *
 *
 * @typedef {undefined}
 */
Runtime.ExecutionContextsClearedParams;

/**
 * Parameters for the InspectRequested event.
 *
 *
 * @typedef {{
 *   object: !Runtime.RemoteObject,
 *   hints: !Object
 * }}
 */
Runtime.InspectRequestedParams;



/**
  * Add handler to promise with given promise object id.
  *
  * @param {Runtime.AwaitPromiseParams} params
  * @return {!Promise<Runtime.AwaitPromiseResult>}
  */
ExperimentalRuntime.prototype.awaitPromise = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.awaitPromise', params);
};

/**
  * Calls function with given declaration on the given object. Object group of the result is
 * inherited from the target object.
  *
  * @param {Runtime.CallFunctionOnParams} params
  * @return {!Promise<Runtime.CallFunctionOnResult>}
  */
ExperimentalRuntime.prototype.callFunctionOn = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.callFunctionOn', params);
};

/**
  * Compiles expression.
  *
  * @param {Runtime.CompileScriptParams} params
  * @return {!Promise<Runtime.CompileScriptResult>}
  */
ExperimentalRuntime.prototype.compileScript = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.compileScript', params);
};

/**
  * Disables reporting of execution contexts creation.
  *
  * @return {!Promise<Runtime.DisableResult>}
  */
ExperimentalRuntime.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Runtime.disable', {});
};

/**
  * Discards collected exceptions and console API calls.
  *
  * @return {!Promise<Runtime.DiscardConsoleEntriesResult>}
  */
ExperimentalRuntime.prototype.discardConsoleEntries = function() {
  return this.connection_.sendDevToolsMessage('Runtime.discardConsoleEntries', {});
};

/**
  * Enables reporting of execution contexts creation by means of `executionContextCreated` event.
 * When the reporting gets enabled the event will be sent immediately for each existing execution
 * context.
  *
  * @return {!Promise<Runtime.EnableResult>}
  */
ExperimentalRuntime.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Runtime.enable', {});
};

/**
  * Evaluates expression on global object.
  *
  * @param {Runtime.EvaluateParams} params
  * @return {!Promise<Runtime.EvaluateResult>}
  */
ExperimentalRuntime.prototype.evaluate = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.evaluate', params);
};

/**
  * Returns the isolate id.
  *
  * @return {!Promise<Runtime.GetIsolateIdResult>}
  */
ExperimentalRuntime.prototype.getIsolateId = function() {
  return this.connection_.sendDevToolsMessage('Runtime.getIsolateId', {});
};

/**
  * Returns the JavaScript heap usage.
 * It is the total usage of the corresponding isolate not scoped to a particular Runtime.
  *
  * @return {!Promise<Runtime.GetHeapUsageResult>}
  */
ExperimentalRuntime.prototype.getHeapUsage = function() {
  return this.connection_.sendDevToolsMessage('Runtime.getHeapUsage', {});
};

/**
  * Returns properties of a given object. Object group of the result is inherited from the target
 * object.
  *
  * @param {Runtime.GetPropertiesParams} params
  * @return {!Promise<Runtime.GetPropertiesResult>}
  */
ExperimentalRuntime.prototype.getProperties = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.getProperties', params);
};

/**
  * Returns all let, const and class variables from global scope.
  *
  * @param {Runtime.GlobalLexicalScopeNamesParams=} opt_params
  * @return {!Promise<Runtime.GlobalLexicalScopeNamesResult>}
  */
ExperimentalRuntime.prototype.globalLexicalScopeNames = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Runtime.globalLexicalScopeNames', opt_params || {});
};

/**
  * @param {Runtime.QueryObjectsParams} params
  * @return {!Promise<Runtime.QueryObjectsResult>}
  */
ExperimentalRuntime.prototype.queryObjects = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.queryObjects', params);
};

/**
  * Releases remote object with given id.
  *
  * @param {Runtime.ReleaseObjectParams} params
  * @return {!Promise<Runtime.ReleaseObjectResult>}
  */
ExperimentalRuntime.prototype.releaseObject = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.releaseObject', params);
};

/**
  * Releases all remote objects that belong to a given group.
  *
  * @param {Runtime.ReleaseObjectGroupParams} params
  * @return {!Promise<Runtime.ReleaseObjectGroupResult>}
  */
ExperimentalRuntime.prototype.releaseObjectGroup = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.releaseObjectGroup', params);
};

/**
  * Tells inspected instance to run if it was waiting for debugger to attach.
  *
  * @return {!Promise<Runtime.RunIfWaitingForDebuggerResult>}
  */
ExperimentalRuntime.prototype.runIfWaitingForDebugger = function() {
  return this.connection_.sendDevToolsMessage('Runtime.runIfWaitingForDebugger', {});
};

/**
  * Runs script with given id in a given context.
  *
  * @param {Runtime.RunScriptParams} params
  * @return {!Promise<Runtime.RunScriptResult>}
  */
ExperimentalRuntime.prototype.runScript = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.runScript', params);
};

/**
  * @param {Runtime.SetCustomObjectFormatterEnabledParams} params
  * @return {!Promise<Runtime.SetCustomObjectFormatterEnabledResult>}
  */
ExperimentalRuntime.prototype.setCustomObjectFormatterEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.setCustomObjectFormatterEnabled', params);
};

/**
  * Terminate current or next JavaScript execution.
 * Will cancel the termination when the outer-most script execution ends.
  *
  * @return {!Promise<Runtime.TerminateExecutionResult>}
  */
ExperimentalRuntime.prototype.terminateExecution = function() {
  return this.connection_.sendDevToolsMessage('Runtime.terminateExecution', {});
};


/**
  * Issued when console API was called.
  *
  * @param {!function(!Runtime.ConsoleAPICalledParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onConsoleAPICalled = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.consoleAPICalled', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when unhandled exception was revoked.
  *
  * @param {!function(!Runtime.ExceptionRevokedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onExceptionRevoked = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.exceptionRevoked', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when exception was thrown and unhandled.
  *
  * @param {!function(!Runtime.ExceptionThrownParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onExceptionThrown = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.exceptionThrown', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when new execution context is created.
  *
  * @param {!function(!Runtime.ExecutionContextCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onExecutionContextCreated = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when execution context is destroyed.
  *
  * @param {!function(!Runtime.ExecutionContextDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onExecutionContextDestroyed = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextDestroyed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when all executionContexts were cleared in browser
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onExecutionContextsCleared = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextsCleared', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when object should be inspected (for example, as a result of inspect() command line API
 * call).
  *
  * @param {!function(!Runtime.InspectRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalRuntime.prototype.onInspectRequested = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.inspectRequested', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Add handler to promise with given promise object id.
  *
  * @param {Runtime.AwaitPromiseParams} params
  * @return {!Promise<Runtime.AwaitPromiseResult>}
  */
Runtime.prototype.awaitPromise = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.awaitPromise', params);
};

/**
  * Calls function with given declaration on the given object. Object group of the result is
 * inherited from the target object.
  *
  * @param {Runtime.CallFunctionOnParams} params
  * @return {!Promise<Runtime.CallFunctionOnResult>}
  */
Runtime.prototype.callFunctionOn = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.callFunctionOn', params);
};

/**
  * Compiles expression.
  *
  * @param {Runtime.CompileScriptParams} params
  * @return {!Promise<Runtime.CompileScriptResult>}
  */
Runtime.prototype.compileScript = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.compileScript', params);
};

/**
  * Disables reporting of execution contexts creation.
  *
  * @return {!Promise<Runtime.DisableResult>}
  */
Runtime.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Runtime.disable', {});
};

/**
  * Discards collected exceptions and console API calls.
  *
  * @return {!Promise<Runtime.DiscardConsoleEntriesResult>}
  */
Runtime.prototype.discardConsoleEntries = function() {
  return this.connection_.sendDevToolsMessage('Runtime.discardConsoleEntries', {});
};

/**
  * Enables reporting of execution contexts creation by means of `executionContextCreated` event.
 * When the reporting gets enabled the event will be sent immediately for each existing execution
 * context.
  *
  * @return {!Promise<Runtime.EnableResult>}
  */
Runtime.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Runtime.enable', {});
};

/**
  * Evaluates expression on global object.
  *
  * @param {Runtime.EvaluateParams} params
  * @return {!Promise<Runtime.EvaluateResult>}
  */
Runtime.prototype.evaluate = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.evaluate', params);
};

/**
  * Returns the isolate id.
  *
  * @return {!Promise<Runtime.GetIsolateIdResult>}
  */
Runtime.prototype.getIsolateId = function() {
  return this.connection_.sendDevToolsMessage('Runtime.getIsolateId', {});
};

/**
  * Returns the JavaScript heap usage.
 * It is the total usage of the corresponding isolate not scoped to a particular Runtime.
  *
  * @return {!Promise<Runtime.GetHeapUsageResult>}
  */
Runtime.prototype.getHeapUsage = function() {
  return this.connection_.sendDevToolsMessage('Runtime.getHeapUsage', {});
};

/**
  * Returns properties of a given object. Object group of the result is inherited from the target
 * object.
  *
  * @param {Runtime.GetPropertiesParams} params
  * @return {!Promise<Runtime.GetPropertiesResult>}
  */
Runtime.prototype.getProperties = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.getProperties', params);
};

/**
  * Returns all let, const and class variables from global scope.
  *
  * @param {Runtime.GlobalLexicalScopeNamesParams=} opt_params
  * @return {!Promise<Runtime.GlobalLexicalScopeNamesResult>}
  */
Runtime.prototype.globalLexicalScopeNames = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Runtime.globalLexicalScopeNames', opt_params || {});
};

/**
  * @param {Runtime.QueryObjectsParams} params
  * @return {!Promise<Runtime.QueryObjectsResult>}
  */
Runtime.prototype.queryObjects = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.queryObjects', params);
};

/**
  * Releases remote object with given id.
  *
  * @param {Runtime.ReleaseObjectParams} params
  * @return {!Promise<Runtime.ReleaseObjectResult>}
  */
Runtime.prototype.releaseObject = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.releaseObject', params);
};

/**
  * Releases all remote objects that belong to a given group.
  *
  * @param {Runtime.ReleaseObjectGroupParams} params
  * @return {!Promise<Runtime.ReleaseObjectGroupResult>}
  */
Runtime.prototype.releaseObjectGroup = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.releaseObjectGroup', params);
};

/**
  * Tells inspected instance to run if it was waiting for debugger to attach.
  *
  * @return {!Promise<Runtime.RunIfWaitingForDebuggerResult>}
  */
Runtime.prototype.runIfWaitingForDebugger = function() {
  return this.connection_.sendDevToolsMessage('Runtime.runIfWaitingForDebugger', {});
};

/**
  * Runs script with given id in a given context.
  *
  * @param {Runtime.RunScriptParams} params
  * @return {!Promise<Runtime.RunScriptResult>}
  */
Runtime.prototype.runScript = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.runScript', params);
};

/**
  * @param {Runtime.SetCustomObjectFormatterEnabledParams} params
  * @return {!Promise<Runtime.SetCustomObjectFormatterEnabledResult>}
  */
Runtime.prototype.setCustomObjectFormatterEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Runtime.setCustomObjectFormatterEnabled', params);
};

/**
  * Terminate current or next JavaScript execution.
 * Will cancel the termination when the outer-most script execution ends.
  *
  * @return {!Promise<Runtime.TerminateExecutionResult>}
  */
Runtime.prototype.terminateExecution = function() {
  return this.connection_.sendDevToolsMessage('Runtime.terminateExecution', {});
};


/**
  * Issued when console API was called.
  *
  * @param {!function(!Runtime.ConsoleAPICalledParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onConsoleAPICalled = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.consoleAPICalled', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when unhandled exception was revoked.
  *
  * @param {!function(!Runtime.ExceptionRevokedParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onExceptionRevoked = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.exceptionRevoked', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when exception was thrown and unhandled.
  *
  * @param {!function(!Runtime.ExceptionThrownParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onExceptionThrown = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.exceptionThrown', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when new execution context is created.
  *
  * @param {!function(!Runtime.ExecutionContextCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onExecutionContextCreated = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when execution context is destroyed.
  *
  * @param {!function(!Runtime.ExecutionContextDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onExecutionContextDestroyed = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextDestroyed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when all executionContexts were cleared in browser
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onExecutionContextsCleared = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.executionContextsCleared', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when object should be inspected (for example, as a result of inspect() command line API
 * call).
  *
  * @param {!function(!Runtime.InspectRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
Runtime.prototype.onInspectRequested = function(listener) {
  return this.connection_.addEventListener(
      'Runtime.inspectRequested', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope


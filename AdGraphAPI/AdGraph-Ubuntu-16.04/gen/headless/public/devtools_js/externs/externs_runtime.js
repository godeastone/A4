// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Runtime DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalRuntime = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalRuntime.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Runtime DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Runtime = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalRuntime} */
chromium.DevTools.Runtime.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Runtime.prototype.removeEventListener = function(id) {};

/**
 * Object type.
 *
 * @enum {string}
 */
chromium.DevTools.Runtime.RemoteObjectType = {
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
chromium.DevTools.Runtime.RemoteObjectSubtype = {
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
chromium.DevTools.Runtime.ObjectPreviewType = {
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
chromium.DevTools.Runtime.ObjectPreviewSubtype = {
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
chromium.DevTools.Runtime.PropertyPreviewType = {
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
chromium.DevTools.Runtime.PropertyPreviewSubtype = {
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
chromium.DevTools.Runtime.ConsoleAPICalledType = {
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
 *    property.
 * description: String representation of the object.
 * objectId: Unique object identifier (for non-primitive values).
 * preview: Preview containing abbreviated property values. Specified for `object` type values only.
 *
 * @typedef {{
 *   type: !chromium.DevTools.Runtime.RemoteObjectType,
 *   subtype: (!chromium.DevTools.Runtime.RemoteObjectSubtype|undefined),
 *   className: (string|undefined),
 *   value: (*|undefined),
 *   unserializableValue: (string|undefined),
 *   description: (string|undefined),
 *   objectId: (string|undefined),
 *   preview: (!chromium.DevTools.Runtime.ObjectPreview|undefined),
 *   customPreview: (!chromium.DevTools.Runtime.CustomPreview|undefined)
 * }}
 */
chromium.DevTools.Runtime.RemoteObject;

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
chromium.DevTools.Runtime.CustomPreview;

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
 *   type: !chromium.DevTools.Runtime.ObjectPreviewType,
 *   subtype: (!chromium.DevTools.Runtime.ObjectPreviewSubtype|undefined),
 *   description: (string|undefined),
 *   overflow: boolean,
 *   properties: !Array.<!chromium.DevTools.Runtime.PropertyPreview>,
 *   entries: (!Array.<!chromium.DevTools.Runtime.EntryPreview>|undefined)
 * }}
 */
chromium.DevTools.Runtime.ObjectPreview;

/**
 * name: Property name.
 * type: Object type. Accessor means that the property itself is an accessor property.
 * value: User-friendly property value string.
 * valuePreview: Nested value preview.
 * subtype: Object subtype hint. Specified for `object` type values only.
 *
 * @typedef {{
 *   name: string,
 *   type: !chromium.DevTools.Runtime.PropertyPreviewType,
 *   value: (string|undefined),
 *   valuePreview: (!chromium.DevTools.Runtime.ObjectPreview|undefined),
 *   subtype: (!chromium.DevTools.Runtime.PropertyPreviewSubtype|undefined)
 * }}
 */
chromium.DevTools.Runtime.PropertyPreview;

/**
 * key: Preview of the key. Specified for map-like collection entries.
 * value: Preview of the value.
 *
 * @typedef {{
 *   key: (!chromium.DevTools.Runtime.ObjectPreview|undefined),
 *   value: !chromium.DevTools.Runtime.ObjectPreview
 * }}
 */
chromium.DevTools.Runtime.EntryPreview;

/**
 * Object property descriptor.
 *
 * name: Property name or symbol description.
 * value: The value associated with the property.
 * writable: True if the value associated with the property may be changed (data descriptors only).
 * get: A function which serves as a getter for the property, or `undefined` if there is no getter
 *    (accessor descriptors only).
 * set: A function which serves as a setter for the property, or `undefined` if there is no setter
 *    (accessor descriptors only).
 * configurable: True if the type of this property descriptor may be changed and if the property may be
 *    deleted from the corresponding object.
 * enumerable: True if this property shows up during enumeration of the properties on the corresponding
 *    object.
 * wasThrown: True if the result was thrown during the evaluation.
 * isOwn: True if the property is owned for the object.
 * symbol: Property symbol object, if the property is of the `symbol` type.
 *
 * @typedef {{
 *   name: string,
 *   value: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   writable: (boolean|undefined),
 *   get: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   set: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   configurable: boolean,
 *   enumerable: boolean,
 *   wasThrown: (boolean|undefined),
 *   isOwn: (boolean|undefined),
 *   symbol: (!chromium.DevTools.Runtime.RemoteObject|undefined)
 * }}
 */
chromium.DevTools.Runtime.PropertyDescriptor;

/**
 * Object internal property descriptor. This property isn't normally visible in JavaScript code.
 *
 * name: Conventional property name.
 * value: The value associated with the property.
 *
 * @typedef {{
 *   name: string,
 *   value: (!chromium.DevTools.Runtime.RemoteObject|undefined)
 * }}
 */
chromium.DevTools.Runtime.InternalPropertyDescriptor;

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
chromium.DevTools.Runtime.CallArgument;

/**
 * Description of an isolated world.
 *
 * id: Unique id of the execution context. It can be used to specify in which execution context
 *    script evaluation should be performed.
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
chromium.DevTools.Runtime.ExecutionContextDescription;

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
 *   stackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   exception: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   executionContextId: (number|undefined)
 * }}
 */
chromium.DevTools.Runtime.ExceptionDetails;

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
chromium.DevTools.Runtime.CallFrame;

/**
 * Call frames for assertions or error messages.
 *
 * description: String label of this stack trace. For async traces this may be a name of the function that
 *    initiated the async call.
 * callFrames: JavaScript function name.
 * parent: Asynchronous JavaScript stack trace that preceded this stack, if available.
 * parentId: Asynchronous JavaScript stack trace that preceded this stack, if available.
 *
 * @typedef {{
 *   description: (string|undefined),
 *   callFrames: !Array.<!chromium.DevTools.Runtime.CallFrame>,
 *   parent: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   parentId: (!chromium.DevTools.Runtime.StackTraceId|undefined)
 * }}
 */
chromium.DevTools.Runtime.StackTrace;

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
chromium.DevTools.Runtime.StackTraceId;

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
chromium.DevTools.Runtime.AwaitPromiseParams;

/**
 * Result for the AwaitPromise command.
 *
 * result: Promise result. Will contain rejected value if promise was rejected.
 * exceptionDetails: Exception details if stack strace is available.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject,
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.AwaitPromiseResult;

/**
 * Parameters for the CallFunctionOn command.
 *
 * functionDeclaration: Declaration of the function to call.
 * objectId: Identifier of the object to call function on. Either objectId or executionContextId should
 *    be specified.
 * arguments: Call arguments. All call arguments must belong to the same JavaScript world as the target
 *    object.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *    execution. Overrides `setPauseOnException` state.
 * returnByValue: Whether the result is expected to be a JSON object which should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * userGesture: Whether execution should be treated as initiated by user in the UI.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *    resolved.
 * executionContextId: Specifies execution context which global object will be used to call function on. Either
 *    executionContextId or objectId should be specified.
 * objectGroup: Symbolic group name that can be used to release multiple objects. If objectGroup is not
 *    specified and objectId is, objectGroup will be inherited from object.
 *
 * @typedef {{
 *   functionDeclaration: string,
 *   objectId: (string|undefined),
 *   arguments: (!Array.<!chromium.DevTools.Runtime.CallArgument>|undefined),
 *   silent: (boolean|undefined),
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined),
 *   userGesture: (boolean|undefined),
 *   awaitPromise: (boolean|undefined),
 *   executionContextId: (number|undefined),
 *   objectGroup: (string|undefined)
 * }}
 */
chromium.DevTools.Runtime.CallFunctionOnParams;

/**
 * Result for the CallFunctionOn command.
 *
 * result: Call result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject,
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.CallFunctionOnResult;

/**
 * Parameters for the CompileScript command.
 *
 * expression: Expression to compile.
 * sourceURL: Source url to be set for the script.
 * persistScript: Specifies whether the compiled script should be persisted.
 * executionContextId: Specifies in which execution context to perform script run. If the parameter is omitted the
 *    evaluation will be performed in the context of the inspected page.
 *
 * @typedef {{
 *   expression: string,
 *   sourceURL: string,
 *   persistScript: boolean,
 *   executionContextId: (number|undefined)
 * }}
 */
chromium.DevTools.Runtime.CompileScriptParams;

/**
 * Result for the CompileScript command.
 *
 * scriptId: Id of the script.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   scriptId: (string|undefined),
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.CompileScriptResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.DisableResult;

/**
 * Parameters for the DiscardConsoleEntries command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.DiscardConsoleEntriesParams;

/**
 * Result for the DiscardConsoleEntries command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.DiscardConsoleEntriesResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.EnableResult;

/**
 * Parameters for the Evaluate command.
 *
 * expression: Expression to evaluate.
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 * includeCommandLineAPI: Determines whether Command Line API should be available during the evaluation.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *    execution. Overrides `setPauseOnException` state.
 * contextId: Specifies in which execution context to perform evaluation. If the parameter is omitted the
 *    evaluation will be performed in the context of the inspected page.
 * returnByValue: Whether the result is expected to be a JSON object that should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * userGesture: Whether execution should be treated as initiated by user in the UI.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *    resolved.
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
chromium.DevTools.Runtime.EvaluateParams;

/**
 * Result for the Evaluate command.
 *
 * result: Evaluation result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject,
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.EvaluateResult;

/**
 * Parameters for the GetIsolateId command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.GetIsolateIdParams;

/**
 * Result for the GetIsolateId command.
 *
 * id: The isolate id.
 *
 * @typedef {{
 *   id: string
 * }}
 */
chromium.DevTools.Runtime.GetIsolateIdResult;

/**
 * Parameters for the GetHeapUsage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.GetHeapUsageParams;

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
chromium.DevTools.Runtime.GetHeapUsageResult;

/**
 * Parameters for the GetProperties command.
 *
 * objectId: Identifier of the object to return properties for.
 * ownProperties: If true, returns properties belonging only to the element itself, not to its prototype
 *    chain.
 * accessorPropertiesOnly: If true, returns accessor properties (with getter/setter) only; internal properties are not
 *    returned either.
 * generatePreview: Whether preview should be generated for the results.
 *
 * @typedef {{
 *   objectId: string,
 *   ownProperties: (boolean|undefined),
 *   accessorPropertiesOnly: (boolean|undefined),
 *   generatePreview: (boolean|undefined)
 * }}
 */
chromium.DevTools.Runtime.GetPropertiesParams;

/**
 * Result for the GetProperties command.
 *
 * result: Object properties.
 * internalProperties: Internal object properties (only of the element itself).
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Runtime.PropertyDescriptor>,
 *   internalProperties: (!Array.<!chromium.DevTools.Runtime.InternalPropertyDescriptor>|undefined),
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.GetPropertiesResult;

/**
 * Parameters for the GlobalLexicalScopeNames command.
 *
 * executionContextId: Specifies in which execution context to lookup global scope variables.
 *
 * @typedef {{
 *   executionContextId: (number|undefined)
 * }}
 */
chromium.DevTools.Runtime.GlobalLexicalScopeNamesParams;

/**
 * Result for the GlobalLexicalScopeNames command.
 *
 *
 * @typedef {{
 *   names: !Array.<string>
 * }}
 */
chromium.DevTools.Runtime.GlobalLexicalScopeNamesResult;

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
chromium.DevTools.Runtime.QueryObjectsParams;

/**
 * Result for the QueryObjects command.
 *
 * objects: Array with objects.
 *
 * @typedef {{
 *   objects: !chromium.DevTools.Runtime.RemoteObject
 * }}
 */
chromium.DevTools.Runtime.QueryObjectsResult;

/**
 * Parameters for the ReleaseObject command.
 *
 * objectId: Identifier of the object to release.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
chromium.DevTools.Runtime.ReleaseObjectParams;

/**
 * Result for the ReleaseObject command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.ReleaseObjectResult;

/**
 * Parameters for the ReleaseObjectGroup command.
 *
 * objectGroup: Symbolic object group name.
 *
 * @typedef {{
 *   objectGroup: string
 * }}
 */
chromium.DevTools.Runtime.ReleaseObjectGroupParams;

/**
 * Result for the ReleaseObjectGroup command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.ReleaseObjectGroupResult;

/**
 * Parameters for the RunIfWaitingForDebugger command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.RunIfWaitingForDebuggerParams;

/**
 * Result for the RunIfWaitingForDebugger command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.RunIfWaitingForDebuggerResult;

/**
 * Parameters for the RunScript command.
 *
 * scriptId: Id of the script to run.
 * executionContextId: Specifies in which execution context to perform script run. If the parameter is omitted the
 *    evaluation will be performed in the context of the inspected page.
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *    execution. Overrides `setPauseOnException` state.
 * includeCommandLineAPI: Determines whether Command Line API should be available during the evaluation.
 * returnByValue: Whether the result is expected to be a JSON object which should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * awaitPromise: Whether execution should `await` for resulting value and return once awaited promise is
 *    resolved.
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
chromium.DevTools.Runtime.RunScriptParams;

/**
 * Result for the RunScript command.
 *
 * result: Run result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject,
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Runtime.RunScriptResult;

/**
 * Parameters for the SetCustomObjectFormatterEnabled command.
 *
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledParams;

/**
 * Result for the SetCustomObjectFormatterEnabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledResult;

/**
 * Parameters for the TerminateExecution command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.TerminateExecutionParams;

/**
 * Result for the TerminateExecution command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.TerminateExecutionResult;

/**
 * Parameters for the ConsoleAPICalled event.
 *
 * type: Type of the call.
 * args: Call arguments.
 * executionContextId: Identifier of the context where the call was made.
 * timestamp: Call timestamp.
 * stackTrace: Stack trace captured when the call was made.
 * context: Console context descriptor for calls on non-default console context (not console.*):
 *    'anonymous#unique-logger-id' for call on unnamed context, 'name#unique-logger-id' for call
 *    on named context.
 *
 * @typedef {{
 *   type: !chromium.DevTools.Runtime.ConsoleAPICalledType,
 *   args: !Array.<!chromium.DevTools.Runtime.RemoteObject>,
 *   executionContextId: number,
 *   timestamp: number,
 *   stackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   context: (string|undefined)
 * }}
 */
chromium.DevTools.Runtime.ConsoleAPICalledParams;

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
chromium.DevTools.Runtime.ExceptionRevokedParams;

/**
 * Parameters for the ExceptionThrown event.
 *
 * timestamp: Timestamp of the exception.
 *
 * @typedef {{
 *   timestamp: number,
 *   exceptionDetails: !chromium.DevTools.Runtime.ExceptionDetails
 * }}
 */
chromium.DevTools.Runtime.ExceptionThrownParams;

/**
 * Parameters for the ExecutionContextCreated event.
 *
 * context: A newly created execution context.
 *
 * @typedef {{
 *   context: !chromium.DevTools.Runtime.ExecutionContextDescription
 * }}
 */
chromium.DevTools.Runtime.ExecutionContextCreatedParams;

/**
 * Parameters for the ExecutionContextDestroyed event.
 *
 * executionContextId: Id of the destroyed context
 *
 * @typedef {{
 *   executionContextId: number
 * }}
 */
chromium.DevTools.Runtime.ExecutionContextDestroyedParams;

/**
 * Parameters for the ExecutionContextsCleared event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Runtime.ExecutionContextsClearedParams;

/**
 * Parameters for the InspectRequested event.
 *
 *
 * @typedef {{
 *   object: !chromium.DevTools.Runtime.RemoteObject,
 *   hints: !Object
 * }}
 */
chromium.DevTools.Runtime.InspectRequestedParams;



/**
  * Add handler to promise with given promise object id.
  *
  * @param {chromium.DevTools.Runtime.AwaitPromiseParams} params
  * @return {!Promise<chromium.DevTools.Runtime.AwaitPromiseResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.awaitPromise = function(params) {};

/**
  * Calls function with given declaration on the given object. Object group of the result is
 * inherited from the target object.
  *
  * @param {chromium.DevTools.Runtime.CallFunctionOnParams} params
  * @return {!Promise<chromium.DevTools.Runtime.CallFunctionOnResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.callFunctionOn = function(params) {};

/**
  * Compiles expression.
  *
  * @param {chromium.DevTools.Runtime.CompileScriptParams} params
  * @return {!Promise<chromium.DevTools.Runtime.CompileScriptResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.compileScript = function(params) {};

/**
  * Disables reporting of execution contexts creation.
  *
  * @return {!Promise<chromium.DevTools.Runtime.DisableResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.disable = function() {};

/**
  * Discards collected exceptions and console API calls.
  *
  * @return {!Promise<chromium.DevTools.Runtime.DiscardConsoleEntriesResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.discardConsoleEntries = function() {};

/**
  * Enables reporting of execution contexts creation by means of `executionContextCreated` event.
 * When the reporting gets enabled the event will be sent immediately for each existing execution
 * context.
  *
  * @return {!Promise<chromium.DevTools.Runtime.EnableResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.enable = function() {};

/**
  * Evaluates expression on global object.
  *
  * @param {chromium.DevTools.Runtime.EvaluateParams} params
  * @return {!Promise<chromium.DevTools.Runtime.EvaluateResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.evaluate = function(params) {};

/**
  * Returns the isolate id.
  *
  * @return {!Promise<chromium.DevTools.Runtime.GetIsolateIdResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.getIsolateId = function() {};

/**
  * Returns the JavaScript heap usage.
 * It is the total usage of the corresponding isolate not scoped to a particular Runtime.
  *
  * @return {!Promise<chromium.DevTools.Runtime.GetHeapUsageResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.getHeapUsage = function() {};

/**
  * Returns properties of a given object. Object group of the result is inherited from the target
 * object.
  *
  * @param {chromium.DevTools.Runtime.GetPropertiesParams} params
  * @return {!Promise<chromium.DevTools.Runtime.GetPropertiesResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.getProperties = function(params) {};

/**
  * Returns all let, const and class variables from global scope.
  *
  * @param {chromium.DevTools.Runtime.GlobalLexicalScopeNamesParams=} opt_params
  * @return {!Promise<chromium.DevTools.Runtime.GlobalLexicalScopeNamesResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.globalLexicalScopeNames = function(opt_params) {};

/**
  * @param {chromium.DevTools.Runtime.QueryObjectsParams} params
  * @return {!Promise<chromium.DevTools.Runtime.QueryObjectsResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.queryObjects = function(params) {};

/**
  * Releases remote object with given id.
  *
  * @param {chromium.DevTools.Runtime.ReleaseObjectParams} params
  * @return {!Promise<chromium.DevTools.Runtime.ReleaseObjectResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.releaseObject = function(params) {};

/**
  * Releases all remote objects that belong to a given group.
  *
  * @param {chromium.DevTools.Runtime.ReleaseObjectGroupParams} params
  * @return {!Promise<chromium.DevTools.Runtime.ReleaseObjectGroupResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.releaseObjectGroup = function(params) {};

/**
  * Tells inspected instance to run if it was waiting for debugger to attach.
  *
  * @return {!Promise<chromium.DevTools.Runtime.RunIfWaitingForDebuggerResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.runIfWaitingForDebugger = function() {};

/**
  * Runs script with given id in a given context.
  *
  * @param {chromium.DevTools.Runtime.RunScriptParams} params
  * @return {!Promise<chromium.DevTools.Runtime.RunScriptResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.runScript = function(params) {};

/**
  * @param {chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledParams} params
  * @return {!Promise<chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.setCustomObjectFormatterEnabled = function(params) {};

/**
  * Terminate current or next JavaScript execution.
 * Will cancel the termination when the outer-most script execution ends.
  *
  * @return {!Promise<chromium.DevTools.Runtime.TerminateExecutionResult>}
  */
chromium.DevTools.ExperimentalRuntime.prototype.terminateExecution = function() {};


/**
  * Issued when console API was called.
  *
  * @param {!function(!chromium.DevTools.Runtime.ConsoleAPICalledParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onConsoleAPICalled = function(listener) {};

/**
  * Issued when unhandled exception was revoked.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExceptionRevokedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onExceptionRevoked = function(listener) {};

/**
  * Issued when exception was thrown and unhandled.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExceptionThrownParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onExceptionThrown = function(listener) {};

/**
  * Issued when new execution context is created.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExecutionContextCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onExecutionContextCreated = function(listener) {};

/**
  * Issued when execution context is destroyed.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExecutionContextDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onExecutionContextDestroyed = function(listener) {};

/**
  * Issued when all executionContexts were cleared in browser
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onExecutionContextsCleared = function(listener) {};

/**
  * Issued when object should be inspected (for example, as a result of inspect() command line API
 * call).
  *
  * @param {!function(!chromium.DevTools.Runtime.InspectRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalRuntime.prototype.onInspectRequested = function(listener) {};



/**
  * Add handler to promise with given promise object id.
  *
  * @param {chromium.DevTools.Runtime.AwaitPromiseParams} params
  * @return {!Promise<chromium.DevTools.Runtime.AwaitPromiseResult>}
  */
chromium.DevTools.Runtime.prototype.awaitPromise = function(params) {};

/**
  * Calls function with given declaration on the given object. Object group of the result is
 * inherited from the target object.
  *
  * @param {chromium.DevTools.Runtime.CallFunctionOnParams} params
  * @return {!Promise<chromium.DevTools.Runtime.CallFunctionOnResult>}
  */
chromium.DevTools.Runtime.prototype.callFunctionOn = function(params) {};

/**
  * Compiles expression.
  *
  * @param {chromium.DevTools.Runtime.CompileScriptParams} params
  * @return {!Promise<chromium.DevTools.Runtime.CompileScriptResult>}
  */
chromium.DevTools.Runtime.prototype.compileScript = function(params) {};

/**
  * Disables reporting of execution contexts creation.
  *
  * @return {!Promise<chromium.DevTools.Runtime.DisableResult>}
  */
chromium.DevTools.Runtime.prototype.disable = function() {};

/**
  * Discards collected exceptions and console API calls.
  *
  * @return {!Promise<chromium.DevTools.Runtime.DiscardConsoleEntriesResult>}
  */
chromium.DevTools.Runtime.prototype.discardConsoleEntries = function() {};

/**
  * Enables reporting of execution contexts creation by means of `executionContextCreated` event.
 * When the reporting gets enabled the event will be sent immediately for each existing execution
 * context.
  *
  * @return {!Promise<chromium.DevTools.Runtime.EnableResult>}
  */
chromium.DevTools.Runtime.prototype.enable = function() {};

/**
  * Evaluates expression on global object.
  *
  * @param {chromium.DevTools.Runtime.EvaluateParams} params
  * @return {!Promise<chromium.DevTools.Runtime.EvaluateResult>}
  */
chromium.DevTools.Runtime.prototype.evaluate = function(params) {};

/**
  * Returns the isolate id.
  *
  * @return {!Promise<chromium.DevTools.Runtime.GetIsolateIdResult>}
  */
chromium.DevTools.Runtime.prototype.getIsolateId = function() {};

/**
  * Returns the JavaScript heap usage.
 * It is the total usage of the corresponding isolate not scoped to a particular Runtime.
  *
  * @return {!Promise<chromium.DevTools.Runtime.GetHeapUsageResult>}
  */
chromium.DevTools.Runtime.prototype.getHeapUsage = function() {};

/**
  * Returns properties of a given object. Object group of the result is inherited from the target
 * object.
  *
  * @param {chromium.DevTools.Runtime.GetPropertiesParams} params
  * @return {!Promise<chromium.DevTools.Runtime.GetPropertiesResult>}
  */
chromium.DevTools.Runtime.prototype.getProperties = function(params) {};

/**
  * Returns all let, const and class variables from global scope.
  *
  * @param {chromium.DevTools.Runtime.GlobalLexicalScopeNamesParams=} opt_params
  * @return {!Promise<chromium.DevTools.Runtime.GlobalLexicalScopeNamesResult>}
  */
chromium.DevTools.Runtime.prototype.globalLexicalScopeNames = function(opt_params) {};

/**
  * @param {chromium.DevTools.Runtime.QueryObjectsParams} params
  * @return {!Promise<chromium.DevTools.Runtime.QueryObjectsResult>}
  */
chromium.DevTools.Runtime.prototype.queryObjects = function(params) {};

/**
  * Releases remote object with given id.
  *
  * @param {chromium.DevTools.Runtime.ReleaseObjectParams} params
  * @return {!Promise<chromium.DevTools.Runtime.ReleaseObjectResult>}
  */
chromium.DevTools.Runtime.prototype.releaseObject = function(params) {};

/**
  * Releases all remote objects that belong to a given group.
  *
  * @param {chromium.DevTools.Runtime.ReleaseObjectGroupParams} params
  * @return {!Promise<chromium.DevTools.Runtime.ReleaseObjectGroupResult>}
  */
chromium.DevTools.Runtime.prototype.releaseObjectGroup = function(params) {};

/**
  * Tells inspected instance to run if it was waiting for debugger to attach.
  *
  * @return {!Promise<chromium.DevTools.Runtime.RunIfWaitingForDebuggerResult>}
  */
chromium.DevTools.Runtime.prototype.runIfWaitingForDebugger = function() {};

/**
  * Runs script with given id in a given context.
  *
  * @param {chromium.DevTools.Runtime.RunScriptParams} params
  * @return {!Promise<chromium.DevTools.Runtime.RunScriptResult>}
  */
chromium.DevTools.Runtime.prototype.runScript = function(params) {};

/**
  * @param {chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledParams} params
  * @return {!Promise<chromium.DevTools.Runtime.SetCustomObjectFormatterEnabledResult>}
  */
chromium.DevTools.Runtime.prototype.setCustomObjectFormatterEnabled = function(params) {};

/**
  * Terminate current or next JavaScript execution.
 * Will cancel the termination when the outer-most script execution ends.
  *
  * @return {!Promise<chromium.DevTools.Runtime.TerminateExecutionResult>}
  */
chromium.DevTools.Runtime.prototype.terminateExecution = function() {};


/**
  * Issued when console API was called.
  *
  * @param {!function(!chromium.DevTools.Runtime.ConsoleAPICalledParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onConsoleAPICalled = function(listener) {};

/**
  * Issued when unhandled exception was revoked.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExceptionRevokedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onExceptionRevoked = function(listener) {};

/**
  * Issued when exception was thrown and unhandled.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExceptionThrownParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onExceptionThrown = function(listener) {};

/**
  * Issued when new execution context is created.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExecutionContextCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onExecutionContextCreated = function(listener) {};

/**
  * Issued when execution context is destroyed.
  *
  * @param {!function(!chromium.DevTools.Runtime.ExecutionContextDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onExecutionContextDestroyed = function(listener) {};

/**
  * Issued when all executionContexts were cleared in browser
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onExecutionContextsCleared = function(listener) {};

/**
  * Issued when object should be inspected (for example, as a result of inspect() command line API
 * call).
  *
  * @param {!function(!chromium.DevTools.Runtime.InspectRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Runtime.prototype.onInspectRequested = function(listener) {};

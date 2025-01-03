// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Debugger Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDebugger');
goog.provide('chromium.DevTools.Debugger');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the Debugger DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDebugger = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDebugger = chromium.DevTools.ExperimentalDebugger;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDebugger.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Debugger DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Debugger = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDebugger} */
  this.experimental = new ExperimentalDebugger(connection);
}

const Debugger = chromium.DevTools.Debugger;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Debugger.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Scope type.
 *
 * @enum {string}
 */
Debugger.ScopeType = {
    GLOBAL: "global",
    LOCAL: "local",
    WITH: "with",
    CLOSURE: "closure",
    CATCH: "catch",
    BLOCK: "block",
    SCRIPT: "script",
    EVAL: "eval",
    MODULE: "module"
};

/**
 * @enum {string}
 */
Debugger.BreakLocationType = {
    DEBUGGER_STATEMENT: "debuggerStatement",
    CALL: "call",
    RETURN: "return"
};

/**
 * @enum {string}
 */
Debugger.ContinueToLocationTargetCallFrames = {
    ANY: "any",
    CURRENT: "current"
};

/**
 * Pause on exceptions mode.
 *
 * @enum {string}
 */
Debugger.SetPauseOnExceptionsState = {
    NONE: "none",
    UNCAUGHT: "uncaught",
    ALL: "all"
};

/**
 * Pause reason.
 *
 * @enum {string}
 */
Debugger.PausedReason = {
    XHR: "XHR",
    DOM: "DOM",
    EVENT_LISTENER: "EventListener",
    EXCEPTION: "exception",
    ASSERT: "assert",
    DEBUG_COMMAND: "debugCommand",
    PROMISE_REJECTION: "promiseRejection",
    OOM: "OOM",
    OTHER: "other",
    AMBIGUOUS: "ambiguous"
};


/**
 * Location in the source code.
 *
 * scriptId: Script identifier as reported in the `Debugger.scriptParsed`.
 * lineNumber: Line number in the script (0-based).
 * columnNumber: Column number in the script (0-based).
 *
 * @typedef {{
 *   scriptId: string,
 *   lineNumber: number,
 *   columnNumber: (number|undefined)
 * }}
 */
Debugger.Location;

/**
 * Location in the source code.
 *
 *
 * @typedef {{
 *   lineNumber: number,
 *   columnNumber: number
 * }}
 */
Debugger.ScriptPosition;

/**
 * JavaScript call frame. Array of call frames form the call stack.
 *
 * callFrameId: Call frame identifier. This identifier is only valid while the virtual machine is paused.
 * functionName: Name of the JavaScript function called on this call frame.
 * functionLocation: Location in the source code.
 * location: Location in the source code.
 * url: JavaScript script name or url.
 * scopeChain: Scope chain for this call frame.
 * this: `this` object for this call frame.
 * returnValue: The value being returned, if the function is at return point.
 *
 * @typedef {{
 *   callFrameId: string,
 *   functionName: string,
 *   functionLocation: (!Debugger.Location|undefined),
 *   location: !Debugger.Location,
 *   url: string,
 *   scopeChain: !Array.<!Debugger.Scope>,
 *   this: !Runtime.RemoteObject,
 *   returnValue: (!Runtime.RemoteObject|undefined)
 * }}
 */
Debugger.CallFrame;

/**
 * Scope description.
 *
 * type: Scope type.
 * object: Object representing the scope. For `global` and `with` scopes it represents the actual
 *   object; for the rest of the scopes, it is artificial transient object enumerating scope
 *   variables as its properties.
 * startLocation: Location in the source code where scope starts
 * endLocation: Location in the source code where scope ends
 *
 * @typedef {{
 *   type: !Debugger.ScopeType,
 *   object: !Runtime.RemoteObject,
 *   name: (string|undefined),
 *   startLocation: (!Debugger.Location|undefined),
 *   endLocation: (!Debugger.Location|undefined)
 * }}
 */
Debugger.Scope;

/**
 * Search match for resource.
 *
 * lineNumber: Line number in resource content.
 * lineContent: Line with match content.
 *
 * @typedef {{
 *   lineNumber: number,
 *   lineContent: string
 * }}
 */
Debugger.SearchMatch;

/**
 * scriptId: Script identifier as reported in the `Debugger.scriptParsed`.
 * lineNumber: Line number in the script (0-based).
 * columnNumber: Column number in the script (0-based).
 *
 * @typedef {{
 *   scriptId: string,
 *   lineNumber: number,
 *   columnNumber: (number|undefined),
 *   type: (!Debugger.BreakLocationType|undefined)
 * }}
 */
Debugger.BreakLocation;

/**
 * Parameters for the ContinueToLocation command.
 *
 * location: Location to continue to.
 *
 * @typedef {{
 *   location: !Debugger.Location,
 *   targetCallFrames: (!Debugger.ContinueToLocationTargetCallFrames|undefined)
 * }}
 */
Debugger.ContinueToLocationParams;

/**
 * Result for the ContinueToLocation command.
 *
 *
 * @typedef {undefined}
 */
Debugger.ContinueToLocationResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Debugger.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Debugger.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Debugger.EnableParams;

/**
 * Result for the Enable command.
 *
 * debuggerId: Unique identifier of the debugger.
 *
 * @typedef {{
 *   debuggerId: string
 * }}
 */
Debugger.EnableResult;

/**
 * Parameters for the EvaluateOnCallFrame command.
 *
 * callFrameId: Call frame identifier to evaluate on.
 * expression: Expression to evaluate.
 * objectGroup: String object group name to put result into (allows rapid releasing resulting object handles
 *   using `releaseObjectGroup`).
 * includeCommandLineAPI: Specifies whether command line API should be available to the evaluated expression, defaults
 *   to false.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *   execution. Overrides `setPauseOnException` state.
 * returnByValue: Whether the result is expected to be a JSON object that should be sent by value.
 * generatePreview: Whether preview should be generated for the result.
 * throwOnSideEffect: Whether to throw an exception if side effect cannot be ruled out during evaluation.
 * timeout: Terminate execution after timing out (number of milliseconds).
 *
 * @typedef {{
 *   callFrameId: string,
 *   expression: string,
 *   objectGroup: (string|undefined),
 *   includeCommandLineAPI: (boolean|undefined),
 *   silent: (boolean|undefined),
 *   returnByValue: (boolean|undefined),
 *   generatePreview: (boolean|undefined),
 *   throwOnSideEffect: (boolean|undefined),
 *   timeout: (number|undefined)
 * }}
 */
Debugger.EvaluateOnCallFrameParams;

/**
 * Result for the EvaluateOnCallFrame command.
 *
 * result: Object wrapper for the evaluation result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject,
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Debugger.EvaluateOnCallFrameResult;

/**
 * Parameters for the GetPossibleBreakpoints command.
 *
 * start: Start of range to search possible breakpoint locations in.
 * end: End of range to search possible breakpoint locations in (excluding). When not specified, end
 *   of scripts is used as end of range.
 * restrictToFunction: Only consider locations which are in the same (non-nested) function as start.
 *
 * @typedef {{
 *   start: !Debugger.Location,
 *   end: (!Debugger.Location|undefined),
 *   restrictToFunction: (boolean|undefined)
 * }}
 */
Debugger.GetPossibleBreakpointsParams;

/**
 * Result for the GetPossibleBreakpoints command.
 *
 * locations: List of the possible breakpoint locations.
 *
 * @typedef {{
 *   locations: !Array.<!Debugger.BreakLocation>
 * }}
 */
Debugger.GetPossibleBreakpointsResult;

/**
 * Parameters for the GetScriptSource command.
 *
 * scriptId: Id of the script to get source for.
 *
 * @typedef {{
 *   scriptId: string
 * }}
 */
Debugger.GetScriptSourceParams;

/**
 * Result for the GetScriptSource command.
 *
 * scriptSource: Script source.
 *
 * @typedef {{
 *   scriptSource: string
 * }}
 */
Debugger.GetScriptSourceResult;

/**
 * Parameters for the GetStackTrace command.
 *
 *
 * @typedef {{
 *   stackTraceId: !Runtime.StackTraceId
 * }}
 */
Debugger.GetStackTraceParams;

/**
 * Result for the GetStackTrace command.
 *
 *
 * @typedef {{
 *   stackTrace: !Runtime.StackTrace
 * }}
 */
Debugger.GetStackTraceResult;

/**
 * Parameters for the Pause command.
 *
 *
 * @typedef {undefined}
 */
Debugger.PauseParams;

/**
 * Result for the Pause command.
 *
 *
 * @typedef {undefined}
 */
Debugger.PauseResult;

/**
 * Parameters for the PauseOnAsyncCall command.
 *
 * parentStackTraceId: Debugger will pause when async call with given stack trace is started.
 *
 * @typedef {{
 *   parentStackTraceId: !Runtime.StackTraceId
 * }}
 */
Debugger.PauseOnAsyncCallParams;

/**
 * Result for the PauseOnAsyncCall command.
 *
 *
 * @typedef {undefined}
 */
Debugger.PauseOnAsyncCallResult;

/**
 * Parameters for the RemoveBreakpoint command.
 *
 *
 * @typedef {{
 *   breakpointId: string
 * }}
 */
Debugger.RemoveBreakpointParams;

/**
 * Result for the RemoveBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
Debugger.RemoveBreakpointResult;

/**
 * Parameters for the RestartFrame command.
 *
 * callFrameId: Call frame identifier to evaluate on.
 *
 * @typedef {{
 *   callFrameId: string
 * }}
 */
Debugger.RestartFrameParams;

/**
 * Result for the RestartFrame command.
 *
 * callFrames: New stack trace.
 * asyncStackTrace: Async stack trace, if any.
 * asyncStackTraceId: Async stack trace, if any.
 *
 * @typedef {{
 *   callFrames: !Array.<!Debugger.CallFrame>,
 *   asyncStackTrace: (!Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!Runtime.StackTraceId|undefined)
 * }}
 */
Debugger.RestartFrameResult;

/**
 * Parameters for the Resume command.
 *
 *
 * @typedef {undefined}
 */
Debugger.ResumeParams;

/**
 * Result for the Resume command.
 *
 *
 * @typedef {undefined}
 */
Debugger.ResumeResult;

/**
 * Parameters for the ScheduleStepIntoAsync command.
 *
 *
 * @typedef {undefined}
 */
Debugger.ScheduleStepIntoAsyncParams;

/**
 * Result for the ScheduleStepIntoAsync command.
 *
 *
 * @typedef {undefined}
 */
Debugger.ScheduleStepIntoAsyncResult;

/**
 * Parameters for the SearchInContent command.
 *
 * scriptId: Id of the script to search in.
 * query: String to search for.
 * caseSensitive: If true, search is case sensitive.
 * isRegex: If true, treats string parameter as regex.
 *
 * @typedef {{
 *   scriptId: string,
 *   query: string,
 *   caseSensitive: (boolean|undefined),
 *   isRegex: (boolean|undefined)
 * }}
 */
Debugger.SearchInContentParams;

/**
 * Result for the SearchInContent command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!Debugger.SearchMatch>
 * }}
 */
Debugger.SearchInContentResult;

/**
 * Parameters for the SetAsyncCallStackDepth command.
 *
 * maxDepth: Maximum depth of async call stacks. Setting to `0` will effectively disable collecting async
 *   call stacks (default).
 *
 * @typedef {{
 *   maxDepth: number
 * }}
 */
Debugger.SetAsyncCallStackDepthParams;

/**
 * Result for the SetAsyncCallStackDepth command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetAsyncCallStackDepthResult;

/**
 * Parameters for the SetBlackboxPatterns command.
 *
 * patterns: Array of regexps that will be used to check script url for blackbox state.
 *
 * @typedef {{
 *   patterns: !Array.<string>
 * }}
 */
Debugger.SetBlackboxPatternsParams;

/**
 * Result for the SetBlackboxPatterns command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetBlackboxPatternsResult;

/**
 * Parameters for the SetBlackboxedRanges command.
 *
 * scriptId: Id of the script.
 *
 * @typedef {{
 *   scriptId: string,
 *   positions: !Array.<!Debugger.ScriptPosition>
 * }}
 */
Debugger.SetBlackboxedRangesParams;

/**
 * Result for the SetBlackboxedRanges command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetBlackboxedRangesResult;

/**
 * Parameters for the SetBreakpoint command.
 *
 * location: Location to set breakpoint in.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will only stop on the
 *   breakpoint if this expression evaluates to true.
 *
 * @typedef {{
 *   location: !Debugger.Location,
 *   condition: (string|undefined)
 * }}
 */
Debugger.SetBreakpointParams;

/**
 * Result for the SetBreakpoint command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 * actualLocation: Location this breakpoint resolved into.
 *
 * @typedef {{
 *   breakpointId: string,
 *   actualLocation: !Debugger.Location
 * }}
 */
Debugger.SetBreakpointResult;

/**
 * Parameters for the SetBreakpointByUrl command.
 *
 * lineNumber: Line number to set breakpoint at.
 * url: URL of the resources to set breakpoint on.
 * urlRegex: Regex pattern for the URLs of the resources to set breakpoints on. Either `url` or
 *   `urlRegex` must be specified.
 * scriptHash: Script hash of the resources to set breakpoint on.
 * columnNumber: Offset in the line to set breakpoint at.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will only stop on the
 *   breakpoint if this expression evaluates to true.
 *
 * @typedef {{
 *   lineNumber: number,
 *   url: (string|undefined),
 *   urlRegex: (string|undefined),
 *   scriptHash: (string|undefined),
 *   columnNumber: (number|undefined),
 *   condition: (string|undefined)
 * }}
 */
Debugger.SetBreakpointByUrlParams;

/**
 * Result for the SetBreakpointByUrl command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 * locations: List of the locations this breakpoint resolved into upon addition.
 *
 * @typedef {{
 *   breakpointId: string,
 *   locations: !Array.<!Debugger.Location>
 * }}
 */
Debugger.SetBreakpointByUrlResult;

/**
 * Parameters for the SetBreakpointOnFunctionCall command.
 *
 * objectId: Function object id.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will
 *   stop on the breakpoint if this expression evaluates to true.
 *
 * @typedef {{
 *   objectId: string,
 *   condition: (string|undefined)
 * }}
 */
Debugger.SetBreakpointOnFunctionCallParams;

/**
 * Result for the SetBreakpointOnFunctionCall command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 *
 * @typedef {{
 *   breakpointId: string
 * }}
 */
Debugger.SetBreakpointOnFunctionCallResult;

/**
 * Parameters for the SetBreakpointsActive command.
 *
 * active: New value for breakpoints active state.
 *
 * @typedef {{
 *   active: boolean
 * }}
 */
Debugger.SetBreakpointsActiveParams;

/**
 * Result for the SetBreakpointsActive command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetBreakpointsActiveResult;

/**
 * Parameters for the SetPauseOnExceptions command.
 *
 * state: Pause on exceptions mode.
 *
 * @typedef {{
 *   state: !Debugger.SetPauseOnExceptionsState
 * }}
 */
Debugger.SetPauseOnExceptionsParams;

/**
 * Result for the SetPauseOnExceptions command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetPauseOnExceptionsResult;

/**
 * Parameters for the SetReturnValue command.
 *
 * newValue: New return value.
 *
 * @typedef {{
 *   newValue: !Runtime.CallArgument
 * }}
 */
Debugger.SetReturnValueParams;

/**
 * Result for the SetReturnValue command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetReturnValueResult;

/**
 * Parameters for the SetScriptSource command.
 *
 * scriptId: Id of the script to edit.
 * scriptSource: New content of the script.
 * dryRun: If true the change will not actually be applied. Dry run may be used to get result
 *   description without actually modifying the code.
 *
 * @typedef {{
 *   scriptId: string,
 *   scriptSource: string,
 *   dryRun: (boolean|undefined)
 * }}
 */
Debugger.SetScriptSourceParams;

/**
 * Result for the SetScriptSource command.
 *
 * callFrames: New stack trace in case editing has happened while VM was stopped.
 * stackChanged: Whether current call stack  was modified after applying the changes.
 * asyncStackTrace: Async stack trace, if any.
 * asyncStackTraceId: Async stack trace, if any.
 * exceptionDetails: Exception details if any.
 *
 * @typedef {{
 *   callFrames: (!Array.<!Debugger.CallFrame>|undefined),
 *   stackChanged: (boolean|undefined),
 *   asyncStackTrace: (!Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!Runtime.StackTraceId|undefined),
 *   exceptionDetails: (!Runtime.ExceptionDetails|undefined)
 * }}
 */
Debugger.SetScriptSourceResult;

/**
 * Parameters for the SetSkipAllPauses command.
 *
 * skip: New value for skip pauses state.
 *
 * @typedef {{
 *   skip: boolean
 * }}
 */
Debugger.SetSkipAllPausesParams;

/**
 * Result for the SetSkipAllPauses command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetSkipAllPausesResult;

/**
 * Parameters for the SetVariableValue command.
 *
 * scopeNumber: 0-based number of scope as was listed in scope chain. Only 'local', 'closure' and 'catch'
 *   scope types are allowed. Other scopes could be manipulated manually.
 * variableName: Variable name.
 * newValue: New variable value.
 * callFrameId: Id of callframe that holds variable.
 *
 * @typedef {{
 *   scopeNumber: number,
 *   variableName: string,
 *   newValue: !Runtime.CallArgument,
 *   callFrameId: string
 * }}
 */
Debugger.SetVariableValueParams;

/**
 * Result for the SetVariableValue command.
 *
 *
 * @typedef {undefined}
 */
Debugger.SetVariableValueResult;

/**
 * Parameters for the StepInto command.
 *
 * breakOnAsyncCall: Debugger will issue additional Debugger.paused notification if any async task is scheduled
 *   before next pause.
 *
 * @typedef {{
 *   breakOnAsyncCall: (boolean|undefined)
 * }}
 */
Debugger.StepIntoParams;

/**
 * Result for the StepInto command.
 *
 *
 * @typedef {undefined}
 */
Debugger.StepIntoResult;

/**
 * Parameters for the StepOut command.
 *
 *
 * @typedef {undefined}
 */
Debugger.StepOutParams;

/**
 * Result for the StepOut command.
 *
 *
 * @typedef {undefined}
 */
Debugger.StepOutResult;

/**
 * Parameters for the StepOver command.
 *
 *
 * @typedef {undefined}
 */
Debugger.StepOverParams;

/**
 * Result for the StepOver command.
 *
 *
 * @typedef {undefined}
 */
Debugger.StepOverResult;

/**
 * Parameters for the BreakpointResolved event.
 *
 * breakpointId: Breakpoint unique identifier.
 * location: Actual breakpoint location.
 *
 * @typedef {{
 *   breakpointId: string,
 *   location: !Debugger.Location
 * }}
 */
Debugger.BreakpointResolvedParams;

/**
 * Parameters for the Paused event.
 *
 * callFrames: Call stack the virtual machine stopped on.
 * reason: Pause reason.
 * data: Object containing break-specific auxiliary properties.
 * hitBreakpoints: Hit breakpoints IDs
 * asyncStackTrace: Async stack trace, if any.
 * asyncStackTraceId: Async stack trace, if any.
 * asyncCallStackTraceId: Just scheduled async call will have this stack trace as parent stack during async execution.
 *   This field is available only after `Debugger.stepInto` call with `breakOnAsynCall` flag.
 *
 * @typedef {{
 *   callFrames: !Array.<!Debugger.CallFrame>,
 *   reason: !Debugger.PausedReason,
 *   data: (!Object|undefined),
 *   hitBreakpoints: (!Array.<string>|undefined),
 *   asyncStackTrace: (!Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!Runtime.StackTraceId|undefined),
 *   asyncCallStackTraceId: (!Runtime.StackTraceId|undefined)
 * }}
 */
Debugger.PausedParams;

/**
 * Parameters for the Resumed event.
 *
 *
 * @typedef {undefined}
 */
Debugger.ResumedParams;

/**
 * Parameters for the ScriptFailedToParse event.
 *
 * scriptId: Identifier of the script parsed.
 * url: URL or name of the script parsed (if any).
 * startLine: Line offset of the script within the resource with given URL (for script tags).
 * startColumn: Column offset of the script within the resource with given URL.
 * endLine: Last line of the script.
 * endColumn: Length of the last line of the script.
 * executionContextId: Specifies script creation context.
 * hash: Content hash of the script.
 * executionContextAuxData: Embedder-specific auxiliary data.
 * sourceMapURL: URL of source map associated with script (if any).
 * hasSourceURL: True, if this script has sourceURL.
 * isModule: True, if this script is ES6 module.
 * length: This script length.
 * stackTrace: JavaScript top stack frame of where the script parsed event was triggered if available.
 *
 * @typedef {{
 *   scriptId: string,
 *   url: string,
 *   startLine: number,
 *   startColumn: number,
 *   endLine: number,
 *   endColumn: number,
 *   executionContextId: number,
 *   hash: string,
 *   executionContextAuxData: (!Object|undefined),
 *   sourceMapURL: (string|undefined),
 *   hasSourceURL: (boolean|undefined),
 *   isModule: (boolean|undefined),
 *   length: (number|undefined),
 *   stackTrace: (!Runtime.StackTrace|undefined)
 * }}
 */
Debugger.ScriptFailedToParseParams;

/**
 * Parameters for the ScriptParsed event.
 *
 * scriptId: Identifier of the script parsed.
 * url: URL or name of the script parsed (if any).
 * startLine: Line offset of the script within the resource with given URL (for script tags).
 * startColumn: Column offset of the script within the resource with given URL.
 * endLine: Last line of the script.
 * endColumn: Length of the last line of the script.
 * executionContextId: Specifies script creation context.
 * hash: Content hash of the script.
 * executionContextAuxData: Embedder-specific auxiliary data.
 * isLiveEdit: True, if this script is generated as a result of the live edit operation.
 * sourceMapURL: URL of source map associated with script (if any).
 * hasSourceURL: True, if this script has sourceURL.
 * isModule: True, if this script is ES6 module.
 * length: This script length.
 * stackTrace: JavaScript top stack frame of where the script parsed event was triggered if available.
 *
 * @typedef {{
 *   scriptId: string,
 *   url: string,
 *   startLine: number,
 *   startColumn: number,
 *   endLine: number,
 *   endColumn: number,
 *   executionContextId: number,
 *   hash: string,
 *   executionContextAuxData: (!Object|undefined),
 *   isLiveEdit: (boolean|undefined),
 *   sourceMapURL: (string|undefined),
 *   hasSourceURL: (boolean|undefined),
 *   isModule: (boolean|undefined),
 *   length: (number|undefined),
 *   stackTrace: (!Runtime.StackTrace|undefined)
 * }}
 */
Debugger.ScriptParsedParams;



/**
  * Continues execution until specific location is reached.
  *
  * @param {Debugger.ContinueToLocationParams} params
  * @return {!Promise<Debugger.ContinueToLocationResult>}
  */
ExperimentalDebugger.prototype.continueToLocation = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.continueToLocation', params);
};

/**
  * Disables debugger for given page.
  *
  * @return {!Promise<Debugger.DisableResult>}
  */
ExperimentalDebugger.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Debugger.disable', {});
};

/**
  * Enables debugger for the given page. Clients should not assume that the debugging has been
 * enabled until the result for this command is received.
  *
  * @return {!Promise<Debugger.EnableResult>}
  */
ExperimentalDebugger.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Debugger.enable', {});
};

/**
  * Evaluates expression on a given call frame.
  *
  * @param {Debugger.EvaluateOnCallFrameParams} params
  * @return {!Promise<Debugger.EvaluateOnCallFrameResult>}
  */
ExperimentalDebugger.prototype.evaluateOnCallFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.evaluateOnCallFrame', params);
};

/**
  * Returns possible locations for breakpoint. scriptId in start and end range locations should be
 * the same.
  *
  * @param {Debugger.GetPossibleBreakpointsParams} params
  * @return {!Promise<Debugger.GetPossibleBreakpointsResult>}
  */
ExperimentalDebugger.prototype.getPossibleBreakpoints = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getPossibleBreakpoints', params);
};

/**
  * Returns source for the script with given id.
  *
  * @param {Debugger.GetScriptSourceParams} params
  * @return {!Promise<Debugger.GetScriptSourceResult>}
  */
ExperimentalDebugger.prototype.getScriptSource = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getScriptSource', params);
};

/**
  * Returns stack trace with given `stackTraceId`.
  *
  * @param {Debugger.GetStackTraceParams} params
  * @return {!Promise<Debugger.GetStackTraceResult>}
  */
ExperimentalDebugger.prototype.getStackTrace = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getStackTrace', params);
};

/**
  * Stops on the next JavaScript statement.
  *
  * @return {!Promise<Debugger.PauseResult>}
  */
ExperimentalDebugger.prototype.pause = function() {
  return this.connection_.sendDevToolsMessage('Debugger.pause', {});
};

/**
  * @param {Debugger.PauseOnAsyncCallParams} params
  * @return {!Promise<Debugger.PauseOnAsyncCallResult>}
  */
ExperimentalDebugger.prototype.pauseOnAsyncCall = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.pauseOnAsyncCall', params);
};

/**
  * Removes JavaScript breakpoint.
  *
  * @param {Debugger.RemoveBreakpointParams} params
  * @return {!Promise<Debugger.RemoveBreakpointResult>}
  */
ExperimentalDebugger.prototype.removeBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.removeBreakpoint', params);
};

/**
  * Restarts particular call frame from the beginning.
  *
  * @param {Debugger.RestartFrameParams} params
  * @return {!Promise<Debugger.RestartFrameResult>}
  */
ExperimentalDebugger.prototype.restartFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.restartFrame', params);
};

/**
  * Resumes JavaScript execution.
  *
  * @return {!Promise<Debugger.ResumeResult>}
  */
ExperimentalDebugger.prototype.resume = function() {
  return this.connection_.sendDevToolsMessage('Debugger.resume', {});
};

/**
  * This method is deprecated - use Debugger.stepInto with breakOnAsyncCall and
 * Debugger.pauseOnAsyncTask instead. Steps into next scheduled async task if any is scheduled
 * before next pause. Returns success when async task is actually scheduled, returns error if no
 * task were scheduled or another scheduleStepIntoAsync was called.
  *
  * @return {!Promise<Debugger.ScheduleStepIntoAsyncResult>}
  */
ExperimentalDebugger.prototype.scheduleStepIntoAsync = function() {
  return this.connection_.sendDevToolsMessage('Debugger.scheduleStepIntoAsync', {});
};

/**
  * Searches for given string in script content.
  *
  * @param {Debugger.SearchInContentParams} params
  * @return {!Promise<Debugger.SearchInContentResult>}
  */
ExperimentalDebugger.prototype.searchInContent = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.searchInContent', params);
};

/**
  * Enables or disables async call stacks tracking.
  *
  * @param {Debugger.SetAsyncCallStackDepthParams} params
  * @return {!Promise<Debugger.SetAsyncCallStackDepthResult>}
  */
ExperimentalDebugger.prototype.setAsyncCallStackDepth = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setAsyncCallStackDepth', params);
};

/**
  * Replace previous blackbox patterns with passed ones. Forces backend to skip stepping/pausing in
 * scripts with url matching one of the patterns. VM will try to leave blackboxed script by
 * performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
  *
  * @param {Debugger.SetBlackboxPatternsParams} params
  * @return {!Promise<Debugger.SetBlackboxPatternsResult>}
  */
ExperimentalDebugger.prototype.setBlackboxPatterns = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBlackboxPatterns', params);
};

/**
  * Makes backend skip steps in the script in blackboxed ranges. VM will try leave blacklisted
 * scripts by performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
 * Positions array contains positions where blackbox state is changed. First interval isn't
 * blackboxed. Array should be sorted.
  *
  * @param {Debugger.SetBlackboxedRangesParams} params
  * @return {!Promise<Debugger.SetBlackboxedRangesResult>}
  */
ExperimentalDebugger.prototype.setBlackboxedRanges = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBlackboxedRanges', params);
};

/**
  * Sets JavaScript breakpoint at a given location.
  *
  * @param {Debugger.SetBreakpointParams} params
  * @return {!Promise<Debugger.SetBreakpointResult>}
  */
ExperimentalDebugger.prototype.setBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpoint', params);
};

/**
  * Sets JavaScript breakpoint at given location specified either by URL or URL regex. Once this
 * command is issued, all existing parsed scripts will have breakpoints resolved and returned in
 * `locations` property. Further matching script parsing will result in subsequent
 * `breakpointResolved` events issued. This logical breakpoint will survive page reloads.
  *
  * @param {Debugger.SetBreakpointByUrlParams} params
  * @return {!Promise<Debugger.SetBreakpointByUrlResult>}
  */
ExperimentalDebugger.prototype.setBreakpointByUrl = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointByUrl', params);
};

/**
  * Sets JavaScript breakpoint before each call to the given function.
 * If another function was created from the same source as a given one,
 * calling it will also trigger the breakpoint.
  *
  * @param {Debugger.SetBreakpointOnFunctionCallParams} params
  * @return {!Promise<Debugger.SetBreakpointOnFunctionCallResult>}
  */
ExperimentalDebugger.prototype.setBreakpointOnFunctionCall = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointOnFunctionCall', params);
};

/**
  * Activates / deactivates all breakpoints on the page.
  *
  * @param {Debugger.SetBreakpointsActiveParams} params
  * @return {!Promise<Debugger.SetBreakpointsActiveResult>}
  */
ExperimentalDebugger.prototype.setBreakpointsActive = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointsActive', params);
};

/**
  * Defines pause on exceptions state. Can be set to stop on all exceptions, uncaught exceptions or
 * no exceptions. Initial pause on exceptions state is `none`.
  *
  * @param {Debugger.SetPauseOnExceptionsParams} params
  * @return {!Promise<Debugger.SetPauseOnExceptionsResult>}
  */
ExperimentalDebugger.prototype.setPauseOnExceptions = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setPauseOnExceptions', params);
};

/**
  * Changes return value in top frame. Available only at return break position.
  *
  * @param {Debugger.SetReturnValueParams} params
  * @return {!Promise<Debugger.SetReturnValueResult>}
  */
ExperimentalDebugger.prototype.setReturnValue = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setReturnValue', params);
};

/**
  * Edits JavaScript source live.
  *
  * @param {Debugger.SetScriptSourceParams} params
  * @return {!Promise<Debugger.SetScriptSourceResult>}
  */
ExperimentalDebugger.prototype.setScriptSource = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setScriptSource', params);
};

/**
  * Makes page not interrupt on any pauses (breakpoint, exception, dom exception etc).
  *
  * @param {Debugger.SetSkipAllPausesParams} params
  * @return {!Promise<Debugger.SetSkipAllPausesResult>}
  */
ExperimentalDebugger.prototype.setSkipAllPauses = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setSkipAllPauses', params);
};

/**
  * Changes value of variable in a callframe. Object-based scopes are not supported and must be
 * mutated manually.
  *
  * @param {Debugger.SetVariableValueParams} params
  * @return {!Promise<Debugger.SetVariableValueResult>}
  */
ExperimentalDebugger.prototype.setVariableValue = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setVariableValue', params);
};

/**
  * Steps into the function call.
  *
  * @param {Debugger.StepIntoParams=} opt_params
  * @return {!Promise<Debugger.StepIntoResult>}
  */
ExperimentalDebugger.prototype.stepInto = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Debugger.stepInto', opt_params || {});
};

/**
  * Steps out of the function call.
  *
  * @return {!Promise<Debugger.StepOutResult>}
  */
ExperimentalDebugger.prototype.stepOut = function() {
  return this.connection_.sendDevToolsMessage('Debugger.stepOut', {});
};

/**
  * Steps over the statement.
  *
  * @return {!Promise<Debugger.StepOverResult>}
  */
ExperimentalDebugger.prototype.stepOver = function() {
  return this.connection_.sendDevToolsMessage('Debugger.stepOver', {});
};


/**
  * Fired when breakpoint is resolved to an actual script and location.
  *
  * @param {!function(!Debugger.BreakpointResolvedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDebugger.prototype.onBreakpointResolved = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.breakpointResolved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the virtual machine stopped on breakpoint or exception or any other stop criteria.
  *
  * @param {!function(!Debugger.PausedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDebugger.prototype.onPaused = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.paused', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the virtual machine resumed execution.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDebugger.prototype.onResumed = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.resumed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when virtual machine fails to parse the script.
  *
  * @param {!function(!Debugger.ScriptFailedToParseParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDebugger.prototype.onScriptFailedToParse = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.scriptFailedToParse', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when virtual machine parses script. This event is also fired for all known and uncollected
 * scripts upon enabling debugger.
  *
  * @param {!function(!Debugger.ScriptParsedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDebugger.prototype.onScriptParsed = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.scriptParsed', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Continues execution until specific location is reached.
  *
  * @param {Debugger.ContinueToLocationParams} params
  * @return {!Promise<Debugger.ContinueToLocationResult>}
  */
Debugger.prototype.continueToLocation = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.continueToLocation', params);
};

/**
  * Disables debugger for given page.
  *
  * @return {!Promise<Debugger.DisableResult>}
  */
Debugger.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Debugger.disable', {});
};

/**
  * Enables debugger for the given page. Clients should not assume that the debugging has been
 * enabled until the result for this command is received.
  *
  * @return {!Promise<Debugger.EnableResult>}
  */
Debugger.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Debugger.enable', {});
};

/**
  * Evaluates expression on a given call frame.
  *
  * @param {Debugger.EvaluateOnCallFrameParams} params
  * @return {!Promise<Debugger.EvaluateOnCallFrameResult>}
  */
Debugger.prototype.evaluateOnCallFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.evaluateOnCallFrame', params);
};

/**
  * Returns possible locations for breakpoint. scriptId in start and end range locations should be
 * the same.
  *
  * @param {Debugger.GetPossibleBreakpointsParams} params
  * @return {!Promise<Debugger.GetPossibleBreakpointsResult>}
  */
Debugger.prototype.getPossibleBreakpoints = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getPossibleBreakpoints', params);
};

/**
  * Returns source for the script with given id.
  *
  * @param {Debugger.GetScriptSourceParams} params
  * @return {!Promise<Debugger.GetScriptSourceResult>}
  */
Debugger.prototype.getScriptSource = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getScriptSource', params);
};

/**
  * Returns stack trace with given `stackTraceId`.
  *
  * @param {Debugger.GetStackTraceParams} params
  * @return {!Promise<Debugger.GetStackTraceResult>}
  */
Debugger.prototype.getStackTrace = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.getStackTrace', params);
};

/**
  * Stops on the next JavaScript statement.
  *
  * @return {!Promise<Debugger.PauseResult>}
  */
Debugger.prototype.pause = function() {
  return this.connection_.sendDevToolsMessage('Debugger.pause', {});
};

/**
  * @param {Debugger.PauseOnAsyncCallParams} params
  * @return {!Promise<Debugger.PauseOnAsyncCallResult>}
  */
Debugger.prototype.pauseOnAsyncCall = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.pauseOnAsyncCall', params);
};

/**
  * Removes JavaScript breakpoint.
  *
  * @param {Debugger.RemoveBreakpointParams} params
  * @return {!Promise<Debugger.RemoveBreakpointResult>}
  */
Debugger.prototype.removeBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.removeBreakpoint', params);
};

/**
  * Restarts particular call frame from the beginning.
  *
  * @param {Debugger.RestartFrameParams} params
  * @return {!Promise<Debugger.RestartFrameResult>}
  */
Debugger.prototype.restartFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.restartFrame', params);
};

/**
  * Resumes JavaScript execution.
  *
  * @return {!Promise<Debugger.ResumeResult>}
  */
Debugger.prototype.resume = function() {
  return this.connection_.sendDevToolsMessage('Debugger.resume', {});
};

/**
  * This method is deprecated - use Debugger.stepInto with breakOnAsyncCall and
 * Debugger.pauseOnAsyncTask instead. Steps into next scheduled async task if any is scheduled
 * before next pause. Returns success when async task is actually scheduled, returns error if no
 * task were scheduled or another scheduleStepIntoAsync was called.
  *
  * @return {!Promise<Debugger.ScheduleStepIntoAsyncResult>}
  */
Debugger.prototype.scheduleStepIntoAsync = function() {
  return this.connection_.sendDevToolsMessage('Debugger.scheduleStepIntoAsync', {});
};

/**
  * Searches for given string in script content.
  *
  * @param {Debugger.SearchInContentParams} params
  * @return {!Promise<Debugger.SearchInContentResult>}
  */
Debugger.prototype.searchInContent = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.searchInContent', params);
};

/**
  * Enables or disables async call stacks tracking.
  *
  * @param {Debugger.SetAsyncCallStackDepthParams} params
  * @return {!Promise<Debugger.SetAsyncCallStackDepthResult>}
  */
Debugger.prototype.setAsyncCallStackDepth = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setAsyncCallStackDepth', params);
};

/**
  * Replace previous blackbox patterns with passed ones. Forces backend to skip stepping/pausing in
 * scripts with url matching one of the patterns. VM will try to leave blackboxed script by
 * performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
  *
  * @param {Debugger.SetBlackboxPatternsParams} params
  * @return {!Promise<Debugger.SetBlackboxPatternsResult>}
  */
Debugger.prototype.setBlackboxPatterns = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBlackboxPatterns', params);
};

/**
  * Makes backend skip steps in the script in blackboxed ranges. VM will try leave blacklisted
 * scripts by performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
 * Positions array contains positions where blackbox state is changed. First interval isn't
 * blackboxed. Array should be sorted.
  *
  * @param {Debugger.SetBlackboxedRangesParams} params
  * @return {!Promise<Debugger.SetBlackboxedRangesResult>}
  */
Debugger.prototype.setBlackboxedRanges = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBlackboxedRanges', params);
};

/**
  * Sets JavaScript breakpoint at a given location.
  *
  * @param {Debugger.SetBreakpointParams} params
  * @return {!Promise<Debugger.SetBreakpointResult>}
  */
Debugger.prototype.setBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpoint', params);
};

/**
  * Sets JavaScript breakpoint at given location specified either by URL or URL regex. Once this
 * command is issued, all existing parsed scripts will have breakpoints resolved and returned in
 * `locations` property. Further matching script parsing will result in subsequent
 * `breakpointResolved` events issued. This logical breakpoint will survive page reloads.
  *
  * @param {Debugger.SetBreakpointByUrlParams} params
  * @return {!Promise<Debugger.SetBreakpointByUrlResult>}
  */
Debugger.prototype.setBreakpointByUrl = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointByUrl', params);
};

/**
  * Sets JavaScript breakpoint before each call to the given function.
 * If another function was created from the same source as a given one,
 * calling it will also trigger the breakpoint.
  *
  * @param {Debugger.SetBreakpointOnFunctionCallParams} params
  * @return {!Promise<Debugger.SetBreakpointOnFunctionCallResult>}
  */
Debugger.prototype.setBreakpointOnFunctionCall = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointOnFunctionCall', params);
};

/**
  * Activates / deactivates all breakpoints on the page.
  *
  * @param {Debugger.SetBreakpointsActiveParams} params
  * @return {!Promise<Debugger.SetBreakpointsActiveResult>}
  */
Debugger.prototype.setBreakpointsActive = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setBreakpointsActive', params);
};

/**
  * Defines pause on exceptions state. Can be set to stop on all exceptions, uncaught exceptions or
 * no exceptions. Initial pause on exceptions state is `none`.
  *
  * @param {Debugger.SetPauseOnExceptionsParams} params
  * @return {!Promise<Debugger.SetPauseOnExceptionsResult>}
  */
Debugger.prototype.setPauseOnExceptions = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setPauseOnExceptions', params);
};

/**
  * Changes return value in top frame. Available only at return break position.
  *
  * @param {Debugger.SetReturnValueParams} params
  * @return {!Promise<Debugger.SetReturnValueResult>}
  */
Debugger.prototype.setReturnValue = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setReturnValue', params);
};

/**
  * Edits JavaScript source live.
  *
  * @param {Debugger.SetScriptSourceParams} params
  * @return {!Promise<Debugger.SetScriptSourceResult>}
  */
Debugger.prototype.setScriptSource = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setScriptSource', params);
};

/**
  * Makes page not interrupt on any pauses (breakpoint, exception, dom exception etc).
  *
  * @param {Debugger.SetSkipAllPausesParams} params
  * @return {!Promise<Debugger.SetSkipAllPausesResult>}
  */
Debugger.prototype.setSkipAllPauses = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setSkipAllPauses', params);
};

/**
  * Changes value of variable in a callframe. Object-based scopes are not supported and must be
 * mutated manually.
  *
  * @param {Debugger.SetVariableValueParams} params
  * @return {!Promise<Debugger.SetVariableValueResult>}
  */
Debugger.prototype.setVariableValue = function(params) {
  return this.connection_.sendDevToolsMessage('Debugger.setVariableValue', params);
};

/**
  * Steps into the function call.
  *
  * @param {Debugger.StepIntoParams=} opt_params
  * @return {!Promise<Debugger.StepIntoResult>}
  */
Debugger.prototype.stepInto = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Debugger.stepInto', opt_params || {});
};

/**
  * Steps out of the function call.
  *
  * @return {!Promise<Debugger.StepOutResult>}
  */
Debugger.prototype.stepOut = function() {
  return this.connection_.sendDevToolsMessage('Debugger.stepOut', {});
};

/**
  * Steps over the statement.
  *
  * @return {!Promise<Debugger.StepOverResult>}
  */
Debugger.prototype.stepOver = function() {
  return this.connection_.sendDevToolsMessage('Debugger.stepOver', {});
};


/**
  * Fired when breakpoint is resolved to an actual script and location.
  *
  * @param {!function(!Debugger.BreakpointResolvedParams)} listener
  * @return {number} The id of this event listener.
  */
Debugger.prototype.onBreakpointResolved = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.breakpointResolved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the virtual machine stopped on breakpoint or exception or any other stop criteria.
  *
  * @param {!function(!Debugger.PausedParams)} listener
  * @return {number} The id of this event listener.
  */
Debugger.prototype.onPaused = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.paused', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the virtual machine resumed execution.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Debugger.prototype.onResumed = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.resumed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when virtual machine fails to parse the script.
  *
  * @param {!function(!Debugger.ScriptFailedToParseParams)} listener
  * @return {number} The id of this event listener.
  */
Debugger.prototype.onScriptFailedToParse = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.scriptFailedToParse', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when virtual machine parses script. This event is also fired for all known and uncollected
 * scripts upon enabling debugger.
  *
  * @param {!function(!Debugger.ScriptParsedParams)} listener
  * @return {number} The id of this event listener.
  */
Debugger.prototype.onScriptParsed = function(listener) {
  return this.connection_.addEventListener(
      'Debugger.scriptParsed', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope


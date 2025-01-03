// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Debugger DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDebugger = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDebugger.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Debugger DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Debugger = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDebugger} */
chromium.DevTools.Debugger.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Debugger.prototype.removeEventListener = function(id) {};

/**
 * Scope type.
 *
 * @enum {string}
 */
chromium.DevTools.Debugger.ScopeType = {
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
chromium.DevTools.Debugger.BreakLocationType = {
    DEBUGGER_STATEMENT: "debuggerStatement",
    CALL: "call",
    RETURN: "return"
};

/**
 * @enum {string}
 */
chromium.DevTools.Debugger.ContinueToLocationTargetCallFrames = {
    ANY: "any",
    CURRENT: "current"
};

/**
 * Pause on exceptions mode.
 *
 * @enum {string}
 */
chromium.DevTools.Debugger.SetPauseOnExceptionsState = {
    NONE: "none",
    UNCAUGHT: "uncaught",
    ALL: "all"
};

/**
 * Pause reason.
 *
 * @enum {string}
 */
chromium.DevTools.Debugger.PausedReason = {
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
chromium.DevTools.Debugger.Location;

/**
 * Location in the source code.
 *
 *
 * @typedef {{
 *   lineNumber: number,
 *   columnNumber: number
 * }}
 */
chromium.DevTools.Debugger.ScriptPosition;

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
 *   functionLocation: (!chromium.DevTools.Debugger.Location|undefined),
 *   location: !chromium.DevTools.Debugger.Location,
 *   url: string,
 *   scopeChain: !Array.<!chromium.DevTools.Debugger.Scope>,
 *   this: !chromium.DevTools.Runtime.RemoteObject,
 *   returnValue: (!chromium.DevTools.Runtime.RemoteObject|undefined)
 * }}
 */
chromium.DevTools.Debugger.CallFrame;

/**
 * Scope description.
 *
 * type: Scope type.
 * object: Object representing the scope. For `global` and `with` scopes it represents the actual
 *    object; for the rest of the scopes, it is artificial transient object enumerating scope
 *    variables as its properties.
 * startLocation: Location in the source code where scope starts
 * endLocation: Location in the source code where scope ends
 *
 * @typedef {{
 *   type: !chromium.DevTools.Debugger.ScopeType,
 *   object: !chromium.DevTools.Runtime.RemoteObject,
 *   name: (string|undefined),
 *   startLocation: (!chromium.DevTools.Debugger.Location|undefined),
 *   endLocation: (!chromium.DevTools.Debugger.Location|undefined)
 * }}
 */
chromium.DevTools.Debugger.Scope;

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
chromium.DevTools.Debugger.SearchMatch;

/**
 * scriptId: Script identifier as reported in the `Debugger.scriptParsed`.
 * lineNumber: Line number in the script (0-based).
 * columnNumber: Column number in the script (0-based).
 *
 * @typedef {{
 *   scriptId: string,
 *   lineNumber: number,
 *   columnNumber: (number|undefined),
 *   type: (!chromium.DevTools.Debugger.BreakLocationType|undefined)
 * }}
 */
chromium.DevTools.Debugger.BreakLocation;

/**
 * Parameters for the ContinueToLocation command.
 *
 * location: Location to continue to.
 *
 * @typedef {{
 *   location: !chromium.DevTools.Debugger.Location,
 *   targetCallFrames: (!chromium.DevTools.Debugger.ContinueToLocationTargetCallFrames|undefined)
 * }}
 */
chromium.DevTools.Debugger.ContinueToLocationParams;

/**
 * Result for the ContinueToLocation command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ContinueToLocationResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.EnableParams;

/**
 * Result for the Enable command.
 *
 * debuggerId: Unique identifier of the debugger.
 *
 * @typedef {{
 *   debuggerId: string
 * }}
 */
chromium.DevTools.Debugger.EnableResult;

/**
 * Parameters for the EvaluateOnCallFrame command.
 *
 * callFrameId: Call frame identifier to evaluate on.
 * expression: Expression to evaluate.
 * objectGroup: String object group name to put result into (allows rapid releasing resulting object handles
 *    using `releaseObjectGroup`).
 * includeCommandLineAPI: Specifies whether command line API should be available to the evaluated expression, defaults
 *    to false.
 * silent: In silent mode exceptions thrown during evaluation are not reported and do not pause
 *    execution. Overrides `setPauseOnException` state.
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
chromium.DevTools.Debugger.EvaluateOnCallFrameParams;

/**
 * Result for the EvaluateOnCallFrame command.
 *
 * result: Object wrapper for the evaluation result.
 * exceptionDetails: Exception details.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject,
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Debugger.EvaluateOnCallFrameResult;

/**
 * Parameters for the GetPossibleBreakpoints command.
 *
 * start: Start of range to search possible breakpoint locations in.
 * end: End of range to search possible breakpoint locations in (excluding). When not specified, end
 *    of scripts is used as end of range.
 * restrictToFunction: Only consider locations which are in the same (non-nested) function as start.
 *
 * @typedef {{
 *   start: !chromium.DevTools.Debugger.Location,
 *   end: (!chromium.DevTools.Debugger.Location|undefined),
 *   restrictToFunction: (boolean|undefined)
 * }}
 */
chromium.DevTools.Debugger.GetPossibleBreakpointsParams;

/**
 * Result for the GetPossibleBreakpoints command.
 *
 * locations: List of the possible breakpoint locations.
 *
 * @typedef {{
 *   locations: !Array.<!chromium.DevTools.Debugger.BreakLocation>
 * }}
 */
chromium.DevTools.Debugger.GetPossibleBreakpointsResult;

/**
 * Parameters for the GetScriptSource command.
 *
 * scriptId: Id of the script to get source for.
 *
 * @typedef {{
 *   scriptId: string
 * }}
 */
chromium.DevTools.Debugger.GetScriptSourceParams;

/**
 * Result for the GetScriptSource command.
 *
 * scriptSource: Script source.
 *
 * @typedef {{
 *   scriptSource: string
 * }}
 */
chromium.DevTools.Debugger.GetScriptSourceResult;

/**
 * Parameters for the GetStackTrace command.
 *
 *
 * @typedef {{
 *   stackTraceId: !chromium.DevTools.Runtime.StackTraceId
 * }}
 */
chromium.DevTools.Debugger.GetStackTraceParams;

/**
 * Result for the GetStackTrace command.
 *
 *
 * @typedef {{
 *   stackTrace: !chromium.DevTools.Runtime.StackTrace
 * }}
 */
chromium.DevTools.Debugger.GetStackTraceResult;

/**
 * Parameters for the Pause command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.PauseParams;

/**
 * Result for the Pause command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.PauseResult;

/**
 * Parameters for the PauseOnAsyncCall command.
 *
 * parentStackTraceId: Debugger will pause when async call with given stack trace is started.
 *
 * @typedef {{
 *   parentStackTraceId: !chromium.DevTools.Runtime.StackTraceId
 * }}
 */
chromium.DevTools.Debugger.PauseOnAsyncCallParams;

/**
 * Result for the PauseOnAsyncCall command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.PauseOnAsyncCallResult;

/**
 * Parameters for the RemoveBreakpoint command.
 *
 *
 * @typedef {{
 *   breakpointId: string
 * }}
 */
chromium.DevTools.Debugger.RemoveBreakpointParams;

/**
 * Result for the RemoveBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.RemoveBreakpointResult;

/**
 * Parameters for the RestartFrame command.
 *
 * callFrameId: Call frame identifier to evaluate on.
 *
 * @typedef {{
 *   callFrameId: string
 * }}
 */
chromium.DevTools.Debugger.RestartFrameParams;

/**
 * Result for the RestartFrame command.
 *
 * callFrames: New stack trace.
 * asyncStackTrace: Async stack trace, if any.
 * asyncStackTraceId: Async stack trace, if any.
 *
 * @typedef {{
 *   callFrames: !Array.<!chromium.DevTools.Debugger.CallFrame>,
 *   asyncStackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!chromium.DevTools.Runtime.StackTraceId|undefined)
 * }}
 */
chromium.DevTools.Debugger.RestartFrameResult;

/**
 * Parameters for the Resume command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ResumeParams;

/**
 * Result for the Resume command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ResumeResult;

/**
 * Parameters for the ScheduleStepIntoAsync command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ScheduleStepIntoAsyncParams;

/**
 * Result for the ScheduleStepIntoAsync command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ScheduleStepIntoAsyncResult;

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
chromium.DevTools.Debugger.SearchInContentParams;

/**
 * Result for the SearchInContent command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Debugger.SearchMatch>
 * }}
 */
chromium.DevTools.Debugger.SearchInContentResult;

/**
 * Parameters for the SetAsyncCallStackDepth command.
 *
 * maxDepth: Maximum depth of async call stacks. Setting to `0` will effectively disable collecting async
 *    call stacks (default).
 *
 * @typedef {{
 *   maxDepth: number
 * }}
 */
chromium.DevTools.Debugger.SetAsyncCallStackDepthParams;

/**
 * Result for the SetAsyncCallStackDepth command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetAsyncCallStackDepthResult;

/**
 * Parameters for the SetBlackboxPatterns command.
 *
 * patterns: Array of regexps that will be used to check script url for blackbox state.
 *
 * @typedef {{
 *   patterns: !Array.<string>
 * }}
 */
chromium.DevTools.Debugger.SetBlackboxPatternsParams;

/**
 * Result for the SetBlackboxPatterns command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetBlackboxPatternsResult;

/**
 * Parameters for the SetBlackboxedRanges command.
 *
 * scriptId: Id of the script.
 *
 * @typedef {{
 *   scriptId: string,
 *   positions: !Array.<!chromium.DevTools.Debugger.ScriptPosition>
 * }}
 */
chromium.DevTools.Debugger.SetBlackboxedRangesParams;

/**
 * Result for the SetBlackboxedRanges command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetBlackboxedRangesResult;

/**
 * Parameters for the SetBreakpoint command.
 *
 * location: Location to set breakpoint in.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will only stop on the
 *    breakpoint if this expression evaluates to true.
 *
 * @typedef {{
 *   location: !chromium.DevTools.Debugger.Location,
 *   condition: (string|undefined)
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointParams;

/**
 * Result for the SetBreakpoint command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 * actualLocation: Location this breakpoint resolved into.
 *
 * @typedef {{
 *   breakpointId: string,
 *   actualLocation: !chromium.DevTools.Debugger.Location
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointResult;

/**
 * Parameters for the SetBreakpointByUrl command.
 *
 * lineNumber: Line number to set breakpoint at.
 * url: URL of the resources to set breakpoint on.
 * urlRegex: Regex pattern for the URLs of the resources to set breakpoints on. Either `url` or
 *    `urlRegex` must be specified.
 * scriptHash: Script hash of the resources to set breakpoint on.
 * columnNumber: Offset in the line to set breakpoint at.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will only stop on the
 *    breakpoint if this expression evaluates to true.
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
chromium.DevTools.Debugger.SetBreakpointByUrlParams;

/**
 * Result for the SetBreakpointByUrl command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 * locations: List of the locations this breakpoint resolved into upon addition.
 *
 * @typedef {{
 *   breakpointId: string,
 *   locations: !Array.<!chromium.DevTools.Debugger.Location>
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointByUrlResult;

/**
 * Parameters for the SetBreakpointOnFunctionCall command.
 *
 * objectId: Function object id.
 * condition: Expression to use as a breakpoint condition. When specified, debugger will
 *    stop on the breakpoint if this expression evaluates to true.
 *
 * @typedef {{
 *   objectId: string,
 *   condition: (string|undefined)
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointOnFunctionCallParams;

/**
 * Result for the SetBreakpointOnFunctionCall command.
 *
 * breakpointId: Id of the created breakpoint for further reference.
 *
 * @typedef {{
 *   breakpointId: string
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointOnFunctionCallResult;

/**
 * Parameters for the SetBreakpointsActive command.
 *
 * active: New value for breakpoints active state.
 *
 * @typedef {{
 *   active: boolean
 * }}
 */
chromium.DevTools.Debugger.SetBreakpointsActiveParams;

/**
 * Result for the SetBreakpointsActive command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetBreakpointsActiveResult;

/**
 * Parameters for the SetPauseOnExceptions command.
 *
 * state: Pause on exceptions mode.
 *
 * @typedef {{
 *   state: !chromium.DevTools.Debugger.SetPauseOnExceptionsState
 * }}
 */
chromium.DevTools.Debugger.SetPauseOnExceptionsParams;

/**
 * Result for the SetPauseOnExceptions command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetPauseOnExceptionsResult;

/**
 * Parameters for the SetReturnValue command.
 *
 * newValue: New return value.
 *
 * @typedef {{
 *   newValue: !chromium.DevTools.Runtime.CallArgument
 * }}
 */
chromium.DevTools.Debugger.SetReturnValueParams;

/**
 * Result for the SetReturnValue command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetReturnValueResult;

/**
 * Parameters for the SetScriptSource command.
 *
 * scriptId: Id of the script to edit.
 * scriptSource: New content of the script.
 * dryRun: If true the change will not actually be applied. Dry run may be used to get result
 *    description without actually modifying the code.
 *
 * @typedef {{
 *   scriptId: string,
 *   scriptSource: string,
 *   dryRun: (boolean|undefined)
 * }}
 */
chromium.DevTools.Debugger.SetScriptSourceParams;

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
 *   callFrames: (!Array.<!chromium.DevTools.Debugger.CallFrame>|undefined),
 *   stackChanged: (boolean|undefined),
 *   asyncStackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!chromium.DevTools.Runtime.StackTraceId|undefined),
 *   exceptionDetails: (!chromium.DevTools.Runtime.ExceptionDetails|undefined)
 * }}
 */
chromium.DevTools.Debugger.SetScriptSourceResult;

/**
 * Parameters for the SetSkipAllPauses command.
 *
 * skip: New value for skip pauses state.
 *
 * @typedef {{
 *   skip: boolean
 * }}
 */
chromium.DevTools.Debugger.SetSkipAllPausesParams;

/**
 * Result for the SetSkipAllPauses command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetSkipAllPausesResult;

/**
 * Parameters for the SetVariableValue command.
 *
 * scopeNumber: 0-based number of scope as was listed in scope chain. Only 'local', 'closure' and 'catch'
 *    scope types are allowed. Other scopes could be manipulated manually.
 * variableName: Variable name.
 * newValue: New variable value.
 * callFrameId: Id of callframe that holds variable.
 *
 * @typedef {{
 *   scopeNumber: number,
 *   variableName: string,
 *   newValue: !chromium.DevTools.Runtime.CallArgument,
 *   callFrameId: string
 * }}
 */
chromium.DevTools.Debugger.SetVariableValueParams;

/**
 * Result for the SetVariableValue command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.SetVariableValueResult;

/**
 * Parameters for the StepInto command.
 *
 * breakOnAsyncCall: Debugger will issue additional Debugger.paused notification if any async task is scheduled
 *    before next pause.
 *
 * @typedef {{
 *   breakOnAsyncCall: (boolean|undefined)
 * }}
 */
chromium.DevTools.Debugger.StepIntoParams;

/**
 * Result for the StepInto command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.StepIntoResult;

/**
 * Parameters for the StepOut command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.StepOutParams;

/**
 * Result for the StepOut command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.StepOutResult;

/**
 * Parameters for the StepOver command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.StepOverParams;

/**
 * Result for the StepOver command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.StepOverResult;

/**
 * Parameters for the BreakpointResolved event.
 *
 * breakpointId: Breakpoint unique identifier.
 * location: Actual breakpoint location.
 *
 * @typedef {{
 *   breakpointId: string,
 *   location: !chromium.DevTools.Debugger.Location
 * }}
 */
chromium.DevTools.Debugger.BreakpointResolvedParams;

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
 *    This field is available only after `Debugger.stepInto` call with `breakOnAsynCall` flag.
 *
 * @typedef {{
 *   callFrames: !Array.<!chromium.DevTools.Debugger.CallFrame>,
 *   reason: !chromium.DevTools.Debugger.PausedReason,
 *   data: (!Object|undefined),
 *   hitBreakpoints: (!Array.<string>|undefined),
 *   asyncStackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   asyncStackTraceId: (!chromium.DevTools.Runtime.StackTraceId|undefined),
 *   asyncCallStackTraceId: (!chromium.DevTools.Runtime.StackTraceId|undefined)
 * }}
 */
chromium.DevTools.Debugger.PausedParams;

/**
 * Parameters for the Resumed event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Debugger.ResumedParams;

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
 *   stackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined)
 * }}
 */
chromium.DevTools.Debugger.ScriptFailedToParseParams;

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
 *   stackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined)
 * }}
 */
chromium.DevTools.Debugger.ScriptParsedParams;



/**
  * Continues execution until specific location is reached.
  *
  * @param {chromium.DevTools.Debugger.ContinueToLocationParams} params
  * @return {!Promise<chromium.DevTools.Debugger.ContinueToLocationResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.continueToLocation = function(params) {};

/**
  * Disables debugger for given page.
  *
  * @return {!Promise<chromium.DevTools.Debugger.DisableResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.disable = function() {};

/**
  * Enables debugger for the given page. Clients should not assume that the debugging has been
 * enabled until the result for this command is received.
  *
  * @return {!Promise<chromium.DevTools.Debugger.EnableResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.enable = function() {};

/**
  * Evaluates expression on a given call frame.
  *
  * @param {chromium.DevTools.Debugger.EvaluateOnCallFrameParams} params
  * @return {!Promise<chromium.DevTools.Debugger.EvaluateOnCallFrameResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.evaluateOnCallFrame = function(params) {};

/**
  * Returns possible locations for breakpoint. scriptId in start and end range locations should be
 * the same.
  *
  * @param {chromium.DevTools.Debugger.GetPossibleBreakpointsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetPossibleBreakpointsResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.getPossibleBreakpoints = function(params) {};

/**
  * Returns source for the script with given id.
  *
  * @param {chromium.DevTools.Debugger.GetScriptSourceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetScriptSourceResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.getScriptSource = function(params) {};

/**
  * Returns stack trace with given `stackTraceId`.
  *
  * @param {chromium.DevTools.Debugger.GetStackTraceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetStackTraceResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.getStackTrace = function(params) {};

/**
  * Stops on the next JavaScript statement.
  *
  * @return {!Promise<chromium.DevTools.Debugger.PauseResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.pause = function() {};

/**
  * @param {chromium.DevTools.Debugger.PauseOnAsyncCallParams} params
  * @return {!Promise<chromium.DevTools.Debugger.PauseOnAsyncCallResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.pauseOnAsyncCall = function(params) {};

/**
  * Removes JavaScript breakpoint.
  *
  * @param {chromium.DevTools.Debugger.RemoveBreakpointParams} params
  * @return {!Promise<chromium.DevTools.Debugger.RemoveBreakpointResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.removeBreakpoint = function(params) {};

/**
  * Restarts particular call frame from the beginning.
  *
  * @param {chromium.DevTools.Debugger.RestartFrameParams} params
  * @return {!Promise<chromium.DevTools.Debugger.RestartFrameResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.restartFrame = function(params) {};

/**
  * Resumes JavaScript execution.
  *
  * @return {!Promise<chromium.DevTools.Debugger.ResumeResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.resume = function() {};

/**
  * This method is deprecated - use Debugger.stepInto with breakOnAsyncCall and
 * Debugger.pauseOnAsyncTask instead. Steps into next scheduled async task if any is scheduled
 * before next pause. Returns success when async task is actually scheduled, returns error if no
 * task were scheduled or another scheduleStepIntoAsync was called.
  *
  * @return {!Promise<chromium.DevTools.Debugger.ScheduleStepIntoAsyncResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.scheduleStepIntoAsync = function() {};

/**
  * Searches for given string in script content.
  *
  * @param {chromium.DevTools.Debugger.SearchInContentParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SearchInContentResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.searchInContent = function(params) {};

/**
  * Enables or disables async call stacks tracking.
  *
  * @param {chromium.DevTools.Debugger.SetAsyncCallStackDepthParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetAsyncCallStackDepthResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setAsyncCallStackDepth = function(params) {};

/**
  * Replace previous blackbox patterns with passed ones. Forces backend to skip stepping/pausing in
 * scripts with url matching one of the patterns. VM will try to leave blackboxed script by
 * performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
  *
  * @param {chromium.DevTools.Debugger.SetBlackboxPatternsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBlackboxPatternsResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBlackboxPatterns = function(params) {};

/**
  * Makes backend skip steps in the script in blackboxed ranges. VM will try leave blacklisted
 * scripts by performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
 * Positions array contains positions where blackbox state is changed. First interval isn't
 * blackboxed. Array should be sorted.
  *
  * @param {chromium.DevTools.Debugger.SetBlackboxedRangesParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBlackboxedRangesResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBlackboxedRanges = function(params) {};

/**
  * Sets JavaScript breakpoint at a given location.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBreakpoint = function(params) {};

/**
  * Sets JavaScript breakpoint at given location specified either by URL or URL regex. Once this
 * command is issued, all existing parsed scripts will have breakpoints resolved and returned in
 * `locations` property. Further matching script parsing will result in subsequent
 * `breakpointResolved` events issued. This logical breakpoint will survive page reloads.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointByUrlParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointByUrlResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBreakpointByUrl = function(params) {};

/**
  * Sets JavaScript breakpoint before each call to the given function.
 * If another function was created from the same source as a given one,
 * calling it will also trigger the breakpoint.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointOnFunctionCallParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointOnFunctionCallResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBreakpointOnFunctionCall = function(params) {};

/**
  * Activates / deactivates all breakpoints on the page.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointsActiveParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointsActiveResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setBreakpointsActive = function(params) {};

/**
  * Defines pause on exceptions state. Can be set to stop on all exceptions, uncaught exceptions or
 * no exceptions. Initial pause on exceptions state is `none`.
  *
  * @param {chromium.DevTools.Debugger.SetPauseOnExceptionsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetPauseOnExceptionsResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setPauseOnExceptions = function(params) {};

/**
  * Changes return value in top frame. Available only at return break position.
  *
  * @param {chromium.DevTools.Debugger.SetReturnValueParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetReturnValueResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setReturnValue = function(params) {};

/**
  * Edits JavaScript source live.
  *
  * @param {chromium.DevTools.Debugger.SetScriptSourceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetScriptSourceResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setScriptSource = function(params) {};

/**
  * Makes page not interrupt on any pauses (breakpoint, exception, dom exception etc).
  *
  * @param {chromium.DevTools.Debugger.SetSkipAllPausesParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetSkipAllPausesResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setSkipAllPauses = function(params) {};

/**
  * Changes value of variable in a callframe. Object-based scopes are not supported and must be
 * mutated manually.
  *
  * @param {chromium.DevTools.Debugger.SetVariableValueParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetVariableValueResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.setVariableValue = function(params) {};

/**
  * Steps into the function call.
  *
  * @param {chromium.DevTools.Debugger.StepIntoParams=} opt_params
  * @return {!Promise<chromium.DevTools.Debugger.StepIntoResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.stepInto = function(opt_params) {};

/**
  * Steps out of the function call.
  *
  * @return {!Promise<chromium.DevTools.Debugger.StepOutResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.stepOut = function() {};

/**
  * Steps over the statement.
  *
  * @return {!Promise<chromium.DevTools.Debugger.StepOverResult>}
  */
chromium.DevTools.ExperimentalDebugger.prototype.stepOver = function() {};


/**
  * Fired when breakpoint is resolved to an actual script and location.
  *
  * @param {!function(!chromium.DevTools.Debugger.BreakpointResolvedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDebugger.prototype.onBreakpointResolved = function(listener) {};

/**
  * Fired when the virtual machine stopped on breakpoint or exception or any other stop criteria.
  *
  * @param {!function(!chromium.DevTools.Debugger.PausedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDebugger.prototype.onPaused = function(listener) {};

/**
  * Fired when the virtual machine resumed execution.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDebugger.prototype.onResumed = function(listener) {};

/**
  * Fired when virtual machine fails to parse the script.
  *
  * @param {!function(!chromium.DevTools.Debugger.ScriptFailedToParseParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDebugger.prototype.onScriptFailedToParse = function(listener) {};

/**
  * Fired when virtual machine parses script. This event is also fired for all known and uncollected
 * scripts upon enabling debugger.
  *
  * @param {!function(!chromium.DevTools.Debugger.ScriptParsedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDebugger.prototype.onScriptParsed = function(listener) {};



/**
  * Continues execution until specific location is reached.
  *
  * @param {chromium.DevTools.Debugger.ContinueToLocationParams} params
  * @return {!Promise<chromium.DevTools.Debugger.ContinueToLocationResult>}
  */
chromium.DevTools.Debugger.prototype.continueToLocation = function(params) {};

/**
  * Disables debugger for given page.
  *
  * @return {!Promise<chromium.DevTools.Debugger.DisableResult>}
  */
chromium.DevTools.Debugger.prototype.disable = function() {};

/**
  * Enables debugger for the given page. Clients should not assume that the debugging has been
 * enabled until the result for this command is received.
  *
  * @return {!Promise<chromium.DevTools.Debugger.EnableResult>}
  */
chromium.DevTools.Debugger.prototype.enable = function() {};

/**
  * Evaluates expression on a given call frame.
  *
  * @param {chromium.DevTools.Debugger.EvaluateOnCallFrameParams} params
  * @return {!Promise<chromium.DevTools.Debugger.EvaluateOnCallFrameResult>}
  */
chromium.DevTools.Debugger.prototype.evaluateOnCallFrame = function(params) {};

/**
  * Returns possible locations for breakpoint. scriptId in start and end range locations should be
 * the same.
  *
  * @param {chromium.DevTools.Debugger.GetPossibleBreakpointsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetPossibleBreakpointsResult>}
  */
chromium.DevTools.Debugger.prototype.getPossibleBreakpoints = function(params) {};

/**
  * Returns source for the script with given id.
  *
  * @param {chromium.DevTools.Debugger.GetScriptSourceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetScriptSourceResult>}
  */
chromium.DevTools.Debugger.prototype.getScriptSource = function(params) {};

/**
  * Returns stack trace with given `stackTraceId`.
  *
  * @param {chromium.DevTools.Debugger.GetStackTraceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.GetStackTraceResult>}
  */
chromium.DevTools.Debugger.prototype.getStackTrace = function(params) {};

/**
  * Stops on the next JavaScript statement.
  *
  * @return {!Promise<chromium.DevTools.Debugger.PauseResult>}
  */
chromium.DevTools.Debugger.prototype.pause = function() {};

/**
  * @param {chromium.DevTools.Debugger.PauseOnAsyncCallParams} params
  * @return {!Promise<chromium.DevTools.Debugger.PauseOnAsyncCallResult>}
  */
chromium.DevTools.Debugger.prototype.pauseOnAsyncCall = function(params) {};

/**
  * Removes JavaScript breakpoint.
  *
  * @param {chromium.DevTools.Debugger.RemoveBreakpointParams} params
  * @return {!Promise<chromium.DevTools.Debugger.RemoveBreakpointResult>}
  */
chromium.DevTools.Debugger.prototype.removeBreakpoint = function(params) {};

/**
  * Restarts particular call frame from the beginning.
  *
  * @param {chromium.DevTools.Debugger.RestartFrameParams} params
  * @return {!Promise<chromium.DevTools.Debugger.RestartFrameResult>}
  */
chromium.DevTools.Debugger.prototype.restartFrame = function(params) {};

/**
  * Resumes JavaScript execution.
  *
  * @return {!Promise<chromium.DevTools.Debugger.ResumeResult>}
  */
chromium.DevTools.Debugger.prototype.resume = function() {};

/**
  * This method is deprecated - use Debugger.stepInto with breakOnAsyncCall and
 * Debugger.pauseOnAsyncTask instead. Steps into next scheduled async task if any is scheduled
 * before next pause. Returns success when async task is actually scheduled, returns error if no
 * task were scheduled or another scheduleStepIntoAsync was called.
  *
  * @return {!Promise<chromium.DevTools.Debugger.ScheduleStepIntoAsyncResult>}
  */
chromium.DevTools.Debugger.prototype.scheduleStepIntoAsync = function() {};

/**
  * Searches for given string in script content.
  *
  * @param {chromium.DevTools.Debugger.SearchInContentParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SearchInContentResult>}
  */
chromium.DevTools.Debugger.prototype.searchInContent = function(params) {};

/**
  * Enables or disables async call stacks tracking.
  *
  * @param {chromium.DevTools.Debugger.SetAsyncCallStackDepthParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetAsyncCallStackDepthResult>}
  */
chromium.DevTools.Debugger.prototype.setAsyncCallStackDepth = function(params) {};

/**
  * Replace previous blackbox patterns with passed ones. Forces backend to skip stepping/pausing in
 * scripts with url matching one of the patterns. VM will try to leave blackboxed script by
 * performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
  *
  * @param {chromium.DevTools.Debugger.SetBlackboxPatternsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBlackboxPatternsResult>}
  */
chromium.DevTools.Debugger.prototype.setBlackboxPatterns = function(params) {};

/**
  * Makes backend skip steps in the script in blackboxed ranges. VM will try leave blacklisted
 * scripts by performing 'step in' several times, finally resorting to 'step out' if unsuccessful.
 * Positions array contains positions where blackbox state is changed. First interval isn't
 * blackboxed. Array should be sorted.
  *
  * @param {chromium.DevTools.Debugger.SetBlackboxedRangesParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBlackboxedRangesResult>}
  */
chromium.DevTools.Debugger.prototype.setBlackboxedRanges = function(params) {};

/**
  * Sets JavaScript breakpoint at a given location.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointResult>}
  */
chromium.DevTools.Debugger.prototype.setBreakpoint = function(params) {};

/**
  * Sets JavaScript breakpoint at given location specified either by URL or URL regex. Once this
 * command is issued, all existing parsed scripts will have breakpoints resolved and returned in
 * `locations` property. Further matching script parsing will result in subsequent
 * `breakpointResolved` events issued. This logical breakpoint will survive page reloads.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointByUrlParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointByUrlResult>}
  */
chromium.DevTools.Debugger.prototype.setBreakpointByUrl = function(params) {};

/**
  * Sets JavaScript breakpoint before each call to the given function.
 * If another function was created from the same source as a given one,
 * calling it will also trigger the breakpoint.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointOnFunctionCallParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointOnFunctionCallResult>}
  */
chromium.DevTools.Debugger.prototype.setBreakpointOnFunctionCall = function(params) {};

/**
  * Activates / deactivates all breakpoints on the page.
  *
  * @param {chromium.DevTools.Debugger.SetBreakpointsActiveParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetBreakpointsActiveResult>}
  */
chromium.DevTools.Debugger.prototype.setBreakpointsActive = function(params) {};

/**
  * Defines pause on exceptions state. Can be set to stop on all exceptions, uncaught exceptions or
 * no exceptions. Initial pause on exceptions state is `none`.
  *
  * @param {chromium.DevTools.Debugger.SetPauseOnExceptionsParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetPauseOnExceptionsResult>}
  */
chromium.DevTools.Debugger.prototype.setPauseOnExceptions = function(params) {};

/**
  * Changes return value in top frame. Available only at return break position.
  *
  * @param {chromium.DevTools.Debugger.SetReturnValueParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetReturnValueResult>}
  */
chromium.DevTools.Debugger.prototype.setReturnValue = function(params) {};

/**
  * Edits JavaScript source live.
  *
  * @param {chromium.DevTools.Debugger.SetScriptSourceParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetScriptSourceResult>}
  */
chromium.DevTools.Debugger.prototype.setScriptSource = function(params) {};

/**
  * Makes page not interrupt on any pauses (breakpoint, exception, dom exception etc).
  *
  * @param {chromium.DevTools.Debugger.SetSkipAllPausesParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetSkipAllPausesResult>}
  */
chromium.DevTools.Debugger.prototype.setSkipAllPauses = function(params) {};

/**
  * Changes value of variable in a callframe. Object-based scopes are not supported and must be
 * mutated manually.
  *
  * @param {chromium.DevTools.Debugger.SetVariableValueParams} params
  * @return {!Promise<chromium.DevTools.Debugger.SetVariableValueResult>}
  */
chromium.DevTools.Debugger.prototype.setVariableValue = function(params) {};

/**
  * Steps into the function call.
  *
  * @param {chromium.DevTools.Debugger.StepIntoParams=} opt_params
  * @return {!Promise<chromium.DevTools.Debugger.StepIntoResult>}
  */
chromium.DevTools.Debugger.prototype.stepInto = function(opt_params) {};

/**
  * Steps out of the function call.
  *
  * @return {!Promise<chromium.DevTools.Debugger.StepOutResult>}
  */
chromium.DevTools.Debugger.prototype.stepOut = function() {};

/**
  * Steps over the statement.
  *
  * @return {!Promise<chromium.DevTools.Debugger.StepOverResult>}
  */
chromium.DevTools.Debugger.prototype.stepOver = function() {};


/**
  * Fired when breakpoint is resolved to an actual script and location.
  *
  * @param {!function(!chromium.DevTools.Debugger.BreakpointResolvedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Debugger.prototype.onBreakpointResolved = function(listener) {};

/**
  * Fired when the virtual machine stopped on breakpoint or exception or any other stop criteria.
  *
  * @param {!function(!chromium.DevTools.Debugger.PausedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Debugger.prototype.onPaused = function(listener) {};

/**
  * Fired when the virtual machine resumed execution.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Debugger.prototype.onResumed = function(listener) {};

/**
  * Fired when virtual machine fails to parse the script.
  *
  * @param {!function(!chromium.DevTools.Debugger.ScriptFailedToParseParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Debugger.prototype.onScriptFailedToParse = function(listener) {};

/**
  * Fired when virtual machine parses script. This event is also fired for all known and uncollected
 * scripts upon enabling debugger.
  *
  * @param {!function(!chromium.DevTools.Debugger.ScriptParsedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Debugger.prototype.onScriptParsed = function(listener) {};

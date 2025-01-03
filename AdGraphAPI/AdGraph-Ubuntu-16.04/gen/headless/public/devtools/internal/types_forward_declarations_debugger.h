// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_

#include "base/values.h"

namespace headless {

namespace debugger {
class Location;
class ScriptPosition;
class CallFrame;
class Scope;
class SearchMatch;
class BreakLocation;
class ContinueToLocationParams;
class ContinueToLocationResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class EvaluateOnCallFrameParams;
class EvaluateOnCallFrameResult;
class GetPossibleBreakpointsParams;
class GetPossibleBreakpointsResult;
class GetScriptSourceParams;
class GetScriptSourceResult;
class GetStackTraceParams;
class GetStackTraceResult;
class PauseParams;
class PauseResult;
class PauseOnAsyncCallParams;
class PauseOnAsyncCallResult;
class RemoveBreakpointParams;
class RemoveBreakpointResult;
class RestartFrameParams;
class RestartFrameResult;
class ResumeParams;
class ResumeResult;
class ScheduleStepIntoAsyncParams;
class ScheduleStepIntoAsyncResult;
class SearchInContentParams;
class SearchInContentResult;
class SetAsyncCallStackDepthParams;
class SetAsyncCallStackDepthResult;
class SetBlackboxPatternsParams;
class SetBlackboxPatternsResult;
class SetBlackboxedRangesParams;
class SetBlackboxedRangesResult;
class SetBreakpointParams;
class SetBreakpointResult;
class SetBreakpointByUrlParams;
class SetBreakpointByUrlResult;
class SetBreakpointOnFunctionCallParams;
class SetBreakpointOnFunctionCallResult;
class SetBreakpointsActiveParams;
class SetBreakpointsActiveResult;
class SetPauseOnExceptionsParams;
class SetPauseOnExceptionsResult;
class SetReturnValueParams;
class SetReturnValueResult;
class SetScriptSourceParams;
class SetScriptSourceResult;
class SetSkipAllPausesParams;
class SetSkipAllPausesResult;
class SetVariableValueParams;
class SetVariableValueResult;
class StepIntoParams;
class StepIntoResult;
class StepOutParams;
class StepOutResult;
class StepOverParams;
class StepOverResult;
class BreakpointResolvedParams;
class PausedParams;
class ResumedParams;
class ScriptFailedToParseParams;
class ScriptParsedParams;

enum class ScopeType {
  GLOBAL,
  LOCAL,
  WITH,
  CLOSURE,
  CATCH,
  BLOCK,
  SCRIPT,
  EVAL,
  MODULE
};

enum class BreakLocationType {
  DEBUGGER_STATEMENT,
  CALL,
  RETURN
};

enum class ContinueToLocationTargetCallFrames {
  ANY,
  CURRENT
};

enum class SetPauseOnExceptionsState {
  NONE,
  UNCAUGHT,
  ALL
};

enum class PausedReason {
  XHR,
  DOM,
  EVENT_LISTENER,
  EXCEPTION,
  ASSERT,
  DEBUG_COMMAND,
  PROMISE_REJECTION,
  OOM,
  OTHER,
  AMBIGUOUS
};

}  // namespace debugger

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_

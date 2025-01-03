// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/modules/v8/v8_file_callback.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"

namespace blink {

v8::Maybe<void> V8FileCallback::handleEvent(ScriptWrappable* callback_this_value, File* file) {
  // This function implements "call a user object's operation".
  // https://heycam.github.io/webidl/#call-a-user-objects-operation

  if (!IsCallbackFunctionRunnable(CallbackRelevantScriptState())) {
    // Wrapper-tracing for the callback function makes the function object and
    // its creation context alive. Thus it's safe to use the creation context
    // of the callback function here.
    v8::HandleScope handle_scope(GetIsolate());
    CHECK(!CallbackObject().IsEmpty());
    v8::Context::Scope context_scope(CallbackObject()->CreationContext());
    V8ThrowException::ThrowError(
        GetIsolate(),
        ExceptionMessages::FailedToExecute(
            "handleEvent",
            "FileCallback",
            "The provided callback is no longer runnable."));
    return v8::Nothing<void>();
  }

  // step 7. Prepare to run script with relevant settings.
  ScriptState::Scope callback_relevant_context_scope(
      CallbackRelevantScriptState());
  // step 8. Prepare to run a callback with stored settings.
  if (IncumbentScriptState()->GetContext().IsEmpty()) {
    V8ThrowException::ThrowError(
        GetIsolate(),
        ExceptionMessages::FailedToExecute(
            "handleEvent",
            "FileCallback",
            "The provided callback is no longer runnable."));
    return v8::Nothing<void>();
  }
  v8::Context::BackupIncumbentScope backup_incumbent_scope(
      IncumbentScriptState()->GetContext());

  v8::Local<v8::Function> function;
  if (IsCallbackObjectCallable()) {
    // step 9.1. If value's interface is a single operation callback interface
    //   and !IsCallable(O) is true, then set X to O.
    function = CallbackObject().As<v8::Function>();
  } else {
    // step 9.2.1. Let getResult be Get(O, opName).
    // step 9.2.2. If getResult is an abrupt completion, set completion to
    //   getResult and jump to the step labeled return.
    v8::Local<v8::Value> value;
    if (!CallbackObject()->Get(CallbackRelevantScriptState()->GetContext(),
                               V8String(GetIsolate(), "handleEvent"))
        .ToLocal(&value)) {
      return v8::Nothing<void>();
    }
    // step 10. If !IsCallable(X) is false, then set completion to a new
    //   Completion{[[Type]]: throw, [[Value]]: a newly created TypeError
    //   object, [[Target]]: empty}, and jump to the step labeled return.
    if (!value->IsFunction()) {
      V8ThrowException::ThrowTypeError(
          GetIsolate(),
          ExceptionMessages::FailedToExecute(
              "handleEvent",
              "FileCallback",
              "The provided callback is not callable."));
      return v8::Nothing<void>();
    }
    function = value.As<v8::Function>();
  }

  v8::Local<v8::Value> this_arg;
  if (!IsCallbackObjectCallable()) {
    // step 11. If value's interface is not a single operation callback
    //   interface, or if !IsCallable(O) is false, set thisArg to O (overriding
    //   the provided value).
    this_arg = CallbackObject();
  } else if (!callback_this_value) {
    // step 2. If thisArg was not given, let thisArg be undefined.
    this_arg = v8::Undefined(GetIsolate());
  } else {
    this_arg = ToV8(callback_this_value, CallbackRelevantScriptState());
  }

  // step 12. Let esArgs be the result of converting args to an ECMAScript
  //   arguments list. If this throws an exception, set completion to the
  //   completion value representing the thrown exception and jump to the step
  //   labeled return.
  v8::Local<v8::Object> argument_creation_context =
      CallbackRelevantScriptState()->GetContext()->Global();
  ALLOW_UNUSED_LOCAL(argument_creation_context);
  v8::Local<v8::Value> fileHandle = ToV8(file, argument_creation_context, GetIsolate());
  v8::Local<v8::Value> argv[] = { fileHandle };

  // step 13. Let callResult be Call(X, thisArg, esArgs).
  v8::Local<v8::Value> call_result;
  if (!V8ScriptRunner::CallFunction(
          function,
          ExecutionContext::From(CallbackRelevantScriptState()),
          this_arg,
          1,
          argv,
          GetIsolate()).ToLocal(&call_result)) {
    // step 14. If callResult is an abrupt completion, set completion to
    //   callResult and jump to the step labeled return.
    return v8::Nothing<void>();
  }

  // step 15. Set completion to the result of converting callResult.[[Value]] to
  //   an IDL value of the same type as the operation's return type.
  return v8::JustVoid();
}

void V8FileCallback::InvokeAndReportException(ScriptWrappable* callback_this_value, File* file) {
  v8::TryCatch try_catch(GetIsolate());
  try_catch.SetVerbose(true);

  v8::Maybe<void> maybe_result =
      handleEvent(callback_this_value, file);
  // An exception if any is killed with the v8::TryCatch above.
  ALLOW_UNUSED_LOCAL(maybe_result);
}

MODULES_EXTERN_TEMPLATE_EXPORT
v8::Maybe<void> V8PersistentCallbackInterface<V8FileCallback>::handleEvent(ScriptWrappable* callback_this_value, File* file) {
  return Proxy()->handleEvent(
      callback_this_value, file);
}

MODULES_EXTERN_TEMPLATE_EXPORT
void V8PersistentCallbackInterface<V8FileCallback>::InvokeAndReportException(ScriptWrappable* callback_this_value, File* file) {
  Proxy()->InvokeAndReportException(
      callback_this_value, file);
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_url_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/mediasource/url_media_source.h"
#include "third_party/blink/renderer/modules/mediastream/url_media_stream.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace DOMURLPartialV8Internal {

static void createObjectURL2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* scriptState = ScriptState::ForCurrentRealm(info);

  MediaSource* source;
  source = V8MediaSource::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createObjectURL", "URL", "parameter 1 is not of type 'MediaSource'."));
    return;
  }

  String result = URLMediaSource::createObjectURL(scriptState, source);
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void createObjectURL3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* scriptState = ScriptState::ForCurrentRealm(info);

  MediaStream* stream;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createObjectURL", "URL", "parameter 1 is not of type 'MediaStream'."));
    return;
  }

  String result = URLMediaStream::createObjectURL(scriptState, stream);
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void createObjectURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(1, info.Length())) {
    case 1:
      if (V8MediaSource::hasInstance(info[0], info.GetIsolate())) {
        createObjectURL2Method(info);
        return;
      }
      if (V8MediaStream::hasInstance(info[0], info.GetIsolate())) {
        createObjectURL3Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "URL", "createObjectURL");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

} // namespace DOMURLPartialV8Internal

void V8URLPartial::installV8URLTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8URL::installV8URLTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8URLPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8URLPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8URL::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

void V8URLPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8URL::UpdateWrapperTypeInfo(
      &V8URLPartial::installV8URLTemplate,
      nullptr,
      &V8URLPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
  V8URL::registerCreateObjectURLMethodForPartialInterface(&DOMURLPartialV8Internal::createObjectURLMethod);
}

}  // namespace blink

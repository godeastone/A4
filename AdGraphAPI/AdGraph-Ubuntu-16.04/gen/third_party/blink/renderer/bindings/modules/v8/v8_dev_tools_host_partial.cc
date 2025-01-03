// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_dev_tools_host_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dev_tools_host.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/filesystem/dev_tools_host_file_system.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace DevToolsHostPartialV8Internal {

static void isolatedFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isolatedFileSystem", "DevToolsHost", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> fileSystemId;
  V8StringResource<> registeredName;
  fileSystemId = info[0];
  if (!fileSystemId.Prepare())
    return;

  registeredName = info[1];
  if (!registeredName.Prepare())
    return;

  V8SetReturnValue(info, DevToolsHostFileSystem::isolatedFileSystem(*impl, fileSystemId, registeredName));
}

static void upgradeDraggedFileSystemPermissionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("upgradeDraggedFileSystemPermissions", "DevToolsHost", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMFileSystem* domFileSystem;
  domFileSystem = V8DOMFileSystem::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!domFileSystem) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("upgradeDraggedFileSystemPermissions", "DevToolsHost", "parameter 1 is not of type 'DOMFileSystem'."));
    return;
  }

  DevToolsHostFileSystem::upgradeDraggedFileSystemPermissions(*impl, domFileSystem);
}

} // namespace DevToolsHostPartialV8Internal

void V8DevToolsHostPartial::isolatedFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_isolatedFileSystem");

  DevToolsHostPartialV8Internal::isolatedFileSystemMethod(info);
}

void V8DevToolsHostPartial::upgradeDraggedFileSystemPermissionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_upgradeDraggedFileSystemPermissions");

  DevToolsHostPartialV8Internal::upgradeDraggedFileSystemPermissionsMethod(info);
}

void V8DevToolsHostPartial::installV8DevToolsHostTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DevToolsHost::installV8DevToolsHostTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8DevToolsHostPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DevToolsHostPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8DevToolsHost::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration isolatedFileSystemMethodConfiguration[] = {
      {"isolatedFileSystem", V8DevToolsHostPartial::isolatedFileSystemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : isolatedFileSystemMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration upgradeDraggedFileSystemPermissionsMethodConfiguration[] = {
      {"upgradeDraggedFileSystemPermissions", V8DevToolsHostPartial::upgradeDraggedFileSystemPermissionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : upgradeDraggedFileSystemPermissionsMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8DevToolsHostPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8DevToolsHost::UpdateWrapperTypeInfo(
      &V8DevToolsHostPartial::installV8DevToolsHostTemplate,
      nullptr,
      &V8DevToolsHostPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/origin_trial_features_for_modules.cc.tmpl
// by the script generate_origin_trial_features.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/modules/v8/origin_trial_features_for_modules.h"

#include "third_party/blink/renderer/bindings/core/v8/origin_trial_features_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_animation_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dedicated_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_document_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shadow_root_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shared_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_navigator_partial.h"
#include "third_party/blink/renderer/core/context_features/context_feature_settings.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/frame.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/origin_trial_features.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"

namespace blink {

namespace {
InstallOriginTrialFeaturesFunction
    g_original_install_origin_trial_features_function = nullptr;
InstallPendingOriginTrialFeatureFunction
    g_original_install_pending_origin_trial_feature_function = nullptr;

void InstallOriginTrialFeaturesForModules(
    const WrapperTypeInfo* wrapper_type_info,
    const ScriptState* script_state,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object) {
  (*g_original_install_origin_trial_features_function)(
      wrapper_type_info, script_state, prototype_object, interface_object);

  ExecutionContext* execution_context = ExecutionContext::From(script_state);
  if (!execution_context)
    return;
  v8::Isolate* isolate = script_state->GetIsolate();
  const DOMWrapperWorld& world = script_state->World();
  // TODO(iclelland): Extract this common code out of OriginTrialFeaturesForCore
  // and OriginTrialFeaturesForModules into a block.
  if (wrapper_type_info == &V8AnimationWorkletGlobalScope::wrapperTypeInfo) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (OriginTrials::animationWorkletEnabled(execution_context)) {
      V8AnimationWorkletGlobalScope::installAnimationWorklet(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8BudgetService::wrapperTypeInfo) {
    if (OriginTrials::budgetQueryEnabled(execution_context)) {
      V8BudgetService::installBudgetQuery(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8DedicatedWorkerGlobalScope::wrapperTypeInfo) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8DedicatedWorkerGlobalScopePartial::installWebLocksAPI(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::budgetQueryEnabled(execution_context)) {
      V8DedicatedWorkerGlobalScopePartial::installBudgetQuery(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8Document::wrapperTypeInfo) {
    if (OriginTrials::pictureInPictureAPIEnabled(execution_context)) {
      V8DocumentPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8Gamepad::wrapperTypeInfo) {
    if (OriginTrials::webXRGamepadSupportEnabled(execution_context)) {
      V8Gamepad::installWebXRGamepadSupport(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (OriginTrials::gamepadExtensionsEnabled(execution_context)) {
      V8Gamepad::installGamepadExtensions(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8GamepadButton::wrapperTypeInfo) {
    if (OriginTrials::webXRGamepadSupportEnabled(execution_context)) {
      V8GamepadButton::installWebXRGamepadSupport(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8HTMLVideoElement::wrapperTypeInfo) {
    if (OriginTrials::pictureInPictureAPIEnabled(execution_context)) {
      V8HTMLVideoElementPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8MediaCapabilities::wrapperTypeInfo) {
    if (OriginTrials::mediaCapabilitiesEnabled(execution_context)) {
      V8MediaCapabilities::installMediaCapabilities(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8Navigator::wrapperTypeInfo) {
    if (OriginTrials::webVREnabled(execution_context)) {
      V8NavigatorPartial::installWebVR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (OriginTrials::mediaCapabilitiesEnabled(execution_context)) {
      V8NavigatorPartial::installMediaCapabilities(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8NavigatorPartial::installWebLocksAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (OriginTrials::webXREnabled(execution_context)) {
      V8NavigatorPartial::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (OriginTrials::installedAppEnabled(execution_context)) {
      V8NavigatorPartial::installInstalledApp(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8RTCPeerConnection::wrapperTypeInfo) {
    if (OriginTrials::rtcPeerConnectionIdEnabled(execution_context)) {
      V8RTCPeerConnection::installRtcPeerConnectionId(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8ServiceWorkerGlobalScope::wrapperTypeInfo) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8ServiceWorkerGlobalScope::installWebLocksAPI(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::budgetQueryEnabled(execution_context)) {
      V8ServiceWorkerGlobalScope::installBudgetQuery(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8ShadowRoot::wrapperTypeInfo) {
    if (OriginTrials::pictureInPictureAPIEnabled(execution_context)) {
      V8ShadowRootPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8SharedWorkerGlobalScope::wrapperTypeInfo) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8SharedWorkerGlobalScopePartial::installWebLocksAPI(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::budgetQueryEnabled(execution_context)) {
      V8SharedWorkerGlobalScopePartial::installBudgetQuery(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8WebGL2RenderingContext::wrapperTypeInfo) {
    if (OriginTrials::webXREnabled(execution_context)) {
      V8WebGL2RenderingContext::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8WebGLRenderingContext::wrapperTypeInfo) {
    if (OriginTrials::webXREnabled(execution_context)) {
      V8WebGLRenderingContext::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8Window::wrapperTypeInfo) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (OriginTrials::gamepadExtensionsEnabled(execution_context)) {
      V8WindowPartial::installGamepadExtensions(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::webVREnabled(execution_context)) {
      V8WindowPartial::installWebVR(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::pictureInPictureAPIEnabled(execution_context)) {
      V8WindowPartial::installPictureInPictureAPI(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::mediaCapabilitiesEnabled(execution_context)) {
      V8WindowPartial::installMediaCapabilities(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::animationWorkletEnabled(execution_context)) {
      V8WindowPartial::installAnimationWorklet(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8WindowPartial::installWebLocksAPI(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::webXREnabled(execution_context)) {
      V8WindowPartial::installWebXR(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::budgetQueryEnabled(execution_context)) {
      V8WindowPartial::installBudgetQuery(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (OriginTrials::sensorEnabled(execution_context)) {
      V8WindowPartial::installSensor(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == &V8WorkerNavigator::wrapperTypeInfo) {
    if (OriginTrials::webLocksAPIEnabled(execution_context)) {
      V8WorkerNavigatorPartial::installWebLocksAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
}

void InstallPendingOriginTrialFeatureForModules(
    const String& feature,
    const ScriptState* script_state) {
  (*g_original_install_pending_origin_trial_feature_function)(feature,
                                                             script_state);

  // TODO(iclelland): Extract this common code out of OriginTrialFeaturesForCore
  // and OriginTrialFeaturesForModules into a block.
  v8::Local<v8::Object> prototype_object;
  v8::Local<v8::Function> interface_object;
  v8::Isolate* isolate = script_state->GetIsolate();
  const DOMWrapperWorld& world = script_state->World();
  V8PerContextData* context_data = script_state->PerContextData();
  if (feature == OriginTrials::kAnimationWorkletTrialName) {
    V8AnimationWorkletGlobalScope::installAnimationWorklet(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8WindowPartial::installAnimationWorklet(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
  }
  if (feature == OriginTrials::kBudgetQueryTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8BudgetService::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8BudgetService::installBudgetQuery(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8DedicatedWorkerGlobalScopePartial::installBudgetQuery(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8WindowPartial::installBudgetQuery(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8ServiceWorkerGlobalScope::installBudgetQuery(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8SharedWorkerGlobalScopePartial::installBudgetQuery(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
  }
  if (feature == OriginTrials::kGamepadExtensionsTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Gamepad::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8Gamepad::installGamepadExtensions(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8WindowPartial::installGamepadExtensions(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
  }
  if (feature == OriginTrials::kInstalledAppTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Navigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8NavigatorPartial::installInstalledApp(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kMediaCapabilitiesTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8MediaCapabilities::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8MediaCapabilities::installMediaCapabilities(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8WindowPartial::installMediaCapabilities(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Navigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8NavigatorPartial::installMediaCapabilities(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kPictureInPictureAPITrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Document::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8DocumentPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8HTMLVideoElement::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8HTMLVideoElementPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8WindowPartial::installPictureInPictureAPI(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8ShadowRoot::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8ShadowRootPartial::installPictureInPictureAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kRtcPeerConnectionIdTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8RTCPeerConnection::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8RTCPeerConnection::installRtcPeerConnectionId(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kSensorTrialName) {
    V8WindowPartial::installSensor(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
  }
  if (feature == OriginTrials::kWebLocksAPITrialName) {
    V8WindowPartial::installWebLocksAPI(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Navigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8NavigatorPartial::installWebLocksAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8ServiceWorkerGlobalScope::installWebLocksAPI(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8SharedWorkerGlobalScopePartial::installWebLocksAPI(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    V8DedicatedWorkerGlobalScopePartial::installWebLocksAPI(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8WorkerNavigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8WorkerNavigatorPartial::installWebLocksAPI(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kWebVRTrialName) {
    V8WindowPartial::installWebVR(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Navigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8NavigatorPartial::installWebVR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kWebXRTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8WebGL2RenderingContext::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8WebGL2RenderingContext::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    V8WindowPartial::installWebXR(
        isolate, world, script_state->GetContext()->Global(),
        v8::Local<v8::Object>(), v8::Local<v8::Function>());
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Navigator::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8NavigatorPartial::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8WebGLRenderingContext::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8WebGLRenderingContext::installWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (feature == OriginTrials::kWebXRGamepadSupportTrialName) {
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8Gamepad::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8Gamepad::installWebXRGamepadSupport(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (context_data->GetExistingConstructorAndPrototypeForType(
            &V8GamepadButton::wrapperTypeInfo, &prototype_object, &interface_object)) {
      V8GamepadButton::installWebXRGamepadSupport(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
}

}  // namespace

void RegisterInstallOriginTrialFeaturesForModules() {
  RegisterInstallOriginTrialFeaturesForCore();
  g_original_install_origin_trial_features_function =
      SetInstallOriginTrialFeaturesFunction(
          &InstallOriginTrialFeaturesForModules);
  g_original_install_pending_origin_trial_feature_function =
      SetInstallPendingOriginTrialFeatureFunction(
          &InstallPendingOriginTrialFeatureForModules);
}

}  // namespace blink

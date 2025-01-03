// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_s3tc_srgb.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8WebGLCompressedTextureS3TCsRGB::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8WebGLCompressedTextureS3TCsRGB::domTemplate,
    nullptr,
    "WebGLCompressedTextureS3TCsRGB",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLCompressedTextureS3TCsRGB.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLCompressedTextureS3TCsRGB::wrapper_type_info_ = V8WebGLCompressedTextureS3TCsRGB::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLCompressedTextureS3TCsRGB>::value,
    "WebGLCompressedTextureS3TCsRGB inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLCompressedTextureS3TCsRGB::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLCompressedTextureS3TCsRGB is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGLCompressedTextureS3TCsRGBV8Internal {

} // namespace WebGLCompressedTextureS3TCsRGBV8Internal

static void installV8WebGLCompressedTextureS3TCsRGBTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGLCompressedTextureS3TCsRGB::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLCompressedTextureS3TCsRGB::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8WebGLCompressedTextureS3TCsRGBConstants[] = {
      {"COMPRESSED_SRGB_S3TC_DXT1_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C4C)},
      {"COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C4D)},
      {"COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C4E)},
      {"COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C4F)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8WebGLCompressedTextureS3TCsRGBConstants, arraysize(V8WebGLCompressedTextureS3TCsRGBConstants));

  // Custom signature

  V8WebGLCompressedTextureS3TCsRGB::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8WebGLCompressedTextureS3TCsRGB::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8WebGLCompressedTextureS3TCsRGB::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLCompressedTextureS3TCsRGBTemplate);
}

bool V8WebGLCompressedTextureS3TCsRGB::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLCompressedTextureS3TCsRGB::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLCompressedTextureS3TCsRGB* V8WebGLCompressedTextureS3TCsRGB::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLCompressedTextureS3TCsRGB* NativeValueTraits<WebGLCompressedTextureS3TCsRGB>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WebGLCompressedTextureS3TCsRGB* nativeValue = V8WebGLCompressedTextureS3TCsRGB::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLCompressedTextureS3TCsRGB"));
  }
  return nativeValue;
}

}  // namespace blink

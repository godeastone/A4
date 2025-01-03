// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_array_buffer.h"
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
const WrapperTypeInfo V8Int32Array::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    nullptr,
    nullptr,
    "Int32Array",
    &V8ArrayBufferView::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMInt32Array>::value,
    "DOMInt32Array inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMInt32Array::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMInt32Array is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

DOMInt32Array* V8Int32Array::ToImpl(v8::Local<v8::Object> object) {
  DCHECK(object->IsInt32Array());
  ScriptWrappable* scriptWrappable = ToScriptWrappable(object);
  if (scriptWrappable)
    return scriptWrappable->ToImpl<DOMInt32Array>();

  v8::Local<v8::Int32Array> v8View = object.As<v8::Int32Array>();
  v8::Local<v8::Object> arrayBuffer = v8View->Buffer();
  DOMInt32Array* typedArray = nullptr;
  if (arrayBuffer->IsArrayBuffer()) {
    typedArray = DOMInt32Array::Create(V8ArrayBuffer::ToImpl(arrayBuffer), v8View->ByteOffset(), v8View->Length());
  } else if (arrayBuffer->IsSharedArrayBuffer()) {
    typedArray = DOMInt32Array::Create(V8SharedArrayBuffer::ToImpl(arrayBuffer), v8View->ByteOffset(), v8View->Length());
  } else {
    NOTREACHED();
  }
  v8::Local<v8::Object> associatedWrapper = typedArray->AssociateWithWrapper(v8::Isolate::GetCurrent(), typedArray->GetWrapperTypeInfo(), object);
  DCHECK(associatedWrapper == object);

  return typedArray->ToImpl<DOMInt32Array>();
}

DOMInt32Array* V8Int32Array::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return value->IsInt32Array() ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMInt32Array* NativeValueTraits<DOMInt32Array>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMInt32Array* nativeValue = V8Int32Array::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Int32Array"));
  }
  return nativeValue;
}

}  // namespace blink

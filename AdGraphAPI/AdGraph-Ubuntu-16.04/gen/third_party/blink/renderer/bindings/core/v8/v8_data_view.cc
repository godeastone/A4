// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_data_view.h"

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
const WrapperTypeInfo V8DataView::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    nullptr,
    nullptr,
    "DataView",
    &V8ArrayBufferView::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMDataView.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMDataView::wrapper_type_info_ = V8DataView::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMDataView>::value,
    "DOMDataView inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMDataView::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMDataView is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

DOMDataView* V8DataView::ToImpl(v8::Local<v8::Object> object) {
  DCHECK(object->IsDataView());
  ScriptWrappable* scriptWrappable = ToScriptWrappable(object);
  if (scriptWrappable)
    return scriptWrappable->ToImpl<DOMDataView>();

  v8::Local<v8::DataView> v8View = object.As<v8::DataView>();
  v8::Local<v8::Object> arrayBuffer = v8View->Buffer();
  DOMDataView* typedArray = nullptr;
  if (arrayBuffer->IsArrayBuffer()) {
    typedArray = DOMDataView::Create(V8ArrayBuffer::ToImpl(arrayBuffer), v8View->ByteOffset(), v8View->ByteLength());
  } else if (arrayBuffer->IsSharedArrayBuffer()) {
    typedArray = DOMDataView::Create(V8SharedArrayBuffer::ToImpl(arrayBuffer), v8View->ByteOffset(), v8View->ByteLength());
  } else {
    NOTREACHED();
  }
  v8::Local<v8::Object> associatedWrapper = typedArray->AssociateWithWrapper(v8::Isolate::GetCurrent(), typedArray->GetWrapperTypeInfo(), object);
  DCHECK(associatedWrapper == object);

  return typedArray->ToImpl<DOMDataView>();
}

DOMDataView* V8DataView::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return value->IsDataView() ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMDataView* NativeValueTraits<DOMDataView>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMDataView* nativeValue = V8DataView::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DataView"));
  }
  return nativeValue;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8SharedArrayBuffer_h
#define V8SharedArrayBuffer_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_shared_array_buffer.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8SharedArrayBuffer {
  STATIC_ONLY(V8SharedArrayBuffer);
 public:
  CORE_EXPORT static DOMSharedArrayBuffer* ToImpl(v8::Local<v8::Object> object);
  CORE_EXPORT static DOMSharedArrayBuffer* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void byteLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
};

template <>
struct NativeValueTraits<DOMSharedArrayBuffer> : public NativeValueTraitsBase<DOMSharedArrayBuffer> {
  CORE_EXPORT static DOMSharedArrayBuffer* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static DOMSharedArrayBuffer* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<DOMSharedArrayBuffer> {
  typedef V8SharedArrayBuffer Type;
};

}  // namespace blink

#endif  // V8SharedArrayBuffer_h

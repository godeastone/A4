// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ArrayBufferViewOrBlobOrStringOrFormData_h
#define ArrayBufferViewOrBlobOrStringOrFormData_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Blob;
class FormData;

class MODULES_EXPORT ArrayBufferViewOrBlobOrStringOrFormData final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ArrayBufferViewOrBlobOrStringOrFormData();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsArrayBufferView() const { return type_ == SpecificType::kArrayBufferView; }
  NotShared<DOMArrayBufferView> GetAsArrayBufferView() const;
  void SetArrayBufferView(NotShared<DOMArrayBufferView>);
  static ArrayBufferViewOrBlobOrStringOrFormData FromArrayBufferView(NotShared<DOMArrayBufferView>);

  bool IsBlob() const { return type_ == SpecificType::kBlob; }
  Blob* GetAsBlob() const;
  void SetBlob(Blob*);
  static ArrayBufferViewOrBlobOrStringOrFormData FromBlob(Blob*);

  bool IsFormData() const { return type_ == SpecificType::kFormData; }
  FormData* GetAsFormData() const;
  void SetFormData(FormData*);
  static ArrayBufferViewOrBlobOrStringOrFormData FromFormData(FormData*);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static ArrayBufferViewOrBlobOrStringOrFormData FromString(const String&);

  ArrayBufferViewOrBlobOrStringOrFormData(const ArrayBufferViewOrBlobOrStringOrFormData&);
  ~ArrayBufferViewOrBlobOrStringOrFormData();
  ArrayBufferViewOrBlobOrStringOrFormData& operator=(const ArrayBufferViewOrBlobOrStringOrFormData&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kArrayBufferView,
    kBlob,
    kFormData,
    kString,
  };
  SpecificType type_;

  Member<DOMArrayBufferView> array_buffer_view_;
  Member<Blob> blob_;
  Member<FormData> form_data_;
  String string_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const ArrayBufferViewOrBlobOrStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ArrayBufferViewOrBlobOrStringOrFormData final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, ArrayBufferViewOrBlobOrStringOrFormData&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const ArrayBufferViewOrBlobOrStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, ArrayBufferViewOrBlobOrStringOrFormData& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, ArrayBufferViewOrBlobOrStringOrFormData& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ArrayBufferViewOrBlobOrStringOrFormData> : public NativeValueTraitsBase<ArrayBufferViewOrBlobOrStringOrFormData> {
  MODULES_EXPORT static ArrayBufferViewOrBlobOrStringOrFormData NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static ArrayBufferViewOrBlobOrStringOrFormData NullValue() { return ArrayBufferViewOrBlobOrStringOrFormData(); }
};

template <>
struct V8TypeOf<ArrayBufferViewOrBlobOrStringOrFormData> {
  typedef V8ArrayBufferViewOrBlobOrStringOrFormData Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ArrayBufferViewOrBlobOrStringOrFormData);

#endif  // ArrayBufferViewOrBlobOrStringOrFormData_h

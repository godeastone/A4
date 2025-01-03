// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef HTMLScriptElementOrSVGScriptElement_h
#define HTMLScriptElementOrSVGScriptElement_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class HTMLScriptElement;
class SVGScriptElement;

class CORE_EXPORT HTMLScriptElementOrSVGScriptElement final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  HTMLScriptElementOrSVGScriptElement();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsHTMLScriptElement() const { return type_ == SpecificType::kHTMLScriptElement; }
  HTMLScriptElement* GetAsHTMLScriptElement() const;
  void SetHTMLScriptElement(HTMLScriptElement*);
  static HTMLScriptElementOrSVGScriptElement FromHTMLScriptElement(HTMLScriptElement*);

  bool IsSVGScriptElement() const { return type_ == SpecificType::kSVGScriptElement; }
  SVGScriptElement* GetAsSVGScriptElement() const;
  void SetSVGScriptElement(SVGScriptElement*);
  static HTMLScriptElementOrSVGScriptElement FromSVGScriptElement(SVGScriptElement*);

  HTMLScriptElementOrSVGScriptElement(const HTMLScriptElementOrSVGScriptElement&);
  ~HTMLScriptElementOrSVGScriptElement();
  HTMLScriptElementOrSVGScriptElement& operator=(const HTMLScriptElementOrSVGScriptElement&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kHTMLScriptElement,
    kSVGScriptElement,
  };
  SpecificType type_;

  Member<HTMLScriptElement> html_script_element_;
  Member<SVGScriptElement> svg_script_element_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLScriptElementOrSVGScriptElement&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLScriptElementOrSVGScriptElement final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLScriptElementOrSVGScriptElement&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLScriptElementOrSVGScriptElement&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLScriptElementOrSVGScriptElement& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLScriptElementOrSVGScriptElement& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLScriptElementOrSVGScriptElement> : public NativeValueTraitsBase<HTMLScriptElementOrSVGScriptElement> {
  CORE_EXPORT static HTMLScriptElementOrSVGScriptElement NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLScriptElementOrSVGScriptElement NullValue() { return HTMLScriptElementOrSVGScriptElement(); }
};

template <>
struct V8TypeOf<HTMLScriptElementOrSVGScriptElement> {
  typedef V8HTMLScriptElementOrSVGScriptElement Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLScriptElementOrSVGScriptElement);

#endif  // HTMLScriptElementOrSVGScriptElement_h
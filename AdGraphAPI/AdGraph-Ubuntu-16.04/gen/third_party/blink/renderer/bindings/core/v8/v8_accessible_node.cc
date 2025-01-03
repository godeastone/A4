// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AccessibleNode::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8AccessibleNode::domTemplate,
    nullptr,
    "AccessibleNode",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AccessibleNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AccessibleNode::wrapper_type_info_ = V8AccessibleNode::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AccessibleNode>::value,
    "AccessibleNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AccessibleNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AccessibleNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AccessibleNodeV8Internal {

static void activeDescendantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->activeDescendant()), impl);
}

static void activeDescendantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "activeDescendant");

  // Prepare the value to be set.
  AccessibleNode* cppValue = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setActiveDescendant(cppValue);
}

static void atomicAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->atomic(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void atomicAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "atomic");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setAtomic(cppValue, isNull);
}

static void autocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->autocomplete(), info.GetIsolate());
}

static void autocompleteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAutocomplete(cppValue);
}

static void busyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->busy(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void busyAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "busy");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setBusy(cppValue, isNull);
}

static void checkedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->checked(), info.GetIsolate());
}

static void checkedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setChecked(cppValue);
}

static void colCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->colCount(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void colCountAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colCount");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setColCount(cppValue, isNull);
}

static void colIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->colIndex(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void colIndexAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colIndex");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setColIndex(cppValue, isNull);
}

static void colSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->colSpan(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void colSpanAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colSpan");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setColSpan(cppValue, isNull);
}

static void controlsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->controls()), impl);
}

static void controlsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "controls");

  // Prepare the value to be set.
  AccessibleNodeList* cppValue = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setControls(cppValue);
}

static void currentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->current(), info.GetIsolate());
}

static void currentAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setCurrent(cppValue);
}

static void describedByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->describedBy()), impl);
}

static void describedByAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "describedBy");

  // Prepare the value to be set.
  AccessibleNodeList* cppValue = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setDescribedBy(cppValue);
}

static void detailsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->details()), impl);
}

static void detailsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "details");

  // Prepare the value to be set.
  AccessibleNode* cppValue = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setDetails(cppValue);
}

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->disabled(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void disabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "disabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setDisabled(cppValue, isNull);
}

static void errorMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->errorMessage()), impl);
}

static void errorMessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "errorMessage");

  // Prepare the value to be set.
  AccessibleNode* cppValue = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setErrorMessage(cppValue);
}

static void expandedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->expanded(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void expandedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "expanded");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setExpanded(cppValue, isNull);
}

static void flowToAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->flowTo()), impl);
}

static void flowToAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "flowTo");

  // Prepare the value to be set.
  AccessibleNodeList* cppValue = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setFlowTo(cppValue);
}

static void hasPopUpAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->hasPopUp(), info.GetIsolate());
}

static void hasPopUpAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setHasPopUp(cppValue);
}

static void hiddenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->hidden(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void hiddenAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "hidden");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setHidden(cppValue, isNull);
}

static void invalidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->invalid(), info.GetIsolate());
}

static void invalidAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setInvalid(cppValue);
}

static void keyShortcutsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->keyShortcuts(), info.GetIsolate());
}

static void keyShortcutsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setKeyShortcuts(cppValue);
}

static void labelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->label(), info.GetIsolate());
}

static void labelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLabel(cppValue);
}

static void labeledByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->labeledBy()), impl);
}

static void labeledByAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "labeledBy");

  // Prepare the value to be set.
  AccessibleNodeList* cppValue = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setLabeledBy(cppValue);
}

static void levelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->level(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void levelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "level");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setLevel(cppValue, isNull);
}

static void liveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->live(), info.GetIsolate());
}

static void liveAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLive(cppValue);
}

static void modalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->modal(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void modalAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "modal");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setModal(cppValue, isNull);
}

static void multilineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->multiline(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void multilineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "multiline");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setMultiline(cppValue, isNull);
}

static void multiselectableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->multiselectable(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void multiselectableAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "multiselectable");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setMultiselectable(cppValue, isNull);
}

static void orientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->orientation(), info.GetIsolate());
}

static void orientationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setOrientation(cppValue);
}

static void ownsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->owns()), impl);
}

static void ownsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "owns");

  // Prepare the value to be set.
  AccessibleNodeList* cppValue = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setOwns(cppValue);
}

static void placeholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->placeholder(), info.GetIsolate());
}

static void placeholderAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setPlaceholder(cppValue);
}

static void posInSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->posInSet(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void posInSetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "posInSet");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setPosInSet(cppValue, isNull);
}

static void pressedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->pressed(), info.GetIsolate());
}

static void pressedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setPressed(cppValue);
}

static void readOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->readOnly(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void readOnlyAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "readOnly");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setReadOnly(cppValue, isNull);
}

static void relevantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->relevant(), info.GetIsolate());
}

static void relevantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setRelevant(cppValue);
}

static void requiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->required(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void requiredAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "required");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setRequired(cppValue, isNull);
}

static void roleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->role(), info.GetIsolate());
}

static void roleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setRole(cppValue);
}

static void roleDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->roleDescription(), info.GetIsolate());
}

static void roleDescriptionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setRoleDescription(cppValue);
}

static void rowCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->rowCount(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void rowCountAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowCount");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setRowCount(cppValue, isNull);
}

static void rowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->rowIndex(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void rowIndexAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowIndex");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setRowIndex(cppValue, isNull);
}

static void rowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->rowSpan(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void rowSpanAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowSpan");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setRowSpan(cppValue, isNull);
}

static void selectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->selected(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void selectedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "selected");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setSelected(cppValue, isNull);
}

static void setSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->setSize(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void setSizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "setSize");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setSetSize(cppValue, isNull);
}

static void sortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->sort(), info.GetIsolate());
}

static void sortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setSort(cppValue);
}

static void valueMaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueMax(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void valueMaxAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueMax");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setValueMax(cppValue, isNull);
}

static void valueMinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueMin(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void valueMinAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueMin");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setValueMin(cppValue, isNull);
}

static void valueNowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueNow(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void valueNowAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueNow");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  bool isNull = IsUndefinedOrNull(v8Value);
  impl->setValueNow(cppValue, isNull);
}

static void valueTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->valueText(), info.GetIsolate());
}

static void valueTextAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setValueText(cppValue);
}

static void onaccessibleclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessibleclick()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessibleclickAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibleclick(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaccessiblecontextmenuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessiblecontextmenu()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessiblecontextmenuAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblecontextmenu(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaccessibledecrementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessibledecrement()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessibledecrementAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibledecrement(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaccessiblefocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessiblefocus()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessiblefocusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblefocus(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaccessibleincrementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessibleincrement()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessibleincrementAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibleincrement(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaccessiblescrollintoviewAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaccessiblescrollintoview()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaccessiblescrollintoviewAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblescrollintoview(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void childNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  AccessibleNodeList* cppValue(WTF::GetPtr(impl->childNodes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AccessibleNode#childNodes")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void appendChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AccessibleNode", "appendChild");

  AccessibleNode* impl = V8AccessibleNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  AccessibleNode* child;
  child = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AccessibleNode'.");
    return;
  }

  impl->appendChild(child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void removeChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AccessibleNode", "removeChild");

  AccessibleNode* impl = V8AccessibleNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  AccessibleNode* child;
  child = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AccessibleNode'.");
    return;
  }

  impl->removeChild(child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_ConstructorCallback");

  Document& document = *ToDocument(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  AccessibleNode* impl = AccessibleNode::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8AccessibleNode::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace AccessibleNodeV8Internal

void V8AccessibleNode::activeDescendantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_activeDescendant_Getter");

  AccessibleNodeV8Internal::activeDescendantAttributeGetter(info);
}

void V8AccessibleNode::activeDescendantAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_activeDescendant_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::activeDescendantAttributeSetter(v8Value, info);
}

void V8AccessibleNode::atomicAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_atomic_Getter");

  AccessibleNodeV8Internal::atomicAttributeGetter(info);
}

void V8AccessibleNode::atomicAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_atomic_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::atomicAttributeSetter(v8Value, info);
}

void V8AccessibleNode::autocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_autocomplete_Getter");

  AccessibleNodeV8Internal::autocompleteAttributeGetter(info);
}

void V8AccessibleNode::autocompleteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_autocomplete_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::autocompleteAttributeSetter(v8Value, info);
}

void V8AccessibleNode::busyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_busy_Getter");

  AccessibleNodeV8Internal::busyAttributeGetter(info);
}

void V8AccessibleNode::busyAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_busy_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::busyAttributeSetter(v8Value, info);
}

void V8AccessibleNode::checkedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_checked_Getter");

  AccessibleNodeV8Internal::checkedAttributeGetter(info);
}

void V8AccessibleNode::checkedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_checked_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::checkedAttributeSetter(v8Value, info);
}

void V8AccessibleNode::colCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colCount_Getter");

  AccessibleNodeV8Internal::colCountAttributeGetter(info);
}

void V8AccessibleNode::colCountAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colCount_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::colCountAttributeSetter(v8Value, info);
}

void V8AccessibleNode::colIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colIndex_Getter");

  AccessibleNodeV8Internal::colIndexAttributeGetter(info);
}

void V8AccessibleNode::colIndexAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colIndex_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::colIndexAttributeSetter(v8Value, info);
}

void V8AccessibleNode::colSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colSpan_Getter");

  AccessibleNodeV8Internal::colSpanAttributeGetter(info);
}

void V8AccessibleNode::colSpanAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colSpan_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::colSpanAttributeSetter(v8Value, info);
}

void V8AccessibleNode::controlsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_controls_Getter");

  AccessibleNodeV8Internal::controlsAttributeGetter(info);
}

void V8AccessibleNode::controlsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_controls_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::controlsAttributeSetter(v8Value, info);
}

void V8AccessibleNode::currentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_current_Getter");

  AccessibleNodeV8Internal::currentAttributeGetter(info);
}

void V8AccessibleNode::currentAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_current_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::currentAttributeSetter(v8Value, info);
}

void V8AccessibleNode::describedByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_describedBy_Getter");

  AccessibleNodeV8Internal::describedByAttributeGetter(info);
}

void V8AccessibleNode::describedByAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_describedBy_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::describedByAttributeSetter(v8Value, info);
}

void V8AccessibleNode::detailsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_details_Getter");

  AccessibleNodeV8Internal::detailsAttributeGetter(info);
}

void V8AccessibleNode::detailsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_details_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::detailsAttributeSetter(v8Value, info);
}

void V8AccessibleNode::disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_disabled_Getter");

  AccessibleNodeV8Internal::disabledAttributeGetter(info);
}

void V8AccessibleNode::disabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_disabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::disabledAttributeSetter(v8Value, info);
}

void V8AccessibleNode::errorMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_errorMessage_Getter");

  AccessibleNodeV8Internal::errorMessageAttributeGetter(info);
}

void V8AccessibleNode::errorMessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_errorMessage_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::errorMessageAttributeSetter(v8Value, info);
}

void V8AccessibleNode::expandedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_expanded_Getter");

  AccessibleNodeV8Internal::expandedAttributeGetter(info);
}

void V8AccessibleNode::expandedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_expanded_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::expandedAttributeSetter(v8Value, info);
}

void V8AccessibleNode::flowToAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_flowTo_Getter");

  AccessibleNodeV8Internal::flowToAttributeGetter(info);
}

void V8AccessibleNode::flowToAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_flowTo_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::flowToAttributeSetter(v8Value, info);
}

void V8AccessibleNode::hasPopUpAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hasPopUp_Getter");

  AccessibleNodeV8Internal::hasPopUpAttributeGetter(info);
}

void V8AccessibleNode::hasPopUpAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hasPopUp_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::hasPopUpAttributeSetter(v8Value, info);
}

void V8AccessibleNode::hiddenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hidden_Getter");

  AccessibleNodeV8Internal::hiddenAttributeGetter(info);
}

void V8AccessibleNode::hiddenAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hidden_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::hiddenAttributeSetter(v8Value, info);
}

void V8AccessibleNode::invalidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_invalid_Getter");

  AccessibleNodeV8Internal::invalidAttributeGetter(info);
}

void V8AccessibleNode::invalidAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_invalid_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::invalidAttributeSetter(v8Value, info);
}

void V8AccessibleNode::keyShortcutsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_keyShortcuts_Getter");

  AccessibleNodeV8Internal::keyShortcutsAttributeGetter(info);
}

void V8AccessibleNode::keyShortcutsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_keyShortcuts_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::keyShortcutsAttributeSetter(v8Value, info);
}

void V8AccessibleNode::labelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_label_Getter");

  AccessibleNodeV8Internal::labelAttributeGetter(info);
}

void V8AccessibleNode::labelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_label_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::labelAttributeSetter(v8Value, info);
}

void V8AccessibleNode::labeledByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_labeledBy_Getter");

  AccessibleNodeV8Internal::labeledByAttributeGetter(info);
}

void V8AccessibleNode::labeledByAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_labeledBy_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::labeledByAttributeSetter(v8Value, info);
}

void V8AccessibleNode::levelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_level_Getter");

  AccessibleNodeV8Internal::levelAttributeGetter(info);
}

void V8AccessibleNode::levelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_level_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::levelAttributeSetter(v8Value, info);
}

void V8AccessibleNode::liveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_live_Getter");

  AccessibleNodeV8Internal::liveAttributeGetter(info);
}

void V8AccessibleNode::liveAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_live_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::liveAttributeSetter(v8Value, info);
}

void V8AccessibleNode::modalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_modal_Getter");

  AccessibleNodeV8Internal::modalAttributeGetter(info);
}

void V8AccessibleNode::modalAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_modal_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::modalAttributeSetter(v8Value, info);
}

void V8AccessibleNode::multilineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiline_Getter");

  AccessibleNodeV8Internal::multilineAttributeGetter(info);
}

void V8AccessibleNode::multilineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiline_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::multilineAttributeSetter(v8Value, info);
}

void V8AccessibleNode::multiselectableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiselectable_Getter");

  AccessibleNodeV8Internal::multiselectableAttributeGetter(info);
}

void V8AccessibleNode::multiselectableAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiselectable_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::multiselectableAttributeSetter(v8Value, info);
}

void V8AccessibleNode::orientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_orientation_Getter");

  AccessibleNodeV8Internal::orientationAttributeGetter(info);
}

void V8AccessibleNode::orientationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_orientation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::orientationAttributeSetter(v8Value, info);
}

void V8AccessibleNode::ownsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_owns_Getter");

  AccessibleNodeV8Internal::ownsAttributeGetter(info);
}

void V8AccessibleNode::ownsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_owns_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::ownsAttributeSetter(v8Value, info);
}

void V8AccessibleNode::placeholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_placeholder_Getter");

  AccessibleNodeV8Internal::placeholderAttributeGetter(info);
}

void V8AccessibleNode::placeholderAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_placeholder_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::placeholderAttributeSetter(v8Value, info);
}

void V8AccessibleNode::posInSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_posInSet_Getter");

  AccessibleNodeV8Internal::posInSetAttributeGetter(info);
}

void V8AccessibleNode::posInSetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_posInSet_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::posInSetAttributeSetter(v8Value, info);
}

void V8AccessibleNode::pressedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_pressed_Getter");

  AccessibleNodeV8Internal::pressedAttributeGetter(info);
}

void V8AccessibleNode::pressedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_pressed_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::pressedAttributeSetter(v8Value, info);
}

void V8AccessibleNode::readOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_readOnly_Getter");

  AccessibleNodeV8Internal::readOnlyAttributeGetter(info);
}

void V8AccessibleNode::readOnlyAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_readOnly_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::readOnlyAttributeSetter(v8Value, info);
}

void V8AccessibleNode::relevantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_relevant_Getter");

  AccessibleNodeV8Internal::relevantAttributeGetter(info);
}

void V8AccessibleNode::relevantAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_relevant_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::relevantAttributeSetter(v8Value, info);
}

void V8AccessibleNode::requiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_required_Getter");

  AccessibleNodeV8Internal::requiredAttributeGetter(info);
}

void V8AccessibleNode::requiredAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_required_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::requiredAttributeSetter(v8Value, info);
}

void V8AccessibleNode::roleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_role_Getter");

  AccessibleNodeV8Internal::roleAttributeGetter(info);
}

void V8AccessibleNode::roleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_role_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::roleAttributeSetter(v8Value, info);
}

void V8AccessibleNode::roleDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_roleDescription_Getter");

  AccessibleNodeV8Internal::roleDescriptionAttributeGetter(info);
}

void V8AccessibleNode::roleDescriptionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_roleDescription_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::roleDescriptionAttributeSetter(v8Value, info);
}

void V8AccessibleNode::rowCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowCount_Getter");

  AccessibleNodeV8Internal::rowCountAttributeGetter(info);
}

void V8AccessibleNode::rowCountAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowCount_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::rowCountAttributeSetter(v8Value, info);
}

void V8AccessibleNode::rowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowIndex_Getter");

  AccessibleNodeV8Internal::rowIndexAttributeGetter(info);
}

void V8AccessibleNode::rowIndexAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowIndex_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::rowIndexAttributeSetter(v8Value, info);
}

void V8AccessibleNode::rowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowSpan_Getter");

  AccessibleNodeV8Internal::rowSpanAttributeGetter(info);
}

void V8AccessibleNode::rowSpanAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowSpan_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::rowSpanAttributeSetter(v8Value, info);
}

void V8AccessibleNode::selectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_selected_Getter");

  AccessibleNodeV8Internal::selectedAttributeGetter(info);
}

void V8AccessibleNode::selectedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_selected_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::selectedAttributeSetter(v8Value, info);
}

void V8AccessibleNode::setSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_setSize_Getter");

  AccessibleNodeV8Internal::setSizeAttributeGetter(info);
}

void V8AccessibleNode::setSizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_setSize_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::setSizeAttributeSetter(v8Value, info);
}

void V8AccessibleNode::sortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_sort_Getter");

  AccessibleNodeV8Internal::sortAttributeGetter(info);
}

void V8AccessibleNode::sortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_sort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::sortAttributeSetter(v8Value, info);
}

void V8AccessibleNode::valueMaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMax_Getter");

  AccessibleNodeV8Internal::valueMaxAttributeGetter(info);
}

void V8AccessibleNode::valueMaxAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMax_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::valueMaxAttributeSetter(v8Value, info);
}

void V8AccessibleNode::valueMinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMin_Getter");

  AccessibleNodeV8Internal::valueMinAttributeGetter(info);
}

void V8AccessibleNode::valueMinAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMin_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::valueMinAttributeSetter(v8Value, info);
}

void V8AccessibleNode::valueNowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueNow_Getter");

  AccessibleNodeV8Internal::valueNowAttributeGetter(info);
}

void V8AccessibleNode::valueNowAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueNow_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::valueNowAttributeSetter(v8Value, info);
}

void V8AccessibleNode::valueTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueText_Getter");

  AccessibleNodeV8Internal::valueTextAttributeGetter(info);
}

void V8AccessibleNode::valueTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueText_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::valueTextAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessibleclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleclick_Getter");

  AccessibleNodeV8Internal::onaccessibleclickAttributeGetter(info);
}

void V8AccessibleNode::onaccessibleclickAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleclick_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessibleclickAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessiblecontextmenuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblecontextmenu_Getter");

  AccessibleNodeV8Internal::onaccessiblecontextmenuAttributeGetter(info);
}

void V8AccessibleNode::onaccessiblecontextmenuAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblecontextmenu_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessiblecontextmenuAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessibledecrementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibledecrement_Getter");

  AccessibleNodeV8Internal::onaccessibledecrementAttributeGetter(info);
}

void V8AccessibleNode::onaccessibledecrementAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibledecrement_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessibledecrementAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessiblefocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblefocus_Getter");

  AccessibleNodeV8Internal::onaccessiblefocusAttributeGetter(info);
}

void V8AccessibleNode::onaccessiblefocusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblefocus_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessiblefocusAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessibleincrementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleincrement_Getter");

  AccessibleNodeV8Internal::onaccessibleincrementAttributeGetter(info);
}

void V8AccessibleNode::onaccessibleincrementAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleincrement_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessibleincrementAttributeSetter(v8Value, info);
}

void V8AccessibleNode::onaccessiblescrollintoviewAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblescrollintoview_Getter");

  AccessibleNodeV8Internal::onaccessiblescrollintoviewAttributeGetter(info);
}

void V8AccessibleNode::onaccessiblescrollintoviewAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblescrollintoview_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AccessibleNodeV8Internal::onaccessiblescrollintoviewAttributeSetter(v8Value, info);
}

void V8AccessibleNode::childNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_childNodes_Getter");

  AccessibleNodeV8Internal::childNodesAttributeGetter(info);
}

void V8AccessibleNode::appendChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_appendChild");

  AccessibleNodeV8Internal::appendChildMethod(info);
}

void V8AccessibleNode::removeChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_removeChild");

  AccessibleNodeV8Internal::removeChildMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8AccessibleNodeAccessors[] = {
    { "activeDescendant", V8AccessibleNode::activeDescendantAttributeGetterCallback, V8AccessibleNode::activeDescendantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "atomic", V8AccessibleNode::atomicAttributeGetterCallback, V8AccessibleNode::atomicAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8AccessibleNode::autocompleteAttributeGetterCallback, V8AccessibleNode::autocompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "busy", V8AccessibleNode::busyAttributeGetterCallback, V8AccessibleNode::busyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "checked", V8AccessibleNode::checkedAttributeGetterCallback, V8AccessibleNode::checkedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colCount", V8AccessibleNode::colCountAttributeGetterCallback, V8AccessibleNode::colCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colIndex", V8AccessibleNode::colIndexAttributeGetterCallback, V8AccessibleNode::colIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colSpan", V8AccessibleNode::colSpanAttributeGetterCallback, V8AccessibleNode::colSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "controls", V8AccessibleNode::controlsAttributeGetterCallback, V8AccessibleNode::controlsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "current", V8AccessibleNode::currentAttributeGetterCallback, V8AccessibleNode::currentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "describedBy", V8AccessibleNode::describedByAttributeGetterCallback, V8AccessibleNode::describedByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "details", V8AccessibleNode::detailsAttributeGetterCallback, V8AccessibleNode::detailsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8AccessibleNode::disabledAttributeGetterCallback, V8AccessibleNode::disabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "errorMessage", V8AccessibleNode::errorMessageAttributeGetterCallback, V8AccessibleNode::errorMessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "expanded", V8AccessibleNode::expandedAttributeGetterCallback, V8AccessibleNode::expandedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "flowTo", V8AccessibleNode::flowToAttributeGetterCallback, V8AccessibleNode::flowToAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "hasPopUp", V8AccessibleNode::hasPopUpAttributeGetterCallback, V8AccessibleNode::hasPopUpAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "hidden", V8AccessibleNode::hiddenAttributeGetterCallback, V8AccessibleNode::hiddenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "invalid", V8AccessibleNode::invalidAttributeGetterCallback, V8AccessibleNode::invalidAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "keyShortcuts", V8AccessibleNode::keyShortcutsAttributeGetterCallback, V8AccessibleNode::keyShortcutsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "label", V8AccessibleNode::labelAttributeGetterCallback, V8AccessibleNode::labelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "labeledBy", V8AccessibleNode::labeledByAttributeGetterCallback, V8AccessibleNode::labeledByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "level", V8AccessibleNode::levelAttributeGetterCallback, V8AccessibleNode::levelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "live", V8AccessibleNode::liveAttributeGetterCallback, V8AccessibleNode::liveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "modal", V8AccessibleNode::modalAttributeGetterCallback, V8AccessibleNode::modalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "multiline", V8AccessibleNode::multilineAttributeGetterCallback, V8AccessibleNode::multilineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "multiselectable", V8AccessibleNode::multiselectableAttributeGetterCallback, V8AccessibleNode::multiselectableAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orientation", V8AccessibleNode::orientationAttributeGetterCallback, V8AccessibleNode::orientationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "owns", V8AccessibleNode::ownsAttributeGetterCallback, V8AccessibleNode::ownsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8AccessibleNode::placeholderAttributeGetterCallback, V8AccessibleNode::placeholderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "posInSet", V8AccessibleNode::posInSetAttributeGetterCallback, V8AccessibleNode::posInSetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pressed", V8AccessibleNode::pressedAttributeGetterCallback, V8AccessibleNode::pressedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8AccessibleNode::readOnlyAttributeGetterCallback, V8AccessibleNode::readOnlyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "relevant", V8AccessibleNode::relevantAttributeGetterCallback, V8AccessibleNode::relevantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "required", V8AccessibleNode::requiredAttributeGetterCallback, V8AccessibleNode::requiredAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "role", V8AccessibleNode::roleAttributeGetterCallback, V8AccessibleNode::roleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "roleDescription", V8AccessibleNode::roleDescriptionAttributeGetterCallback, V8AccessibleNode::roleDescriptionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowCount", V8AccessibleNode::rowCountAttributeGetterCallback, V8AccessibleNode::rowCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowIndex", V8AccessibleNode::rowIndexAttributeGetterCallback, V8AccessibleNode::rowIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowSpan", V8AccessibleNode::rowSpanAttributeGetterCallback, V8AccessibleNode::rowSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "selected", V8AccessibleNode::selectedAttributeGetterCallback, V8AccessibleNode::selectedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "setSize", V8AccessibleNode::setSizeAttributeGetterCallback, V8AccessibleNode::setSizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sort", V8AccessibleNode::sortAttributeGetterCallback, V8AccessibleNode::sortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueMax", V8AccessibleNode::valueMaxAttributeGetterCallback, V8AccessibleNode::valueMaxAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueMin", V8AccessibleNode::valueMinAttributeGetterCallback, V8AccessibleNode::valueMinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueNow", V8AccessibleNode::valueNowAttributeGetterCallback, V8AccessibleNode::valueNowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueText", V8AccessibleNode::valueTextAttributeGetterCallback, V8AccessibleNode::valueTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessibleclick", V8AccessibleNode::onaccessibleclickAttributeGetterCallback, V8AccessibleNode::onaccessibleclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblecontextmenu", V8AccessibleNode::onaccessiblecontextmenuAttributeGetterCallback, V8AccessibleNode::onaccessiblecontextmenuAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessibledecrement", V8AccessibleNode::onaccessibledecrementAttributeGetterCallback, V8AccessibleNode::onaccessibledecrementAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblefocus", V8AccessibleNode::onaccessiblefocusAttributeGetterCallback, V8AccessibleNode::onaccessiblefocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessibleincrement", V8AccessibleNode::onaccessibleincrementAttributeGetterCallback, V8AccessibleNode::onaccessibleincrementAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblescrollintoview", V8AccessibleNode::onaccessiblescrollintoviewAttributeGetterCallback, V8AccessibleNode::onaccessiblescrollintoviewAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "childNodes", V8AccessibleNode::childNodesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8AccessibleNodeMethods[] = {
    {"appendChild", V8AccessibleNode::appendChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeChild", V8AccessibleNode::removeChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8AccessibleNode::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("AccessibleNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  AccessibleNodeV8Internal::constructor(info);
}

static void installV8AccessibleNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AccessibleNode::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8AccessibleNode::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8AccessibleNode::constructorCallback);
  interfaceTemplate->SetLength(0);

  if (!RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AccessibleNodeAccessors, arraysize(V8AccessibleNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AccessibleNodeMethods, arraysize(V8AccessibleNodeMethods));

  // Custom signature

  V8AccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8AccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8AccessibleNode::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AccessibleNodeTemplate);
}

bool V8AccessibleNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AccessibleNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AccessibleNode* V8AccessibleNode::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AccessibleNode* NativeValueTraits<AccessibleNode>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AccessibleNode* nativeValue = V8AccessibleNode::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AccessibleNode"));
  }
  return nativeValue;
}

}  // namespace blink

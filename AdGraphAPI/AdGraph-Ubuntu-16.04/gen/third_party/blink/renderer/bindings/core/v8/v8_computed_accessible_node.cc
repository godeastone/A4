// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8ComputedAccessibleNode::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8ComputedAccessibleNode::domTemplate,
    nullptr,
    "ComputedAccessibleNode",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ComputedAccessibleNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ComputedAccessibleNode::wrapper_type_info_ = V8ComputedAccessibleNode::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ComputedAccessibleNode>::value,
    "ComputedAccessibleNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ComputedAccessibleNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ComputedAccessibleNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ComputedAccessibleNodeV8Internal {

static void atomicAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->atomic(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void busyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->busy(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->disabled(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void expandedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->expanded(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void modalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->modal(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void multilineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->multiline(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void multiselectableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->multiselectable(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void readOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->readOnly(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void requiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->required(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void selectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  bool cppValue(impl->selected(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cppValue);
}

static void colCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->colCount(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void colIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->colIndex(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void colSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->colSpan(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void levelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->level(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void posInSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->posInSet(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void rowCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->rowCount(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void rowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->rowIndex(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void rowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  uint32_t cppValue(impl->rowSpan(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cppValue);
}

static void setSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  int32_t cppValue(impl->setSize(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cppValue);
}

static void valueMaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueMax(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void valueMinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueMin(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void valueNowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool isNull = false;

  double cppValue(impl->valueNow(isNull));

  if (isNull) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cppValue);
}

static void autocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->autocomplete(), info.GetIsolate());
}

static void checkedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->checked(), info.GetIsolate());
}

static void keyShortcutsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->keyShortcuts(), info.GetIsolate());
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->name(), info.GetIsolate());
}

static void placeholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->placeholder(), info.GetIsolate());
}

static void roleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->role(), info.GetIsolate());
}

static void roleDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->roleDescription(), info.GetIsolate());
}

static void valueTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->valueText(), info.GetIsolate());
}

static void parentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cppValue(WTF::GetPtr(impl->parent()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#parent")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void firstChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cppValue(WTF::GetPtr(impl->firstChild()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#firstChild")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void lastChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cppValue(WTF::GetPtr(impl->lastChild()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#lastChild")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void previousSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cppValue(WTF::GetPtr(impl->previousSibling()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#previousSibling")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void nextSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cppValue(WTF::GetPtr(impl->nextSibling()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#nextSibling")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void ensureUpToDateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "ComputedAccessibleNode", "ensureUpToDate");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ComputedAccessibleNode::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->ensureUpToDate(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace ComputedAccessibleNodeV8Internal

void V8ComputedAccessibleNode::atomicAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_atomic_Getter");

  ComputedAccessibleNodeV8Internal::atomicAttributeGetter(info);
}

void V8ComputedAccessibleNode::busyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_busy_Getter");

  ComputedAccessibleNodeV8Internal::busyAttributeGetter(info);
}

void V8ComputedAccessibleNode::disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_disabled_Getter");

  ComputedAccessibleNodeV8Internal::disabledAttributeGetter(info);
}

void V8ComputedAccessibleNode::expandedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_expanded_Getter");

  ComputedAccessibleNodeV8Internal::expandedAttributeGetter(info);
}

void V8ComputedAccessibleNode::modalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_modal_Getter");

  ComputedAccessibleNodeV8Internal::modalAttributeGetter(info);
}

void V8ComputedAccessibleNode::multilineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_multiline_Getter");

  ComputedAccessibleNodeV8Internal::multilineAttributeGetter(info);
}

void V8ComputedAccessibleNode::multiselectableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_multiselectable_Getter");

  ComputedAccessibleNodeV8Internal::multiselectableAttributeGetter(info);
}

void V8ComputedAccessibleNode::readOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_readOnly_Getter");

  ComputedAccessibleNodeV8Internal::readOnlyAttributeGetter(info);
}

void V8ComputedAccessibleNode::requiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_required_Getter");

  ComputedAccessibleNodeV8Internal::requiredAttributeGetter(info);
}

void V8ComputedAccessibleNode::selectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_selected_Getter");

  ComputedAccessibleNodeV8Internal::selectedAttributeGetter(info);
}

void V8ComputedAccessibleNode::colCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colCount_Getter");

  ComputedAccessibleNodeV8Internal::colCountAttributeGetter(info);
}

void V8ComputedAccessibleNode::colIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colIndex_Getter");

  ComputedAccessibleNodeV8Internal::colIndexAttributeGetter(info);
}

void V8ComputedAccessibleNode::colSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colSpan_Getter");

  ComputedAccessibleNodeV8Internal::colSpanAttributeGetter(info);
}

void V8ComputedAccessibleNode::levelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_level_Getter");

  ComputedAccessibleNodeV8Internal::levelAttributeGetter(info);
}

void V8ComputedAccessibleNode::posInSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_posInSet_Getter");

  ComputedAccessibleNodeV8Internal::posInSetAttributeGetter(info);
}

void V8ComputedAccessibleNode::rowCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowCount_Getter");

  ComputedAccessibleNodeV8Internal::rowCountAttributeGetter(info);
}

void V8ComputedAccessibleNode::rowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowIndex_Getter");

  ComputedAccessibleNodeV8Internal::rowIndexAttributeGetter(info);
}

void V8ComputedAccessibleNode::rowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowSpan_Getter");

  ComputedAccessibleNodeV8Internal::rowSpanAttributeGetter(info);
}

void V8ComputedAccessibleNode::setSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_setSize_Getter");

  ComputedAccessibleNodeV8Internal::setSizeAttributeGetter(info);
}

void V8ComputedAccessibleNode::valueMaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueMax_Getter");

  ComputedAccessibleNodeV8Internal::valueMaxAttributeGetter(info);
}

void V8ComputedAccessibleNode::valueMinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueMin_Getter");

  ComputedAccessibleNodeV8Internal::valueMinAttributeGetter(info);
}

void V8ComputedAccessibleNode::valueNowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueNow_Getter");

  ComputedAccessibleNodeV8Internal::valueNowAttributeGetter(info);
}

void V8ComputedAccessibleNode::autocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_autocomplete_Getter");

  ComputedAccessibleNodeV8Internal::autocompleteAttributeGetter(info);
}

void V8ComputedAccessibleNode::checkedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_checked_Getter");

  ComputedAccessibleNodeV8Internal::checkedAttributeGetter(info);
}

void V8ComputedAccessibleNode::keyShortcutsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_keyShortcuts_Getter");

  ComputedAccessibleNodeV8Internal::keyShortcutsAttributeGetter(info);
}

void V8ComputedAccessibleNode::nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_name_Getter");

  ComputedAccessibleNodeV8Internal::nameAttributeGetter(info);
}

void V8ComputedAccessibleNode::placeholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_placeholder_Getter");

  ComputedAccessibleNodeV8Internal::placeholderAttributeGetter(info);
}

void V8ComputedAccessibleNode::roleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_role_Getter");

  ComputedAccessibleNodeV8Internal::roleAttributeGetter(info);
}

void V8ComputedAccessibleNode::roleDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_roleDescription_Getter");

  ComputedAccessibleNodeV8Internal::roleDescriptionAttributeGetter(info);
}

void V8ComputedAccessibleNode::valueTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueText_Getter");

  ComputedAccessibleNodeV8Internal::valueTextAttributeGetter(info);
}

void V8ComputedAccessibleNode::parentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_parent_Getter");

  ComputedAccessibleNodeV8Internal::parentAttributeGetter(info);
}

void V8ComputedAccessibleNode::firstChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_firstChild_Getter");

  ComputedAccessibleNodeV8Internal::firstChildAttributeGetter(info);
}

void V8ComputedAccessibleNode::lastChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_lastChild_Getter");

  ComputedAccessibleNodeV8Internal::lastChildAttributeGetter(info);
}

void V8ComputedAccessibleNode::previousSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_previousSibling_Getter");

  ComputedAccessibleNodeV8Internal::previousSiblingAttributeGetter(info);
}

void V8ComputedAccessibleNode::nextSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_nextSibling_Getter");

  ComputedAccessibleNodeV8Internal::nextSiblingAttributeGetter(info);
}

void V8ComputedAccessibleNode::ensureUpToDateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_ensureUpToDate");

  ComputedAccessibleNodeV8Internal::ensureUpToDateMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8ComputedAccessibleNodeAccessors[] = {
    { "atomic", V8ComputedAccessibleNode::atomicAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "busy", V8ComputedAccessibleNode::busyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8ComputedAccessibleNode::disabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "expanded", V8ComputedAccessibleNode::expandedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "modal", V8ComputedAccessibleNode::modalAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "multiline", V8ComputedAccessibleNode::multilineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "multiselectable", V8ComputedAccessibleNode::multiselectableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8ComputedAccessibleNode::readOnlyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "required", V8ComputedAccessibleNode::requiredAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "selected", V8ComputedAccessibleNode::selectedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colCount", V8ComputedAccessibleNode::colCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colIndex", V8ComputedAccessibleNode::colIndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "colSpan", V8ComputedAccessibleNode::colSpanAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "level", V8ComputedAccessibleNode::levelAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "posInSet", V8ComputedAccessibleNode::posInSetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowCount", V8ComputedAccessibleNode::rowCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowIndex", V8ComputedAccessibleNode::rowIndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rowSpan", V8ComputedAccessibleNode::rowSpanAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "setSize", V8ComputedAccessibleNode::setSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueMax", V8ComputedAccessibleNode::valueMaxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueMin", V8ComputedAccessibleNode::valueMinAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueNow", V8ComputedAccessibleNode::valueNowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8ComputedAccessibleNode::autocompleteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "checked", V8ComputedAccessibleNode::checkedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "keyShortcuts", V8ComputedAccessibleNode::keyShortcutsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "name", V8ComputedAccessibleNode::nameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8ComputedAccessibleNode::placeholderAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "role", V8ComputedAccessibleNode::roleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "roleDescription", V8ComputedAccessibleNode::roleDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueText", V8ComputedAccessibleNode::valueTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "parent", V8ComputedAccessibleNode::parentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "firstChild", V8ComputedAccessibleNode::firstChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lastChild", V8ComputedAccessibleNode::lastChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "previousSibling", V8ComputedAccessibleNode::previousSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "nextSibling", V8ComputedAccessibleNode::nextSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8ComputedAccessibleNodeMethods[] = {
    {"ensureUpToDate", V8ComputedAccessibleNode::ensureUpToDateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8ComputedAccessibleNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ComputedAccessibleNode::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8ComputedAccessibleNode::internalFieldCount);

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
      signature, V8ComputedAccessibleNodeAccessors, arraysize(V8ComputedAccessibleNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8ComputedAccessibleNodeMethods, arraysize(V8ComputedAccessibleNodeMethods));

  // Custom signature

  V8ComputedAccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8ComputedAccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ComputedAccessibleNode::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ComputedAccessibleNodeTemplate);
}

bool V8ComputedAccessibleNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ComputedAccessibleNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ComputedAccessibleNode* V8ComputedAccessibleNode::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ComputedAccessibleNode* NativeValueTraits<ComputedAccessibleNode>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ComputedAccessibleNode* nativeValue = V8ComputedAccessibleNode::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ComputedAccessibleNode"));
  }
  return nativeValue;
}

}  // namespace blink

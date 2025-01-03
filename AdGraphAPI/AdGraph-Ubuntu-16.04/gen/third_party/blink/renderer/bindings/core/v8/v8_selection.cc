// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Selection::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Selection::domTemplate,
    nullptr,
    "Selection",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMSelection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMSelection::wrapper_type_info_ = V8Selection::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMSelection>::value,
    "DOMSelection inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMSelection::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMSelection is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMSelectionV8Internal {

static void anchorNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->anchorNode()), impl);
}

static void anchorOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->anchorOffset());
}

static void focusNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->focusNode()), impl);
}

static void focusOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->focusOffset());
}

static void isCollapsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isCollapsed());
}

static void rangeCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->rangeCount());
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void baseNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->baseNode()), impl);
}

static void baseOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->baseOffset());
}

static void extentNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->extentNode()), impl);
}

static void extentOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMSelection* impl = V8Selection::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->extentOffset());
}

static void getRangeAtMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "getRangeAt");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  Range* result = impl->getRangeAt(index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void addRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("addRange", "Selection", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Range* range;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("addRange", "Selection", "parameter 1 is not of type 'Range'."));
    return;
  }

  impl->addRange(range);
}

static void removeRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeRange", "Selection", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Range* range;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeRange", "Selection", "parameter 1 is not of type 'Range'."));
    return;
  }

  impl->removeRange(range);
}

static void removeAllRangesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  impl->removeAllRanges();
}

static void emptyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  impl->empty();
}

static void collapseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "collapse");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    offset = 0u;
  }

  impl->collapse(node, offset, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "setPosition");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    offset = 0u;
  }

  impl->collapse(node, offset, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void collapseToStartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "collapseToStart");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  impl->collapseToStart(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void collapseToEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "collapseToEnd");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  impl->collapseToEnd(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void extendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "extend");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    offset = 0u;
  }

  impl->extend(node, offset, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setBaseAndExtentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "setBaseAndExtent");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Node* baseNode;
  uint32_t baseOffset;
  Node* extentNode;
  uint32_t extentOffset;
  baseNode = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!baseNode && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  baseOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  extentNode = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!extentNode && !IsUndefinedOrNull(info[2])) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Node'.");
    return;
  }

  extentOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setBaseAndExtent(baseNode, baseOffset, extentNode, extentOffset, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void selectAllChildrenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "selectAllChildren");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  impl->selectAllChildren(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void deleteFromDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  impl->deleteFromDocument();
}

static void containsNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Selection", "containsNode");

  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  bool allowPartialContainment;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    allowPartialContainment = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    allowPartialContainment = false;
  }

  V8SetReturnValueBool(info, impl->containsNode(node, allowPartialContainment));
}

static void modifyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  V8StringResource<> alter;
  V8StringResource<> direction;
  V8StringResource<> granularity;
  alter = info[0];
  if (!alter.Prepare())
    return;

  direction = info[1];
  if (!direction.Prepare())
    return;

  granularity = info[2];
  if (!granularity.Prepare())
    return;

  impl->modify(alter, direction, granularity);
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMSelection* impl = V8Selection::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

} // namespace DOMSelectionV8Internal

void V8Selection::anchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_anchorNode_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionAnchorNode);

  DOMSelectionV8Internal::anchorNodeAttributeGetter(info);
}

void V8Selection::anchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_anchorOffset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionAnchorOffset);

  DOMSelectionV8Internal::anchorOffsetAttributeGetter(info);
}

void V8Selection::focusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_focusNode_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionFocusNode);

  DOMSelectionV8Internal::focusNodeAttributeGetter(info);
}

void V8Selection::focusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_focusOffset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionFocusOffset);

  DOMSelectionV8Internal::focusOffsetAttributeGetter(info);
}

void V8Selection::isCollapsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_isCollapsed_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionIsCollapsed);

  DOMSelectionV8Internal::isCollapsedAttributeGetter(info);
}

void V8Selection::rangeCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_rangeCount_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionRangeCount);

  DOMSelectionV8Internal::rangeCountAttributeGetter(info);
}

void V8Selection::typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_type_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionType);

  DOMSelectionV8Internal::typeAttributeGetter(info);
}

void V8Selection::baseNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_baseNode_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionBaseNode);

  DOMSelectionV8Internal::baseNodeAttributeGetter(info);
}

void V8Selection::baseOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_baseOffset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionBaseOffset);

  DOMSelectionV8Internal::baseOffsetAttributeGetter(info);
}

void V8Selection::extentNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_extentNode_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionExtentNode);

  DOMSelectionV8Internal::extentNodeAttributeGetter(info);
}

void V8Selection::extentOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_extentOffset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionExtentOffset);

  DOMSelectionV8Internal::extentOffsetAttributeGetter(info);
}

void V8Selection::getRangeAtMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_getRangeAt");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionGetRangeAt);
  DOMSelectionV8Internal::getRangeAtMethod(info);
}

void V8Selection::addRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_addRange");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionAddRange);
  DOMSelectionV8Internal::addRangeMethod(info);
}

void V8Selection::removeRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_removeRange");

  DOMSelectionV8Internal::removeRangeMethod(info);
}

void V8Selection::removeAllRangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_removeAllRanges");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionRemoveAllRanges);
  DOMSelectionV8Internal::removeAllRangesMethod(info);
}

void V8Selection::emptyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_empty");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionEmpty);
  DOMSelectionV8Internal::emptyMethod(info);
}

void V8Selection::collapseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_collapse");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionCollapse);
  DOMSelectionV8Internal::collapseMethod(info);
}

void V8Selection::setPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_setPosition");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionSetPosition);
  DOMSelectionV8Internal::setPositionMethod(info);
}

void V8Selection::collapseToStartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_collapseToStart");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionCollapseToStart);
  DOMSelectionV8Internal::collapseToStartMethod(info);
}

void V8Selection::collapseToEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_collapseToEnd");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionCollapseToEnd);
  DOMSelectionV8Internal::collapseToEndMethod(info);
}

void V8Selection::extendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_extend");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionExtend);
  DOMSelectionV8Internal::extendMethod(info);
}

void V8Selection::setBaseAndExtentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_setBaseAndExtent");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionSetBaseAndExtent);
  DOMSelectionV8Internal::setBaseAndExtentMethod(info);
}

void V8Selection::selectAllChildrenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_selectAllChildren");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionSelectAllChildren);
  DOMSelectionV8Internal::selectAllChildrenMethod(info);
}

void V8Selection::deleteFromDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_deleteFromDocument");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionDeleteDromDocument);
  DOMSelectionV8Internal::deleteFromDocumentMethod(info);
}

void V8Selection::containsNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_containsNode");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionContainsNode);
  DOMSelectionV8Internal::containsNodeMethod(info);
}

void V8Selection::modifyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_modify");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionModify);
  DOMSelectionV8Internal::modifyMethod(info);
}

void V8Selection::toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMSelection_toString");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSelectionDOMString);
  DOMSelectionV8Internal::toStringMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SelectionAccessors[] = {
    { "anchorNode", V8Selection::anchorNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "anchorOffset", V8Selection::anchorOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "focusNode", V8Selection::focusNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "focusOffset", V8Selection::focusOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isCollapsed", V8Selection::isCollapsedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rangeCount", V8Selection::rangeCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "type", V8Selection::typeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "baseNode", V8Selection::baseNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "baseOffset", V8Selection::baseOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "extentNode", V8Selection::extentNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "extentOffset", V8Selection::extentOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SelectionMethods[] = {
    {"getRangeAt", V8Selection::getRangeAtMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addRange", V8Selection::addRangeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeRange", V8Selection::removeRangeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeAllRanges", V8Selection::removeAllRangesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"empty", V8Selection::emptyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"collapse", V8Selection::collapseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPosition", V8Selection::setPositionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"collapseToStart", V8Selection::collapseToStartMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"collapseToEnd", V8Selection::collapseToEndMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"extend", V8Selection::extendMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBaseAndExtent", V8Selection::setBaseAndExtentMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectAllChildren", V8Selection::selectAllChildrenMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteFromDocument", V8Selection::deleteFromDocumentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"containsNode", V8Selection::containsNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"modify", V8Selection::modifyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toString", V8Selection::toStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SelectionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Selection::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Selection::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SelectionAccessors, arraysize(V8SelectionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SelectionMethods, arraysize(V8SelectionMethods));

  // Custom signature

  V8Selection::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Selection::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Selection::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SelectionTemplate);
}

bool V8Selection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Selection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMSelection* V8Selection::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMSelection* NativeValueTraits<DOMSelection>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMSelection* nativeValue = V8Selection::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Selection"));
  }
  return nativeValue;
}

}  // namespace blink

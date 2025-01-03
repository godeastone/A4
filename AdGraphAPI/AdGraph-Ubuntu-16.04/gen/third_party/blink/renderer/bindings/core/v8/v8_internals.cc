// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internals.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_callback_function_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dictionary_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_gc_observation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_input_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_select_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_runtime_flags.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layer_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_record_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_sequence_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_type_conversions.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_types_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/testing/internals_fetch.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo V8Internals::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Internals::domTemplate,
    V8Internals::InstallConditionalFeatures,
    "Internals",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Internals.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Internals::wrapper_type_info_ = V8Internals::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Internals>::value,
    "Internals inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Internals::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Internals is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InternalsV8Internal {

static void pagePopupWindowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->pagePopupWindow()), impl);
}

static void settingsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  InternalSettings* cppValue(WTF::GetPtr(impl->settings()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Internals#settings")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void runtimeFlagsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  InternalRuntimeFlags* cppValue(WTF::GetPtr(impl->runtimeFlags()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Internals#runtimeFlags")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void workerThreadCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->workerThreadCount());
}

static void cursorUpdatePendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cursorUpdatePending());
}

static void fakeMouseMovePendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fakeMouseMovePending());
}

static void visibleSelectionAnchorNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->visibleSelectionAnchorNode()), impl);
}

static void visibleSelectionAnchorOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->visibleSelectionAnchorOffset());
}

static void visibleSelectionFocusNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->visibleSelectionFocusNode()), impl);
}

static void visibleSelectionFocusOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->visibleSelectionFocusOffset());
}

static void textAffinityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueString(info, impl->textAffinity(), info.GetIsolate());
}

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void unscopableAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueString(info, impl->unscopableAttribute(), info.GetIsolate());
}

static void observeGCMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("observeGC", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue observed;
  observed = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  V8SetReturnValue(info, impl->observeGC(observed));
}

static void elementLayoutTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementLayoutTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  String result = impl->elementLayoutTreeAsText(element, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void isPreloadedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloaded", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isPreloaded(url));
}

static void isPreloadedByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloadedBy", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloadedBy", "Internals", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isPreloadedBy(url, document));
}

static void isLoadingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isLoading", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isLoading(url));
}

static void isLoadingFromMemoryCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isLoadingFromMemoryCache", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isLoadingFromMemoryCache(url));
}

static void getResourcePriorityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "Internals", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->getResourcePriority(url, document));
}

static void getResourceHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourceHeader", "Internals", ExceptionMessages::NotEnoughArguments(3, info.Length())));
    return;
  }

  V8StringResource<> url;
  V8StringResource<> header;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  header = info[1];
  if (!header.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourceHeader", "Internals", "parameter 3 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueString(info, impl->getResourceHeader(url, header, document), info.GetIsolate());
}

static void computedStyleIncludingVisitedInfoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("computedStyleIncludingVisitedInfo", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("computedStyleIncludingVisitedInfo", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->computedStyleIncludingVisitedInfo(node));
}

static void createUserAgentShadowRootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createUserAgentShadowRoot", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* host;
  host = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!host) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createUserAgentShadowRoot", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->createUserAgentShadowRoot(host));
}

static void shadowRootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowRoot", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* host;
  host = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!host) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowRoot", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->shadowRoot(host));
}

static void setBrowserControlsStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setBrowserControlsState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float top_height;
  float bottom_height;
  bool shrinksLayout;
  top_height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  bottom_height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  shrinksLayout = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setBrowserControlsState(top_height, bottom_height, shrinksLayout);
}

static void setBrowserControlsShownRatioMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setBrowserControlsShownRatio");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float ratio;
  ratio = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setBrowserControlsShownRatio(ratio);
}

static void effectiveRootScrollerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectiveRootScroller", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectiveRootScroller", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, impl->effectiveRootScroller(document));
}

static void shadowRootTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "shadowRootType");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  String result = impl->shadowRootType(root, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void hasShadowInsertionPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasShadowInsertionPoint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  bool result = impl->hasShadowInsertionPoint(root, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void hasContentElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasContentElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  bool result = impl->hasContentElement(root, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void countElementShadowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "countElementShadow");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* Root;
  Root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!Root) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  uint32_t result = impl->countElementShadow(Root, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void shadowPseudoIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowPseudoId", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowPseudoId", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->shadowPseudoId(element), info.GetIsolate());
}

static void isValidContentSelectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isValidContentSelect");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* contentElement;
  contentElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!contentElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  bool result = impl->isValidContentSelect(contentElement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void treeScopeRootNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("treeScopeRootNode", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("treeScopeRootNode", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->treeScopeRootNode(node));
}

static void parentTreeScopeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("parentTreeScope", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("parentTreeScope", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->parentTreeScope(node));
}

static void compareTreeScopePositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "compareTreeScopePosition");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* treeScope1;
  Node* treeScope2;
  treeScope1 = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!treeScope1) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  treeScope2 = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!treeScope2) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  uint16_t result = impl->compareTreeScopePosition(treeScope1, treeScope2, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void updateStyleAndReturnAffectedElementCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "updateStyleAndReturnAffectedElementCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  uint32_t result = impl->updateStyleAndReturnAffectedElementCount(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void needsLayoutCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "needsLayoutCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  uint32_t result = impl->needsLayoutCount(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void hitTestCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hitTestCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  uint32_t result = impl->hitTestCount(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void hitTestCacheHitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hitTestCacheHits");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  uint32_t result = impl->hitTestCacheHits(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void elementFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementFromPoint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  Document* document;
  double x;
  double y;
  bool ignoreClipping;
  bool allowChildFrameContent;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  x = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  ignoreClipping = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  allowChildFrameContent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  Element* result = impl->elementFromPoint(document, x, y, ignoreClipping, allowChildFrameContent, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void clearHitTestCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "clearHitTestCache");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->clearHitTestCache(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void innerEditorElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "innerEditorElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* container;
  container = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!container) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  Element* result = impl->innerEditorElement(container, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void pauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pauseAnimations");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double pauseTime;
  pauseTime = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->pauseAnimations(pauseTime, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void isCompositedAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCompositedAnimation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Animation* animation;
  animation = V8Animation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!animation) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCompositedAnimation", "Internals", "parameter 1 is not of type 'Animation'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isCompositedAnimation(animation));
}

static void disableCompositedAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("disableCompositedAnimation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Animation* animation;
  animation = V8Animation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!animation) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("disableCompositedAnimation", "Internals", "parameter 1 is not of type 'Animation'."));
    return;
  }

  impl->disableCompositedAnimation(animation);
}

static void disableCSSAdditiveAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->disableCSSAdditiveAnimations();
}

static void advanceImageAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "advanceImageAnimation");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* image;
  image = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  impl->advanceImageAnimation(image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void nextSiblingInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nextSiblingInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

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

  Node* result = impl->nextSiblingInFlatTree(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void firstChildInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "firstChildInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

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

  Node* result = impl->firstChildInFlatTree(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void lastChildInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastChildInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

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

  Node* result = impl->lastChildInFlatTree(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void nextInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nextInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

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

  Node* result = impl->nextInFlatTree(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void previousInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "previousInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

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

  Node* result = impl->previousInFlatTree(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void visiblePlaceholderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visiblePlaceholder", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visiblePlaceholder", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->visiblePlaceholder(element), info.GetIsolate());
}

static void isValidationMessageVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isValidationMessageVisible", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isValidationMessageVisible", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isValidationMessageVisible(element));
}

static void selectColorInColorChooserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectColorInColorChooser", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* element;
  V8StringResource<> colorValue;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectColorInColorChooser", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  colorValue = info[1];
  if (!colorValue.Prepare())
    return;

  impl->selectColorInColorChooser(element, colorValue);
}

static void endColorChooserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("endColorChooser", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("endColorChooser", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  impl->endColorChooser(element);
}

static void hasAutofocusRequestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  Document* document;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    V8SetReturnValueBool(info, impl->hasAutofocusRequest());
    return;
  }
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("hasAutofocusRequest", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->hasAutofocusRequest(document));
}

static void formControlStateOfHistoryItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "formControlStateOfHistoryItem");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  Vector<String> result = impl->formControlStateOfHistoryItem(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void setFormControlStateOfHistoryItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setFormControlStateOfHistoryItem");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<String> values;
  values = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFormControlStateOfHistoryItem(values, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void absoluteCaretBoundsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "absoluteCaretBounds");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  DOMRectReadOnly* result = impl->absoluteCaretBounds(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void boundingBoxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("boundingBox", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("boundingBox", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->boundingBox(element));
}

static void setMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  Range* range;
  V8StringResource<> markerType;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Range'.");
    return;
  }

  markerType = info[2];
  if (!markerType.Prepare())
    return;

  impl->setMarker(document, range, markerType, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void markerCountForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerCountForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> markerType;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  markerType = info[1];
  if (!markerType.Prepare())
    return;

  uint32_t result = impl->markerCountForNode(node, markerType, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void activeMarkerCountForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("activeMarkerCountForNode", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("activeMarkerCountForNode", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->activeMarkerCountForNode(node));
}

static void markerRangeForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerRangeForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> markerType;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  markerType = info[1];
  if (!markerType.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  Range* result = impl->markerRangeForNode(node, markerType, index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void markerDescriptionForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerDescriptionForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> markerType;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  markerType = info[1];
  if (!markerType.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->markerDescriptionForNode(node, markerType, index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void markerBackgroundColorForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerBackgroundColorForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> markerType;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  markerType = info[1];
  if (!markerType.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  uint32_t result = impl->markerBackgroundColorForNode(node, markerType, index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void markerUnderlineColorForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerUnderlineColorForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> markerType;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  markerType = info[1];
  if (!markerType.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  uint32_t result = impl->markerUnderlineColorForNode(node, markerType, index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void addTextMatchMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addTextMatchMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> matchStatus;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  matchStatus = info[1];
  if (!matchStatus.Prepare())
    return;

  impl->addTextMatchMarker(range, matchStatus, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void addCompositionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addCompositionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> underlineColorValue;
  V8StringResource<> thicknessValue;
  V8StringResource<> backgroundColorValue;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  underlineColorValue = info[1];
  if (!underlineColorValue.Prepare())
    return;

  thicknessValue = info[2];
  if (!thicknessValue.Prepare())
    return;

  backgroundColorValue = info[3];
  if (!backgroundColorValue.Prepare())
    return;

  impl->addCompositionMarker(range, underlineColorValue, thicknessValue, backgroundColorValue, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void addActiveSuggestionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addActiveSuggestionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> underlineColorValue;
  V8StringResource<> thicknessValue;
  V8StringResource<> backgroundColorValue;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  underlineColorValue = info[1];
  if (!underlineColorValue.Prepare())
    return;

  thicknessValue = info[2];
  if (!thicknessValue.Prepare())
    return;

  backgroundColorValue = info[3];
  if (!backgroundColorValue.Prepare())
    return;

  impl->addActiveSuggestionMarker(range, underlineColorValue, thicknessValue, backgroundColorValue, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void addSuggestionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addSuggestionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  Range* range;
  Vector<String> suggestions;
  V8StringResource<> suggestionHighlightColorValue;
  V8StringResource<> underlineColorValue;
  V8StringResource<> thicknessValue;
  V8StringResource<> backgroundColorValue;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  suggestions = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  suggestionHighlightColorValue = info[2];
  if (!suggestionHighlightColorValue.Prepare())
    return;

  underlineColorValue = info[3];
  if (!underlineColorValue.Prepare())
    return;

  thicknessValue = info[4];
  if (!thicknessValue.Prepare())
    return;

  backgroundColorValue = info[5];
  if (!backgroundColorValue.Prepare())
    return;

  impl->addSuggestionMarker(range, suggestions, suggestionHighlightColorValue, underlineColorValue, thicknessValue, backgroundColorValue, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setTextMatchMarkersActiveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setTextMatchMarkersActive");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Node* node;
  uint32_t startOffset;
  uint32_t endOffset;
  bool active;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  startOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  endOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  active = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTextMatchMarkersActive(node, startOffset, endOffset, active);
}

static void setMarkedTextMatchesAreHighlightedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMarkedTextMatchesAreHighlighted");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  bool highlight;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  highlight = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMarkedTextMatchesAreHighlighted(document, highlight);
}

static void setFrameViewPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setFrameViewPosition");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  int32_t x;
  int32_t y;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setFrameViewPosition(document, x, y, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void viewportAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "viewportAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Document* document;
  float devicePixelRatio;
  int32_t availableWidth;
  int32_t availableHeight;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  devicePixelRatio = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  availableWidth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  availableHeight = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->viewportAsText(document, devicePixelRatio, availableWidth, availableHeight, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void elementShouldAutoCompleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementShouldAutoComplete");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* inputElement;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  bool result = impl->elementShouldAutoComplete(inputElement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void suggestedValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "suggestedValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* inputElement;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  String result = impl->suggestedValue(inputElement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void setSuggestedValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setSuggestedValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* inputElement;
  V8StringResource<> value;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setSuggestedValue(inputElement, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAutofilledValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setAutofilledValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* inputElement;
  V8StringResource<> value;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setAutofilledValue(inputElement, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setEditingValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setEditingValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* inputElement;
  V8StringResource<> value;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setEditingValue(inputElement, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAutofilledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setAutofilled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* inputElement;
  bool enabled;
  inputElement = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!inputElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAutofilled(inputElement, enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void rangeFromLocationAndLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "rangeFromLocationAndLength");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Element* scope;
  int32_t rangeLocation;
  int32_t rangeLength;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  rangeLocation = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  rangeLength = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->rangeFromLocationAndLength(scope, rangeLocation, rangeLength));
}

static void locationFromRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* scope;
  Range* range;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", "parameter 2 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->locationFromRange(scope, range));
}

static void lengthFromRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* scope;
  Range* range;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", "parameter 2 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->lengthFromRange(scope, range));
}

static void rangeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rangeAsText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Range* range;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rangeAsText", "Internals", "parameter 1 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueString(info, impl->rangeAsText(range), info.GetIsolate());
}

static void touchPositionAdjustedToBestClickableNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchPositionAdjustedToBestClickableNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  DOMPoint* result = impl->touchPositionAdjustedToBestClickableNode(x, y, width, height, document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void touchNodeAdjustedToBestClickableNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchNodeAdjustedToBestClickableNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  Node* result = impl->touchNodeAdjustedToBestClickableNode(x, y, width, height, document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void touchPositionAdjustedToBestContextMenuNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchPositionAdjustedToBestContextMenuNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  DOMPoint* result = impl->touchPositionAdjustedToBestContextMenuNode(x, y, width, height, document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void touchNodeAdjustedToBestContextMenuNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchNodeAdjustedToBestContextMenuNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  Node* result = impl->touchNodeAdjustedToBestContextMenuNode(x, y, width, height, document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void lastSpellCheckRequestSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastSpellCheckRequestSequence");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  int32_t result = impl->lastSpellCheckRequestSequence(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void lastSpellCheckProcessedSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastSpellCheckProcessedSequence");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  int32_t result = impl->lastSpellCheckProcessedSequence(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void cancelCurrentSpellCheckRequestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "cancelCurrentSpellCheckRequest");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->cancelCurrentSpellCheckRequest(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void idleTimeSpellCheckerStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "idleTimeSpellCheckerState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  String result = impl->idleTimeSpellCheckerState(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void runIdleTimeSpellCheckerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "runIdleTimeSpellChecker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->runIdleTimeSpellChecker(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void userPreferredLanguagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->userPreferredLanguages(), info.Holder(), info.GetIsolate()));
}

static void setUserPreferredLanguagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setUserPreferredLanguages");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<String> languages;
  languages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setUserPreferredLanguages(languages);
}

static void mediaKeysCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->mediaKeysCount());
}

static void mediaKeySessionCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->mediaKeySessionCount());
}

static void pausableObjectCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pausableObjectCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pausableObjectCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->pausableObjectCount(document));
}

static void wheelEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("wheelEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("wheelEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->wheelEventHandlerCount(document));
}

static void scrollEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->scrollEventHandlerCount(document));
}

static void touchStartOrMoveEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchStartOrMoveEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchStartOrMoveEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->touchStartOrMoveEventHandlerCount(document));
}

static void touchEndOrCancelEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchEndOrCancelEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchEndOrCancelEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->touchEndOrCancelEventHandlerCount(document));
}

static void pointerEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pointerEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pointerEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->pointerEventHandlerCount(document));
}

static void touchEventTargetLayerRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchEventTargetLayerRects");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  LayerRectList* result = impl->touchEventTargetLayerRects(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void executeCommandMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "executeCommand");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  V8StringResource<> name;
  V8StringResource<> value;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  value = info[2];
  if (!value.Prepare())
    return;

  bool result = impl->executeCommand(document, name, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void htmlNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->htmlNamespace(), info.GetIsolate());
}

static void htmlTagsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->htmlTags(), info.Holder(), info.GetIsolate()));
}

static void svgNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->svgNamespace(), info.GetIsolate());
}

static void svgTagsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->svgTags(), info.Holder(), info.GetIsolate()));
}

static void nodesFromRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nodesFromRect");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 9)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(9, info.Length()));
    return;
  }

  Document* document;
  int32_t x;
  int32_t y;
  uint32_t topPadding;
  uint32_t rightPadding;
  uint32_t bottomPadding;
  uint32_t leftPadding;
  bool ignoreClipping;
  bool allowChildFrameContent;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  topPadding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  rightPadding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bottomPadding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  leftPadding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ignoreClipping = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;

  allowChildFrameContent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;

  NodeList* result = impl->nodesFromRect(document, x, y, topPadding, rightPadding, bottomPadding, leftPadding, ignoreClipping, allowChildFrameContent, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void hasSpellingMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasSpellingMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  int32_t from;
  int32_t length;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  from = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  length = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool result = impl->hasSpellingMarker(document, from, length, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void hasGrammarMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasGrammarMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  int32_t from;
  int32_t length;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  from = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  length = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bool result = impl->hasGrammarMarker(document, from, length, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void replaceMisspelledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "replaceMisspelled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  V8StringResource<> replacement;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  replacement = info[1];
  if (!replacement.Prepare())
    return;

  impl->replaceMisspelled(document, replacement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void canHyphenateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("canHyphenate", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> locale;
  locale = info[0];
  if (!locale.Prepare())
    return;

  V8SetReturnValueBool(info, impl->canHyphenate(locale));
}

static void setMockHyphenationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setMockHyphenation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> locale;
  locale = info[0];
  if (!locale.Prepare())
    return;

  impl->setMockHyphenation(locale);
}

static void isOverwriteModeEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isOverwriteModeEnabled", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isOverwriteModeEnabled", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isOverwriteModeEnabled(document));
}

static void toggleOverwriteModeEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("toggleOverwriteModeEnabled", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("toggleOverwriteModeEnabled", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  impl->toggleOverwriteModeEnabled(document);
}

static void numberOfScrollableAreasMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("numberOfScrollableAreas", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("numberOfScrollableAreas", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->numberOfScrollableAreas(document));
}

static void isPageBoxVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isPageBoxVisible");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  int32_t pageNumber;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  pageNumber = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPageBoxVisible(document, pageNumber));
}

static void layerTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "layerTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  uint16_t flags;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    String result = impl->layerTreeAsText(document, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValueString(info, result, info.GetIsolate());
    return;
  }
  flags = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->layerTreeAsText(document, flags, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void elementLayerTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementLayerTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  uint16_t flags;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    String result = impl->elementLayerTreeAsText(element, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValueString(info, result, info.GetIsolate());
    return;
  }
  flags = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->elementLayerTreeAsText(element, flags, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void scrollsWithRespectToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "scrollsWithRespectTo");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* element1;
  Element* element2;
  element1 = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element1) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  element2 = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!element2) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Element'.");
    return;
  }

  bool result = impl->scrollsWithRespectTo(element1, element2, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void scrollingStateTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollingStateTreeAsText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollingStateTreeAsText", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueString(info, impl->scrollingStateTreeAsText(document), info.GetIsolate());
}

static void mainThreadScrollingReasonsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mainThreadScrollingReasons");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  String result = impl->mainThreadScrollingReasons(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void nonFastScrollableRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nonFastScrollableRects");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->nonFastScrollableRects(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void markGestureScrollRegionDirtyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markGestureScrollRegionDirty");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->markGestureScrollRegionDirty(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void evictAllResourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->evictAllResources();
}

static void numberOfLiveNodesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->numberOfLiveNodes());
}

static void numberOfLiveDocumentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->numberOfLiveDocuments());
}

static void counterValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("counterValue", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("counterValue", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->counterValue(element), info.GetIsolate());
}

static void pageNumberMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageNumber");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  float pageWidth;
  float pageHeight;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    pageWidth = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    pageWidth = 800;
  }
  if (!info[2]->IsUndefined()) {
    pageHeight = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    pageHeight = 600;
  }

  int32_t result = impl->pageNumber(element, pageWidth, pageHeight, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void shortcutIconURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shortcutIconURLs", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shortcutIconURLs", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, ToV8(impl->shortcutIconURLs(document), info.Holder(), info.GetIsolate()));
}

static void allIconURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("allIconURLs", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("allIconURLs", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, ToV8(impl->allIconURLs(document), info.Holder(), info.GetIsolate()));
}

static void numberOfPagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "numberOfPages");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  double pageWidthInPixels;
  double pageHeightInPixels;
  if (!info[0]->IsUndefined()) {
    pageWidthInPixels = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    pageWidthInPixels = 800;
  }
  if (!info[1]->IsUndefined()) {
    pageHeightInPixels = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    pageHeightInPixels = 600;
  }

  int32_t result = impl->numberOfPages(pageWidthInPixels, pageHeightInPixels, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void pagePropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageProperty");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> propertyName;
  int32_t pageNumber;
  propertyName = info[0];
  if (!propertyName.Prepare())
    return;

  pageNumber = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->pageProperty(propertyName, pageNumber, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void pageSizeAndMarginsInPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageSizeAndMarginsInPixels");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  int32_t pageIndex;
  int32_t width;
  int32_t height;
  int32_t marginTop;
  int32_t marginRight;
  int32_t marginBottom;
  int32_t marginLeft;
  pageIndex = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  marginTop = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  marginRight = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  marginBottom = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  marginLeft = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->pageSizeAndMarginsInPixels(pageIndex, width, height, marginTop, marginRight, marginBottom, marginLeft, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void pageScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageScaleFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  float result = impl->pageScaleFactor(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void setPageScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPageScaleFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float scaleFactor;
  scaleFactor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPageScaleFactor(scaleFactor, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPageScaleFactorLimitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPageScaleFactorLimits");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float minScaleFactor;
  float maxScaleFactor;
  minScaleFactor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  maxScaleFactor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPageScaleFactorLimits(minScaleFactor, maxScaleFactor, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setIsCursorVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setIsCursorVisible");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  bool isVisible;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  isVisible = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setIsCursorVisible(document, isVisible, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void effectivePreloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectivePreload", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLMediaElement* mediaElement;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectivePreload", "Internals", "parameter 1 is not of type 'HTMLMediaElement'."));
    return;
  }

  V8SetReturnValueString(info, impl->effectivePreload(mediaElement), info.GetIsolate());
}

static void mediaPlayerRemoteRouteAvailabilityChangedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mediaPlayerRemoteRouteAvailabilityChanged");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* mediaElement;
  bool available;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  available = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->mediaPlayerRemoteRouteAvailabilityChanged(mediaElement, available);
}

static void mediaPlayerPlayingRemotelyChangedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mediaPlayerPlayingRemotelyChanged");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* mediaElement;
  bool remote;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  remote = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->mediaPlayerPlayingRemotelyChanged(mediaElement, remote);
}

static void setPersistentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPersistent");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLVideoElement* video;
  bool persistent;
  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLVideoElement'.");
    return;
  }

  persistent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPersistent(video, persistent);
}

static void forceStaleStateForMediaElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceStaleStateForMediaElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* mediaElement;
  int32_t state;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  state = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->forceStaleStateForMediaElement(mediaElement, state);
}

static void isMediaElementSuspendedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isMediaElementSuspended", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLMediaElement* mediaElement;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isMediaElementSuspended", "Internals", "parameter 1 is not of type 'HTMLMediaElement'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isMediaElementSuspended(mediaElement));
}

static void setMediaControlsTestModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMediaControlsTestMode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* mediaElement;
  bool enable;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  enable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMediaControlsTestMode(mediaElement, enable);
}

static void registerURLSchemeAsBypassingContentSecurityPolicy1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8StringResource<> scheme;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  impl->registerURLSchemeAsBypassingContentSecurityPolicy(scheme);
}

static void registerURLSchemeAsBypassingContentSecurityPolicy2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "registerURLSchemeAsBypassingContentSecurityPolicy");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8StringResource<> scheme;
  Vector<String> policyAreas;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  policyAreas = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->registerURLSchemeAsBypassingContentSecurityPolicy(scheme, policyAreas);
}

static void registerURLSchemeAsBypassingContentSecurityPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        registerURLSchemeAsBypassingContentSecurityPolicy1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        registerURLSchemeAsBypassingContentSecurityPolicy2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "registerURLSchemeAsBypassingContentSecurityPolicy");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void removeURLSchemeRegisteredAsBypassingContentSecurityPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeURLSchemeRegisteredAsBypassingContentSecurityPolicy", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> scheme;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  impl->removeURLSchemeRegisteredAsBypassingContentSecurityPolicy(scheme);
}

static void typeConversionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->typeConversions());
}

static void getReferencedFilePathsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getReferencedFilePaths(), info.Holder(), info.GetIsolate()));
}

static void startTrackingRepaintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "startTrackingRepaints");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->startTrackingRepaints(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void stopTrackingRepaintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "stopTrackingRepaints");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->stopTrackingRepaints(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasks");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  Node* node;
  if (!info[0]->IsUndefined()) {
    node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
    if (!node && !IsUndefinedOrNull(info[0])) {
      exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
      return;
    }
  } else {
    node = nullptr;
  }

  impl->updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasks(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void forceFullRepaintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceFullRepaint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->forceFullRepaint(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void draggableRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "draggableRegions");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->draggableRegions(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void nonDraggableRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nonDraggableRegions");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->nonDraggableRegions(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void getCurrentCursorInfoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getCurrentCursorInfo(), info.GetIsolate());
}

static void markerTextForListItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("markerTextForListItem", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("markerTextForListItem", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->markerTextForListItem(element), info.GetIsolate());
}

static void deserializeBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBuffer", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMArrayBuffer* buffer;
  buffer = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!buffer) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBuffer", "Internals", "parameter 1 is not of type 'ArrayBuffer'."));
    return;
  }

  V8SetReturnValue(info, V8Deserialize(info.GetIsolate(), impl->deserializeBuffer(buffer).get()));
}

static void serializeObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "serializeObject");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  scoped_refptr<SerializedScriptValue> obj;
  obj = NativeValueTraits<SerializedScriptValue>::NativeValue(info.GetIsolate(), info[0], SerializedScriptValue::SerializeOptions(SerializedScriptValue::kNotForStorage), exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->serializeObject(std::move(obj)));
}

static void deserializeBufferContainingWasmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBufferContainingWasm", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMArrayBuffer* buffer;
  buffer = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!buffer) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBufferContainingWasm", "Internals", "parameter 1 is not of type 'ArrayBuffer'."));
    return;
  }

  ScriptValue result = impl->deserializeBufferContainingWasm(scriptState, buffer);
  V8SetReturnValue(info, result.V8Value());
}

static void serializeWithInlineWasmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("serializeWithInlineWasm", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue obj;
  obj = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  V8SetReturnValue(info, impl->serializeWithInlineWasm(obj));
}

static void forceReloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceReload");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool endToEnd;
  endToEnd = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->forceReload(endToEnd);
}

static void getImageSourceURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getImageSourceURL", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getImageSourceURL", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->getImageSourceURL(element), info.GetIsolate());
}

static void forceImageReloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceImageReload");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  impl->forceImageReload(element, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void selectMenuListTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectMenuListText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLSelectElement* select;
  select = V8HTMLSelectElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectMenuListText", "Internals", "parameter 1 is not of type 'HTMLSelectElement'."));
    return;
  }

  V8SetReturnValueString(info, impl->selectMenuListText(select), info.GetIsolate());
}

static void isSelectPopupVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSelectPopupVisible", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSelectPopupVisible", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSelectPopupVisible(node));
}

static void selectPopupItemStyleIsRtlMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectPopupItemStyleIsRtl");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* select;
  int32_t itemIndex;
  select = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  itemIndex = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->selectPopupItemStyleIsRtl(select, itemIndex));
}

static void selectPopupItemStyleFontHeightMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectPopupItemStyleFontHeight");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* select;
  int32_t itemIndex;
  select = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  itemIndex = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueInt(info, impl->selectPopupItemStyleFontHeight(select, itemIndex));
}

static void resetTypeAheadSessionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("resetTypeAheadSession", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLSelectElement* select;
  select = V8HTMLSelectElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("resetTypeAheadSession", "Internals", "parameter 1 is not of type 'HTMLSelectElement'."));
    return;
  }

  impl->resetTypeAheadSession(select);
}

static void getSelectionInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "getSelectionInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DOMWindow* window;
  window = ToDOMWindow(info.GetIsolate(), info[0]);
  if (!window) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Window'.");
    return;
  }

  StaticSelection* result = impl->getSelectionInFlatTree(window, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void selectionBoundsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectionBounds");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  DOMRect* result = impl->selectionBounds(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void loseSharedGraphicsContext3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->loseSharedGraphicsContext3D());
}

static void forceCompositingUpdateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceCompositingUpdate");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->forceCompositingUpdate(document, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setZoomFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setZoomFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float factor;
  factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setZoomFactor(factor);
}

static void setShouldRevealPasswordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setShouldRevealPassword");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* element;
  bool reveal;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  reveal = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldRevealPassword(element, reveal, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void createResolvedPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "createResolvedPromise");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue value;
  value = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->createResolvedPromise(scriptState, value);
  V8SetReturnValue(info, result.V8Value());
}

static void createRejectedPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "createRejectedPromise");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue reason;
  reason = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->createRejectedPromise(scriptState, reason);
  V8SetReturnValue(info, result.V8Value());
}

static void addOneToPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addOneToPromise");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptPromise promise;
  promise = ScriptPromise::Cast(ScriptState::Current(info.GetIsolate()), info[0]);
  if (!promise.IsUndefinedOrNull() && !promise.IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('promise') is not an object.");
    return;
  }

  ScriptPromise result = impl->addOneToPromise(scriptState, promise);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheck");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t arg1;
  bool arg2;
  Dictionary arg3;
  V8StringResource<> arg4;
  Vector<String> arg5;
  arg1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  arg2 = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 3 ('arg3') is not an object.");
    return;
  }
  arg3 = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  arg4 = info[3];
  if (!arg4.Prepare(exceptionState))
    return;

  arg5 = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->promiseCheck(scriptState, arg1, arg2, arg3, arg4, arg5, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckWithoutExceptionStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckWithoutExceptionState");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Dictionary arg1;
  V8StringResource<> arg2;
  Vector<String> variadic;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('arg1') is not an object.");
    return;
  }
  arg1 = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  arg2 = info[1];
  if (!arg2.Prepare(exceptionState))
    return;

  variadic = ToImplArguments<IDLString>(info, 2, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->promiseCheckWithoutExceptionState(scriptState, arg1, arg2, variadic);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckRange");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint8_t arg1;
  arg1 = NativeValueTraits<IDLOctet>::NativeValue(info.GetIsolate(), info[0], exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->promiseCheckRange(scriptState, arg1);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckOverload1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  Location* arg1;
  arg1 = V8Location::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg1) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Location'.");
    return;
  }

  ScriptPromise result = impl->promiseCheckOverload(scriptState, arg1);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckOverload2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  Document* arg1;
  arg1 = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg1) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  ScriptPromise result = impl->promiseCheckOverload(scriptState, arg1);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckOverload3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  Location* arg1;
  int32_t arg2;
  int32_t arg3;
  arg1 = V8Location::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg1) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Location'.");
    return;
  }

  arg2 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  arg3 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->promiseCheckOverload(scriptState, arg1, arg2, arg3);
  V8SetReturnValue(info, result.V8Value());
}

static void promiseCheckOverloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (V8Location::hasInstance(info[0], info.GetIsolate())) {
        promiseCheckOverload1Method(info);
        return;
      }
      if (V8Document::hasInstance(info[0], info.GetIsolate())) {
        promiseCheckOverload2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        promiseCheckOverload3Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 3]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void setValueForUserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setValueForUser", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  HTMLInputElement* element;
  V8StringResource<> value;
  element = V8HTMLInputElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setValueForUser", "Internals", "parameter 1 is not of type 'HTMLInputElement'."));
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setValueForUser(element, value);
}

static void setFocusedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setFocused");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool focused;
  focused = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFocused(focused);
}

static void setInitialFocusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setInitialFocus");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool reverse;
  reverse = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setInitialFocus(reverse);
}

static void ignoreLayoutWithPendingStylesheetsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("ignoreLayoutWithPendingStylesheets", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("ignoreLayoutWithPendingStylesheets", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->ignoreLayoutWithPendingStylesheets(document));
}

static void setNetworkConnectionInfoOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setNetworkConnectionInfoOverride");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  bool onLine;
  V8StringResource<> type;
  V8StringResource<> effective_type;
  uint32_t http_rtt_msec;
  double downlink_max_mbps;
  onLine = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  type = info[1];
  if (!type.Prepare())
    return;

  effective_type = info[2];
  if (!effective_type.Prepare())
    return;
  const char* validEffective_typeValues[] = {
      "slow-2g",
      "2g",
      "3g",
      "4g",
  };
  if (!IsValidEnum(effective_type, validEffective_typeValues, arraysize(validEffective_typeValues), "EffectiveConnectionType", exceptionState)) {
    return;
  }

  http_rtt_msec = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  downlink_max_mbps = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setNetworkConnectionInfoOverride(onLine, type, effective_type, http_rtt_msec, downlink_max_mbps, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setSaveDataEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setSaveDataEnabled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSaveDataEnabled(enabled);
}

static void clearNetworkConnectionInfoOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->clearNetworkConnectionInfoOverride();
}

static void countHitRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("countHitRegions", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  CanvasRenderingContext2D* context;
  context = V8CanvasRenderingContext2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("countHitRegions", "Internals", "parameter 1 is not of type 'CanvasRenderingContext2D'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->countHitRegions(context));
}

static void isInCanvasFontCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isInCanvasFontCache", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> fontString;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isInCanvasFontCache", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  fontString = info[1];
  if (!fontString.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isInCanvasFontCache(document, fontString));
}

static void canvasFontCacheMaxFontsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->canvasFontCacheMaxFonts());
}

static void dictionaryTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->dictionaryTest());
}

static void recordTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->recordTest());
}

static void sequenceTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->sequenceTest());
}

static void unionTypesTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->unionTypesTest());
}

static void callbackFunctionTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->callbackFunctionTest());
}

static void setScrollChainMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setScrollChain");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  ScrollState* scrollState;
  HeapVector<Member<Element>> elements;
  scrollState = V8ScrollState::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scrollState) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ScrollState'.");
    return;
  }

  elements = NativeValueTraits<IDLSequence<Element>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setScrollChain(scrollState, elements, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void forceBlinkGCWithoutV8GCMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->forceBlinkGCWithoutV8GC();
}

static void selectedHTMLForClipboardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->selectedHTMLForClipboard(), info.GetIsolate());
}

static void selectedTextForClipboardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->selectedTextForClipboard(), info.GetIsolate());
}

static void setVisualViewportOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setVisualViewportOffset");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setVisualViewportOffset(x, y);
}

static void visualViewportHeightMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueInt(info, impl->visualViewportHeight());
}

static void visualViewportWidthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueInt(info, impl->visualViewportWidth());
}

static void visualViewportScrollXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->visualViewportScrollX());
}

static void visualViewportScrollYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->visualViewportScrollY());
}

static void magnifyScaleAroundAnchorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "magnifyScaleAroundAnchor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float offset;
  float x;
  float y;
  offset = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->magnifyScaleAroundAnchor(offset, x, y));
}

static void isUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isUseCounted");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  uint32_t feature;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->isUseCounted(document, feature));
}

static void isCSSPropertyUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCSSPropertyUseCounted", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> propertyName;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCSSPropertyUseCounted", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  propertyName = info[1];
  if (!propertyName.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isCSSPropertyUseCounted(document, propertyName));
}

static void isAnimatedCSSPropertyUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isAnimatedCSSPropertyUseCounted", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> propertyName;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isAnimatedCSSPropertyUseCounted", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  propertyName = info[1];
  if (!propertyName.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isAnimatedCSSPropertyUseCounted(document, propertyName));
}

static void getCSSPropertyLonghandsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyLonghands(), info.Holder(), info.GetIsolate()));
}

static void getCSSPropertyShorthandsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyShorthands(), info.Holder(), info.GetIsolate()));
}

static void getCSSPropertyAliasesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyAliases(), info.Holder(), info.GetIsolate()));
}

static void observeUseCounterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "observeUseCounter");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  uint32_t feature;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->observeUseCounter(scriptState, document, feature);
  V8SetReturnValue(info, result.V8Value());
}

static void unscopableMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->unscopableMethod(), info.GetIsolate());
}

static void focusRingRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("focusRingRects", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("focusRingRects", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->focusRingRects(element));
}

static void outlineRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("outlineRects", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("outlineRects", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->outlineRects(element));
}

static void setCapsLockStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setCapsLockState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCapsLockState(enabled);
}

static void setScrollbarVisibilityInScrollableAreaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setScrollbarVisibilityInScrollableArea");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  bool visible;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  visible = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->setScrollbarVisibilityInScrollableArea(node, visible));
}

static void monotonicTimeToZeroBasedDocumentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "monotonicTimeToZeroBasedDocumentTime");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double platformTime;
  platformTime = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  double result = impl->monotonicTimeToZeroBasedDocumentTime(platformTime, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void getScrollAnimationStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getScrollAnimationState", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getScrollAnimationState", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueString(info, impl->getScrollAnimationState(node), info.GetIsolate());
}

static void getProgrammaticScrollAnimationStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgrammaticScrollAnimationState", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgrammaticScrollAnimationState", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueString(info, impl->getProgrammaticScrollAnimationState(node), info.GetIsolate());
}

static void visualRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visualRect", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visualRect", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->visualRect(node));
}

static void originTrialsTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->originTrialsTest());
}

static void crashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->crash();
}

static void evaluateInInspectorOverlayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("evaluateInInspectorOverlay", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> script;
  script = info[0];
  if (!script.Prepare())
    return;

  V8SetReturnValueString(info, impl->evaluateInInspectorOverlay(script), info.GetIsolate());
}

static void setIsLowEndDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setIsLowEndDevice");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool isLowEndDevice;
  isLowEndDevice = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setIsLowEndDevice(isLowEndDevice);
}

static void isLowEndDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isLowEndDevice());
}

static void supportedTextEncodingLabelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->supportedTextEncodingLabels(), info.Holder(), info.GetIsolate()));
}

static void simulateRasterUnderInvalidationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "simulateRasterUnderInvalidations");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enable;
  enable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->simulateRasterUnderInvalidations(enable);
}

static void BypassLongCompileThresholdOnceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "BypassLongCompileThresholdOnce");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->BypassLongCompileThresholdOnce(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void getInternalResponseURLListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Response* response;
  response = V8Response::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!response) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "Internals", "parameter 1 is not of type 'Response'."));
    return;
  }

  V8SetReturnValue(info, ToV8(InternalsFetch::getInternalResponseURLList(*impl, response), info.Holder(), info.GetIsolate()));
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  int32_t result = impl->AnonymousIndexedGetter(index);
  V8SetReturnValueInt(info, result);
}

static void indexedPropertyDescriptor(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8Internals::indexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getterValue = info.GetReturnValue().Get();
  if (!getterValue->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getterValue, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

} // namespace InternalsV8Internal

void V8Internals::pagePopupWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pagePopupWindow_Getter");

  InternalsV8Internal::pagePopupWindowAttributeGetter(info);
}

void V8Internals::settingsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_settings_Getter");

  InternalsV8Internal::settingsAttributeGetter(info);
}

void V8Internals::runtimeFlagsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_runtimeFlags_Getter");

  InternalsV8Internal::runtimeFlagsAttributeGetter(info);
}

void V8Internals::workerThreadCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_workerThreadCount_Getter");

  InternalsV8Internal::workerThreadCountAttributeGetter(info);
}

void V8Internals::cursorUpdatePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_cursorUpdatePending_Getter");

  InternalsV8Internal::cursorUpdatePendingAttributeGetter(info);
}

void V8Internals::fakeMouseMovePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_fakeMouseMovePending_Getter");

  InternalsV8Internal::fakeMouseMovePendingAttributeGetter(info);
}

void V8Internals::visibleSelectionAnchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionAnchorNode_Getter");

  InternalsV8Internal::visibleSelectionAnchorNodeAttributeGetter(info);
}

void V8Internals::visibleSelectionAnchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionAnchorOffset_Getter");

  InternalsV8Internal::visibleSelectionAnchorOffsetAttributeGetter(info);
}

void V8Internals::visibleSelectionFocusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionFocusNode_Getter");

  InternalsV8Internal::visibleSelectionFocusNodeAttributeGetter(info);
}

void V8Internals::visibleSelectionFocusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionFocusOffset_Getter");

  InternalsV8Internal::visibleSelectionFocusOffsetAttributeGetter(info);
}

void V8Internals::textAffinityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_textAffinity_Getter");

  InternalsV8Internal::textAffinityAttributeGetter(info);
}

void V8Internals::lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_length_Getter");

  InternalsV8Internal::lengthAttributeGetter(info);
}

void V8Internals::unscopableAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unscopableAttribute_Getter");

  InternalsV8Internal::unscopableAttributeAttributeGetter(info);
}

void V8Internals::observeGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_observeGC");

  InternalsV8Internal::observeGCMethod(info);
}

void V8Internals::elementLayoutTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementLayoutTreeAsText");

  InternalsV8Internal::elementLayoutTreeAsTextMethod(info);
}

void V8Internals::isPreloadedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPreloaded");

  InternalsV8Internal::isPreloadedMethod(info);
}

void V8Internals::isPreloadedByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPreloadedBy");

  InternalsV8Internal::isPreloadedByMethod(info);
}

void V8Internals::isLoadingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLoading");

  InternalsV8Internal::isLoadingMethod(info);
}

void V8Internals::isLoadingFromMemoryCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLoadingFromMemoryCache");

  InternalsV8Internal::isLoadingFromMemoryCacheMethod(info);
}

void V8Internals::getResourcePriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getResourcePriority");

  InternalsV8Internal::getResourcePriorityMethod(info);
}

void V8Internals::getResourceHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getResourceHeader");

  InternalsV8Internal::getResourceHeaderMethod(info);
}

void V8Internals::computedStyleIncludingVisitedInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_computedStyleIncludingVisitedInfo");

  InternalsV8Internal::computedStyleIncludingVisitedInfoMethod(info);
}

void V8Internals::createUserAgentShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createUserAgentShadowRoot");

  InternalsV8Internal::createUserAgentShadowRootMethod(info);
}

void V8Internals::shadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowRoot");

  InternalsV8Internal::shadowRootMethod(info);
}

void V8Internals::setBrowserControlsStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setBrowserControlsState");

  InternalsV8Internal::setBrowserControlsStateMethod(info);
}

void V8Internals::setBrowserControlsShownRatioMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setBrowserControlsShownRatio");

  InternalsV8Internal::setBrowserControlsShownRatioMethod(info);
}

void V8Internals::effectiveRootScrollerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_effectiveRootScroller");

  InternalsV8Internal::effectiveRootScrollerMethod(info);
}

void V8Internals::shadowRootTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowRootType");

  InternalsV8Internal::shadowRootTypeMethod(info);
}

void V8Internals::hasShadowInsertionPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasShadowInsertionPoint");

  InternalsV8Internal::hasShadowInsertionPointMethod(info);
}

void V8Internals::hasContentElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasContentElement");

  InternalsV8Internal::hasContentElementMethod(info);
}

void V8Internals::countElementShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_countElementShadow");

  InternalsV8Internal::countElementShadowMethod(info);
}

void V8Internals::shadowPseudoIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowPseudoId");

  InternalsV8Internal::shadowPseudoIdMethod(info);
}

void V8Internals::isValidContentSelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isValidContentSelect");

  InternalsV8Internal::isValidContentSelectMethod(info);
}

void V8Internals::treeScopeRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_treeScopeRootNode");

  InternalsV8Internal::treeScopeRootNodeMethod(info);
}

void V8Internals::parentTreeScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_parentTreeScope");

  InternalsV8Internal::parentTreeScopeMethod(info);
}

void V8Internals::compareTreeScopePositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_compareTreeScopePosition");

  InternalsV8Internal::compareTreeScopePositionMethod(info);
}

void V8Internals::updateStyleAndReturnAffectedElementCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_updateStyleAndReturnAffectedElementCount");

  InternalsV8Internal::updateStyleAndReturnAffectedElementCountMethod(info);
}

void V8Internals::needsLayoutCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_needsLayoutCount");

  InternalsV8Internal::needsLayoutCountMethod(info);
}

void V8Internals::hitTestCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hitTestCount");

  InternalsV8Internal::hitTestCountMethod(info);
}

void V8Internals::hitTestCacheHitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hitTestCacheHits");

  InternalsV8Internal::hitTestCacheHitsMethod(info);
}

void V8Internals::elementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementFromPoint");

  InternalsV8Internal::elementFromPointMethod(info);
}

void V8Internals::clearHitTestCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_clearHitTestCache");

  InternalsV8Internal::clearHitTestCacheMethod(info);
}

void V8Internals::innerEditorElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_innerEditorElement");

  InternalsV8Internal::innerEditorElementMethod(info);
}

void V8Internals::pauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pauseAnimations");

  InternalsV8Internal::pauseAnimationsMethod(info);
}

void V8Internals::isCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isCompositedAnimation");

  InternalsV8Internal::isCompositedAnimationMethod(info);
}

void V8Internals::disableCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_disableCompositedAnimation");

  InternalsV8Internal::disableCompositedAnimationMethod(info);
}

void V8Internals::disableCSSAdditiveAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_disableCSSAdditiveAnimations");

  InternalsV8Internal::disableCSSAdditiveAnimationsMethod(info);
}

void V8Internals::advanceImageAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_advanceImageAnimation");

  InternalsV8Internal::advanceImageAnimationMethod(info);
}

void V8Internals::nextSiblingInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nextSiblingInFlatTree");

  InternalsV8Internal::nextSiblingInFlatTreeMethod(info);
}

void V8Internals::firstChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_firstChildInFlatTree");

  InternalsV8Internal::firstChildInFlatTreeMethod(info);
}

void V8Internals::lastChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastChildInFlatTree");

  InternalsV8Internal::lastChildInFlatTreeMethod(info);
}

void V8Internals::nextInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nextInFlatTree");

  InternalsV8Internal::nextInFlatTreeMethod(info);
}

void V8Internals::previousInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_previousInFlatTree");

  InternalsV8Internal::previousInFlatTreeMethod(info);
}

void V8Internals::visiblePlaceholderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visiblePlaceholder");

  InternalsV8Internal::visiblePlaceholderMethod(info);
}

void V8Internals::isValidationMessageVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isValidationMessageVisible");

  InternalsV8Internal::isValidationMessageVisibleMethod(info);
}

void V8Internals::selectColorInColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectColorInColorChooser");

  InternalsV8Internal::selectColorInColorChooserMethod(info);
}

void V8Internals::endColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_endColorChooser");

  InternalsV8Internal::endColorChooserMethod(info);
}

void V8Internals::hasAutofocusRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasAutofocusRequest");

  InternalsV8Internal::hasAutofocusRequestMethod(info);
}

void V8Internals::formControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_formControlStateOfHistoryItem");

  InternalsV8Internal::formControlStateOfHistoryItemMethod(info);
}

void V8Internals::setFormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setFormControlStateOfHistoryItem");

  InternalsV8Internal::setFormControlStateOfHistoryItemMethod(info);
}

void V8Internals::absoluteCaretBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_absoluteCaretBounds");

  InternalsV8Internal::absoluteCaretBoundsMethod(info);
}

void V8Internals::boundingBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_boundingBox");

  InternalsV8Internal::boundingBoxMethod(info);
}

void V8Internals::setMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMarker");

  InternalsV8Internal::setMarkerMethod(info);
}

void V8Internals::markerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerCountForNode");

  InternalsV8Internal::markerCountForNodeMethod(info);
}

void V8Internals::activeMarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_activeMarkerCountForNode");

  InternalsV8Internal::activeMarkerCountForNodeMethod(info);
}

void V8Internals::markerRangeForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerRangeForNode");

  InternalsV8Internal::markerRangeForNodeMethod(info);
}

void V8Internals::markerDescriptionForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerDescriptionForNode");

  InternalsV8Internal::markerDescriptionForNodeMethod(info);
}

void V8Internals::markerBackgroundColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerBackgroundColorForNode");

  InternalsV8Internal::markerBackgroundColorForNodeMethod(info);
}

void V8Internals::markerUnderlineColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerUnderlineColorForNode");

  InternalsV8Internal::markerUnderlineColorForNodeMethod(info);
}

void V8Internals::addTextMatchMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addTextMatchMarker");

  InternalsV8Internal::addTextMatchMarkerMethod(info);
}

void V8Internals::addCompositionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addCompositionMarker");

  InternalsV8Internal::addCompositionMarkerMethod(info);
}

void V8Internals::addActiveSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addActiveSuggestionMarker");

  InternalsV8Internal::addActiveSuggestionMarkerMethod(info);
}

void V8Internals::addSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addSuggestionMarker");

  InternalsV8Internal::addSuggestionMarkerMethod(info);
}

void V8Internals::setTextMatchMarkersActiveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setTextMatchMarkersActive");

  InternalsV8Internal::setTextMatchMarkersActiveMethod(info);
}

void V8Internals::setMarkedTextMatchesAreHighlightedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMarkedTextMatchesAreHighlighted");

  InternalsV8Internal::setMarkedTextMatchesAreHighlightedMethod(info);
}

void V8Internals::setFrameViewPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setFrameViewPosition");

  InternalsV8Internal::setFrameViewPositionMethod(info);
}

void V8Internals::viewportAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_viewportAsText");

  InternalsV8Internal::viewportAsTextMethod(info);
}

void V8Internals::elementShouldAutoCompleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementShouldAutoComplete");

  InternalsV8Internal::elementShouldAutoCompleteMethod(info);
}

void V8Internals::suggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_suggestedValue");

  InternalsV8Internal::suggestedValueMethod(info);
}

void V8Internals::setSuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setSuggestedValue");

  InternalsV8Internal::setSuggestedValueMethod(info);
}

void V8Internals::setAutofilledValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setAutofilledValue");

  InternalsV8Internal::setAutofilledValueMethod(info);
}

void V8Internals::setEditingValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setEditingValue");

  InternalsV8Internal::setEditingValueMethod(info);
}

void V8Internals::setAutofilledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setAutofilled");

  InternalsV8Internal::setAutofilledMethod(info);
}

void V8Internals::rangeFromLocationAndLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rangeFromLocationAndLength");

  InternalsV8Internal::rangeFromLocationAndLengthMethod(info);
}

void V8Internals::locationFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_locationFromRange");

  InternalsV8Internal::locationFromRangeMethod(info);
}

void V8Internals::lengthFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lengthFromRange");

  InternalsV8Internal::lengthFromRangeMethod(info);
}

void V8Internals::rangeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rangeAsText");

  InternalsV8Internal::rangeAsTextMethod(info);
}

void V8Internals::touchPositionAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchPositionAdjustedToBestClickableNode");

  InternalsV8Internal::touchPositionAdjustedToBestClickableNodeMethod(info);
}

void V8Internals::touchNodeAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchNodeAdjustedToBestClickableNode");

  InternalsV8Internal::touchNodeAdjustedToBestClickableNodeMethod(info);
}

void V8Internals::touchPositionAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchPositionAdjustedToBestContextMenuNode");

  InternalsV8Internal::touchPositionAdjustedToBestContextMenuNodeMethod(info);
}

void V8Internals::touchNodeAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchNodeAdjustedToBestContextMenuNode");

  InternalsV8Internal::touchNodeAdjustedToBestContextMenuNodeMethod(info);
}

void V8Internals::lastSpellCheckRequestSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastSpellCheckRequestSequence");

  InternalsV8Internal::lastSpellCheckRequestSequenceMethod(info);
}

void V8Internals::lastSpellCheckProcessedSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastSpellCheckProcessedSequence");

  InternalsV8Internal::lastSpellCheckProcessedSequenceMethod(info);
}

void V8Internals::cancelCurrentSpellCheckRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_cancelCurrentSpellCheckRequest");

  InternalsV8Internal::cancelCurrentSpellCheckRequestMethod(info);
}

void V8Internals::idleTimeSpellCheckerStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_idleTimeSpellCheckerState");

  InternalsV8Internal::idleTimeSpellCheckerStateMethod(info);
}

void V8Internals::runIdleTimeSpellCheckerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_runIdleTimeSpellChecker");

  InternalsV8Internal::runIdleTimeSpellCheckerMethod(info);
}

void V8Internals::userPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_userPreferredLanguages");

  InternalsV8Internal::userPreferredLanguagesMethod(info);
}

void V8Internals::setUserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setUserPreferredLanguages");

  InternalsV8Internal::setUserPreferredLanguagesMethod(info);
}

void V8Internals::mediaKeysCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaKeysCount");

  InternalsV8Internal::mediaKeysCountMethod(info);
}

void V8Internals::mediaKeySessionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaKeySessionCount");

  InternalsV8Internal::mediaKeySessionCountMethod(info);
}

void V8Internals::pausableObjectCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pausableObjectCount");

  InternalsV8Internal::pausableObjectCountMethod(info);
}

void V8Internals::wheelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_wheelEventHandlerCount");

  InternalsV8Internal::wheelEventHandlerCountMethod(info);
}

void V8Internals::scrollEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollEventHandlerCount");

  InternalsV8Internal::scrollEventHandlerCountMethod(info);
}

void V8Internals::touchStartOrMoveEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchStartOrMoveEventHandlerCount");

  InternalsV8Internal::touchStartOrMoveEventHandlerCountMethod(info);
}

void V8Internals::touchEndOrCancelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchEndOrCancelEventHandlerCount");

  InternalsV8Internal::touchEndOrCancelEventHandlerCountMethod(info);
}

void V8Internals::pointerEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pointerEventHandlerCount");

  InternalsV8Internal::pointerEventHandlerCountMethod(info);
}

void V8Internals::touchEventTargetLayerRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchEventTargetLayerRects");

  InternalsV8Internal::touchEventTargetLayerRectsMethod(info);
}

void V8Internals::executeCommandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_executeCommand");

  InternalsV8Internal::executeCommandMethod(info);
}

void V8Internals::htmlNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_htmlNamespace");

  InternalsV8Internal::htmlNamespaceMethod(info);
}

void V8Internals::htmlTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_htmlTags");

  InternalsV8Internal::htmlTagsMethod(info);
}

void V8Internals::svgNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_svgNamespace");

  InternalsV8Internal::svgNamespaceMethod(info);
}

void V8Internals::svgTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_svgTags");

  InternalsV8Internal::svgTagsMethod(info);
}

void V8Internals::nodesFromRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nodesFromRect");

  InternalsV8Internal::nodesFromRectMethod(info);
}

void V8Internals::hasSpellingMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasSpellingMarker");

  InternalsV8Internal::hasSpellingMarkerMethod(info);
}

void V8Internals::hasGrammarMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasGrammarMarker");

  InternalsV8Internal::hasGrammarMarkerMethod(info);
}

void V8Internals::replaceMisspelledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_replaceMisspelled");

  InternalsV8Internal::replaceMisspelledMethod(info);
}

void V8Internals::canHyphenateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_canHyphenate");

  InternalsV8Internal::canHyphenateMethod(info);
}

void V8Internals::setMockHyphenationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMockHyphenation");

  InternalsV8Internal::setMockHyphenationMethod(info);
}

void V8Internals::isOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isOverwriteModeEnabled");

  InternalsV8Internal::isOverwriteModeEnabledMethod(info);
}

void V8Internals::toggleOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_toggleOverwriteModeEnabled");

  InternalsV8Internal::toggleOverwriteModeEnabledMethod(info);
}

void V8Internals::numberOfScrollableAreasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfScrollableAreas");

  InternalsV8Internal::numberOfScrollableAreasMethod(info);
}

void V8Internals::isPageBoxVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPageBoxVisible");

  InternalsV8Internal::isPageBoxVisibleMethod(info);
}

void V8Internals::layerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_layerTreeAsText");

  InternalsV8Internal::layerTreeAsTextMethod(info);
}

void V8Internals::elementLayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementLayerTreeAsText");

  InternalsV8Internal::elementLayerTreeAsTextMethod(info);
}

void V8Internals::scrollsWithRespectToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollsWithRespectTo");

  InternalsV8Internal::scrollsWithRespectToMethod(info);
}

void V8Internals::scrollingStateTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollingStateTreeAsText");

  InternalsV8Internal::scrollingStateTreeAsTextMethod(info);
}

void V8Internals::mainThreadScrollingReasonsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mainThreadScrollingReasons");

  InternalsV8Internal::mainThreadScrollingReasonsMethod(info);
}

void V8Internals::nonFastScrollableRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nonFastScrollableRects");

  InternalsV8Internal::nonFastScrollableRectsMethod(info);
}

void V8Internals::markGestureScrollRegionDirtyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markGestureScrollRegionDirty");

  InternalsV8Internal::markGestureScrollRegionDirtyMethod(info);
}

void V8Internals::evictAllResourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_evictAllResources");

  InternalsV8Internal::evictAllResourcesMethod(info);
}

void V8Internals::numberOfLiveNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveNodes");

  InternalsV8Internal::numberOfLiveNodesMethod(info);
}

void V8Internals::numberOfLiveDocumentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveDocuments");

  InternalsV8Internal::numberOfLiveDocumentsMethod(info);
}

void V8Internals::counterValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_counterValue");

  InternalsV8Internal::counterValueMethod(info);
}

void V8Internals::pageNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageNumber");

  InternalsV8Internal::pageNumberMethod(info);
}

void V8Internals::shortcutIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shortcutIconURLs");

  InternalsV8Internal::shortcutIconURLsMethod(info);
}

void V8Internals::allIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_allIconURLs");

  InternalsV8Internal::allIconURLsMethod(info);
}

void V8Internals::numberOfPagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfPages");

  InternalsV8Internal::numberOfPagesMethod(info);
}

void V8Internals::pagePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageProperty");

  InternalsV8Internal::pagePropertyMethod(info);
}

void V8Internals::pageSizeAndMarginsInPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageSizeAndMarginsInPixels");

  InternalsV8Internal::pageSizeAndMarginsInPixelsMethod(info);
}

void V8Internals::pageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageScaleFactor");

  InternalsV8Internal::pageScaleFactorMethod(info);
}

void V8Internals::setPageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPageScaleFactor");

  InternalsV8Internal::setPageScaleFactorMethod(info);
}

void V8Internals::setPageScaleFactorLimitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPageScaleFactorLimits");

  InternalsV8Internal::setPageScaleFactorLimitsMethod(info);
}

void V8Internals::setIsCursorVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setIsCursorVisible");

  InternalsV8Internal::setIsCursorVisibleMethod(info);
}

void V8Internals::effectivePreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_effectivePreload");

  InternalsV8Internal::effectivePreloadMethod(info);
}

void V8Internals::mediaPlayerRemoteRouteAvailabilityChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaPlayerRemoteRouteAvailabilityChanged");

  InternalsV8Internal::mediaPlayerRemoteRouteAvailabilityChangedMethod(info);
}

void V8Internals::mediaPlayerPlayingRemotelyChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaPlayerPlayingRemotelyChanged");

  InternalsV8Internal::mediaPlayerPlayingRemotelyChangedMethod(info);
}

void V8Internals::setPersistentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPersistent");

  InternalsV8Internal::setPersistentMethod(info);
}

void V8Internals::forceStaleStateForMediaElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceStaleStateForMediaElement");

  InternalsV8Internal::forceStaleStateForMediaElementMethod(info);
}

void V8Internals::isMediaElementSuspendedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isMediaElementSuspended");

  InternalsV8Internal::isMediaElementSuspendedMethod(info);
}

void V8Internals::setMediaControlsTestModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMediaControlsTestMode");

  InternalsV8Internal::setMediaControlsTestModeMethod(info);
}

void V8Internals::registerURLSchemeAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_registerURLSchemeAsBypassingContentSecurityPolicy");

  InternalsV8Internal::registerURLSchemeAsBypassingContentSecurityPolicyMethod(info);
}

void V8Internals::removeURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_removeURLSchemeRegisteredAsBypassingContentSecurityPolicy");

  InternalsV8Internal::removeURLSchemeRegisteredAsBypassingContentSecurityPolicyMethod(info);
}

void V8Internals::typeConversionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_typeConversions");

  InternalsV8Internal::typeConversionsMethod(info);
}

void V8Internals::getReferencedFilePathsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getReferencedFilePaths");

  InternalsV8Internal::getReferencedFilePathsMethod(info);
}

void V8Internals::startTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_startTrackingRepaints");

  InternalsV8Internal::startTrackingRepaintsMethod(info);
}

void V8Internals::stopTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_stopTrackingRepaints");

  InternalsV8Internal::stopTrackingRepaintsMethod(info);
}

void V8Internals::updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasks");

  InternalsV8Internal::updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasksMethod(info);
}

void V8Internals::forceFullRepaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceFullRepaint");

  InternalsV8Internal::forceFullRepaintMethod(info);
}

void V8Internals::draggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_draggableRegions");

  InternalsV8Internal::draggableRegionsMethod(info);
}

void V8Internals::nonDraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nonDraggableRegions");

  InternalsV8Internal::nonDraggableRegionsMethod(info);
}

void V8Internals::getCurrentCursorInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCurrentCursorInfo");

  InternalsV8Internal::getCurrentCursorInfoMethod(info);
}

void V8Internals::markerTextForListItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerTextForListItem");

  InternalsV8Internal::markerTextForListItemMethod(info);
}

void V8Internals::deserializeBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_deserializeBuffer");

  InternalsV8Internal::deserializeBufferMethod(info);
}

void V8Internals::serializeObjectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_serializeObject");

  InternalsV8Internal::serializeObjectMethod(info);
}

void V8Internals::deserializeBufferContainingWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_deserializeBufferContainingWasm");

  InternalsV8Internal::deserializeBufferContainingWasmMethod(info);
}

void V8Internals::serializeWithInlineWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_serializeWithInlineWasm");

  InternalsV8Internal::serializeWithInlineWasmMethod(info);
}

void V8Internals::forceReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceReload");

  InternalsV8Internal::forceReloadMethod(info);
}

void V8Internals::getImageSourceURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getImageSourceURL");

  InternalsV8Internal::getImageSourceURLMethod(info);
}

void V8Internals::forceImageReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceImageReload");

  InternalsV8Internal::forceImageReloadMethod(info);
}

void V8Internals::selectMenuListTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectMenuListText");

  InternalsV8Internal::selectMenuListTextMethod(info);
}

void V8Internals::isSelectPopupVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isSelectPopupVisible");

  InternalsV8Internal::isSelectPopupVisibleMethod(info);
}

void V8Internals::selectPopupItemStyleIsRtlMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectPopupItemStyleIsRtl");

  InternalsV8Internal::selectPopupItemStyleIsRtlMethod(info);
}

void V8Internals::selectPopupItemStyleFontHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectPopupItemStyleFontHeight");

  InternalsV8Internal::selectPopupItemStyleFontHeightMethod(info);
}

void V8Internals::resetTypeAheadSessionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_resetTypeAheadSession");

  InternalsV8Internal::resetTypeAheadSessionMethod(info);
}

void V8Internals::getSelectionInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getSelectionInFlatTree");

  InternalsV8Internal::getSelectionInFlatTreeMethod(info);
}

void V8Internals::selectionBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectionBounds");

  InternalsV8Internal::selectionBoundsMethod(info);
}

void V8Internals::loseSharedGraphicsContext3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_loseSharedGraphicsContext3D");

  InternalsV8Internal::loseSharedGraphicsContext3DMethod(info);
}

void V8Internals::forceCompositingUpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceCompositingUpdate");

  InternalsV8Internal::forceCompositingUpdateMethod(info);
}

void V8Internals::setZoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setZoomFactor");

  InternalsV8Internal::setZoomFactorMethod(info);
}

void V8Internals::setShouldRevealPasswordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setShouldRevealPassword");

  InternalsV8Internal::setShouldRevealPasswordMethod(info);
}

void V8Internals::createResolvedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createResolvedPromise");

  InternalsV8Internal::createResolvedPromiseMethod(info);
}

void V8Internals::createRejectedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createRejectedPromise");

  InternalsV8Internal::createRejectedPromiseMethod(info);
}

void V8Internals::addOneToPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addOneToPromise");

  InternalsV8Internal::addOneToPromiseMethod(info);
}

void V8Internals::promiseCheckMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheck");

  InternalsV8Internal::promiseCheckMethod(info);
}

void V8Internals::promiseCheckWithoutExceptionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckWithoutExceptionState");

  InternalsV8Internal::promiseCheckWithoutExceptionStateMethod(info);
}

void V8Internals::promiseCheckRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckRange");

  InternalsV8Internal::promiseCheckRangeMethod(info);
}

void V8Internals::promiseCheckOverloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckOverload");

  InternalsV8Internal::promiseCheckOverloadMethod(info);
}

void V8Internals::setValueForUserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setValueForUser");

  InternalsV8Internal::setValueForUserMethod(info);
}

void V8Internals::setFocusedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setFocused");

  InternalsV8Internal::setFocusedMethod(info);
}

void V8Internals::setInitialFocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setInitialFocus");

  InternalsV8Internal::setInitialFocusMethod(info);
}

void V8Internals::ignoreLayoutWithPendingStylesheetsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_ignoreLayoutWithPendingStylesheets");

  InternalsV8Internal::ignoreLayoutWithPendingStylesheetsMethod(info);
}

void V8Internals::setNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setNetworkConnectionInfoOverride");

  InternalsV8Internal::setNetworkConnectionInfoOverrideMethod(info);
}

void V8Internals::setSaveDataEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setSaveDataEnabled");

  InternalsV8Internal::setSaveDataEnabledMethod(info);
}

void V8Internals::clearNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_clearNetworkConnectionInfoOverride");

  InternalsV8Internal::clearNetworkConnectionInfoOverrideMethod(info);
}

void V8Internals::countHitRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_countHitRegions");

  InternalsV8Internal::countHitRegionsMethod(info);
}

void V8Internals::isInCanvasFontCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isInCanvasFontCache");

  InternalsV8Internal::isInCanvasFontCacheMethod(info);
}

void V8Internals::canvasFontCacheMaxFontsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_canvasFontCacheMaxFonts");

  InternalsV8Internal::canvasFontCacheMaxFontsMethod(info);
}

void V8Internals::dictionaryTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_dictionaryTest");

  InternalsV8Internal::dictionaryTestMethod(info);
}

void V8Internals::recordTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_recordTest");

  InternalsV8Internal::recordTestMethod(info);
}

void V8Internals::sequenceTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_sequenceTest");

  InternalsV8Internal::sequenceTestMethod(info);
}

void V8Internals::unionTypesTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unionTypesTest");

  InternalsV8Internal::unionTypesTestMethod(info);
}

void V8Internals::callbackFunctionTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_callbackFunctionTest");

  InternalsV8Internal::callbackFunctionTestMethod(info);
}

void V8Internals::setScrollChainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setScrollChain");

  InternalsV8Internal::setScrollChainMethod(info);
}

void V8Internals::forceBlinkGCWithoutV8GCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceBlinkGCWithoutV8GC");

  InternalsV8Internal::forceBlinkGCWithoutV8GCMethod(info);
}

void V8Internals::selectedHTMLForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectedHTMLForClipboard");

  InternalsV8Internal::selectedHTMLForClipboardMethod(info);
}

void V8Internals::selectedTextForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectedTextForClipboard");

  InternalsV8Internal::selectedTextForClipboardMethod(info);
}

void V8Internals::setVisualViewportOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setVisualViewportOffset");

  InternalsV8Internal::setVisualViewportOffsetMethod(info);
}

void V8Internals::visualViewportHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualViewportHeight");

  InternalsV8Internal::visualViewportHeightMethod(info);
}

void V8Internals::visualViewportWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualViewportWidth");

  InternalsV8Internal::visualViewportWidthMethod(info);
}

void V8Internals::visualViewportScrollXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualViewportScrollX");

  InternalsV8Internal::visualViewportScrollXMethod(info);
}

void V8Internals::visualViewportScrollYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualViewportScrollY");

  InternalsV8Internal::visualViewportScrollYMethod(info);
}

void V8Internals::magnifyScaleAroundAnchorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_magnifyScaleAroundAnchor");

  InternalsV8Internal::magnifyScaleAroundAnchorMethod(info);
}

void V8Internals::isUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isUseCounted");

  InternalsV8Internal::isUseCountedMethod(info);
}

void V8Internals::isCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isCSSPropertyUseCounted");

  InternalsV8Internal::isCSSPropertyUseCountedMethod(info);
}

void V8Internals::isAnimatedCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isAnimatedCSSPropertyUseCounted");

  InternalsV8Internal::isAnimatedCSSPropertyUseCountedMethod(info);
}

void V8Internals::getCSSPropertyLonghandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyLonghands");

  InternalsV8Internal::getCSSPropertyLonghandsMethod(info);
}

void V8Internals::getCSSPropertyShorthandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyShorthands");

  InternalsV8Internal::getCSSPropertyShorthandsMethod(info);
}

void V8Internals::getCSSPropertyAliasesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyAliases");

  InternalsV8Internal::getCSSPropertyAliasesMethod(info);
}

void V8Internals::observeUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_observeUseCounter");

  InternalsV8Internal::observeUseCounterMethod(info);
}

void V8Internals::unscopableMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unscopableMethod");

  InternalsV8Internal::unscopableMethodMethod(info);
}

void V8Internals::focusRingRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_focusRingRects");

  InternalsV8Internal::focusRingRectsMethod(info);
}

void V8Internals::outlineRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_outlineRects");

  InternalsV8Internal::outlineRectsMethod(info);
}

void V8Internals::setCapsLockStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setCapsLockState");

  InternalsV8Internal::setCapsLockStateMethod(info);
}

void V8Internals::setScrollbarVisibilityInScrollableAreaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setScrollbarVisibilityInScrollableArea");

  InternalsV8Internal::setScrollbarVisibilityInScrollableAreaMethod(info);
}

void V8Internals::monotonicTimeToZeroBasedDocumentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_monotonicTimeToZeroBasedDocumentTime");

  InternalsV8Internal::monotonicTimeToZeroBasedDocumentTimeMethod(info);
}

void V8Internals::getScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getScrollAnimationState");

  InternalsV8Internal::getScrollAnimationStateMethod(info);
}

void V8Internals::getProgrammaticScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getProgrammaticScrollAnimationState");

  InternalsV8Internal::getProgrammaticScrollAnimationStateMethod(info);
}

void V8Internals::visualRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualRect");

  InternalsV8Internal::visualRectMethod(info);
}

void V8Internals::originTrialsTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_originTrialsTest");

  InternalsV8Internal::originTrialsTestMethod(info);
}

void V8Internals::crashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_crash");

  InternalsV8Internal::crashMethod(info);
}

void V8Internals::evaluateInInspectorOverlayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_evaluateInInspectorOverlay");

  InternalsV8Internal::evaluateInInspectorOverlayMethod(info);
}

void V8Internals::setIsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setIsLowEndDevice");

  InternalsV8Internal::setIsLowEndDeviceMethod(info);
}

void V8Internals::isLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLowEndDevice");

  InternalsV8Internal::isLowEndDeviceMethod(info);
}

void V8Internals::supportedTextEncodingLabelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_supportedTextEncodingLabels");

  InternalsV8Internal::supportedTextEncodingLabelsMethod(info);
}

void V8Internals::simulateRasterUnderInvalidationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_simulateRasterUnderInvalidations");

  InternalsV8Internal::simulateRasterUnderInvalidationsMethod(info);
}

void V8Internals::BypassLongCompileThresholdOnceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_BypassLongCompileThresholdOnce");

  InternalsV8Internal::BypassLongCompileThresholdOnceMethod(info);
}

void V8Internals::getInternalResponseURLListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getInternalResponseURLList");

  InternalsV8Internal::getInternalResponseURLListMethod(info);
}

void V8Internals::indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_IndexedPropertyGetter");

  InternalsV8Internal::indexedPropertyGetter(index, info);
}

void V8Internals::indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  InternalsV8Internal::indexedPropertyDescriptor(index, info);
}

void V8Internals::indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exceptionState(info.GetIsolate(),
                                  ExceptionState::kIndexedSetterContext,
                                  "Internals");
    exceptionState.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8Internals::indexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exceptionState(info.GetIsolate(),
                                  ExceptionState::kIndexedSetterContext,
                                  "Internals");
    exceptionState.ThrowTypeError("Index property setter is not supported.");
  }
}

static const V8DOMConfiguration::AccessorConfiguration V8InternalsAccessors[] = {
    { "pagePopupWindow", V8Internals::pagePopupWindowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "settings", V8Internals::settingsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "runtimeFlags", V8Internals::runtimeFlagsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workerThreadCount", V8Internals::workerThreadCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cursorUpdatePending", V8Internals::cursorUpdatePendingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fakeMouseMovePending", V8Internals::fakeMouseMovePendingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionAnchorNode", V8Internals::visibleSelectionAnchorNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionAnchorOffset", V8Internals::visibleSelectionAnchorOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionFocusNode", V8Internals::visibleSelectionFocusNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionFocusOffset", V8Internals::visibleSelectionFocusOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textAffinity", V8Internals::textAffinityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "length", V8Internals::lengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "unscopableAttribute", V8Internals::unscopableAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8InternalsMethods[] = {
    {"observeGC", V8Internals::observeGCMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementLayoutTreeAsText", V8Internals::elementLayoutTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPreloaded", V8Internals::isPreloadedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPreloadedBy", V8Internals::isPreloadedByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLoading", V8Internals::isLoadingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLoadingFromMemoryCache", V8Internals::isLoadingFromMemoryCacheMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResourcePriority", V8Internals::getResourcePriorityMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResourceHeader", V8Internals::getResourceHeaderMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"computedStyleIncludingVisitedInfo", V8Internals::computedStyleIncludingVisitedInfoMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createUserAgentShadowRoot", V8Internals::createUserAgentShadowRootMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowRoot", V8Internals::shadowRootMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBrowserControlsState", V8Internals::setBrowserControlsStateMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBrowserControlsShownRatio", V8Internals::setBrowserControlsShownRatioMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"effectiveRootScroller", V8Internals::effectiveRootScrollerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowRootType", V8Internals::shadowRootTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasShadowInsertionPoint", V8Internals::hasShadowInsertionPointMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasContentElement", V8Internals::hasContentElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countElementShadow", V8Internals::countElementShadowMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowPseudoId", V8Internals::shadowPseudoIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isValidContentSelect", V8Internals::isValidContentSelectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"treeScopeRootNode", V8Internals::treeScopeRootNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"parentTreeScope", V8Internals::parentTreeScopeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compareTreeScopePosition", V8Internals::compareTreeScopePositionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"updateStyleAndReturnAffectedElementCount", V8Internals::updateStyleAndReturnAffectedElementCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"needsLayoutCount", V8Internals::needsLayoutCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hitTestCount", V8Internals::hitTestCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hitTestCacheHits", V8Internals::hitTestCacheHitsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementFromPoint", V8Internals::elementFromPointMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearHitTestCache", V8Internals::clearHitTestCacheMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"innerEditorElement", V8Internals::innerEditorElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pauseAnimations", V8Internals::pauseAnimationsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isCompositedAnimation", V8Internals::isCompositedAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableCompositedAnimation", V8Internals::disableCompositedAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableCSSAdditiveAnimations", V8Internals::disableCSSAdditiveAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"advanceImageAnimation", V8Internals::advanceImageAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nextSiblingInFlatTree", V8Internals::nextSiblingInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"firstChildInFlatTree", V8Internals::firstChildInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastChildInFlatTree", V8Internals::lastChildInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nextInFlatTree", V8Internals::nextInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"previousInFlatTree", V8Internals::previousInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visiblePlaceholder", V8Internals::visiblePlaceholderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isValidationMessageVisible", V8Internals::isValidationMessageVisibleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectColorInColorChooser", V8Internals::selectColorInColorChooserMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endColorChooser", V8Internals::endColorChooserMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasAutofocusRequest", V8Internals::hasAutofocusRequestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"formControlStateOfHistoryItem", V8Internals::formControlStateOfHistoryItemMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFormControlStateOfHistoryItem", V8Internals::setFormControlStateOfHistoryItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"absoluteCaretBounds", V8Internals::absoluteCaretBoundsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"boundingBox", V8Internals::boundingBoxMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMarker", V8Internals::setMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerCountForNode", V8Internals::markerCountForNodeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"activeMarkerCountForNode", V8Internals::activeMarkerCountForNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerRangeForNode", V8Internals::markerRangeForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerDescriptionForNode", V8Internals::markerDescriptionForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerBackgroundColorForNode", V8Internals::markerBackgroundColorForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerUnderlineColorForNode", V8Internals::markerUnderlineColorForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTextMatchMarker", V8Internals::addTextMatchMarkerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addCompositionMarker", V8Internals::addCompositionMarkerMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addActiveSuggestionMarker", V8Internals::addActiveSuggestionMarkerMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addSuggestionMarker", V8Internals::addSuggestionMarkerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextMatchMarkersActive", V8Internals::setTextMatchMarkersActiveMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMarkedTextMatchesAreHighlighted", V8Internals::setMarkedTextMatchesAreHighlightedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFrameViewPosition", V8Internals::setFrameViewPositionMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewportAsText", V8Internals::viewportAsTextMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementShouldAutoComplete", V8Internals::elementShouldAutoCompleteMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"suggestedValue", V8Internals::suggestedValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSuggestedValue", V8Internals::setSuggestedValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutofilledValue", V8Internals::setAutofilledValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEditingValue", V8Internals::setEditingValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutofilled", V8Internals::setAutofilledMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rangeFromLocationAndLength", V8Internals::rangeFromLocationAndLengthMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"locationFromRange", V8Internals::locationFromRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lengthFromRange", V8Internals::lengthFromRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rangeAsText", V8Internals::rangeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchPositionAdjustedToBestClickableNode", V8Internals::touchPositionAdjustedToBestClickableNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchNodeAdjustedToBestClickableNode", V8Internals::touchNodeAdjustedToBestClickableNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchPositionAdjustedToBestContextMenuNode", V8Internals::touchPositionAdjustedToBestContextMenuNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchNodeAdjustedToBestContextMenuNode", V8Internals::touchNodeAdjustedToBestContextMenuNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastSpellCheckRequestSequence", V8Internals::lastSpellCheckRequestSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastSpellCheckProcessedSequence", V8Internals::lastSpellCheckProcessedSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelCurrentSpellCheckRequest", V8Internals::cancelCurrentSpellCheckRequestMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"idleTimeSpellCheckerState", V8Internals::idleTimeSpellCheckerStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"runIdleTimeSpellChecker", V8Internals::runIdleTimeSpellCheckerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"userPreferredLanguages", V8Internals::userPreferredLanguagesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUserPreferredLanguages", V8Internals::setUserPreferredLanguagesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaKeysCount", V8Internals::mediaKeysCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaKeySessionCount", V8Internals::mediaKeySessionCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pausableObjectCount", V8Internals::pausableObjectCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"wheelEventHandlerCount", V8Internals::wheelEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollEventHandlerCount", V8Internals::scrollEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchStartOrMoveEventHandlerCount", V8Internals::touchStartOrMoveEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchEndOrCancelEventHandlerCount", V8Internals::touchEndOrCancelEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pointerEventHandlerCount", V8Internals::pointerEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchEventTargetLayerRects", V8Internals::touchEventTargetLayerRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"executeCommand", V8Internals::executeCommandMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"htmlNamespace", V8Internals::htmlNamespaceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"htmlTags", V8Internals::htmlTagsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"svgNamespace", V8Internals::svgNamespaceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"svgTags", V8Internals::svgTagsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodesFromRect", V8Internals::nodesFromRectMethodCallback, 9, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasSpellingMarker", V8Internals::hasSpellingMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasGrammarMarker", V8Internals::hasGrammarMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceMisspelled", V8Internals::replaceMisspelledMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canHyphenate", V8Internals::canHyphenateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMockHyphenation", V8Internals::setMockHyphenationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isOverwriteModeEnabled", V8Internals::isOverwriteModeEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toggleOverwriteModeEnabled", V8Internals::toggleOverwriteModeEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfScrollableAreas", V8Internals::numberOfScrollableAreasMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPageBoxVisible", V8Internals::isPageBoxVisibleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"layerTreeAsText", V8Internals::layerTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementLayerTreeAsText", V8Internals::elementLayerTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollsWithRespectTo", V8Internals::scrollsWithRespectToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollingStateTreeAsText", V8Internals::scrollingStateTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mainThreadScrollingReasons", V8Internals::mainThreadScrollingReasonsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nonFastScrollableRects", V8Internals::nonFastScrollableRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markGestureScrollRegionDirty", V8Internals::markGestureScrollRegionDirtyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evictAllResources", V8Internals::evictAllResourcesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfLiveNodes", V8Internals::numberOfLiveNodesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfLiveDocuments", V8Internals::numberOfLiveDocumentsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"counterValue", V8Internals::counterValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageNumber", V8Internals::pageNumberMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shortcutIconURLs", V8Internals::shortcutIconURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"allIconURLs", V8Internals::allIconURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfPages", V8Internals::numberOfPagesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageProperty", V8Internals::pagePropertyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageSizeAndMarginsInPixels", V8Internals::pageSizeAndMarginsInPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageScaleFactor", V8Internals::pageScaleFactorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPageScaleFactor", V8Internals::setPageScaleFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPageScaleFactorLimits", V8Internals::setPageScaleFactorLimitsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIsCursorVisible", V8Internals::setIsCursorVisibleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"effectivePreload", V8Internals::effectivePreloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaPlayerRemoteRouteAvailabilityChanged", V8Internals::mediaPlayerRemoteRouteAvailabilityChangedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaPlayerPlayingRemotelyChanged", V8Internals::mediaPlayerPlayingRemotelyChangedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPersistent", V8Internals::setPersistentMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceStaleStateForMediaElement", V8Internals::forceStaleStateForMediaElementMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isMediaElementSuspended", V8Internals::isMediaElementSuspendedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaControlsTestMode", V8Internals::setMediaControlsTestModeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"registerURLSchemeAsBypassingContentSecurityPolicy", V8Internals::registerURLSchemeAsBypassingContentSecurityPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeURLSchemeRegisteredAsBypassingContentSecurityPolicy", V8Internals::removeURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"typeConversions", V8Internals::typeConversionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getReferencedFilePaths", V8Internals::getReferencedFilePathsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"startTrackingRepaints", V8Internals::startTrackingRepaintsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stopTrackingRepaints", V8Internals::stopTrackingRepaintsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasks", V8Internals::updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceFullRepaint", V8Internals::forceFullRepaintMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"draggableRegions", V8Internals::draggableRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nonDraggableRegions", V8Internals::nonDraggableRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCurrentCursorInfo", V8Internals::getCurrentCursorInfoMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerTextForListItem", V8Internals::markerTextForListItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deserializeBuffer", V8Internals::deserializeBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"serializeObject", V8Internals::serializeObjectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deserializeBufferContainingWasm", V8Internals::deserializeBufferContainingWasmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"serializeWithInlineWasm", V8Internals::serializeWithInlineWasmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceReload", V8Internals::forceReloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getImageSourceURL", V8Internals::getImageSourceURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceImageReload", V8Internals::forceImageReloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectMenuListText", V8Internals::selectMenuListTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSelectPopupVisible", V8Internals::isSelectPopupVisibleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectPopupItemStyleIsRtl", V8Internals::selectPopupItemStyleIsRtlMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectPopupItemStyleFontHeight", V8Internals::selectPopupItemStyleFontHeightMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTypeAheadSession", V8Internals::resetTypeAheadSessionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelectionInFlatTree", V8Internals::getSelectionInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectionBounds", V8Internals::selectionBoundsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"loseSharedGraphicsContext3D", V8Internals::loseSharedGraphicsContext3DMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceCompositingUpdate", V8Internals::forceCompositingUpdateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setZoomFactor", V8Internals::setZoomFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldRevealPassword", V8Internals::setShouldRevealPasswordMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createResolvedPromise", V8Internals::createResolvedPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRejectedPromise", V8Internals::createRejectedPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addOneToPromise", V8Internals::addOneToPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheck", V8Internals::promiseCheckMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckWithoutExceptionState", V8Internals::promiseCheckWithoutExceptionStateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckRange", V8Internals::promiseCheckRangeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckOverload", V8Internals::promiseCheckOverloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setValueForUser", V8Internals::setValueForUserMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFocused", V8Internals::setFocusedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInitialFocus", V8Internals::setInitialFocusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ignoreLayoutWithPendingStylesheets", V8Internals::ignoreLayoutWithPendingStylesheetsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNetworkConnectionInfoOverride", V8Internals::setNetworkConnectionInfoOverrideMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSaveDataEnabled", V8Internals::setSaveDataEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearNetworkConnectionInfoOverride", V8Internals::clearNetworkConnectionInfoOverrideMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countHitRegions", V8Internals::countHitRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isInCanvasFontCache", V8Internals::isInCanvasFontCacheMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canvasFontCacheMaxFonts", V8Internals::canvasFontCacheMaxFontsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dictionaryTest", V8Internals::dictionaryTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"recordTest", V8Internals::recordTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sequenceTest", V8Internals::sequenceTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unionTypesTest", V8Internals::unionTypesTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"callbackFunctionTest", V8Internals::callbackFunctionTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollChain", V8Internals::setScrollChainMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceBlinkGCWithoutV8GC", V8Internals::forceBlinkGCWithoutV8GCMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectedHTMLForClipboard", V8Internals::selectedHTMLForClipboardMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectedTextForClipboard", V8Internals::selectedTextForClipboardMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setVisualViewportOffset", V8Internals::setVisualViewportOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualViewportHeight", V8Internals::visualViewportHeightMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualViewportWidth", V8Internals::visualViewportWidthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualViewportScrollX", V8Internals::visualViewportScrollXMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualViewportScrollY", V8Internals::visualViewportScrollYMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"magnifyScaleAroundAnchor", V8Internals::magnifyScaleAroundAnchorMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isUseCounted", V8Internals::isUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isCSSPropertyUseCounted", V8Internals::isCSSPropertyUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isAnimatedCSSPropertyUseCounted", V8Internals::isAnimatedCSSPropertyUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyLonghands", V8Internals::getCSSPropertyLonghandsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyShorthands", V8Internals::getCSSPropertyShorthandsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyAliases", V8Internals::getCSSPropertyAliasesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"observeUseCounter", V8Internals::observeUseCounterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unscopableMethod", V8Internals::unscopableMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"focusRingRects", V8Internals::focusRingRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"outlineRects", V8Internals::outlineRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCapsLockState", V8Internals::setCapsLockStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollbarVisibilityInScrollableArea", V8Internals::setScrollbarVisibilityInScrollableAreaMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"monotonicTimeToZeroBasedDocumentTime", V8Internals::monotonicTimeToZeroBasedDocumentTimeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getScrollAnimationState", V8Internals::getScrollAnimationStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgrammaticScrollAnimationState", V8Internals::getProgrammaticScrollAnimationStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualRect", V8Internals::visualRectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"originTrialsTest", V8Internals::originTrialsTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"crash", V8Internals::crashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evaluateInInspectorOverlay", V8Internals::evaluateInInspectorOverlayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIsLowEndDevice", V8Internals::setIsLowEndDeviceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLowEndDevice", V8Internals::isLowEndDeviceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"supportedTextEncodingLabels", V8Internals::supportedTextEncodingLabelsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"simulateRasterUnderInvalidations", V8Internals::simulateRasterUnderInvalidationsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"BypassLongCompileThresholdOnce", V8Internals::BypassLongCompileThresholdOnceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInternalResponseURLList", V8Internals::getInternalResponseURLListMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8Internals::installV8InternalsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Internals::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Internals::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8InternalsConstants[] = {
      {"LAYER_TREE_INCLUDES_DEBUG_INFO", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"LAYER_TREE_INCLUDES_PAINT_INVALIDATIONS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"LAYER_TREE_INCLUDES_PAINTING_PHASES", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"LAYER_TREE_INCLUDES_ROOT_LAYER", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"LAYER_TREE_INCLUDES_CLIP_AND_SCROLL_PARENTS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(16)},
      {"LAYER_TREE_INCLUDES_COMPOSITING_REASONS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(32)},
      {"LAYER_TREE_INCLUDES_PAINT_RECORDS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(64)},
      {"OUTPUT_AS_LAYER_TREE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x4000)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8InternalsConstants, arraysize(V8InternalsConstants));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalsAccessors, arraysize(V8InternalsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalsMethods, arraysize(V8InternalsMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Internals::indexedPropertyGetterCallback,
      V8Internals::indexedPropertySetterCallback,
      V8Internals::indexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<Internals>,
      V8Internals::indexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
  // For value iterators, the properties below must originally be set to the corresponding ones in %ArrayPrototype%.
  // See https://heycam.github.io/webidl/#es-iterators.
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "entries"), v8::kArrayProto_entries);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "forEach"), v8::kArrayProto_forEach);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "keys"), v8::kArrayProto_keys);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "values"), v8::kArrayProto_values);

  // Custom signature
}

void V8Internals::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Internals::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8Internals::installV8InternalsTemplateFunction);
}

bool V8Internals::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Internals::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Internals* V8Internals::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Internals* NativeValueTraits<Internals>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Internals* nativeValue = V8Internals::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Internals"));
  }
  return nativeValue;
}

void V8Internals::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  if (!prototypeObject.IsEmpty()) {
    v8::Local<v8::Name> unscopablesSymbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopables;
    bool has_unscopables;
    if (prototypeObject->HasOwnProperty(context, unscopablesSymbol).To(&has_unscopables) && has_unscopables) {
      unscopables = prototypeObject->Get(context, unscopablesSymbol).ToLocalChecked().As<v8::Object>();
    } else {
      unscopables = v8::Object::New(isolate);
    }
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "unscopableAttribute"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "unscopableMethod"), v8::True(isolate))
        .FromJust();
    prototypeObject->CreateDataProperty(context, unscopablesSymbol, unscopables).FromJust();
  }
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8Internals::install_runtime_enabled_features_on_template_function_ =
    &V8Internals::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8Internals::installV8InternalsTemplateFunction =
    &V8Internals::installV8InternalsTemplate;

void V8Internals::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8Internals::installV8InternalsTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8Internals::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8Internals::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test_dictionary.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/core/testing/origin_trials_test_partial.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8OriginTrialsTest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8OriginTrialsTest::domTemplate,
    V8OriginTrialsTest::InstallConditionalFeatures,
    "OriginTrialsTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OriginTrialsTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OriginTrialsTest::wrapper_type_info_ = V8OriginTrialsTest::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OriginTrialsTest>::value,
    "OriginTrialsTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OriginTrialsTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OriginTrialsTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace OriginTrialsTestV8Internal {

static void normalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->normalAttribute());
}

static void staticAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticAttribute());
}

static void throwingAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "OriginTrialsTest", "throwingAttribute");

  bool cppValue(impl->throwingAttribute(scriptState, exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueBool(info, cppValue);
}

static void unconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unconditionalAttribute());
}

static void staticUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticUnconditionalAttribute());
}

static void secureUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->secureUnconditionalAttribute());
}

static void secureStaticUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticUnconditionalAttribute());
}

static void secureAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->secureAttribute());
}

static void secureStaticAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticAttribute());
}

static void impliedAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->impliedAttribute());
}

static void normalAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, OriginTrialsTestPartial::normalAttributePartial(*impl));
}

static void staticAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::staticAttributePartial());
}

static void secureAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureAttributePartial(*impl));
}

static void secureStaticAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureStaticAttributePartial());
}

static void normalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->normalMethod());
}

static void staticMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticMethod());
}

static void getDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  OriginTrialsTestDictionary result;
  impl->getDictionaryMethod(result);
  V8SetReturnValue(info, result);
}

static void checkDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OriginTrialsTest", "checkDictionaryMethod");

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  OriginTrialsTestDictionary dict;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('dict') is not an object.");
    return;
  }
  V8OriginTrialsTestDictionary::ToImpl(info.GetIsolate(), info[0], dict, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->checkDictionaryMethod(dict);
}

static void unconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->unconditionalMethod());
}

static void unconditionalDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OriginTrialsTest", "unconditionalDictionaryMethod");

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  OriginTrialsTestDictionary dict;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('dict') is not an object.");
    return;
  }
  V8OriginTrialsTestDictionary::ToImpl(info.GetIsolate(), info[0], dict, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->unconditionalDictionaryMethod(dict);
}

static void staticUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticUnconditionalMethod());
}

static void secureUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->secureUnconditionalMethod());
}

static void secureStaticUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticUnconditionalMethod());
}

static void secureMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->secureMethod());
}

static void secureStaticMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticMethod());
}

static void normalMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, OriginTrialsTestPartial::normalMethodPartial(*impl));
}

static void staticMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::staticMethodPartial());
}

static void secureMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureMethodPartial(*impl));
}

static void secureStaticMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureStaticMethodPartial());
}

} // namespace OriginTrialsTestV8Internal

void V8OriginTrialsTest::normalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalAttribute_Getter");

  OriginTrialsTestV8Internal::normalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::staticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticAttribute_Getter");

  OriginTrialsTestV8Internal::staticAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::throwingAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_throwingAttribute_Getter");

  OriginTrialsTestV8Internal::throwingAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::unconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalAttribute_Getter");

  OriginTrialsTestV8Internal::unconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::staticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticUnconditionalAttribute_Getter");

  OriginTrialsTestV8Internal::staticUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::secureUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureUnconditionalAttribute_Getter");

  OriginTrialsTestV8Internal::secureUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::secureStaticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticUnconditionalAttribute_Getter");

  OriginTrialsTestV8Internal::secureStaticUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::secureAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureAttribute_Getter");

  OriginTrialsTestV8Internal::secureAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::secureStaticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticAttribute_Getter");

  OriginTrialsTestV8Internal::secureStaticAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::impliedAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_impliedAttribute_Getter");

  OriginTrialsTestV8Internal::impliedAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::normalAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalAttributePartial_Getter");

  OriginTrialsTestV8Internal::normalAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::staticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticAttributePartial_Getter");

  OriginTrialsTestV8Internal::staticAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::secureAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureAttributePartial_Getter");

  OriginTrialsTestV8Internal::secureAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::secureStaticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticAttributePartial_Getter");

  OriginTrialsTestV8Internal::secureStaticAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::normalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalMethod");

  OriginTrialsTestV8Internal::normalMethodMethod(info);
}

void V8OriginTrialsTest::staticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticMethod");

  OriginTrialsTestV8Internal::staticMethodMethod(info);
}

void V8OriginTrialsTest::getDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_getDictionaryMethod");

  OriginTrialsTestV8Internal::getDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::checkDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_checkDictionaryMethod");

  OriginTrialsTestV8Internal::checkDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::unconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalMethod");

  OriginTrialsTestV8Internal::unconditionalMethodMethod(info);
}

void V8OriginTrialsTest::unconditionalDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalDictionaryMethod");

  OriginTrialsTestV8Internal::unconditionalDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::staticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticUnconditionalMethod");

  OriginTrialsTestV8Internal::staticUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::secureUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureUnconditionalMethod");

  OriginTrialsTestV8Internal::secureUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::secureStaticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticUnconditionalMethod");

  OriginTrialsTestV8Internal::secureStaticUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::secureMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureMethod");

  OriginTrialsTestV8Internal::secureMethodMethod(info);
}

void V8OriginTrialsTest::secureStaticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticMethod");

  OriginTrialsTestV8Internal::secureStaticMethodMethod(info);
}

void V8OriginTrialsTest::normalMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalMethodPartial");

  OriginTrialsTestV8Internal::normalMethodPartialMethod(info);
}

void V8OriginTrialsTest::staticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticMethodPartial");

  OriginTrialsTestV8Internal::staticMethodPartialMethod(info);
}

void V8OriginTrialsTest::secureMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureMethodPartial");

  OriginTrialsTestV8Internal::secureMethodPartialMethod(info);
}

void V8OriginTrialsTest::secureStaticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticMethodPartial");

  OriginTrialsTestV8Internal::secureStaticMethodPartialMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8OriginTrialsTestAccessors[] = {
    { "throwingAttribute", V8OriginTrialsTest::throwingAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "unconditionalAttribute", V8OriginTrialsTest::unconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "staticUnconditionalAttribute", V8OriginTrialsTest::staticUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "secureStaticUnconditionalAttribute", V8OriginTrialsTest::secureStaticUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8OriginTrialsTestMethods[] = {
    {"getDictionaryMethod", V8OriginTrialsTest::getDictionaryMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkDictionaryMethod", V8OriginTrialsTest::checkDictionaryMethodMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unconditionalMethod", V8OriginTrialsTest::unconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unconditionalDictionaryMethod", V8OriginTrialsTest::unconditionalDictionaryMethodMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"staticUnconditionalMethod", V8OriginTrialsTest::staticUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8OriginTrialsTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8OriginTrialsTest::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8OriginTrialsTest::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8OriginTrialsTestConstants[] = {
      {"UNCONDITIONAL_CONSTANT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(99)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8OriginTrialsTestConstants, arraysize(V8OriginTrialsTestConstants));
  static_assert(1 == OriginTrialsTest::kConstant, "the value of OriginTrialsTest_kConstant does not match with implementation");
  static_assert(99 == OriginTrialsTest::kUnconditionalConstant, "the value of OriginTrialsTest_kUnconditionalConstant does not match with implementation");
  static_assert(2 == OriginTrialsTestPartial::kConstantPartial, "the value of OriginTrialsTest_kConstantPartial does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8OriginTrialsTestAccessors, arraysize(V8OriginTrialsTestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8OriginTrialsTestMethods, arraysize(V8OriginTrialsTestMethods));

  // Custom signature

  V8OriginTrialsTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8OriginTrialsTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8OriginTrialsTest::installOriginTrialsSampleAPIImplied(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8OriginTrialsTest::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessorimpliedAttributeConfiguration[] = {
    { "impliedAttribute", V8OriginTrialsTest::impliedAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorimpliedAttributeConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8OriginTrialsTest::installOriginTrialsSampleAPIImplied(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8OriginTrialsTest::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8OriginTrialsTest::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installOriginTrialsSampleAPIImplied(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8OriginTrialsTest::installOriginTrialsSampleAPIImplied(ScriptState* scriptState) {
  installOriginTrialsSampleAPIImplied(scriptState, v8::Local<v8::Object>());
}

void V8OriginTrialsTest::installOriginTrialsSampleAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8OriginTrialsTest::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  static const V8DOMConfiguration::AccessorConfiguration accessornormalAttributeConfiguration[] = {
    { "normalAttribute", V8OriginTrialsTest::normalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessornormalAttributeConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessornormalAttributePartialConfiguration[] = {
    { "normalAttributePartial", V8OriginTrialsTest::normalAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessornormalAttributePartialConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorsecureAttributeConfiguration[] = {
      { "secureAttribute", V8OriginTrialsTest::secureAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorsecureAttributeConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorsecureAttributePartialConfiguration[] = {
      { "secureAttributePartial", V8OriginTrialsTest::secureAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorsecureAttributePartialConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorsecureStaticAttributeConfiguration[] = {
      { "secureStaticAttribute", V8OriginTrialsTest::secureStaticAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorsecureStaticAttributeConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorsecureStaticAttributePartialConfiguration[] = {
      { "secureStaticAttributePartial", V8OriginTrialsTest::secureStaticAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorsecureStaticAttributePartialConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
  static const V8DOMConfiguration::AccessorConfiguration accessorstaticAttributeConfiguration[] = {
    { "staticAttribute", V8OriginTrialsTest::staticAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorstaticAttributeConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessorstaticAttributePartialConfiguration[] = {
    { "staticAttributePartial", V8OriginTrialsTest::staticAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorstaticAttributePartialConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  const V8DOMConfiguration::ConstantConfiguration constantConstantConfiguration = {"CONSTANT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)};
  V8DOMConfiguration::InstallConstant(isolate, interface, prototype, constantConstantConfiguration);
  const V8DOMConfiguration::ConstantConfiguration constantConstantPartialConfiguration = {"CONSTANT_PARTIAL", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)};
  V8DOMConfiguration::InstallConstant(isolate, interface, prototype, constantConstantPartialConfiguration);
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSecurestaticmethodConfiguration[] = {
      {"secureStaticMethod", V8OriginTrialsTest::secureStaticMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSecurestaticmethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
  static const V8DOMConfiguration::MethodConfiguration methodStaticmethodConfiguration[] = {
    {"staticMethod", V8OriginTrialsTest::staticMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodStaticmethodConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  static const V8DOMConfiguration::MethodConfiguration methodNormalmethodpartialConfiguration[] = {
    {"normalMethodPartial", V8OriginTrialsTest::normalMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodNormalmethodpartialConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSecuremethodpartialConfiguration[] = {
      {"secureMethodPartial", V8OriginTrialsTest::secureMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSecuremethodpartialConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSecurestaticmethodpartialConfiguration[] = {
      {"secureStaticMethodPartial", V8OriginTrialsTest::secureStaticMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSecurestaticmethodpartialConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
  static const V8DOMConfiguration::MethodConfiguration methodStaticmethodpartialConfiguration[] = {
    {"staticMethodPartial", V8OriginTrialsTest::staticMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodStaticmethodpartialConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  static const V8DOMConfiguration::MethodConfiguration methodNormalmethodConfiguration[] = {
    {"normalMethod", V8OriginTrialsTest::normalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodNormalmethodConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSecuremethodConfiguration[] = {
      {"secureMethod", V8OriginTrialsTest::secureMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSecuremethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8OriginTrialsTest::installOriginTrialsSampleAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8OriginTrialsTest::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8OriginTrialsTest::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installOriginTrialsSampleAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8OriginTrialsTest::installOriginTrialsSampleAPI(ScriptState* scriptState) {
  installOriginTrialsSampleAPI(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8OriginTrialsTest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8OriginTrialsTestTemplate);
}

bool V8OriginTrialsTest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8OriginTrialsTest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

OriginTrialsTest* V8OriginTrialsTest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OriginTrialsTest* NativeValueTraits<OriginTrialsTest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OriginTrialsTest* nativeValue = V8OriginTrialsTest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OriginTrialsTest"));
  }
  return nativeValue;
}

void V8OriginTrialsTest::InstallConditionalFeatures(
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

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
    if (isSecureContext) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "secureUnconditionalAttribute", V8OriginTrialsTest::secureUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
    }
    if (isSecureContext) {
      const V8DOMConfiguration::MethodConfiguration secureUnconditionalMethodMethodConfiguration[] = {
        {"secureUnconditionalMethod", V8OriginTrialsTest::secureUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& methodConfig : secureUnconditionalMethodMethodConfiguration)
        V8DOMConfiguration::InstallMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, methodConfig);
    }
    if (isSecureContext) {
      const V8DOMConfiguration::MethodConfiguration secureStaticUnconditionalMethodMethodConfiguration[] = {
        {"secureStaticUnconditionalMethod", V8OriginTrialsTest::secureStaticUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& methodConfig : secureStaticUnconditionalMethodMethodConfiguration)
        V8DOMConfiguration::InstallMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, methodConfig);
    }
  }
}

}  // namespace blink

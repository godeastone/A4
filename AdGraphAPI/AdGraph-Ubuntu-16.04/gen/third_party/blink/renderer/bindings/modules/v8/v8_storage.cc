// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Storage::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Storage::domTemplate,
    nullptr,
    "Storage",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Storage.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Storage::wrapper_type_info_ = V8Storage::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Storage>::value,
    "Storage inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Storage::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Storage is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace StorageV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Storage* impl = V8Storage::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Storage", "length");

  uint32_t cppValue(impl->length(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueUnsigned(info, cppValue);
}

static void keyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "key");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  String result = impl->key(index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "getItem");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  String result = impl->getItem(key, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void setItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "setItem");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> key;
  V8StringResource<> value;
  key = info[0];
  if (!key.Prepare())
    return;

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setItem(key, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "removeItem");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  impl->removeItem(key, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "clear");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  impl->clear(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void namedPropertyGetter(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  const CString& nameInUtf8 = name.Utf8();
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Storage", nameInUtf8.data());

  Storage* impl = V8Storage::ToImpl(info.Holder());
  String result = impl->getItem(name, exceptionState);
  if (result.IsNull())
    return;
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void namedPropertySetter(const AtomicString& name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  const CString& nameInUtf8 = name.Utf8();
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kSetterContext, "Storage", nameInUtf8.data());

  Storage* impl = V8Storage::ToImpl(info.Holder());
  V8StringResource<> propertyValue = v8Value;
  if (!propertyValue.Prepare())
    return;

  bool result = impl->setItem(name, propertyValue, exceptionState);
  if (exceptionState.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8Value);
}

static void namedPropertyDeleter(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  const CString& nameInUtf8 = name.Utf8();
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kDeletionContext, "Storage", nameInUtf8.data());

  Storage* impl = V8Storage::ToImpl(info.Holder());

  DeleteResult result = impl->removeItem(name, exceptionState);
  if (exceptionState.HadException())
    return;
  if (result == kDeleteUnknownProperty)
    return;
  V8SetReturnValue(info, result == kDeleteSuccess);
}

template <typename T>
static void namedPropertyQuery(const AtomicString& name, const v8::PropertyCallbackInfo<T>& info) {
  const CString& nameInUtf8 = name.Utf8();
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Storage", nameInUtf8.data());

  Storage* impl = V8Storage::ToImpl(info.Holder());

  bool result = impl->NamedPropertyQuery(name, exceptionState);
  if (!result)
    return;
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // 2.7. If |O| implements an interface with a named property setter, then set
  //      desc.[[Writable]] to true, otherwise set it to false.
  // 2.8. If |O| implements an interface with the
  //      [LegacyUnenumerableNamedProperties] extended attribute, then set
  //      desc.[[Enumerable]] to false, otherwise set it to true.
  V8SetReturnValueInt(info, v8::None);
}

static void namedPropertyDescriptor(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // This function is called when an IDL interface supports named properties
  // but not indexed properties. When a numeric property is queried, V8 calls
  // indexedPropertyDescriptorCallback(), which calls this function.

  // Since we initialize our indexed and named property handlers differently
  // (the former use descriptors and definers, the latter uses a query
  // callback), we need to inefficiently call the query callback and convert
  // the v8::PropertyAttribute integer it returns into a v8::PropertyDescriptor
  // expected by a descriptor callback.
  // TODO(rakuco): remove this hack once we switch named property handlers to
  // using descriptor and definer callbacks (bug 764633).
  const AtomicString& indexAsName = AtomicString::Number(index);
  StorageV8Internal::namedPropertyQuery(indexAsName, info);
  v8::Local<v8::Value> getterValue = info.GetReturnValue().Get();
  if (!getterValue->IsUndefined()) {
    DCHECK(getterValue->IsInt32());
    const int32_t props =
        getterValue->ToInt32(info.GetIsolate()->GetCurrentContext())
            .ToLocalChecked()
            ->Value();
    v8::PropertyDescriptor desc(V8String(info.GetIsolate(), indexAsName),
                                !(props & v8::ReadOnly));
    desc.set_enumerable(!(props & v8::DontEnum));
    desc.set_configurable(!(props & v8::DontDelete));
    V8SetReturnValue(info, desc);
  }
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kEnumerationContext, "Storage");

  Storage* impl = V8Storage::ToImpl(info.Holder());

  Vector<String> names;
  impl->NamedPropertyEnumerator(names, exceptionState);
  if (exceptionState.HadException())
    return;
  V8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
}

} // namespace StorageV8Internal

void V8Storage::lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_length_Getter");

  StorageV8Internal::lengthAttributeGetter(info);
}

void V8Storage::keyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_key");

  StorageV8Internal::keyMethod(info);
}

void V8Storage::getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_getItem");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("Storage.getItem", info);
  }
  StorageV8Internal::getItemMethod(info);
}

void V8Storage::setItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_setItem");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("Storage.setItem", info);
  }
  StorageV8Internal::setItemMethod(info);
}

void V8Storage::removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_removeItem");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("Storage.removeItem", info);
  }
  StorageV8Internal::removeItemMethod(info);
}

void V8Storage::clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_clear");

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("Storage.clear", info);
  }
  StorageV8Internal::clearMethod(info);
}

void V8Storage::namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  StorageV8Internal::namedPropertyGetter(propertyName, info);
}

void V8Storage::namedPropertySetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  StorageV8Internal::namedPropertySetter(propertyName, v8Value, info);
}

void V8Storage::namedPropertyDeleterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  StorageV8Internal::namedPropertyDeleter(propertyName, info);
}

void V8Storage::namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_NamedPropertyQuery");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  StorageV8Internal::namedPropertyQuery(propertyName, info);
}

void V8Storage::namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info) {
  StorageV8Internal::namedPropertyEnumerator(info);
}

void V8Storage::indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Storage_IndexedPropertyGetter");

  const AtomicString& propertyName = AtomicString::Number(index);

  StorageV8Internal::namedPropertyGetter(propertyName, info);
}

void V8Storage::indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  StorageV8Internal::namedPropertyDescriptor(index, info);
}

void V8Storage::indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  const AtomicString& propertyName = AtomicString::Number(index);

  StorageV8Internal::namedPropertySetter(propertyName, v8Value, info);
}

void V8Storage::indexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  const AtomicString& propertyName = AtomicString::Number(index);

  StorageV8Internal::namedPropertyDeleter(propertyName, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8StorageAccessors[] = {
    { "length", V8Storage::lengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8StorageMethods[] = {
    {"key", V8Storage::keyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getItem", V8Storage::getItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setItem", V8Storage::setItemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeItem", V8Storage::removeItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8Storage::clearMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8StorageTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Storage::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Storage::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8StorageAccessors, arraysize(V8StorageAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8StorageMethods, arraysize(V8StorageMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Storage::indexedPropertyGetterCallback,
      V8Storage::indexedPropertySetterCallback,
      V8Storage::indexedPropertyDescriptorCallback,
      V8Storage::indexedPropertyDeleterCallback,
      nullptr,
      nullptr,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8Storage::namedPropertyGetterCallback, V8Storage::namedPropertySetterCallback, V8Storage::namedPropertyQueryCallback, V8Storage::namedPropertyDeleterCallback, V8Storage::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
  instanceTemplate->SetHandler(namedPropertyHandlerConfig);

  // Custom signature

  V8Storage::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Storage::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Storage::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8StorageTemplate);
}

bool V8Storage::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Storage::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Storage* V8Storage::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Storage* NativeValueTraits<Storage>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Storage* nativeValue = V8Storage::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Storage"));
  }
  return nativeValue;
}

}  // namespace blink
